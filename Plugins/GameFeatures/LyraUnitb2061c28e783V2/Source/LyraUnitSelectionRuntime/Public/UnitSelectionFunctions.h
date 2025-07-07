// Copyright Jon Van Dam. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "AttributeSet.h"

#include "UnitSelectionFunctions.generated.h"

class FLifetimeProperty;
class ULyraInventoryItemDefinition;
class ULyraInventoryItemFragment;

/**
 * Function library containing general utility functions used by the LyraUnitSelection plugin.
 */
UCLASS()
class LYRAUNITSELECTIONRUNTIME_API UUnitSelectionFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	// Sets the metadata of the attributes in an attribute set from a data table
	UFUNCTION(BlueprintCallable, meta=(Category = "Ability|Attribute"))
	static void InitializeAtrributeSetFromDataTable(UAttributeSet* AttributeSet, UDataTable* DataTable);

	// Gets a reference to the default object for this class
	UFUNCTION(BlueprintCallable, meta = (Category = "Utilities", DeterminesOutputType = "Class"))
	static const UObject* GetDefaultObject(TSubclassOf<UObject> Class);

};
