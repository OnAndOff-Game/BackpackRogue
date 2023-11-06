// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseItem.h"
#include "BaseEntity.h"
UBaseItem::UBaseItem()
{
}

UBaseItem* UBaseItem::CreateItemCopy() const
{
	UBaseItem* ItemCopy = NewObject<UBaseItem>(StaticClass());
	ItemCopy->ID = this->ID;
	ItemCopy->Quantity = this->Quantity;
	ItemCopy->ItemQuality = this->ItemQuality;
	ItemCopy->ItemType = this->ItemType;
	ItemCopy->TextData = this->TextData;
	ItemCopy->NumericData = this->NumericData;
	ItemCopy->ItemStatistics = this->ItemStatistics;
	ItemCopy->AssetData = this->AssetData;
	return ItemCopy;
}

void UBaseItem::SetQuantity(const uint8 NewQuantity)
{
}

void UBaseItem::Use(ABaseEntity* Entity)
{
}

void UBaseItem::OnEquip(ABaseEntity* Entity)
{
}

void UBaseItem::OnUnEquip(ABaseEntity* Entity)
{
}
