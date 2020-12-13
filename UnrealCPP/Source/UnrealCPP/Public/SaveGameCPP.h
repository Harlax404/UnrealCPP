// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SaveGameCPP.generated.h"

/**
 * 
 */
UCLASS()
class UNREALCPP_API USaveGameCPP : public USaveGame
{
	GENERATED_BODY()

public:
    // What i need ?
    UPROPERTY(VisibleAnywhere, Category = Basic)
        FString SaveSlotName;

    UPROPERTY(VisibleAnywhere, Category = Basic)
        uint32 UserIndex;

    // What i save :
    UPROPERTY(VisibleAnywhere, Category = Basic)
        FTransform PlayerTransform;

    USaveGameCPP();
};
