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
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ClothSim();
// End Cross Module References

// Begin Class ACloth
void ACloth::StaticRegisterNativesACloth()
{
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
		{ "Comment", "// Cloth properties \n" },
#endif
		{ "ModuleRelativePath", "Public/Cloth.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cloth properties" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClothHeight_MetaData[] = {
		{ "Category", "Cloth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CM\n" },
#endif
		{ "ModuleRelativePath", "Public/Cloth.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CM" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumHorzParticles_MetaData[] = {
		{ "Category", "Cloth" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// CM\n" },
#endif
		{ "ModuleRelativePath", "Public/Cloth.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "CM" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumVertParticles_MetaData[] = {
		{ "Category", "Cloth" },
		{ "ModuleRelativePath", "Public/Cloth.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClothMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClothMaterial;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClothWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ClothHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumHorzParticles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumVertParticles;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
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
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACloth_Statics::NewProp_NumVertParticles = { "NumVertParticles", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACloth, NumVertParticles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumVertParticles_MetaData), NewProp_NumVertParticles_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACloth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_ClothMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_ClothMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_ClothWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_ClothHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_NumHorzParticles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACloth_Statics::NewProp_NumVertParticles,
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
	nullptr,
	Z_Construct_UClass_ACloth_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
		{ Z_Construct_UClass_ACloth, ACloth::StaticClass, TEXT("ACloth"), &Z_Registration_Info_UClass_ACloth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACloth), 1023196514U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_forkRepos_ClothSim_ClothSim_Source_ClothSim_Public_Cloth_h_2441163414(TEXT("/Script/ClothSim"),
	Z_CompiledInDeferFile_FID_forkRepos_ClothSim_ClothSim_Source_ClothSim_Public_Cloth_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_forkRepos_ClothSim_ClothSim_Source_ClothSim_Public_Cloth_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
