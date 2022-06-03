// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "TankBarrel.h"
#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"

class UTankTurret;

//Hold barrels properties and Elevate method
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLETANK_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UFUNCTION(BlueprintCallable, Category = "Setup")
	void Initialise(UTankBarrel* BarrelToset, UTankTurret* TurretToSet);

	void AimAt(FVector HitLocation, float LaunchSpeed);
	
	
private:
	// Sets default values for this component's properties
	UTankAimingComponent();
	UTankBarrel* Barrel = nullptr;
	UTankTurret* Turret = nullptr;
	void MoveBarrelToWards(FVector AimDirection);
};
