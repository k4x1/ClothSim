// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

class ClothParticle;
/**
 * 
 */
class CLOTHSIM_API ClothConstraint
{
public:
	ClothConstraint(ClothParticle* _particleA, ClothParticle* _particleB);
	~ClothConstraint();

	void Update(float _DeltaTime);
private: 
	ClothParticle* ParticleA = nullptr;
	ClothParticle* ParticleB = nullptr;

	float RestingDistance;
};
