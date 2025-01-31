// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UnrealCPPGameMode.generated.h"

UCLASS(minimalapi)
class AUnrealCPPGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AUnrealCPPGameMode();

	void CreateNewCharacter(AController* controller, FVector spawnLocation, FRotator spawnRotation);
};



