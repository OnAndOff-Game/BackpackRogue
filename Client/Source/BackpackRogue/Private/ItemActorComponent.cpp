// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemActorComponent.h"

// Sets default values for this component's properties
UItemActorComponent::UItemActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UItemActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
}


// Called every frame
void UItemActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UItemActorComponent::Init(std::pair<int, int> item_size)
{
	// 백사이즈와, 별좌표는 여기서 초기화
	back_size = { item_size.first, item_size.second };
}

void UItemActorComponent::Rotate(int new_rotate)
{
	int rotate_count = (new_rotate - this->rotate_state) / 3;
	
	for(int i = 0 ; i < rotate_count ; i ++)
	{
		Rotate90();
	}
	UpdateStarCoord();
	return;
}

void UItemActorComponent::Rotate90()
{
	back_size.swap();
	for (auto& coord : real_coord)
	{
		coord.swap();
		coord.second = (back_size-1) - coord.second;
	}
}

void UItemActorComponent::UpdateStarCoord()
{
	std::queue<std::pair<int, int>> item_coord_queue;
	std::set<std::pair<int, int>, PairComparator >> star_coord_set;
}



std::vector<std::pair<int, int>> UItemActorComponent::GetStarCoord()
{
	return this->star_coord;
	// 인벤토리 클래스에서 아이템의 star 좌표를 가져온뒤 제크후 add item 아니면 효과
}

bool UItemActorComponent::AddStarItem(UItemActorComponent& item)
{
	if (!this->star_type[item.type])
	{
		// 효과 추가
	}

	return false;
}

