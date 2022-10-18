#include "ReducedItemStruct.h"

#include "ItemDatabase.h"

FItemStruct FReducedItemStruct::GetCompleteItem(UItemDatabase* ItemDatabase)
{
	int index;
	ItemDatabase->FindItemById(ItemID, index);
	
}
