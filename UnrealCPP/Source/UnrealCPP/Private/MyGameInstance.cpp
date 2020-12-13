// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "Kismet/GameplayStatics.h"


/*
void UMyGameInstance::LoadGame(FString SlotName, int SlotIndex)
{
	//if (UGameplayStatics::DoesSaveGameExist(SlotName, SlotIndex))
	//{
	//	SaveGameInstance = Cast<USaveGameCPP>(UGameplayStatics::LoadGameFromSlot(SlotName, SlotIndex));

	//	SaveSlotName = SlotName;
	//	SaveSlotIndex = SlotIndex;

	//	UE_LOG(LogTemp, Warning, TEXT("Save exists "));
	//}
	//else
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("Save does not exists "));
	//	 SaveGameInstance = Cast<USaveGameCPP>(UGameplayStatics::CreateSaveGameObject(USaveGameCPP::StaticClass()));
	//	 
	//	 SaveGameInstance->SaveSlotName = SlotName;
	//	 SaveGameInstance->UserIndex = SlotIndex;

	//	 SaveSlotName = SlotName;
	//	 SaveSlotIndex = SlotIndex;
	//}
}

void UMyGameInstance::SaveGame()
{
	if (UGameplayStatics::SaveGameToSlot(SaveGameInstance, SaveSlotName, SaveSlotIndex))
	{
		UE_LOG(LogTemp, Warning, TEXT("Save completed ?"));
	}
}
*/

void UMyGameInstance::SetSaveParameters(FString name, int32 index)
{
	SaveSlotName = name;
	SaveSlotIndex = index;
}
