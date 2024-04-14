// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "prototype_pProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PROTOTYPE_P_prototype_pProjectile_generated_h
#error "prototype_pProjectile.generated.h already included, missing '#pragma once' in prototype_pProjectile.h"
#endif
#define PROTOTYPE_P_prototype_pProjectile_generated_h

#define FID_prototype_p_Source_prototype_p_prototype_pProjectile_h_15_SPARSE_DATA
#define FID_prototype_p_Source_prototype_p_prototype_pProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_prototype_p_Source_prototype_p_prototype_pProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_prototype_p_Source_prototype_p_prototype_pProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_prototype_p_Source_prototype_p_prototype_pProjectile_h_15_ACCESSORS
#define FID_prototype_p_Source_prototype_p_prototype_pProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAprototype_pProjectile(); \
	friend struct Z_Construct_UClass_Aprototype_pProjectile_Statics; \
public: \
	DECLARE_CLASS(Aprototype_pProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/prototype_p"), NO_API) \
	DECLARE_SERIALIZER(Aprototype_pProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_prototype_p_Source_prototype_p_prototype_pProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aprototype_pProjectile(Aprototype_pProjectile&&); \
	NO_API Aprototype_pProjectile(const Aprototype_pProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aprototype_pProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aprototype_pProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Aprototype_pProjectile) \
	NO_API virtual ~Aprototype_pProjectile();


#define FID_prototype_p_Source_prototype_p_prototype_pProjectile_h_12_PROLOG
#define FID_prototype_p_Source_prototype_p_prototype_pProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_prototype_p_Source_prototype_p_prototype_pProjectile_h_15_SPARSE_DATA \
	FID_prototype_p_Source_prototype_p_prototype_pProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_prototype_p_Source_prototype_p_prototype_pProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_prototype_p_Source_prototype_p_prototype_pProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_prototype_p_Source_prototype_p_prototype_pProjectile_h_15_ACCESSORS \
	FID_prototype_p_Source_prototype_p_prototype_pProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_prototype_p_Source_prototype_p_prototype_pProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROTOTYPE_P_API UClass* StaticClass<class Aprototype_pProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_prototype_p_Source_prototype_p_prototype_pProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
