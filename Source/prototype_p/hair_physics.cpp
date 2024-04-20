// MyHairSimulation.cpp
#include "hair_physics.h"

HairPhysics::HairPhysics()
{
    // Initialize your custom hair simulation data
    Stiffness = 0.5f;
    Damping = 0.1f;
    Gravity = -9.8f;
}

HairPhysics::~HairPhysics()
{
    // Clean up your custom hair simulation data
}

void HairPhysics::Simulate(float DeltaTime)
{
    // Your custom hair simulation logic goes here
    // Update hair positions and velocities based on physics
    for (int i = 0; i < HairPositions.Num(); i++)
    {
        float Position = HairPositions[i];
        float Velocity = HairVelocities[i];
        // Update position and velocity based on stiffness, damping, and gravity
        Position += Velocity * DeltaTime;
        Velocity += (Stiffness * (Position - HairPositions[i])) * DeltaTime;
        Velocity *= (1.0f - Damping * DeltaTime);
        HairPositions[i] = Position;
        HairVelocities[i] = Velocity;
    }
}

void HairPhysics::InitializeSimulation()
{
    // Initialize your custom hair simulation data
    HairPositions.SetNumZeroed(GetGroom()->GetVertexCount());
    HairVelocities.SetNumZeroed(GetGroom()->GetVertexCount());
}

void HairPhysics::ShutdownSimulation()
{
    // Clean up your custom hair simulation data
    HairPositions.Empty();
    HairVelocities.Empty();
}