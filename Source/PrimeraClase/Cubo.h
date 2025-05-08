// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cubo.generated.h"

UCLASS()
class PRIMERACLASE_API ACubo : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACubo();
	void moveRight();
	void moveLeft();
	int getCodigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	int codigo = 123;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
		UStaticMeshComponent* CubeMesh;
};
