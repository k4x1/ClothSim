// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothSim/Public/Cloth.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCloth() {}

// Begin Cross Module References
CLOTHSIM_API UClass* Z_Construct_UClass_ACloth();
CLOTHSIM_API UClass* Z_Construct_UClass_ACloth_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ClothSim();
// End Cross Module References

// Begin Class ACloth Function ConstrictCloth
struct Z_Construct_UFunction_ACloth_ConstrictCloth_Statics
{
	struct Cloth_eventConstrictCloth_Parms
	{
		float _constrictedAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cloth | Functions" },
		{ "ModuleRelativePath", "Public/Cloth.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__constrictedAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACloth_ConstrictCloth_Statics::NewProp__constrictedAmount = { "_constrictedAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Cloth_eventConstrictCloth_Parms, _constrictedAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACloth_ConstrictCloth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACloth_ConstrictCloth_Statics::NewProp__constrictedAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACloth_ConstrictCloth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACloth_ConstrictCloth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACloth, nullptr, "ConstrictCloth", nullptr, nullptr, Z_Construct_UFunction_ACloth_ConstrictCloth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACloth_ConstrictCloth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACloth_ConstrictCloth_Statics::Cloth_eventConstrictCloth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACloth_ConstrictCloth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACloth_ConstrictCloth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACloth_ConstrictCloth_Statics::Cloth_eventConstrictCloth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACloth_ConstrictCloth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACloth_ConstrictCloth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACloth::execConstrictCloth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param__constrictedAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConstrictCloth(Z_Param__constrictedAmount);
	P_NATIVE_END;
}
// End Class ACloth Function ConstrictCloth

// Begin Class ACloth Function ReleaseCloth
struct Z_Construct_UFunction_ACloth_ReleaseCloth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cloth | Functions" },
		{ "ModuleRelativePath", "Public/Cloth.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACloth_ReleaseCloth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACloth, nullptr, "ReleaseCloth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACloth_ReleaseCloth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACloth_ReleaseCloth_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACloth_ReleaseCloth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACloth_ReleaseCloth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACloth::execReleaseCloth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReleaseCloth();
	P_NATIVE_END;
}
// End Class ACloth Function ReleaseCloth

// Begin Class ACloth Function ResetCloth
struct Z_Construct_UFunction_ACloth_ResetCloth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cloth | Functions" },
		{ "ModuleRelativePath", "Public/Cloth.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACloth_ResetCloth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACloth, nullptr, "ResetCloth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACloth_ResetCloth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACloth_ResetCloth_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACloth_ResetCloth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACloth_ResetCloth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACloth::execResetCloth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCloth();
	P_NATIVE_END;
}
// End Class ACloth Function ResetCloth

// Begin Class ACloth
void ACloth::StaticRegisterNativesACloth()
{
	UClass* Class = ACloth::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConstrictCloth", &ACloth::execConstrictCloth },
		{ "ReleaseCloth", &ACloth::execReleaseCloth },
		{ "ResetCloth", &ACloth::execResetCloth },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACloth);
UClass* Z_Construct_UClass_ACloth_NoRegister()
{
	return ACloth::StaticClass();
}
struct Z_Construct_UClass_ACloth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Cloth.h" },
		{ "ModuleRelativePath", "Public/Cloth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClothMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cloth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClothMaterial_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/Cloth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClothWidth_MetaData[] = {
		{ "Category", "Cloth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Cloth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClothHeight_MetaData[] = {
		{ "Category", "Cloth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Cloth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumHorzParticles_MetaData[] = {
		{ "Category", "Cloth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Cloth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumHooks_MetaData[] = {
		{ "Category", "Cloth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Cloth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumVertParticles_MetaData[] = {
		{ "Category", "Cloth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Cloth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstrictedWidth_MetaData[] = {
		{ "Category", "Cloth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Cloth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateSteps_MetaData[] = {
		{ "Category", "Simulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Cloth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindRotation_MetaData[] = {
		{ "Category", "Simulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Cloth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindOscillationFrequence1_MetaData[] = {
		{ "Category", "Simulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Cloth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindOscillationFrequence2_MetaData[] = {
		{ "Category", "Simulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Cloth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindVector_MetaData[] = {
		{ "Category", "Simulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Cloth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundHeight_MetaData[] = {
		{ "Category", "Simulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Cloth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindStrength_MetaData[] = {
		{ "Category", "Simulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Cloth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WindMultiplier_MetaData[] = {
		{ "Category", "Simulation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Cloth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpherePosition_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/Cloth.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/Cloth.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClothMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClothMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClothWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClothHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumHorzParticles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumHooks;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumVertParticles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstrictedWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UpdateSteps;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WindRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindOscillationFrequence1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindOscillationFrequence2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WindVector;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpherePosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACloth_ConstrictCloth, "ConstrictCloth" }, // 3085972716
		{ &Z_Construct_UFunction_ACloth_ReleaseCloth, "ReleaseCloth" }, // 1838517469
		{ &Z_Construct_UFunction_ACloth_ResetCloth, "ResetCloth" }, // 2953240655
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACloth>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACloth_Statics::NewProp_ClothMesh = { "ClothMesh", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACloth, ClothMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClothMesh_MetaData), NewProp_ClothMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACloth_Statics::NewProp_ClothMaterial = { "ClothMaterial", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACloth, ClothMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClothMaterial_MetaData), NewProp_ClothMaterial_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACloth_Statics::NewProp_ClothWidth = { "ClothWidth", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACloth, ClothWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClothWidth_MetaData), NewProp_ClothWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACloth_Statics::NewProp_ClothHeight = { "ClothHeight", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACloth, ClothHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClothHeight_MetaData), NewProp_ClothHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACloth_Statics::NewProp_NumHorzParticles = { "NumHorzParticles", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACloth, NumHorzParticles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumHorzParticles_MetaData), NewProp_NumHorzParticles_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACloth_Statics::NewProp_NumHooks = { "NumHooks", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACloth, NumHooks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumHooks_MetaData), NewProp_NumHooks_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACloth_Statics::NewProp_NumVertParticles = { "NumVertParticles", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACloth, NumVertParticles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumVertParticles_MetaData), NewProp_NumVertParticles_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACloth_Statics::NewProp_ConstrictedWidth = { "ConstrictedWidth", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACloth, ConstrictedWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstrictedWidth_MetaData), NewProp_ConstrictedWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACloth_Statics::NewProp_UpdateSteps = { "UpdateSteps", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACloth, UpdateSteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateSteps_MetaData), NewProp_UpdateSteps_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACloth_Statics::NewProp_WindRotation = { "WindRotation", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACloth, WindRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindRotation_MetaData), NewProp_WindRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACloth_Statics::NewProp_WindOscillationFrequence1 = { "WindOscillationFrequence1", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACloth, WindOscillationFrequence1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindOscillationFrequence1_MetaData), NewProp_WindOscillationFrequence1_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACloth_Statics::NewProp_WindOscillationFrequence2 = { "WindOscillationFrequence2", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACloth, WindOscillationFrequence2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindOscillationFrequence2_MetaData), NewProp_WindOscillationFrequence2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACloth_Statics::NewProp_WindVector = { "WindVector", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACloth, WindVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindVector_MetaData), NewProp_WindVector_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACloth_Statics::NewProp_GroundHeight = { "GroundHeight", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACloth, GroundHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundHeight_MetaData), NewProp_GroundHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACloth_Statics::NewProp_WindStrength = { "WindStrength", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACloth, WindStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindStrength_MetaData), NewProp_WindStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACloth_Statics::NewProp_WindMultiplier = { "WindMultiplier", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACloth, WindMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WindMultiplier_MetaData), NewProp_WindMultiplier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACloth_Statics::NewProp_SpherePosition = { "SpherePosition", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACloth, SpherePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpherePosition_MetaData), NewProp_SpherePosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACloth_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACloth, SphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereRadius_MetaData), NewProp_SphereRadius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACloth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_ClothMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_ClothMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_ClothWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_ClothHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_NumHorzParticles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_NumHooks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_NumVertParticles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_ConstrictedWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_UpdateSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_WindRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_WindOscillationFrequence1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_WindOscillationFrequence2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_WindVector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_GroundHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_WindStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_WindMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_SpherePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_SphereRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACloth_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACloth_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ClothSim,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACloth_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACloth_Statics::ClassParams = {
	&ACloth::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACloth_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACloth_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACloth_Statics::Class_MetaDataParams), Z_Construct_UClass_ACloth_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACloth()
{
	if (!Z_Registration_Info_UClass_ACloth.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACloth.OuterSingleton, Z_Construct_UClass_ACloth_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACloth.OuterSingleton;
}
template<> CLOTHSIM_API UClass* StaticClass<ACloth>()
{
	return ACloth::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACloth);
ACloth::~ACloth() {}
// End Class ACloth

// Begin Registration
struct Z_CompiledInDeferFile_FID_forkRepos_ClothSim_ClothSim_Source_ClothSim_Public_Cloth_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACloth, ACloth::StaticClass, TEXT("ACloth"), &Z_Registration_Info_UClass_ACloth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACloth), 3572057735U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_forkRepos_ClothSim_ClothSim_Source_ClothSim_Public_Cloth_h_2587827286(TEXT("/Script/ClothSim"),
	Z_CompiledInDeferFile_FID_forkRepos_ClothSim_ClothSim_Source_ClothSim_Public_Cloth_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_forkRepos_ClothSim_ClothSim_Source_ClothSim_Public_Cloth_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
