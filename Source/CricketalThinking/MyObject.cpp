// Fill out your copyright notice in the Description page of Project Settings.


#include "MyObject.h"



//int UMyObject::CalculatePoints_Implementation(std::string& Answer, int CorrectAnswer)
//{
//	int Answer_int = std::stoi(Answer);
//	if (Answer_int == CorrectAnswer)
//	{
//		AddPoints(Task1Reward, Result);
//		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, FString::Printf(TEXT("earned: %d"), Result));
//	}
//	else
//	{
//		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, FString::Printf(TEXT("incorrect")));
//	}
//
//
//	return Result;
//}

int UMyObject::CalculatePoints(int Answer, int CorrectAnswer)
{
	if (Answer == CorrectAnswer)
	{
		NormalPoints =AddPoints(Task1Reward, NormalPoints);
		/*GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, FString::Printf(TEXT("earned: %d"), Task1Reward));*/
	}
	
	/*else
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, FString::Printf(TEXT("incorrect")));
	}*/
	
	return NormalPoints;
}

int UMyObject::AddPoints(int Amount, int PointType)
{
	PointType += Amount;
	return PointType;
}

int UMyObject::UpdateOverallPoints(int PointType, int CurrentOverallPoints)
{
	CurrentOverallPoints += PointType;
	OverallPoints = CurrentOverallPoints;
	return OverallPoints;
}

