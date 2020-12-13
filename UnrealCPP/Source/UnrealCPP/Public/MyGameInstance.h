// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"

#include "SaveGameCPP.h"


#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class UNREALCPP_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	/*
	UFUNCTION(BlueprintCallable)
		void LoadGame(FString SlotName, int SlotIndex);
	//UFUNCTION(BlueprintCallable)
	void SaveGame();
	*/
	UFUNCTION(BlueprintCallable)
		void SetSaveParameters(FString name, int32 index);


	FString SaveSlotName;
	int32 SaveSlotIndex;

	//USaveGameCPP* SaveGameInstance = nullptr;
};
