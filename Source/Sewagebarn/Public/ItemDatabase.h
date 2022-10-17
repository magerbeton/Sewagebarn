// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemStruct.h"
#include "Engine/DataAsset.h"
#include "ItemDatabase.generated.h"

/**
 * 
 */
UCLASS()
class SEWAGEBARN_API UItemDatabase : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FItemStruct> Items;

	UFUNCTION()
	bool FindItemById(int ID, int& index);
	
};
