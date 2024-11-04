// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */

class ClothConstraint;

class CLOTHSIM_API ClothParticle
{
public:
	ClothParticle(FVector _position);
	~ClothParticle();

	void AddConstraint(ClothConstraint* _constraint);

	bool SharesConstraint(ClothParticle* _otherParticle);

	TArray<ClothConstraint*> GetConstraints();

	bool GetPinned();
	void SetPinned(bool _pin);

	FVector GetPosition();

	void OffsetPosition(FVector _offset);

	void AddForce(FVector _force);

	void Update(float _deltaTime);

private:
	FVector Position = FVector::ZeroVector;
	FVector OldPosition = FVector::ZeroVector;
	float OldDeltaTime = -1.0f;
	FVector Acceleration = FVector::ZeroVector;
	TArray<ClothConstraint*> Constraints;
	bool IsPinned = false;
	float Damping = 0.01f; 
};
