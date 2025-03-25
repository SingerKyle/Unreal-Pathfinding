// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathfindingPlugin/Public/FlyingPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlyingPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
PATHFINDINGPLUGIN_API UClass* Z_Construct_UClass_AFlyingPawn();
PATHFINDINGPLUGIN_API UClass* Z_Construct_UClass_AFlyingPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_PathfindingPlugin();
// End Cross Module References

// Begin Class AFlyingPawn
void AFlyingPawn::StaticRegisterNativesAFlyingPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlyingPawn);
UClass* Z_Construct_UClass_AFlyingPawn_NoRegister()
{
	return AFlyingPawn::StaticClass();
}
struct Z_Construct_UClass_AFlyingPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FlyingPawn.h" },
		{ "ModuleRelativePath", "Public/FlyingPawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlyingPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFlyingPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_PathfindingPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlyingPawn_Statics::ClassParams = {
	&AFlyingPawn::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AFlyingPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFlyingPawn()
{
	if (!Z_Registration_Info_UClass_AFlyingPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlyingPawn.OuterSingleton, Z_Construct_UClass_AFlyingPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFlyingPawn.OuterSingleton;
}
template<> PATHFINDINGPLUGIN_API UClass* StaticClass<AFlyingPawn>()
{
	return AFlyingPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFlyingPawn);
AFlyingPawn::~AFlyingPawn() {}
// End Class AFlyingPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject2_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_FlyingPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFlyingPawn, AFlyingPawn::StaticClass, TEXT("AFlyingPawn"), &Z_Registration_Info_UClass_AFlyingPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlyingPawn), 154147214U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_FlyingPawn_h_3775717695(TEXT("/Script/PathfindingPlugin"),
	Z_CompiledInDeferFile_FID_MyProject2_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_FlyingPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_FlyingPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
