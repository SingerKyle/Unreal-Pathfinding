// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PointSceneComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PATHFINDINGPLUGIN_PointSceneComponent_generated_h
#error "PointSceneComponent.generated.h already included, missing '#pragma once' in PointSceneComponent.h"
#endif
#define PATHFINDINGPLUGIN_PointSceneComponent_generated_h

#define FID_PathfindingTest_Plugins_PathfindingPlugin_Source_PathfindingPlugin_Public_PointSceneComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDestroyPoint);


#define FID_PathfindingTest_Plugins_PathfindingPlugin_Source_PathfindingPlugin_Public_PointSceneComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPointSceneComponent(); \
	friend struct Z_Construct_UClass_UPointSceneComponent_Statics; \
public: \
	DECLARE_CLASS(UPointSceneComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PathfindingPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPointSceneComponent)


#define FID_PathfindingTest_Plugins_PathfindingPlugin_Source_PathfindingPlugin_Public_PointSceneComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPointSceneComponent(UPointSceneComponent&&); \
	UPointSceneComponent(const UPointSceneComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPointSceneComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPointSceneComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPointSceneComponent) \
	NO_API virtual ~UPointSceneComponent();


#define FID_PathfindingTest_Plugins_PathfindingPlugin_Source_PathfindingPlugin_Public_PointSceneComponent_h_10_PROLOG
#define FID_PathfindingTest_Plugins_PathfindingPlugin_Source_PathfindingPlugin_Public_PointSceneComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PathfindingTest_Plugins_PathfindingPlugin_Source_PathfindingPlugin_Public_PointSceneComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PathfindingTest_Plugins_PathfindingPlugin_Source_PathfindingPlugin_Public_PointSceneComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_PathfindingTest_Plugins_PathfindingPlugin_Source_PathfindingPlugin_Public_PointSceneComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATHFINDINGPLUGIN_API UClass* StaticClass<class UPointSceneComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PathfindingTest_Plugins_PathfindingPlugin_Source_PathfindingPlugin_Public_PointSceneComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
