// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathfindingPlugin/Public/FlyingMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlyingMovementComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
PATHFINDINGPLUGIN_API UClass* Z_Construct_UClass_UFlyingMovementComponent();
PATHFINDINGPLUGIN_API UClass* Z_Construct_UClass_UFlyingMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_PathfindingPlugin();
// End Cross Module References

// Begin Class UFlyingMovementComponent
void UFlyingMovementComponent::StaticRegisterNativesUFlyingMovementComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlyingMovementComponent);
UClass* Z_Construct_UClass_UFlyingMovementComponent_NoRegister()
{
	return UFlyingMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UFlyingMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FlyingMovementComponent.h" },
		{ "ModuleRelativePath", "Public/FlyingMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldMove_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "flight settings" },
		{ "ModuleRelativePath", "Public/FlyingMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "flight settings" },
		{ "ModuleRelativePath", "Public/FlyingMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "flight settings" },
		{ "ModuleRelativePath", "Public/FlyingMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlightSpline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "flight settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FlyingMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/FlyingMovementComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ShouldMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldMove;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlightSpline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlyingMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UFlyingMovementComponent_Statics::NewProp_ShouldMove_SetBit(void* Obj)
{
	((UFlyingMovementComponent*)Obj)->ShouldMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlyingMovementComponent_Statics::NewProp_ShouldMove = { "ShouldMove", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFlyingMovementComponent), &Z_Construct_UClass_UFlyingMovementComponent_Statics::NewProp_ShouldMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldMove_MetaData), NewProp_ShouldMove_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlyingMovementComponent_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlyingMovementComponent, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlyingMovementComponent_Statics::NewProp_SplineManager = { "SplineManager", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlyingMovementComponent, SplineManager), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineManager_MetaData), NewProp_SplineManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlyingMovementComponent_Statics::NewProp_FlightSpline = { "FlightSpline", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlyingMovementComponent, FlightSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlightSpline_MetaData), NewProp_FlightSpline_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlyingMovementComponent_Statics::NewProp_SplineDistance = { "SplineDistance", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlyingMovementComponent, SplineDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineDistance_MetaData), NewProp_SplineDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlyingMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlyingMovementComponent_Statics::NewProp_ShouldMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlyingMovementComponent_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlyingMovementComponent_Statics::NewProp_SplineManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlyingMovementComponent_Statics::NewProp_FlightSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlyingMovementComponent_Statics::NewProp_SplineDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlyingMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlyingMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_PathfindingPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlyingMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlyingMovementComponent_Statics::ClassParams = {
	&UFlyingMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFlyingMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlyingMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlyingMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlyingMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlyingMovementComponent()
{
	if (!Z_Registration_Info_UClass_UFlyingMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlyingMovementComponent.OuterSingleton, Z_Construct_UClass_UFlyingMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlyingMovementComponent.OuterSingleton;
}
template<> PATHFINDINGPLUGIN_API UClass* StaticClass<UFlyingMovementComponent>()
{
	return UFlyingMovementComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlyingMovementComponent);
UFlyingMovementComponent::~UFlyingMovementComponent() {}
// End Class UFlyingMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_PathfindingTest_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_FlyingMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlyingMovementComponent, UFlyingMovementComponent::StaticClass, TEXT("UFlyingMovementComponent"), &Z_Registration_Info_UClass_UFlyingMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlyingMovementComponent), 3063748293U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PathfindingTest_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_FlyingMovementComponent_h_920691721(TEXT("/Script/PathfindingPlugin"),
	Z_CompiledInDeferFile_FID_PathfindingTest_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_FlyingMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PathfindingTest_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_FlyingMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
