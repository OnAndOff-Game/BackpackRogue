// Fill out your copyright notice in the Description page of Project Settings.

// TODO : change to move semantics

#include "FItem.h"


// FItemBase

FItemBase::FItemBase()
{
	FItemBase(100, FIntVector2(1, 1), new TArray<FIntVector2>(), RequiredClass::None);
}

FItemBase::FItemBase(uint8 Price, FIntVector2 item_size, TArray<FIntVector2>* coord_list, RequiredClass required_class) :
	price(Price), rotate(ItemRotate::Up), rotate_offset(FIntVector2(0, 0)), item_size(item_size), coord_list(coord_list), required_class(required_class), position(FIntVector2(-1, -1))

{
	this->item_background_size = this->item_size + FIntVector2(1, 1);
}

FItemBase::~FItemBase()
{
	delete coord_list;
}

bool FItemBase::rotate_once()
{
	this->rotate = static_cast<ItemRotate>((this->rotate + 1) % NUM_OF_ROTATE);
	return true;
}

bool FItemBase::fill_coord_with_itemsize()
{

}

TArray<FIntVector2> FItemBase::GetCoords()
{
	TArray<FIntVector2> temp_coord_list;


	for (auto& block : *(this->coord_list))
	{
		FIntVector2 temp_coord;
		switch (this->rotate)
		{
			//Todo : edit coord change calc
		case ItemRotate::Right:
			temp_coord = FIntVector2(block.Y, -block.X);
			break;
		case ItemRotate::Down:
			temp_coord = FIntVector2(-block.X, -block.Y);
			break;
		case ItemRotate::Left:
			temp_coord = FIntVector2(-block.Y, -block.X);
			break;
		case ItemRotate::Up:
			temp_coord = block;
			break;
		}
		temp_coord_list.Push(temp_coord);
		
	}
	return temp_coord_list;
}

FBackPack::FBackPack(uint8 price, FIntVector2 item_size) : FItemBase(price, item_size, new TArray<FIntVector2>(), RequiredClass::None)
{
}

FBackPack::FBackPack()
{
	FBackPack(100, FIntVector2(2, 1));
}

FBackPack::~FBackPack()
{
}



FInventoryItem::FInventoryItem(TArray<FIntVector2> item_coord, TArray<FIntVector2> star_coord)
{
}

FInventoryItem::~FInventoryItem()
{

}


TArray<FStar> FInventoryItem::GetStars() const
{

}

bool FInventoryItem::SetStarsCoords(TArray < FIntVector2> star_coords)
{

}


