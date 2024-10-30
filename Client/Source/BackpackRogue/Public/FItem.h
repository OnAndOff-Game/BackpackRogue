// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Math/IntVector.h"
#include "Containers/Array.h"

#define NUM_OF_ROTATE 4

enum ItemType
{
	BackPack, Consumable, Weapon, Item
};

enum ItemAttribute
{
	Dark, Light, Fire, Earth, Water
};

enum ItemRotate
{
	Up, Right, Down, Left
};

enum StarType
{
	Around, Custom
};

enum RequiredClass
{
	None, Ranger, Witcher
};

struct FStar
{
public:
	ItemAttribute synergy_type;
	FIntVector2 position;
	uint16 additional_power;
};

struct ItemAbility
{
public:
	uint16 attack;
	uint16 defence;
	uint16 speed;
	uint16
};

class BACKPACKROGUE_API FItemBase
{ // 회전, 배치 ,
private:
	uint8 price;
	ItemRotate rotate;
	FIntVector2 rotate_offset; // 회전할때 중앙 오프셋 coordlist에서 평균값으로 해도됨
	FIntVector2 item_size;
	FIntVector2 item_background_size;
	TArray<FIntVector2> *coord_list;
	RequiredClass required_class; // 직업제한
	FIntVector2 position;
public:
	FItemBase();
	FItemBase(uint8 Price, FIntVector2 item_size, TArray<FIntVector2>* coord_list, RequiredClass required_class);
	virtual ~FItemBase();
	bool rotate_once();
	bool fill_coord_with_itemsize();
	TArray<FIntVector2> GetCoords();
	virtual bool Use();

	
};

class BACKPACKROGUE_API FBackPack : public FItemBase
{//별은 없음
public:
	FBackPack(uint8 price, FIntVector2 item_size);
	FBackPack();
	virtual ~FBackPack();
};


class BACKPACKROGUE_API FInventoryItem : public FItemBase
{// 별있음
private :
	TArray<FStar> star_list;
public:
	FInventoryItem(TArray<FIntVector2> item_coord, TArray<FIntVector2> star_coord);
	virtual ~FInventoryItem();
	TArray<FStar> GetStars() const;
	bool SetStarsCoords(TArray<FIntVector2> star_coords);
};