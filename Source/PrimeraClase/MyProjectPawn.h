// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Cubo.h"
#include "BoarCamera.h"
#include "MyProjectPawn.generated.h"

UCLASS()
class PRIMERACLASE_API AMyProjectPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyProjectPawn();

	// Instancias del cubo y la cámara
	ACubo* cubo;
	ABoarCamera* BoardCamera;

	// Banderas de movimiento
	bool bIsMovingRight;
	bool bIsMovingLeft;
	int activo = 0;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Métodos de entrada
	void StartMovingRight();
	void StopMovingRight();
	void MoveRight();

	void startMovingLeft();
	void stopMovingLeft();
	void moveLeft();
};
