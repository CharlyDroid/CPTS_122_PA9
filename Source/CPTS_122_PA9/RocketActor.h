// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Data.h"
#include "Node.h"
#include "List.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RocketActor.generated.h"

UCLASS()
class CPTS_122_PA9_API ARocketActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARocketActor();

	UFUNCTION(BlueprintCallable, Category = "SPAWNING")
	void SpawnRocket();

	List FlightData;

	float SimTime;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};