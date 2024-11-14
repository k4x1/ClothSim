// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloth.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLOTHSIM_Cloth_generated_h
#error "Cloth.generated.h already included, missing '#pragma once' in Cloth.h"
#endif
#define CLOTHSIM_Cloth_generated_h

#define FID_forkRepos_ClothSim_ClothSim_Source_ClothSim_Public_Cloth_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConstrictCloth); \
	DECLARE_FUNCTION(execResetCloth); \
	DECLARE_FUNCTION(execReleaseCloth);


#define FID_forkRepos_ClothSim_ClothSim_Source_ClothSim_Public_Cloth_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACloth(); \
	friend struct Z_Construct_UClass_ACloth_Statics; \
public: \
	DECLARE_CLASS(ACloth, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ClothSim"), NO_API) \
	DECLARE_SERIALIZER(ACloth)


#define FID_forkRepos_ClothSim_ClothSim_Source_ClothSim_Public_Cloth_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACloth(ACloth&&); \
	ACloth(const ACloth&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACloth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACloth); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACloth) \
	NO_API virtual ~ACloth();


#define FID_forkRepos_ClothSim_ClothSim_Source_ClothSim_Public_Cloth_h_13_PROLOG
#define FID_forkRepos_ClothSim_ClothSim_Source_ClothSim_Public_Cloth_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_forkRepos_ClothSim_ClothSim_Source_ClothSim_Public_Cloth_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_forkRepos_ClothSim_ClothSim_Source_ClothSim_Public_Cloth_h_16_INCLASS_NO_PURE_DECLS \
	FID_forkRepos_ClothSim_ClothSim_Source_ClothSim_Public_Cloth_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLOTHSIM_API UClass* StaticClass<class ACloth>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_forkRepos_ClothSim_ClothSim_Source_ClothSim_Public_Cloth_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
