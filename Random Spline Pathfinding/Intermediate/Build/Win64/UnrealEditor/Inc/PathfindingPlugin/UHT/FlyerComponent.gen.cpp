// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathfindingPlugin/Public/FlyerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlyerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PATHFINDINGPLUGIN_API UClass* Z_Construct_UClass_UFlyerComponent();
PATHFINDINGPLUGIN_API UClass* Z_Construct_UClass_UFlyerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_PathfindingPlugin();
// End Cross Module References

// Begin Class UFlyerComponent
void UFlyerComponent::StaticRegisterNativesUFlyerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlyerComponent);
UClass* Z_Construct_UClass_UFlyerComponent_NoRegister()
{
	return UFlyerComponent::StaticClass();
}
struct Z_Construct_UClass_UFlyerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FlyerComponent.h" },
		{ "ModuleRelativePath", "Public/FlyerComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlyerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFlyerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_PathfindingPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlyerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlyerComponent_Statics::ClassParams = {
	&UFlyerComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlyerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlyerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlyerComponent()
{
	if (!Z_Registration_Info_UClass_UFlyerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlyerComponent.OuterSingleton, Z_Construct_UClass_UFlyerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlyerComponent.OuterSingleton;
}
template<> PATHFINDINGPLUGIN_API UClass* StaticClass<UFlyerComponent>()
{
	return UFlyerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlyerComponent);
UFlyerComponent::~UFlyerComponent() {}
// End Class UFlyerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject2_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_FlyerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlyerComponent, UFlyerComponent::StaticClass, TEXT("UFlyerComponent"), &Z_Registration_Info_UClass_UFlyerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlyerComponent), 718528917U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_FlyerComponent_h_3101608606(TEXT("/Script/PathfindingPlugin"),
	Z_CompiledInDeferFile_FID_MyProject2_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_FlyerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_FlyerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
