// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cloth.generated.h"

class ClothParticle; 
class ClothConstraint;
class UProceduralMeshComponent;

UCLASS()
class CLOTHSIM_API ACloth : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACloth();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Destroyed() override;

	void CreateParticles();
	void CreateConstraints();

	void GenerateMesh();

	void TryCreateTriangles(ClothParticle* _topLeft, ClothParticle* _topRight,
		ClothParticle* _bottomLeft, ClothParticle* _bottomRight, int _topLeftIndex);

	void Update();

	UPROPERTY(EditDefaultsOnly, Category = Mesh)
		 UProceduralMeshComponent* ClothMesh;
	
	UPROPERTY(EditDefaultsOnly, Category = Mesh)
		UMaterial* ClothMaterial = nullptr;


	TArray<FVector>          ClothVertices;
	TArray<int32>            ClothTriangles;
	TArray<FVector>          ClothNormal;
	
	TArray<FVector2D>        ClothUV;
	TArray<FLinearColor>     ClothColors;
	

	// Particle grid
	TArray<TArray<ClothParticle*>> Particles;
	
	// Constraint list 
	TArray<ClothConstraint*> Constraints;

	// Cloth properties 

	UPROPERTY(EditDefaultsOnly, Category = Cloth)
	float ClothWidth  = 200.0f;  // CM
	UPROPERTY(EditDefaultsOnly, Category = Cloth)
	float ClothHeight = 200.0f;  // CM

	UPROPERTY(EditDefaultsOnly, Category = Cloth)
	int NumHorzParticles = 30;
	UPROPERTY(EditDefaultsOnly, Category = Cloth)
	int NumVertParticles = 30;

	float HorzDist; // ClothWidth  / NumHorzParticles
	float VertDist; // ClothHeight / NumVertParticles

	UPROPERTY(EditDefaultsOnly, Category = Cloth)
	int UpdateSteps = 1;

	FTimerHandle UpdateTimer;
	float TimeStep = 0.016f; // 60 FPS

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
