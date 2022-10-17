// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "SewagebarnPlayerstate.generated.h"

class UInventoryComponent;

/**
 * 
 */
UCLASS()
class SEWAGEBARN_API ASewagebarnPlayerstate : public APlayerState
{
	GENERATED_BODY()

public:

	// Player inventory
	UPROPERTY()
	UInventoryComponent* InventoryComponent;
};
