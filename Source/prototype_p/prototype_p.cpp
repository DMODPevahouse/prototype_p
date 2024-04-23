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

