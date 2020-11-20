// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealCPPGameMode.h"
#include "UnrealCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealCPPGameMode::AUnrealCPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}


void AUnrealCPPGameMode::CreateNewCharacter(AController* controller, FVector spawnLocation, FRotator spawnRotation)
{
    FTimerHandle handle;
    GetWorld()->GetTimerManager().SetTimer(handle, [this, controller, spawnLocation, spawnRotation]()
        {
            APawn* Pawn = GetWorld()->SpawnActor<APawn>(DefaultPawnClass, spawnLocation, spawnRotation);
            if (Pawn)
            {
                controller->Possess(Pawn);
            }
        }, 2, false);
}