// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemDatabase.h"

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
