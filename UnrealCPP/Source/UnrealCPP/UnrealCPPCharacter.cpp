// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealCPPCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

#include "Public/PaintBullet.h"
#include "UnrealCPPGameMode.h"
#include "DrawDebugHelpers.h"

//////////////////////////////////////////////////////////////////////////
// AUnrealCPPCharacter

AUnrealCPPCharacter::AUnrealCPPCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	// Mes Ajouts
	GrabLocation = CreateDefaultSubobject<USceneComponent>(TEXT("GrabLocation"));
	GrabLocation->SetupAttachment(this->GetRootComponent());
	PhysicsHandle = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("PhysicsHandle"));
	movement = GetCharacterMovement();
}

//////////////////////////////////////////////////////////////////////////
// Input

void AUnrealCPPCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &AUnrealCPPCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AUnrealCPPCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AUnrealCPPCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AUnrealCPPCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &AUnrealCPPCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &AUnrealCPPCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AUnrealCPPCharacter::OnResetVR);


	/* Mes ajouts */
	PlayerInputComponent->BindAction("PickAndDrop", IE_Pressed, this, &AUnrealCPPCharacter::PickAndDrop);
	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &AUnrealCPPCharacter::Shoot);
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AUnrealCPPCharacter::MyCrouch);
	PlayerInputComponent->BindAction("Strafing", IE_Pressed, this, &AUnrealCPPCharacter::ActivateStrafe);
	PlayerInputComponent->BindAction("Strafing", IE_Released, this, &AUnrealCPPCharacter::DeactivateSrafe);
}


void AUnrealCPPCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AUnrealCPPCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void AUnrealCPPCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void AUnrealCPPCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AUnrealCPPCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AUnrealCPPCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AUnrealCPPCharacter::MoveRight(float Value)
{
	if ( (Controller != NULL) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

/* Mes ajouts */
void AUnrealCPPCharacter::PickAndDrop()
{
	if (isHoldingObject)
		DropObject();
	else PickObject();
}

void AUnrealCPPCharacter::PickObject()
{
	FVector Loc;
	FRotator Rot;
	FHitResult Hit;

	GetController()->GetPlayerViewPoint(Loc, Rot);

	FVector Start = Loc;
	FVector End = Start + (Rot.Vector() * maxDistanceToGrab);

	FCollisionQueryParams TraceParams;

	GetWorld()->LineTraceSingleByObjectType(Hit, Start, End, ECC_PhysicsBody, TraceParams);

	if (Hit.GetActor())
	{
		PhysicsHandle->GrabComponentAtLocation(Hit.Component.Get(), Hit.BoneName, Hit.GetActor()->GetActorLocation());
		Hit.GetComponent()->GetBodyInstance()->bLockXRotation = true;
		Hit.GetComponent()->GetBodyInstance()->bLockYRotation = true;
		isHoldingObject = true;
	}

	DrawDebugLine(GetWorld(), Start, End, FColor::Red, true);
}

void AUnrealCPPCharacter::DropObject()
{
	PhysicsHandle->ReleaseComponent();
	isHoldingObject = false;
}

void AUnrealCPPCharacter::Shoot()
{
	UE_LOG(LogTemp, Warning, TEXT("I am shooting"));
	FActorSpawnParameters parameters;
	FTransform tmpPos = GetActorTransform();
	tmpPos.SetLocation(FollowCamera->GetComponentRotation().Vector() * 200.0f + GetActorLocation());

	APaintBullet* bullet = GetWorld()->SpawnActor<APaintBullet>(APaintBullet::StaticClass(), tmpPos, parameters);
}

void AUnrealCPPCharacter::Destroyed()
{
	// Spawn Effect
	const FVector deathLocation = GetActorLocation();
	const FRotator deathRotation = GetActorRotation();
	AActor* fireEffect = GetWorld()->SpawnActor<AActor>(FireEffect, deathLocation, deathRotation);
	fireEffect->SetLifeSpan(2);

	// Make Spawn New player
	AGameModeBase* GM = GetWorld()->GetAuthGameMode();
	AUnrealCPPGameMode* GameMode = Cast<AUnrealCPPGameMode>(GM);
	if (GameMode)
	{
		GameMode->CreateNewCharacter(GetController(), spawnLocation, spawnRotation);
	}

	// Get Destroyed
	Super::Destroyed();
}

void AUnrealCPPCharacter::MyCrouch()
{
	if (blabla)
	{
		blabla = false;
		UnCrouch();
	}
	else
	{
		blabla = true;
		Crouch();
	}
}

void AUnrealCPPCharacter::ActivateStrafe()
{
	isStrafing = true;
	movement->bUseControllerDesiredRotation = true;
	movement->bOrientRotationToMovement = false;
	UE_LOG(LogTemp, Warning, TEXT("I am strafing"));
}

void AUnrealCPPCharacter::DeactivateSrafe()
{
	isStrafing = false;
	movement->bOrientRotationToMovement = true;
	UE_LOG(LogTemp, Warning, TEXT("I am not strafing"));
}

void AUnrealCPPCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const FVector grabVector(80, 0, 0);
	const FTransform grabLocation(grabVector);

	GrabLocation->SetRelativeTransform(grabLocation);
	
	PhysicsHandle->SetTargetLocation(GrabLocation->GetComponentLocation());
	//UE_LOG(LogTemp, Warning, TEXT("GrabLocation = %f, %f, %f"), GrabLocation->GetComponentLocation().X, GrabLocation->GetComponentLocation().Y, GrabLocation->GetComponentLocation().Z);
	//UE_LOG(LogTemp, Warning, TEXT("My location = %f, %f, %f"), GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z);
}

//void AUnrealCPPCharacter::BeginPlay()
//{
//	Super::BeginPlay();
//
//	const FVector grabVector(80, 0, 0);
//	GrabLocation->SetRelativeLocation(grabVector);
//}