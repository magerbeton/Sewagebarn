// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemSpawner.h"

#include "ItemDatabase.h"
#include "Sewagebarn/Item_Base.h"


// Sets default values
AItemSpawner::AItemSpawner()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AItemSpawner::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(ItemSpawnTimer,this,)
}

// Called every frame
void AItemSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AItemSpawner::SpawnItemFromLootTable()
{
	const FTransform SpawnTransform = GetActorTransform();
	AItem_Base* SpawnedItem = GetWorld()->SpawnActorDeferred<AItem_Base>(AItem_Base::StaticClass(),SpawnTransform);
	SpawnedItem->Item = ItemLootTable->GetRandomItem();
}