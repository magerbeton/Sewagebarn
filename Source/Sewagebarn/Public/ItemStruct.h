// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemStruct.generated.h"

class UItemDatabase;

/**
 * 
 */

USTRUCT(BlueprintType)
struct FItemStruct
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int ItemID;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString ItemName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString ItemDescription;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int MaxStackSize;

	FItemStruct()
	{
		ItemID = 0;
		ItemName = "None";
		ItemDescription = "This is a placeholder item";
		MaxStackSize = 0;
	}

	
};



