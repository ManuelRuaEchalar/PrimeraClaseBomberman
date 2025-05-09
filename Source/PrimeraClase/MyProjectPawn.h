// MyProjectPawn.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Cubo.h"
#include "BoarCamera.h"
#include "Enemigo.h"
#include "MetalEnemyFactory.h"
#include "WoodEnemyFactory.h"
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

	// Fábricas de enemigos
	UPROPERTY()
		AMetalEnemyFactory* MetalFactory;

	UPROPERTY()
		AWoodEnemyFactory* WoodFactory;

	// Array para almacenar enemigos creados
	UPROPERTY()
		TArray<AEnemigo*> EnemigosActivos;

	// Timer para creación de enemigos
	FTimerHandle TimerHandle_SpawnEnemigos;

	// Timer para eliminación de enemigos
	FTimerHandle TimerHandle_DestroyEnemigos;

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

	// Método para crear enemigos
	void SpawnEnemigos();

	// Método para eliminar enemigos
	void DestroyEnemigos();
};