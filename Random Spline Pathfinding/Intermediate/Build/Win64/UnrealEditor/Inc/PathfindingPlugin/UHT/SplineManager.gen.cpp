// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PathfindingPlugin/Public/SplineManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
PATHFINDINGPLUGIN_API UClass* Z_Construct_UClass_ASplineManager();
PATHFINDINGPLUGIN_API UClass* Z_Construct_UClass_ASplineManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_PathfindingPlugin();
// End Cross Module References

// Begin Class ASplineManager Function CreateNewSplinePoint
struct Z_Construct_UFunction_ASplineManager_CreateNewSplinePoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Spline Generator" },
		{ "ModuleRelativePath", "Public/SplineManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineManager_CreateNewSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineManager, nullptr, "CreateNewSplinePoint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineManager_CreateNewSplinePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASplineManager_CreateNewSplinePoint_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASplineManager_CreateNewSplinePoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASplineManager_CreateNewSplinePoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASplineManager::execCreateNewSplinePoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateNewSplinePoint();
	P_NATIVE_END;
}
// End Class ASplineManager Function CreateNewSplinePoint

// Begin Class ASplineManager Function RemoveLastSplinePoint
struct Z_Construct_UFunction_ASplineManager_RemoveLastSplinePoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Spline Generator" },
		{ "ModuleRelativePath", "Public/SplineManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineManager_RemoveLastSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineManager, nullptr, "RemoveLastSplinePoint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineManager_RemoveLastSplinePoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASplineManager_RemoveLastSplinePoint_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASplineManager_RemoveLastSplinePoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASplineManager_RemoveLastSplinePoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASplineManager::execRemoveLastSplinePoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveLastSplinePoint();
	P_NATIVE_END;
}
// End Class ASplineManager Function RemoveLastSplinePoint

// Begin Class ASplineManager Function SetupSplineUsingPoints
struct Z_Construct_UFunction_ASplineManager_SetupSplineUsingPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Spline Generator" },
		{ "ModuleRelativePath", "Public/SplineManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineManager_SetupSplineUsingPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineManager, nullptr, "SetupSplineUsingPoints", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineManager_SetupSplineUsingPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASplineManager_SetupSplineUsingPoints_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASplineManager_SetupSplineUsingPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASplineManager_SetupSplineUsingPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASplineManager::execSetupSplineUsingPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupSplineUsingPoints();
	P_NATIVE_END;
}
// End Class ASplineManager Function SetupSplineUsingPoints

// Begin Class ASplineManager
void ASplineManager::StaticRegisterNativesASplineManager()
{
	UClass* Class = ASplineManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateNewSplinePoint", &ASplineManager::execCreateNewSplinePoint },
		{ "RemoveLastSplinePoint", &ASplineManager::execRemoveLastSplinePoint },
		{ "SetupSplineUsingPoints", &ASplineManager::execSetupSplineUsingPoints },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASplineManager);
UClass* Z_Construct_UClass_ASplineManager_NoRegister()
{
	return ASplineManager::StaticClass();
}
struct Z_Construct_UClass_ASplineManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SplineManager.h" },
		{ "ModuleRelativePath", "Public/SplineManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplineManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SplineManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointMarker_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplineManager" },
		{ "ModuleRelativePath", "Public/SplineManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SplineManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SplineManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Points_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointMarker;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASplineManager_CreateNewSplinePoint, "CreateNewSplinePoint" }, // 2927026228
		{ &Z_Construct_UFunction_ASplineManager_RemoveLastSplinePoint, "RemoveLastSplinePoint" }, // 2237116405
		{ &Z_Construct_UFunction_ASplineManager_SetupSplineUsingPoints, "SetupSplineUsingPoints" }, // 2769454603
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASplineManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineManager_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASplineManager_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x002008800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASplineManager, Points), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Points_MetaData), NewProp_Points_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineManager_Statics::NewProp_PointMarker = { "PointMarker", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASplineManager, PointMarker), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointMarker_MetaData), NewProp_PointMarker_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineManager_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASplineManager, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineComponent_MetaData), NewProp_SplineComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASplineManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineManager_Statics::NewProp_Points_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineManager_Statics::NewProp_Points,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineManager_Statics::NewProp_PointMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineManager_Statics::NewProp_SplineComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASplineManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASplineManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PathfindingPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASplineManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASplineManager_Statics::ClassParams = {
	&ASplineManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASplineManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASplineManager_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASplineManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ASplineManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASplineManager()
{
	if (!Z_Registration_Info_UClass_ASplineManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASplineManager.OuterSingleton, Z_Construct_UClass_ASplineManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASplineManager.OuterSingleton;
}
template<> PATHFINDINGPLUGIN_API UClass* StaticClass<ASplineManager>()
{
	return ASplineManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASplineManager);
ASplineManager::~ASplineManager() {}
// End Class ASplineManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_PathfindingTest_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_SplineManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASplineManager, ASplineManager::StaticClass, TEXT("ASplineManager"), &Z_Registration_Info_UClass_ASplineManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASplineManager), 4233766990U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PathfindingTest_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_SplineManager_h_3573587706(TEXT("/Script/PathfindingPlugin"),
	Z_CompiledInDeferFile_FID_PathfindingTest_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_SplineManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PathfindingTest_Plugins_Random_Spline_Pathfinding_Source_PathfindingPlugin_Public_SplineManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
