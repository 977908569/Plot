// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPlotName2Img;
struct FPlotRoleInfo;
class UObject;
class APlotRoleActor;
#ifdef PLOT_PlotLibrary_generated_h
#error "PlotLibrary.generated.h already included, missing '#pragma once' in PlotLibrary.h"
#endif
#define PLOT_PlotLibrary_generated_h

#define TGame_Plugins_Plot_Source_Plot_Public_PlotLibrary_h_10_SPARSE_DATA
#define TGame_Plugins_Plot_Source_Plot_Public_PlotLibrary_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlotNameConfig); \
	DECLARE_FUNCTION(execGetPlotRoleConfig); \
	DECLARE_FUNCTION(execFindRoleByName);


#define TGame_Plugins_Plot_Source_Plot_Public_PlotLibrary_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlotNameConfig); \
	DECLARE_FUNCTION(execGetPlotRoleConfig); \
	DECLARE_FUNCTION(execFindRoleByName);


#define TGame_Plugins_Plot_Source_Plot_Public_PlotLibrary_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlotLibrary(); \
	friend struct Z_Construct_UClass_UPlotLibrary_Statics; \
public: \
	DECLARE_CLASS(UPlotLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotLibrary)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotLibrary_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUPlotLibrary(); \
	friend struct Z_Construct_UClass_UPlotLibrary_Statics; \
public: \
	DECLARE_CLASS(UPlotLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotLibrary)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotLibrary_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotLibrary(UPlotLibrary&&); \
	NO_API UPlotLibrary(const UPlotLibrary&); \
public:


#define TGame_Plugins_Plot_Source_Plot_Public_PlotLibrary_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotLibrary(UPlotLibrary&&); \
	NO_API UPlotLibrary(const UPlotLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotLibrary)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotLibrary_h_10_PRIVATE_PROPERTY_OFFSET
#define TGame_Plugins_Plot_Source_Plot_Public_PlotLibrary_h_8_PROLOG
#define TGame_Plugins_Plot_Source_Plot_Public_PlotLibrary_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotLibrary_h_10_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotLibrary_h_10_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotLibrary_h_10_RPC_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotLibrary_h_10_INCLASS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotLibrary_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGame_Plugins_Plot_Source_Plot_Public_PlotLibrary_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotLibrary_h_10_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotLibrary_h_10_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotLibrary_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotLibrary_h_10_INCLASS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotLibrary_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOT_API UClass* StaticClass<class UPlotLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TGame_Plugins_Plot_Source_Plot_Public_PlotLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
