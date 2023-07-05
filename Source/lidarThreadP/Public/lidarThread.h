// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetStringLibrary.h"
#include "GameFramework/PlayerController.h"
#include "Async/Async.h"
#include "Engine.h"
#include "lidarThread.generated.h"

UCLASS()
class LIDARTHREADP_API AlidarThread : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AlidarThread();
	FVector actorLoc;
	FRotator actorRot;
	const float fov = 60;
	const float horzChan = 200;
	const int vertChan = 84;
	const float anglePerHorz = 360.0f / horzChan;
	const float anglePerVert = fov / vertChan;
	const float range = 30000.0;
	FString cords = "";
	int32 totalHCords = 0;
	int32 totalVCords = 0;
	int32 totalCords = 0;
	FString lidarDir = "";
	FVector laserVec;
	FVector relativeRightVec;
	AActor* MyActor = this;
	TArray<AActor*> ignoreActors;
	int32 imgCount = 0;


	APlayerController* pc = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	void pointCloud();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Thread Funtion")
		void activateLidar(int32 fileNum);

	UFUNCTION(BlueprintCallable, Category = "Thread Funtion")
		bool isMyThreadDone();

	void threadPrint();
	void writeLidarData(FString Filename, FString Data, FString subDir);

};

class MultithreadedTaskLidar : public FNonAbandonableTask {
public:
	MultithreadedTaskLidar(AlidarThread* myClass) { this->MyClass = myClass; }
	AlidarThread* MyClass;
	FORCEINLINE TStatId GetStatId() const {
		RETURN_QUICK_DECLARE_CYCLE_STAT(MultithreadedTaskLidar, STATGROUP_ThreadPoolAsyncTasks);
	}
	void DoWork()
	{
		if (MyClass) {
			MyClass->pointCloud();
			//MyClass->threadPrint();
		}
	}
};