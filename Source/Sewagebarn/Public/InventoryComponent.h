// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemDatabase.h"
#include "ItemStruct.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SEWAGEBARN_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY()
	UItemDatabase* ItemDatabase;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FItemReducedStruct> Inventory;

	UPROPERTY()
	int ItemSlotCount;
	
	UFUNCTION()
	bool PickupItem(FItemReducedStruct Item);

	UFUNCTION()
	bool FindItemInInventory(FItemReducedStruct ItemToFind, int& index);

	UFUNCTION()
	bool FindEmptySlot(int& index);
	
};
