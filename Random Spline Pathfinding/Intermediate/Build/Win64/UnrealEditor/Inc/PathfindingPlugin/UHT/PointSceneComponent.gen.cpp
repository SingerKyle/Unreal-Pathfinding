// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathfindingPlugin/Public/PointSceneComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointSceneComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
PATHFINDINGPLUGIN_API UClass* Z_Construct_UClass_UPointSceneComponent();
PATHFINDINGPLUGIN_API UClass* Z_Construct_UClass_UPointSceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_PathfindingPlugin();
// End Cross Module References

// Begin Class UPointSceneComponent Function DestroyPoint
struct Z_Construct_UFunction_UPointSceneComponent_DestroyPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Level Generator" },
		{ "ModuleRelativePath", "Public/PointSceneComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointSceneComponent_DestroyPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointSceneComponent, nullptr, "DestroyPoint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPointSceneComponent_DestroyPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPointSceneComponent_DestroyPoint_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPointSceneComponent_DestroyPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointSceneComponent_DestroyPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPointSceneComponent::execDestroyPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyPoint();
	P_NATIVE_END;
}
// End Class UPointSceneComponent Function DestroyPoint

// Begin Class UPointSceneComponent
void UPointSceneComponent::StaticRegisterNativesUPointSceneComponent()
{
	UClass* Class = UPointSceneComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DestroyPoint", &UPointSceneComponent::execDestroyPoint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPointSceneComponent);
UClass* Z_Construct_UClass_UPointSceneComponent_NoRegister()
{
	return UPointSceneComponent::StaticClass();
}
struct Z_Construct_UClass_UPointSceneComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "PointSceneComponent.h" },
		{ "ModuleRelativePath", "Public/PointSceneComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPointSceneComponent_DestroyPoint, "DestroyPoint" }, // 146010206
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointSceneComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPointSceneComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_PathfindingPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPointSceneComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPointSceneComponent_Statics::ClassParams = {
	&UPointSceneComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPointSceneComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPointSceneComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPointSceneComponent()
{
	if (!Z_Registration_Info_UClass_UPointSceneComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointSceneComponent.OuterSingleton, Z_Construct_UClass_UPointSceneComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPointSceneComponent.OuterSingleton;
}
template<> PATHFINDINGPLUGIN_API UClass* StaticClass<UPointSceneComponent>()
{
	return UPointSceneComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPointSceneComponent);
UPointSceneComponent::~UPointSceneComponent() {}
// End Class UPointSceneComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProject2_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_PointSceneComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPointSceneComponent, UPointSceneComponent::StaticClass, TEXT("UPointSceneComponent"), &Z_Registration_Info_UClass_UPointSceneComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointSceneComponent), 1310206422U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject2_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_PointSceneComponent_h_1848116506(TEXT("/Script/PathfindingPlugin"),
	Z_CompiledInDeferFile_FID_MyProject2_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_PointSceneComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject2_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_PointSceneComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
