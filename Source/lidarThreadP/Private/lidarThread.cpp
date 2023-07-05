// Fill out your copyright notice in the Description page of Project Settings.


#include "lidarThread.h"


// Sets default values
static TAtomic<bool> bisThreadDone(true);
static TAtomic<int32> threadCount(0);
// Sets default values
AlidarThread::AlidarThread()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AlidarThread::pointCloud()
{
	FHitResult objHit;
	FString plyOut;
	//TArray<TEnumAsByte<EObjectTypeQuery>> objHitType;
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	// Get the UEnum object for EObjectTypeQuery
	//UEnum* ObjectTypeEnum = FindObject<UEnum>(ANY_PACKAGE, TEXT("EObjectTypeQuery"), true);
	//ObjectTypes.Add(TEnumAsByte<EObjectTypeQuery>(static_cast<EObjectTypeQuery>(ObjectTypeEnum->GetValueByIndex(0))));
	ObjectTypes.Add(TEnumAsByte<EObjectTypeQuery>(ECC_WorldStatic)); // Add ECC_WorldStatic to the array
	ObjectTypes.Add(TEnumAsByte<EObjectTypeQuery>(ECC_WorldDynamic)); // Add ECC_WorldStatic to the array
	ObjectTypes.Add(TEnumAsByte<EObjectTypeQuery>(ECC_Vehicle)); // Add ECC_WorldStatic to the array
	ObjectTypes.Add(TEnumAsByte<EObjectTypeQuery>(ECC_Pawn)); // Add ECC_WorldStatic to the array
	ignoreActors.Add(MyActor);
	//objHitType.Add(UEnum::GetValueFromIndex(ECollisionChannel::ECC_WorldStatic));
	//objHitType.Add(UEnum::GetValueFromIndex(ECollisionChannel::ECC_WorldDynamic));
	//objHitType.Add(UEnum::GetValueFromIndex(ECollisionChannel::ECC_Vehicle));
	//objHitType.Add(UEnum::GetValueFromIndex(ECollisionChannel::ECC_Pawn));

	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Purple, "LIDIAR ACTIVATED !!!");
	for (int32 horzIndex = (FMath::TruncToInt32(horzChan) / 2) * -1; horzIndex <= (FMath::TruncToInt32(horzChan) / 2); horzIndex++)
	{
		totalHCords++;
		//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("value of horz chan: %d"), horzIndex));

		relativeRightVec = (UKismetMathLibrary::RotateAngleAxis((UKismetMathLibrary::GetRightVector(GetActorRotation())) * -1, horzIndex * anglePerHorz, UKismetMathLibrary::GetUpVector(GetActorRotation()))) * -1;
		laserVec = UKismetMathLibrary::RotateAngleAxis(UKismetMathLibrary::GetForwardVector(GetActorRotation()), horzIndex * anglePerHorz, UKismetMathLibrary::GetUpVector(GetActorRotation()));



		for (int32 vertIndex = (vertChan / 2) * -1; vertIndex <= (vertChan / 2); vertIndex++)
		{

			bool bHitSomething = UKismetSystemLibrary::LineTraceSingleForObjects(
				GetWorld(),
				GetActorLocation(),
				((UKismetMathLibrary::RotateAngleAxis(laserVec, anglePerVert * vertIndex, relativeRightVec)) * range) + GetActorLocation(),
				ObjectTypes,
				false,
				ignoreActors, // Empty array means no actors are ignored
				EDrawDebugTrace::None,
				objHit,
				true,
				FLinearColor::Red,
				FLinearColor::Green,
				50.f
			);


			if (bHitSomething == true)
			{
				//(UKismetStringLibrary::Conv_DoubleToString(objHit.Location.X) + " " + UKismetStringLibrary::Conv_DoubleToString(objHit.Location.Y) + " " + UKismetStringLibrary::Conv_DoubleToString(objHit.Location.Z) + "\n")
				cords = UKismetStringLibrary::Concat_StrStr((UKismetStringLibrary::Conv_DoubleToString(objHit.Location.X) + " " + UKismetStringLibrary::Conv_DoubleToString(objHit.Location.Y) + " " + UKismetStringLibrary::Conv_DoubleToString(objHit.Location.Z) + "\n"), cords);
				//cords = (UKismetStringLibrary::Concat_StrStr(UKismetStringLibrary::Conv_DoubleToString(objHit.Location.X), UKismetStringLibrary::Conv_DoubleToString(objHit.Location.Y)), UKismetStringLibrary::Conv_DoubleToString(objHit.Location.Z));

				totalCords++;
			}

			//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT("value of vertical chan: %d"), vertIndex));
		}

	}

	//UKismetStringLibrary::Concat_StrStr("ply\nformat ascii 1.0\nelement vertex", UKismetStringLibrary::Conv_IntToString(totalCords));
	//("ply\nformat ascii 1.0\nelement vertex " + UKismetStringLibrary::Conv_IntToString(totalCords) + "\nproperty float32 x\nproperty float32 y\nproperty float32 z\nend_header\n");
	plyOut = UKismetStringLibrary::Concat_StrStr(("ply\nformat ascii 1.0\nelement vertex " + UKismetStringLibrary::Conv_IntToString(totalCords) + "\nproperty float32 x\nproperty float32 y\nproperty float32 z\nend_header\n"), cords);
	writeLidarData(UKismetStringLibrary::Concat_StrStr(UKismetStringLibrary::Conv_IntToString(threadCount), ".ply"), plyOut, "LidarTestData");
	cords = "";
	totalCords = 0;
	bisThreadDone = true;
}

// Called when the game starts or when spawned
void AlidarThread::BeginPlay()
{
	Super::BeginPlay();
	threadCount = 0;
	bisThreadDone = true;
	//startThread();
	//GetActorLocation().X, GetActorLocation().Y, GetActorLocation().Z + 300;
	//SetActorLocation(UKismetMathLibrary::MakeVector(GetActorLocation().X+1000, GetActorLocation().Y, GetActorLocation().Z + 1000));

	//pointCloud();
	
}

// Called every frame
void AlidarThread::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AlidarThread::activateLidar(int32 fileNum)
{
	threadCount = fileNum;
	bisThreadDone = false;
	//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, "Thread Started !!");
	(new FAutoDeleteAsyncTask<MultithreadedTaskLidar>(this))->StartBackgroundTask();

}

bool AlidarThread::isMyThreadDone()
{
	return bisThreadDone;
}

void AlidarThread::threadPrint()
{
	GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, "This print string is working in a different thread !!!!!!!!");
	FPlatformProcess::Sleep(5.0f);
	bisThreadDone = true;
}

void AlidarThread::writeLidarData(FString Filename, FString Data, FString subDir)
{
	//FString dir = FPaths::GameSourceDir();
	FString dir = FPaths::ProjectSavedDir();
	FString Result;
	IPlatformFile& file = FPlatformFileManager::Get().GetPlatformFile();

	if (file.CreateDirectory(*dir))
	{
		FString Myfile = dir + "data/"+subDir + "/" + Filename;
		FFileHelper::SaveStringToFile(Data, *Myfile);

	}
}

