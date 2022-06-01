// Fill out your copyright notice in the Description page of Project Settings.


#include "TankMovementComponent.h"
#include "TankTrack.h"

void UTankMovementComponent::InternMoveForward(float Throw)
{
	if (!LeftTrack || !RightTrack)
	{
		return;
	}
	LeftTrack->SetThrottle(Throw);
	RightTrack->SetThrottle(Throw);
}

void UTankMovementComponent::InternTurnRight(float Throw)
{
	LeftTrack->SetThrottle(Throw);
	RightTrack->SetThrottle(-Throw);
}

void UTankMovementComponent::Initialise(UTankTrack* LeftTrackToset, UTankTrack* RightTrackToSet)
{
	LeftTrack = LeftTrackToset;
	RightTrack = RightTrackToSet;
}
