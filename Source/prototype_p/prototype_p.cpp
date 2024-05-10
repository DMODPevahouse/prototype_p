// Copyright Epic Games, Inc. All Rights Reserved.

#include "prototype_p.h"
#include "Modules/ModuleManager.h"
#include "SkeletalMesh.h"
#include "Animation/AnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "UserWidget.h"
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, prototype_p, "prototype_p" );
 
// adding title screen module
class FTitleScreenModule : public IModuleInterface
{

};

IMPLEMENT_MODULE(FTitleScreenModule, TitleScreenModule);

// adding content to the title screen module
class FTitleScreenModule : public IModuleInterface
{
	// Called when the module is loaded
	virtual void StartupModule() override
	{
		UE_LOG(LogTemp, Warning, TEXT("Title Screen Module has started!"));
	}

	// Called when the module is unloaded
	virtual void ShutdownModule() override
	{
		UE_LOG(LogTemp, Warning, TEXT("Title Screen Module has shut down!"));
	}

	// Adding a widget to the title screen
	UUserWidget* TitleScreenWidget = CreateWidget<UUserWidget>(GetWorld(), TitleScreenWidgetClass);
};

// creating a character creation ui module
class FCharacterCreationUIModule : public IModuleInterface
{
	// Called when the module is loaded
	virtual void StartupModule() override
	{
		UE_LOG(LogTemp, Warning, TEXT("Character Creation UI Module has started!"));
	}

	// Called when the module is unloaded
	virtual void ShutdownModule() override
	{
		UE_LOG(LogTemp, Warning, TEXT("Character Creation UI Module has shut down!"));
	}

	// Adding a widget to the character creation ui
	UUserWidget* CharacterCreationWidget = CreateWidget<UUserWidget>(GetWorld(), CharacterCreationWidgetClass);
};

// creating a character creation module
class FCharacterCreationModule : public IModuleInterface
{
	// Called when the module is loaded
	virtual void StartupModule() override
	{
		UE_LOG(LogTemp, Warning, TEXT("Character Creation Module has started!"));
	}

	// Called when the module is unloaded
	virtual void ShutdownModule() override
	{
		UE_LOG(LogTemp, Warning, TEXT("Character Creation Module has shut down!"));
	}

	// Adding a widget to the character creation
	UUserWidget* CharacterCreationWidget = CreateWidget<UUserWidget>(GetWorld(), CharacterCreationWidgetClass);
};

// add a character physics module
class FCharacterPhysicsModule : public IModuleInterface
{
	// Called when the module is loaded
	virtual void StartupModule() override
	{
		UE_LOG(LogTemp, Warning, TEXT("Character Physics Module has started!"));
	}

	// Called when the module is unloaded
	virtual void ShutdownModule() override
	{
		UE_LOG(LogTemp, Warning, TEXT("Character Physics Module has shut down!"));
	}

	// Adding a widget to the character physics
	UUserWidget* CharacterPhysicsWidget = CreateWidget<UUserWidget>(GetWorld(), CharacterPhysicsWidgetClass);
};

// add an example enemy ai module
class FExampleEnemyAIModule : public IModuleInterface
{
	// Called when the module is loaded
	virtual void StartupModule() override
	{
		UE_LOG(LogTemp, Warning, TEXT("Example Enemy AI Module has started!"));
	}

	// Called when the module is unloaded
	virtual void ShutdownModule() override
	{
		UE_LOG(LogTemp, Warning, TEXT("Example Enemy AI Module has shut down!"));
	}

	// Adding a widget to the example enemy ai
	UUserWidget* ExampleEnemyAIWidget = CreateWidget<UUserWidget>(GetWorld(), ExampleEnemyAIWidgetClass);
};

// add a character movement module
class FCharacterMovementModule : public IModuleInterface
{
	// Called when the module is loaded
	virtual void StartupModule() override
	{
		UE_LOG(LogTemp, Warning, TEXT("Character Movement Module has started!"));
	}

	// Called when the module is unloaded
	virtual void ShutdownModule() override
	{
		UE_LOG(LogTemp, Warning, TEXT("Character Movement Module has shut down!"));
	}

	// Adding a widget to the character movement
	UUserWidget* CharacterMovementWidget = CreateWidget<UUserWidget>(GetWorld(), CharacterMovementWidgetClass);
};

// add diagnostics module
class FDiagnosticsModule : public IModuleInterface
{
	// Called when the module is loaded
	virtual void StartupModule() override
	{
		UE_LOG(LogTemp, Warning, TEXT("Diagnostics Module has started!"));
	}

	// Called when the module is unloaded
	virtual void ShutdownModule() override
	{
		UE_LOG(LogTemp, Warning, TEXT("Diagnostics Module has shut down!"));
	}

	// Adding a widget to the diagnostics
	UUserWidget* DiagnosticsWidget = CreateWidget<UUserWidget>(GetWorld(), DiagnosticsWidgetClass);
};