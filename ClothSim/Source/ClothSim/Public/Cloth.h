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

	UFUNCTION(BlueprintCallable, Category = "Cloth | Functions")
	void ReleaseCloth();

	UFUNCTION(BlueprintCallable, Category = "Cloth | Functions")
	void ResetCloth();

	UFUNCTION(BlueprintCallable, Category = "Cloth | Functions")
	void ConstrictCloth(float _constrictedAmount);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Destroyed() override;

	void CreateParticles();
	void CreateConstraints();

	void GenerateMesh();

	void CheckForCollision();

	FVector GetParticleNormal(int _XIndex, int _YIndex);

	void CalculateWindVector();

	void CleanUp();



	void TryCreateTriangles(ClothParticle* _topLeft, ClothParticle* _topRight,
		ClothParticle* _bottomLeft, ClothParticle* _bottomRight, int _topLeftIndex);

	void Update();

	UPROPERTY(EditDefaultsOnly, Category = Mesh)
		 UProceduralMeshComponent* ClothMesh;
	
	UPROPERTY(EditDefaultsOnly, Category = Mesh)
		UMaterial* ClothMaterial = nullptr;


	TArray<FVector>          ClothVertices;
	TArray<int32>            ClothTriangles;
	TArray<FVector>          ClothNormals;
	
	TArray<FVector2D>        ClothUV;
	TArray<FLinearColor>     ClothColors;
	

	// Particle grid
	TArray<TArray<ClothParticle*>> Particles;
	
	// Constraint list 
	TArray<ClothConstraint*> Constraints;

	// Cloth properties 

	/////////////////////////////////////////////
	UPROPERTY(EditDefaultsOnly, Category = Cloth)
		float ClothWidth  = 200.0f;  // CM
	/////////////////////////////////////////////


	/////////////////////////////////////////////
	UPROPERTY(EditDefaultsOnly, Category = Cloth)
		float ClothHeight = 200.0f;  // CM
	/////////////////////////////////////////////


	/////////////////////////////////////////////
	UPROPERTY(EditDefaultsOnly, Category = Cloth)
		int NumHorzParticles = 30;
	/////////////////////////////////////////////


	/////////////////////////////////////////////
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Cloth)
		int NumHooks = 6;
	/////////////////////////////////////////////	
	 
	
	/////////////////////////////////////////////
	UPROPERTY(EditDefaultsOnly, Category = Cloth)
		int NumVertParticles = 30;
	/////////////////////////////////////////////




	/////////////////////////////////////////////
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Cloth)
		float ConstrictedWidth = 200.0f;
	/////////////////////////////////////////////


	float HorzDist; // ClothWidth  / NumHorzParticles
	float VertDist; // ClothHeight / NumVertParticles


	/////////////////////////////////////////////
	UPROPERTY(EditDefaultsOnly, Category = Simulation)
		int UpdateSteps = 100;	
	/////////////////////////////////////////////


	/////////////////////////////////////////////
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Simulation)
		FRotator WindRotation = { 0,0,0 };
	/////////////////////////////////////////////


	/////////////////////////////////////////////
	UPROPERTY(EditDefaultsOnly, Category = Simulation)
		float WindOscillationFrequence1 = 1.0f;
	/////////////////////////////////////////////


	/////////////////////////////////////////////
	UPROPERTY(EditDefaultsOnly, Category =Simulation)
		float WindOscillationFrequence2 = 1.0f;
	/////////////////////////////////////////////


	/////////////////////////////////////////////
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Simulation)
		FVector WindVector = FVector(100.0f, 2000.0f, 100.0f);
	/////////////////////////////////////////////


	/////////////////////////////////////////////
	UPROPERTY(EditDefaultsOnly, Category = Simulation)
		float GroundHeight = 0;
	/////////////////////////////////////////////


	/////////////////////////////////////////////
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Simulation)
		float WindStrength = 1000.0f;
	/////////////////////////////////////////////
		

	/////////////////////////////////////////////
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Simulation)
		float WindMultiplier = 1.0f;
	/////////////////////////////////////////////

	UPROPERTY(EditAnywhere, Category = Collision)
	FVector SpherePosition;

	UPROPERTY(EditAnywhere, Category = Collision)
		float SphereRadius;


	FTimerHandle UpdateTimer;
		float TimeStep = 0.016f; // 60 FPS

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
