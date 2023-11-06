// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "BackpackGameInstnace.generated.h"

#define GameInstance Cast<UBackpackGameInstance>(GetWorld()->GetGameInstance());

UCLASS()
class UBackpackGameInstnace : public UGameInstance
{
	GENERATED_BODY()
	
};