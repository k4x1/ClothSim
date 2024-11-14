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

void ClothParticle::SetPosition(FVector _NewPos)
{
    Position = _NewPos;
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
    if(!GetPinned())
    {
    	Position += _offset;
    }
}

void ClothParticle::AddForce(FVector _force)
{
	Acceleration += _force;
}

void ClothParticle::Update(float _deltaTime)
{
  
    if (GetPinned() || OnGround)
    {
        Acceleration = { 0, 0, 0 };
        return;
    }  
   
    
    FVector cachedPosition = Position;

    if (OldDeltaTime <= 0.0f)
    {
        OldDeltaTime = _deltaTime;
    }
    // Frame rate dependent
 /*   Position = Position +
        ((Position - OldPosition) * ((1.0f-Damping)*
        (_deltaTime / OldDeltaTime))) + 
        (Acceleration * _deltaTime * ((_deltaTime + OldDeltaTime) * 0.5f));*/

    // Non-frame rate dependent
    Position = Position +
        (Position - OldPosition) * (1.0f - Damping) + 
        Acceleration * _deltaTime;

    Acceleration = { 0, 0, 0 };

    OldPosition = cachedPosition;
    OldDeltaTime = _deltaTime;
}

void ClothParticle::CheckForGroundCollision(float _groundHeight)
{
    if (Position.Z <= _groundHeight + 1)
    {
        OnGround = true;
        if (Position.Z <= _groundHeight)
        {
            Position.Z = _groundHeight;
        }
    }
    else
    {
        OnGround = false;
    }
}


void ClothParticle::CheckForCollision(FVector _spherePos, float _sphereRad)
{
    FVector VecToSphere = Position - _spherePos;
    float distance = VecToSphere.Size();
    if (distance < _sphereRad)
    {
        FVector Normal = VecToSphere / distance;
        Position = _spherePos + Normal * _sphereRad;
    }
}
