// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemDatabase.h"

#include "Kismet/KismetMathLibrary.h"

bool UItemDatabase::FindItemById(int ID, int& index)
{
	for(int i = 0; i<Items.Num(); i++)
	{
		if(Items[i].ItemID == ID)
		{
			index = i;
			return true;
		}
	}
	index = -1;
	return false;
}

FItemStruct UItemDatabase::GetRandomItem()
{
	const int index = UKismetMathLibrary::RandomIntegerInRange(0,Items.Num());
	if(Items.IsValidIndex(index))
	{
		return Items[index];
	}
	return FItemStruct();
}
