// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryComponent.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

	// Inventory slots are set to a constant value
	ItemSlotCount = 10; // for a minecraft HotBar similar approach
	Inventory.Init(FReducedItemStruct(),ItemSlotCount); // Fill inventory with Empty slots

	// Get the ItemList of all items
	const ConstructorHelpers::FObjectFinder<UItemDatabase>ItemDatabase_Obj(TEXT("ItemDatabase'/Game/Data/AllItems.AllItems'"));
	if(ItemDatabase_Obj.Succeeded())
	{
		ItemDatabase = ItemDatabase_Obj.Object;
	}
	
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool UInventoryComponent::PickupItem(FReducedItemStruct Item)
{
	int ItemInventoryIndex;
	// Pickup item to inventory when already existing
	if(FindItemInInventory(Item, ItemInventoryIndex))
	{
		Inventory[ItemInventoryIndex].Amount += Item.Amount;
		return true;
	}

	// Pickup Item if not already in inventory
	if(FindEmptySlot(ItemInventoryIndex))
	{
		Inventory[ItemInventoryIndex] = Item;
		return true;
	}
	
	return false;
}

bool UInventoryComponent::FindItemInInventory(FReducedItemStruct ItemToFind, int& index)
{
	for(int i = 0; i<ItemSlotCount; i++)
	{
		if(Inventory[i].ItemID == ItemToFind.ItemID)
		{
			index = i;
			return true;
		}
	}
	index = -1;
	return false;
}

bool UInventoryComponent::FindEmptySlot(int& index)
{
	for(int i = 0; i<ItemSlotCount; i++)
	{
		if(Inventory[i].ItemID == 0)
		{
			index = i;
			return true;
		}
	}
	index = -1;
	return false;
}


