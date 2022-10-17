// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemStruct.h"

#include "ItemDatabase.h"

bool FItemReducedStruct::GetItemData(UItemDatabase* ItemDatabase, FItemStruct& ItemToUpdate)
{
	if(ItemDatabase->Items.IsValidIndex(ItemID))
	{
		if(ItemDatabase->Items[ItemID].ItemID == ItemID)
		{
			ItemToUpdate = ItemDatabase->Items[ItemID];
			return true;
		}
			
			
	}
	return false;
}
