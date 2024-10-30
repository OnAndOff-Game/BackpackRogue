// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include <algorithm>
#include <set>
#include <string>
#include "Math/Vector2D.h"
#include "ItemActorComponent.generated.h"

enum ItemType
{
	Dark, Light, Melee
};

enum StarType
{
	Around, Custom 
};

struct PairComparator {
	bool operator()(const std::pair<int, std::string>& p1, const std::pair<int, std::string>& p2) {
		return p1.first < p2.first || (p1.first == p2.first && p1.second < p2.second);
	}
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BACKPACKROGUE_API UItemActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UItemActorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;


	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void Init(std::pair<int,int> item_size);
	virtual void Rotate(int new_rotate); // 새로운 좌표를 리턴
	virtual void Rotate90();// 90도 한번 회전
	virtual void UpdateStarCoord(); // 별 좌표 갱신
	virtual std::vector<std::pair<int, int>> GetStarCoord();
	virtual bool AddStarItem(UItemActorComponent& item);
	


protected:
	UPROPERTY(VisibleAnywhere)
	TArray<FVector2D> star_coord;
	UPROPERTY(EditAnywhere)
	std::vector<std::pair<int, int>> real_coord;
	UPROPERTY(EditAnywhere)
	uint16 rotate_state;
	UPROPERTY(EditAnywhere);
	std::pair<uint16, uint16> back_size; // 실제크기의 +1
	UPROPERTY(EditAnywhere);
	std::pair<uint16, uint16> real_offset;
	std::vector<UItemActorComponent> star_item_list;
	ItemType type; // 자신의 타입
	std::set<ItemType> star_type; // 별에 닿으면 활성화될 아이템 타입
	std::vector<bool> activated_star; // star_coord 와 같은길이로 활성화된 인덱스 true
};
