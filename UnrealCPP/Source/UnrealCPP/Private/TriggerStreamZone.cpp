// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggerStreamZone.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ATriggerStreamZone::ATriggerStreamZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	OverlapVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapVolume"));
	RootComponent = OverlapVolume;
	
	OverlapVolume->OnComponentBeginOverlap.AddUniqueDynamic(this, &ATriggerStreamZone::OverlapBegins);
	OverlapVolume->OnComponentEndOverlap.AddUniqueDynamic(this, &ATriggerStreamZone::OverlapEnds);	
}

void ATriggerStreamZone::OverlapBegins(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ACharacter* MyCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	//AActor* mc = Cast<AActor>(MyCharacter);
	if (Cast<ACharacter>(OtherActor) == MyCharacter && LevelToLoad.Num() != 0)
	{
		for (FName levelName : LevelToLoad)
		{
			FLatentActionInfo LatentInfo;
			UGameplayStatics::LoadStreamLevel(this, levelName, true, false, LatentInfo);
		}
	}
}

void ATriggerStreamZone::OverlapEnds(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ACharacter* MyCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);

	if (Cast<ACharacter>(OtherActor) == MyCharacter && LevelToLoad.Num() != 0)
	{
		for (FName levelName : LevelToLoad)
		{
			FLatentActionInfo LatentInfo;
			UGameplayStatics::UnloadStreamLevel(this, levelName, LatentInfo, false);
		}
	}
}