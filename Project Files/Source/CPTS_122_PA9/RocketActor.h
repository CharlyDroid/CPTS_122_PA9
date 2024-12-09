// Fill out your copyright notice in the Description page of Project Settings.
//Rocket Model curtesy of: https://www.fab.com/listings/764437c0-45f5-4baa-a456-a1eb40c54d91

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

	UFUNCTION(BlueprintCallable, Category = "Sim Time")
	void UpdateSimTime(float DeltaTime);

	UFUNCTION(BlueprintCallable, Category = "Sim Time")
	void SetSimTime(float Time);

	UFUNCTION(BlueprintCallable, Category = "Sim Time")
	void UpdatePosAndRotation();



	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sim Time")
	float SimTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sim Time")
	float SpeedMultiplier;

	UFUNCTION(BlueprintCallable, Category = "SPAWNING")
	void startSim(); //boolean to begin game play

	void TransformAccelerationData();

	FVector ConvertToGlobal(const FVector& LocalCoords, const FRotator& Rotator);

	void ComputeGlobalPos();

	UPROPERTY(BlueprintReadWrite, Category = "SPAWNING")
	bool startFlag = false;

	UPROPERTY(BlueprintReadWrite, Category = "SPAWNING")
	int maxTime;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	List FlightData;
};
