// Fill out your copyright notice in the Description page of Project Settings.


#include "PaintBullet.h"
#include "Engine/DecalActor.h"
#include "Components/DecalComponent.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
APaintBullet::APaintBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create Mesh
	PaintBulletMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PaintBulletMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	UStaticMesh* Mesh = MeshAsset.Object;
	PaintBulletMesh->SetStaticMesh(Mesh);

	// Create projectile Movement
	PaintBulletMovement = CreateDefaultSubobject<UProjectileMovementComponent>("BulletMovement");
	PaintBulletMovement->InitialSpeed = 2000;
	PaintBulletMovement->MaxSpeed = 2000;

	// Create physics for Collision
	PaintBulletMesh->SetSimulatePhysics(true);
	PaintBulletMesh->SetNotifyRigidBodyCollision(true);
	PaintBulletMesh->BodyInstance.SetCollisionProfileName("BlockAllDynamic");
	PaintBulletMesh->OnComponentHit.AddDynamic(this, &APaintBullet::OnHit);
	RootComponent = PaintBulletMesh;

	SetActorScale3D(FVector(0.3f, 0.3f, 0.3f));
	
	// Paint Splash
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> DecalComp(TEXT("Material'/Game/Materials/Paint_Mat.Paint_Mat'"));
	PaintBulletDecal = DecalComp.Object;

	// Delete if touchs nothing
	InitialLifeSpan = 3.0f;
}

// Called when the game starts or when spawned
void APaintBullet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
//void APaintBullet::Tick(float DeltaTime)
//{
//	Super::Tick(DeltaTime);
//
//}

void APaintBullet::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != nullptr && OtherComponent != nullptr)
	{
		FActorSpawnParameters SpawnParams;
		ADecalActor* decal = GetWorld()->SpawnActor<ADecalActor>(Hit.Location, Hit.Normal.Rotation() /*Hit.GetActor()->GetActorTransform().GetRotation().Rotator()*/, SpawnParams);
		
		UE_LOG(LogTemp, Warning, TEXT("Projectile Collided"));

		if (decal)
		{
			decal->SetDecalMaterial(PaintBulletDecal);

			int random = FMath::RandRange(0, 3);
			FLinearColor color = FLinearColor::MakeRandomColor();
			//UMaterialInstanceDynamic* dynMaterial = UMaterialInstanceDynamic::Create(PaintBulletDecal, this);

			UMaterialInstanceDynamic* dynMaterial = decal->CreateDynamicMaterialInstance();
			
			dynMaterial->SetScalarParameterValue("Frame", random);
			dynMaterial->SetVectorParameterValue("Color", color);
				
			
			decal->SetLifeSpan(3.0f);
			decal->GetDecal()->DecalSize = FVector(64.0f, 64.0f, 64.0f);
			//decal->SetActorRotation(Hit.Normal.Rotation());
		}
	}
	this->Destroy();
}

