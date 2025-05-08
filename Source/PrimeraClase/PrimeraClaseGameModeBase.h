// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyProjectPawn.h"
#include "PrimeraClaseGameModeBase.generated.h"

/**
 *
 */
UCLASS()
class PRIMERACLASE_API APrimeraClaseGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	APrimeraClaseGameModeBase();
	virtual void BeginPlay() override;
};
