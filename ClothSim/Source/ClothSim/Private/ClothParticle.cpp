// Fill out your copyright notice in the Description page of Project Settings.


#include "ClothParticle.h"
#include "ClothConstraint.h"

ClothParticle::ClothParticle(FVector _position)
{
	Position = _position;
    OldPosition = Position;
}

ClothParticle::~ClothParticle()
{
}

void ClothParticle::AddConstraint(ClothConstraint* _constraint)
{
	Constraints.Add(_constraint);
}

FVector ClothParticle::GetPosition()
{
	return Position;
}

TArray<class ClothConstraint*> ClothParticle::GetConstraints()
{
	return Constraints;
}

bool ClothParticle::GetPinned()
{
	return IsPinned;
}

void ClothParticle::SetPinned(bool _pin)
{
    IsPinned = _pin;
}

bool ClothParticle::SharesConstraint(ClothParticle* _otherParticle)
{
	for (auto iter : _otherParticle->GetConstraints())
	{
		if (Constraints.Contains(iter))
		{
			return true;
		}
	}
	return false;
}

void ClothParticle::OffsetPosition(FVector _offset)
{
	Position += _offset;
}

void ClothParticle::AddForce(FVector _force)
{
	Acceleration += _force;
}

void ClothParticle::Update(float _deltaTime)
{
    if (GetPinned())
    {
        Acceleration = { 0, 0, 0 };
    }
    else
    {
        Acceleration += { -2, -10, -100 };
    }

    FVector cachedPosition = Position;

    if (OldDeltaTime <= 0.0f)
    {
        OldDeltaTime = _deltaTime;
    }

    Position = Position + 
        ((Position - OldPosition) * (_deltaTime / OldDeltaTime)) + 
        (Acceleration * _deltaTime * ((_deltaTime + OldDeltaTime) * 0.5f));


    Acceleration = { 0, 0, 0 };

    OldPosition = cachedPosition;
    OldDeltaTime = _deltaTime;
}
