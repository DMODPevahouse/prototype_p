// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "prototype_p/prototype_pGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeprototype_pGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PROTOTYPE_P_API UClass* Z_Construct_UClass_Aprototype_pGameMode();
	PROTOTYPE_P_API UClass* Z_Construct_UClass_Aprototype_pGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_prototype_p();
// End Cross Module References
	void Aprototype_pGameMode::StaticRegisterNativesAprototype_pGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aprototype_pGameMode);
	UClass* Z_Construct_UClass_Aprototype_pGameMode_NoRegister()
	{
		return Aprototype_pGameMode::StaticClass();
	}
	struct Z_Construct_UClass_Aprototype_pGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aprototype_pGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_prototype_p,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aprototype_pGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aprototype_pGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "prototype_pGameMode.h" },
		{ "ModuleRelativePath", "prototype_pGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aprototype_pGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aprototype_pGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Aprototype_pGameMode_Statics::ClassParams = {
		&Aprototype_pGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aprototype_pGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_Aprototype_pGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_Aprototype_pGameMode()
	{
		if (!Z_Registration_Info_UClass_Aprototype_pGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aprototype_pGameMode.OuterSingleton, Z_Construct_UClass_Aprototype_pGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Aprototype_pGameMode.OuterSingleton;
	}
	template<> PROTOTYPE_P_API UClass* StaticClass<Aprototype_pGameMode>()
	{
		return Aprototype_pGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aprototype_pGameMode);
	Aprototype_pGameMode::~Aprototype_pGameMode() {}
	struct Z_CompiledInDeferFile_FID_prototype_p_Source_prototype_p_prototype_pGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_prototype_p_Source_prototype_p_prototype_pGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Aprototype_pGameMode, Aprototype_pGameMode::StaticClass, TEXT("Aprototype_pGameMode"), &Z_Registration_Info_UClass_Aprototype_pGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aprototype_pGameMode), 3803082146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_prototype_p_Source_prototype_p_prototype_pGameMode_h_1095456063(TEXT("/Script/prototype_p"),
		Z_CompiledInDeferFile_FID_prototype_p_Source_prototype_p_prototype_pGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_prototype_p_Source_prototype_p_prototype_pGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
