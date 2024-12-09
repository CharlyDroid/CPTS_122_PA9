// Fill out your copyright notice in the Description page of Project Settings.

#include "RocketActor.h"
#include <sstream>


// Sets default values
ARocketActor::ARocketActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ARocketActor::SpawnRocket()
{
	FVector SpawnLocation(0.0f, 0.0f, 0.0f);
	FRotator SpawnRotation(0.0f, 0.0f, 0.0f);
	FActorSpawnParameters SpawnInfo;

	GetWorld()->SpawnActor<ARocketActor>(SpawnLocation, SpawnRotation, SpawnInfo);
	//GetWorld()->SpawnActor<ARocketActor>(FVector::ZeroVector, FRotator::ZeroRotator);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("ROCKET HAS BEEN SPAWNED"));
	}

	UE_LOG(LogTemp, Warning, TEXT("TEST"));



}

void ARocketActor::UpdateSimTime(float DeltaTime)
{
	SimTime = SimTime + (DeltaTime * SpeedMultiplier);
}

void ARocketActor::startSim() {

	startFlag = true;
}

void ARocketActor::TransformAccelerationData()
{
	int myMaxTime = FlightData.getMaxTime(), time = 0;
	Data* curData = nullptr;
	FVector GlobalAcceleration;

	while (time <= myMaxTime)
	{
		curData = FlightData.GetDataAtTime(time);

		if (curData != nullptr)
		{
			GlobalAcceleration = ConvertToGlobal(FVector(curData->getXAcceleration(), curData->getYAcceleration(), curData->getZAcceleration()),
				FRotator(curData->getPitch(), curData->getYaw(), curData->getRoll()));
			curData->setGlobalxAcceleration(GlobalAcceleration.X);
			curData->setGlobalyAcceleration(GlobalAcceleration.Y);
			curData->setGlobalzAcceleration(GlobalAcceleration.Z);
		}
		curData = nullptr;
		++time;
	}
}

FVector ARocketActor::ConvertToGlobal(const FVector& LocalCoords, const FRotator& Rotator)
{
	FQuat Quat(Rotator);

	FVector GlobalCoords = Quat.RotateVector(LocalCoords);

	return GlobalCoords;
}

void ARocketActor::ComputeGlobalPos()
{
	float posX = 0, posY = 0, posZ = 0,
		velX = 0, velY = 0, velZ = 0;
	int curTime = 0, prevTime = 0, myMaxTime = FlightData.getMaxTime();
	float DeltaTime;
	Data* curData = nullptr;

	curData = FlightData.GetDataAtTime(curTime);

	if (curData != nullptr)
	{
		velZ = curData->getSpeed();
	}

	++curTime;
	curData = nullptr;

	for (; curTime <= myMaxTime; ++curTime)
	{
		curData = FlightData.GetDataAtTime(curTime);

		if (curData != nullptr)
		{
			DeltaTime = ((float)curTime - (float)prevTime) / 100;
			prevTime = curTime;

			velX = velX + (curData->getGlobalxAcceleration() - 9.81) * DeltaTime;
			velY = velY + curData->getGlobalyAcceleration() * DeltaTime;
			velZ = velZ + curData->getGlobalzAcceleration() * DeltaTime;

			//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::SanitizeFloat(velX));


			posX = posX + velX * DeltaTime;
			posY = posY + velY * DeltaTime;
			posZ = posZ + velZ * DeltaTime;

			curData->setGlobalxPosition(posX);
			curData->setGlobalyPosition(posY);
			curData->setGlobalzPosition(posZ);
		}
		curData = nullptr;
	}


}


void ARocketActor::SetSimTime(float Time)
{
	SimTime = Time;
}

void ARocketActor::UpdatePosAndRotation()
{
	Data* curData = nullptr;

	curData = FlightData.GetDataAtTime((int)(SimTime * 100));

	if (curData != nullptr)
	{
		FRotator newRotation = FRotator(- curData->getPitch(), curData->getRoll(), curData->getYaw()); //Pitch, Yaw, Roll, roll and yaw are swapped because of the orientation of the rocket
		FVector newPos = FVector(curData->getGlobalzPosition() * 100, - curData->getGlobalyPosition() * 100, curData->getGlobalxPosition() * 100);


		this->SetActorRotation(newRotation);
		this->SetActorLocation(newPos);
	}


}

// Called when the game starts or when spawned
void ARocketActor::BeginPlay()
{
	Super::BeginPlay();
	startFlag = false;
	//SpawnRocket();

	FString inputString;

	FString FilePath = FPaths::ProjectContentDir() + TEXT("FlightData.csv");


	FFileHelper::LoadFileToString(inputString, *FilePath);
	std::string str = std::string(TCHAR_TO_UTF8(*inputString));

	std::stringstream  inputStream(str);



	SimTime = 0;
	SpeedMultiplier = 1;
	FlightData.LoadList(inputStream);
	maxTime = FlightData.getMaxTime()/100;
	TransformAccelerationData();
	ComputeGlobalPos();
}

// Called every frame
void ARocketActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (startFlag == true) {

		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::SanitizeFloat(DeltaTime));
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::FromInt(SimTime));
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::FromInt((int)(SimTime * 100)));

		UpdateSimTime(DeltaTime);
		UpdatePosAndRotation();
	}

	//FVector NewLocation = this->GetActorLocation();
	//NewLocation += FVector(0.0f, 0.0f, 0.1f);
	//this->SetActorLocation(NewLocation);


}

