// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <vector>
#include <set>
#include "FItem.h"

struct Ability
{
	uint32 strength;
	uint32 agility;
	uint32 health;
	uint32 intelligence;
	uint32 attack_speed;
	uint32 defense;
	uint32 magic_defense;

};

enum CellState
{
	Empty, Backpack, Full
};
/**
 * 
 */
class BACKPACKROGUE_API FInventory
{
private:
	std::vector < std::vector<CellState>> cells; // ºøªÛ≈¬
	std::vector <std::vector<uint16>> cells_item; // ºø æ∆¿Ã≈€ ¿Œµ¶Ω∫
	std::set<FItemBase> items;
	Ability inventory_ability;
public:
	FInventory();
	FInventory(uint8 x, uint8 y);
	~FInventory();

	bool IsValid(std::pair<uint8, uint8>);
	bool StarCheck();
	bool BatchItem();
	bool CalcInventoryAblility();
	bool AddItem(FItemBase item, FIntVector2 pos);

};
