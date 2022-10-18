#pragma once

#include "CoreMinimal.h"
#include "ItemStruct.h"


USTRUCT(BlueprintType)
struct FReducedItemStruct
{
	GENERATED_BODY()

	UPROPERTY()
	int ItemID;

	UPROPERTY()
	int Amount;

	FReducedItemStruct()
	{
		ItemID = 0;
		Amount = 0;
	}

	FORCEINLINE FItemStruct GetCompleteItem(UItemDatabase* ItemDatabase);

	
	
};
