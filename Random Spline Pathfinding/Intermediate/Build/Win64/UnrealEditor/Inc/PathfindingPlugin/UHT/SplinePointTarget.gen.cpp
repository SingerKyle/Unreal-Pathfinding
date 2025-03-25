// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathfindingPlugin/Public/SplinePointTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplinePointTarget() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PATHFINDINGPLUGIN_API UClass* Z_Construct_UClass_ASplinePointTarget();
PATHFINDINGPLUGIN_API UClass* Z_Construct_UClass_ASplinePointTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_PathfindingPlugin();
// End Cross Module References

// Begin Class ASplinePointTarget
void ASplinePointTarget::StaticRegisterNativesASplinePointTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASplinePointTarget);
UClass* Z_Construct_UClass_ASplinePointTarget_NoRegister()
{
	return ASplinePointTarget::StaticClass();
}
struct Z_Construct_UClass_ASplinePointTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SplinePointTarget.h" },
		{ "ModuleRelativePath", "Public/SplinePointTarget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASplinePointTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASplinePointTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PathfindingPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASplinePointTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASplinePointTarget_Statics::ClassParams = {
	&ASplinePointTarget::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASplinePointTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_ASplinePointTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASplinePointTarget()
{
	if (!Z_Registration_Info_UClass_ASplinePointTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASplinePointTarget.OuterSingleton, Z_Construct_UClass_ASplinePointTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASplinePointTarget.OuterSingleton;
}
template<> PATHFINDINGPLUGIN_API UClass* StaticClass<ASplinePointTarget>()
{
	return ASplinePointTarget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASplinePointTarget);
ASplinePointTarget::~ASplinePointTarget() {}
// End Class ASplinePointTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject2_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_SplinePointTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASplinePointTarget, ASplinePointTarget::StaticClass, TEXT("ASplinePointTarget"), &Z_Registration_Info_UClass_ASplinePointTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASplinePointTarget), 2833782542U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_SplinePointTarget_h_3722350467(TEXT("/Script/PathfindingPlugin"),
	Z_CompiledInDeferFile_FID_MyProject2_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_SplinePointTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_SplinePointTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
