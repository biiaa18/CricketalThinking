// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnswerInputInterface.h"
#include "MyObject.generated.h"


/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class CRICKETALTHINKING_API UMyObject : public UObject, public IAnswerInputInterface
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Task")
	virtual int CalculatePoints(int Answer, int CorrectAnswer);

	UFUNCTION(BlueprintCallable, Category = "Task")
	int AddPoints(int Amount, int PointType);

	UFUNCTION(BlueprintCallable, Category = "Task")
	int UpdateOverallPoints(int PointType, int CurrentOverallPoints);

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Task")
	int Task1Answer1 = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Task")
	int Task1Answer2 = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Task")
	int OverallPoints = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Task")
	int NormalPoints = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Task")
	int SpecialPoints = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Task")
	int Task1Reward = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Task")
	int Result = 0;
};
