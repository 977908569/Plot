// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLOTEDITOR_PlotFactory_generated_h
#error "PlotFactory.generated.h already included, missing '#pragma once' in PlotFactory.h"
#endif
#define PLOTEDITOR_PlotFactory_generated_h

#define TGame_Plugins_Plot_Source_PlotEditor_Public_PlotFactory_h_10_SPARSE_DATA
#define TGame_Plugins_Plot_Source_PlotEditor_Public_PlotFactory_h_10_RPC_WRAPPERS
#define TGame_Plugins_Plot_Source_PlotEditor_Public_PlotFactory_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define TGame_Plugins_Plot_Source_PlotEditor_Public_PlotFactory_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlotFactory(); \
	friend struct Z_Construct_UClass_UPlotFactory_Statics; \
public: \
	DECLARE_CLASS(UPlotFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlotEditor"), PLOTEDITOR_API) \
	DECLARE_SERIALIZER(UPlotFactory)


#define TGame_Plugins_Plot_Source_PlotEditor_Public_PlotFactory_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUPlotFactory(); \
	friend struct Z_Construct_UClass_UPlotFactory_Statics; \
public: \
	DECLARE_CLASS(UPlotFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PlotEditor"), PLOTEDITOR_API) \
	DECLARE_SERIALIZER(UPlotFactory)


#define TGame_Plugins_Plot_Source_PlotEditor_Public_PlotFactory_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PLOTEDITOR_API UPlotFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PLOTEDITOR_API, UPlotFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PLOTEDITOR_API UPlotFactory(UPlotFactory&&); \
	PLOTEDITOR_API UPlotFactory(const UPlotFactory&); \
public:


#define TGame_Plugins_Plot_Source_PlotEditor_Public_PlotFactory_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PLOTEDITOR_API UPlotFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PLOTEDITOR_API UPlotFactory(UPlotFactory&&); \
	PLOTEDITOR_API UPlotFactory(const UPlotFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PLOTEDITOR_API, UPlotFactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotFactory)


#define TGame_Plugins_Plot_Source_PlotEditor_Public_PlotFactory_h_10_PRIVATE_PROPERTY_OFFSET
#define TGame_Plugins_Plot_Source_PlotEditor_Public_PlotFactory_h_7_PROLOG
#define TGame_Plugins_Plot_Source_PlotEditor_Public_PlotFactory_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_PlotEditor_Public_PlotFactory_h_10_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_PlotEditor_Public_PlotFactory_h_10_SPARSE_DATA \
	TGame_Plugins_Plot_Source_PlotEditor_Public_PlotFactory_h_10_RPC_WRAPPERS \
	TGame_Plugins_Plot_Source_PlotEditor_Public_PlotFactory_h_10_INCLASS \
	TGame_Plugins_Plot_Source_PlotEditor_Public_PlotFactory_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGame_Plugins_Plot_Source_PlotEditor_Public_PlotFactory_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_PlotEditor_Public_PlotFactory_h_10_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_PlotEditor_Public_PlotFactory_h_10_SPARSE_DATA \
	TGame_Plugins_Plot_Source_PlotEditor_Public_PlotFactory_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_PlotEditor_Public_PlotFactory_h_10_INCLASS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_PlotEditor_Public_PlotFactory_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlotFactory."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOTEDITOR_API UClass* StaticClass<class UPlotFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TGame_Plugins_Plot_Source_PlotEditor_Public_PlotFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
