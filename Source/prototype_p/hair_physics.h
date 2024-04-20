
#pragma once

#include "CoreMinimal.h"
#include "GroomSimulation.h"

class MYGAME_API HairPhysics : public UGroomSimulation
{
    GENERATED_BODY()

public:
    HairPhysics();
    virtual ~HairPhysics();

    // Override the simulation functions
    virtual void Simulate(float DeltaTime) override;
    virtual void InitializeSimulation() override;
    virtual void ShutdownSimulation() override;

private:
    // Your custom hair simulation data and functions
    TArray<float> HairPositions;
    TArray<float> HairVelocities;
    float Stiffness;
    float Damping;
    float Gravity;
};