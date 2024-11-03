// Fill out your copyright notice in the Description page of Project Settings.


#include "Cloth.h"
#include "ClothParticle.h"
#include "ClothConstraint.h"
#include "ProceduralMeshComponent.h"
#include "KismetProceduralMeshLibrary.h"


// Sets default values
ACloth::ACloth()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ClothMesh = CreateDefaultSubobject<UProceduralMeshComponent>("Procedural Mesh");
	ClothMesh->SetupAttachment(RootComponent);

}


// Called when the game starts or when spawned
void ACloth::BeginPlay()
{
	Super::BeginPlay();

	ClothMesh->SetMaterial(0, ClothMaterial);

	CreateParticles();
	CreateConstraints();

	GenerateMesh();

	GetWorldTimerManager().SetTimer(UpdateTimer, this, &ACloth::Update, TimeStep, true);
}

void ACloth::Destroyed()
{
	for (int Vert = 0; Vert < Particles.Num(); Vert++)
	{
		for (int Horz = 0; Horz < Particles[Vert].Num(); Horz++)
		{
			delete Particles[Vert][Horz];
		}
	}
	for (auto iter : Constraints)
	{
		delete iter;
	}
	Particles.Empty();
	Constraints.Empty();
	Super::Destroyed();
}

void ACloth::CreateParticles()
{
	HorzDist = ClothWidth  / (NumHorzParticles - 1);
	VertDist = ClothHeight / (NumVertParticles - 1);

	FVector StartPos(0);
	StartPos.X = -ClothWidth / 2;
	StartPos.Z = -ClothHeight / 2;

	for (int Vert = 0; Vert < NumVertParticles; Vert++)
	{
		TArray<ClothParticle*> ParticleRow;
		for (int Horz = 0; Horz < NumHorzParticles; Horz++)
		{
			FVector ParticlePos = { StartPos.X + Horz * HorzDist, StartPos.Y, StartPos.Z - Vert * VertDist };
			ClothParticle* NewParticle = new ClothParticle(ParticlePos);
			// vvvvvvvv
			bool shouldPin = Vert == 0 && Horz % 5 == 0;
			NewParticle->SetPinned(shouldPin); // Set pinned to true when we are the first row
			// ^^^^^^^^
			ParticleRow.Add(NewParticle);
		}
		Particles.Add(ParticleRow);
	}
}

void ACloth::CreateConstraints()
{
	for (int Vert = 0; Vert < NumVertParticles; Vert++)
	{
		for (int Horz = 0; Horz < NumHorzParticles; Horz++)
		{
			if (Vert < NumVertParticles - 1)
			{
				// Make vertical constraint
				ClothConstraint* NewConstraint = new ClothConstraint(Particles[Vert][Horz], Particles[Vert + 1][Horz]);
				Constraints.Add(NewConstraint);

				Particles[Vert][Horz]->AddConstraint(NewConstraint);
				Particles[Vert+1][Horz]->AddConstraint(NewConstraint);
			}
			if (Horz < NumHorzParticles - 1)
			{
				// Make horizontal constraint
				ClothConstraint* NewConstraint = new ClothConstraint(Particles[Vert][Horz], Particles[Vert][Horz + 1]);
				Constraints.Add(NewConstraint);

				Particles[Vert][Horz]->AddConstraint(NewConstraint);
				Particles[Vert][Horz + 1]->AddConstraint(NewConstraint);
			}
		}
		
	}
}

void ACloth::GenerateMesh()
{
	ClothVertices.Reset();
	ClothTriangles.Reset();
	ClothNormal.Reset();
	ClothUV.Reset();
	ClothColors.Reset();

	for (int Vert = 0; Vert < NumVertParticles; Vert++)
	{
		for (int Horz = 0; Horz < NumHorzParticles; Horz++)
		{
			ClothVertices.Add(Particles[Vert][Horz]->GetPosition());
			ClothUV.Add(FVector2D(float(Horz) / (NumHorzParticles-1), float(Vert) / (NumVertParticles-1)));
			ClothColors.Add(FLinearColor::Black);
		}
	}	
	for (int Vert = 0; Vert < NumVertParticles-1; Vert++)
	{
		for (int Horz = 0; Horz < NumHorzParticles-1; Horz++)
		{
			TryCreateTriangles(Particles[Vert][Horz], Particles[Vert][Horz + 1], Particles[Vert + 1][Horz], Particles[Vert + 1][Horz + 1], Vert * NumHorzParticles + Horz);
		}
	}
	TArray<FProcMeshTangent> ClothTangents;

	UKismetProceduralMeshLibrary::CalculateTangentsForMesh(ClothVertices, ClothTriangles, ClothUV, ClothNormal, ClothTangents);

	ClothMesh->CreateMeshSection_LinearColor(0, ClothVertices, ClothTriangles, ClothNormal, ClothUV, ClothColors, ClothTangents, false);

}

void ACloth::TryCreateTriangles(ClothParticle* _topLeft, ClothParticle* _topRight, ClothParticle* _bottomLeft, ClothParticle* _bottomRight, int _topLeftIndex)
{
	int TopLeftIndex = _topLeftIndex;
	int TopRightIndex = _topLeftIndex + 1;
	int BottomLeftIndex = _topLeftIndex + NumHorzParticles;
	int BottomRightIndex = _topLeftIndex + NumHorzParticles + 1;

	if (_topLeft->SharesConstraint(_topRight) && _topLeft->SharesConstraint(_bottomLeft))
	{
		ClothTriangles.Add(TopLeftIndex);
		ClothTriangles.Add(TopRightIndex);	
		ClothTriangles.Add(BottomLeftIndex);

		if (_bottomRight->SharesConstraint(_topRight) && _bottomRight->SharesConstraint(_bottomLeft))
		{
			ClothTriangles.Add(TopRightIndex);
			ClothTriangles.Add(BottomRightIndex);
			ClothTriangles.Add(BottomLeftIndex);
		}
	}
	else if (_bottomLeft->SharesConstraint(_topLeft) && _bottomLeft->SharesConstraint(_bottomRight))
	{
		ClothTriangles.Add(BottomLeftIndex);
		ClothTriangles.Add(TopLeftIndex);
		ClothTriangles.Add(BottomRightIndex);

		if (_topRight->SharesConstraint(_bottomRight) && _topRight->SharesConstraint(_topLeft))
		{
			ClothTriangles.Add(TopRightIndex);
			ClothTriangles.Add(BottomRightIndex);
			ClothTriangles.Add(BottomLeftIndex);
		}
	}
}

// Called every frame
void ACloth::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	GenerateMesh();
}

// Tied to fixed frame update (60fps)
void ACloth::Update()
{
	// Update all constraints
	for (auto iter : Constraints)
	{
		iter->Update(TimeStep);
	}

	for (int Vert = 0; Vert < Particles.Num(); Vert++)
	{
		for (int Horz = 0; Horz < Particles[Vert].Num(); Horz++)
		{
			 Particles[Vert][Horz]->Update(TimeStep);
		}
	}
}


