// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EntityDataStructure.generated.h"

UENUM()
enum class EEnemyType : uint8
{
	Player UMETA(DisplayName = "Player"),
	Enemy UMETA(DisplayName = "Enemy"),
	Boss UMETA(DisplayName = "Boss"),
};

USTRUCT()
struct FEnemyStatistics
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	float Health;
	UPROPERTY(EditAnywhere)
	float Stamina;
	UPROPERTY(EditAnywhere)
	float MoveSpeed;
	UPROPERTY(EditAnywhere)
	float ArmorRating;
	UPROPERTY(EditAnywhere)
	float Strength;
	UPROPERTY(EditAnywhere)
	float Dexterity;
	UPROPERTY(EditAnywhere)
	float Intelligence;
	UPROPERTY(EditAnywhere)
	float Luck;
};