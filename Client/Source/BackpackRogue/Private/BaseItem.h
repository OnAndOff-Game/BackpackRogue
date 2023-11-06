// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemDataStructure.h"
#include "BaseItem.generated.h"

UCLASS(Abstract, BlueprintType, Blueprintable, EditInlineNew, DefaultToInstanced)
class UBaseItem : public UObject
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(VisibleAnywhere, Category = "Item Data", meta = (UIMin=1, UIMax=255))
	uint8 Quantity;

	UPROPERTY(EditAnywhere, Category = "Item Data");
	FName ID;
	
	UPROPERTY(EditAnywhere, Category = "Item Data");
	EItemType ItemType;

	UPROPERTY(EditAnywhere, Category = "Item Data");
	EItemQuality ItemQuality;

	UPROPERTY(EditAnywhere, Category = "Item Data");
	FItemStatistics ItemStatistics;

	UPROPERTY(EditAnywhere, Category = "Item Data");
	FItemTextData TextData;

	UPROPERTY(EditAnywhere, Category = "Item Data");
	FItemNumericData NumericData;

	UPROPERTY(EditAnywhere, Category = "Item Data");
	FItemAssetData AssetData;

public:
	UBaseItem();

	UFUNCTION(Category = "Item")
	UBaseItem* CreateItemCopy() const;

	UFUNCTION(Category = "Item")
	FORCEINLINE float GetItemStackWeight() const { return Quantity * NumericData.Weight; };
	UFUNCTION(Category = "Item")
	FORCEINLINE float GetItemSingleWeight() const { return NumericData.Weight; };
	UFUNCTION(Category = "Item")
	FORCEINLINE bool IsFullItemStack() const { return Quantity == NumericData.MaxStackSize; };

	UFUNCTION(Category = "Item")
	void SetQuantity(const uint8 NewQuantity);

	UFUNCTION(Category = "Item")
	virtual void Use(class ABaseEntity* Entity);
	UFUNCTION(Category = "Item")
	virtual void OnEquip(class ABaseEntity* Entity);
	UFUNCTION(Category = "Item")
	virtual void OnUnEquip(class ABaseEntity* Entity);
};
