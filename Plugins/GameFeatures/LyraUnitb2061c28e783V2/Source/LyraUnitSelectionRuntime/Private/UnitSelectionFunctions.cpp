// Copyright Jon Van Dam. All Rights Reserved.

#include "UnitSelectionFunctions.h"
#include "Net/UnrealNetwork.h"

void UUnitSelectionFunctions::InitializeAtrributeSetFromDataTable(UAttributeSet* AttributeSet, UDataTable* DataTable)
{
	if (AttributeSet)
	{
		AttributeSet->InitFromMetaDataTable(DataTable);
	}
}

const UObject* UUnitSelectionFunctions::GetDefaultObject(TSubclassOf<UObject> Class)
{
	if (IsValid(Class))
	{
		return Class.GetDefaultObject();
	}
	else return nullptr;
}




