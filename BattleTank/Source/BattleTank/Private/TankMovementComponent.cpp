// Fill out your copyright notice in the Description page of Project Settings.


#include "TankMovementComponent.h"
#include "TankTrack.h"

void UTankMovementComponent::InternMoveForward(float Throw)
{
	//auto Time = GetWorld()->GetTimeSeconds();
	UE_LOG(LogTemp, Warning, TEXT("Intend move forward throw: %f"),Throw);

	LeftTrack->SetThrottle(Throw);
	RightTrack->SetThrottle(Throw);
}

void UTankMovementComponent::Initialise(UTankTrack* LeftTrackToset, UTankTrack* RightTrackToSet)
{
	if (!LeftTrackToset || !RightTrackToSet)
	{
		return;
	}

	LeftTrack = LeftTrackToset;
	RightTrack = RightTrackToSet;
}
