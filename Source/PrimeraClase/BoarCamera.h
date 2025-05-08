// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "BoarCamera.generated.h"

UCLASS()
class PRIMERACLASE_API ABoarCamera : public ACineCameraActor
{
	GENERATED_BODY()

public:
	void moveRight();
	void moveLeft();
};
