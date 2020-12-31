// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlotItem;
class UWorld;
class UPlotWidget;
class UPlot;
#ifdef PLOT_PlotItem_generated_h
#error "PlotItem.generated.h already included, missing '#pragma once' in PlotItem.h"
#endif
#define PLOT_PlotItem_generated_h

#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_SPARSE_DATA
#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetChildrenCount); \
	DECLARE_FUNCTION(execGetParent); \
	DECLARE_FUNCTION(execGetIndex); \
	DECLARE_FUNCTION(execSetExecuteIndex); \
	DECLARE_FUNCTION(execGetWorld); \
	DECLARE_FUNCTION(execIsTimeout); \
	DECLARE_FUNCTION(execClearup); \
	DECLARE_FUNCTION(execGetWidget); \
	DECLARE_FUNCTION(execGetPlot); \
	DECLARE_FUNCTION(execEnd); \
	DECLARE_FUNCTION(execStart);


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetChildrenCount); \
	DECLARE_FUNCTION(execGetParent); \
	DECLARE_FUNCTION(execGetIndex); \
	DECLARE_FUNCTION(execSetExecuteIndex); \
	DECLARE_FUNCTION(execGetWorld); \
	DECLARE_FUNCTION(execIsTimeout); \
	DECLARE_FUNCTION(execClearup); \
	DECLARE_FUNCTION(execGetWidget); \
	DECLARE_FUNCTION(execGetPlot); \
	DECLARE_FUNCTION(execEnd); \
	DECLARE_FUNCTION(execStart);


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_EVENT_PARMS
#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_CALLBACK_WRAPPERS
#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlotItem(); \
	friend struct Z_Construct_UClass_UPlotItem_Statics; \
public: \
	DECLARE_CLASS(UPlotItem, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotItem)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUPlotItem(); \
	friend struct Z_Construct_UClass_UPlotItem_Statics; \
public: \
	DECLARE_CLASS(UPlotItem, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotItem)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotItem(UPlotItem&&); \
	NO_API UPlotItem(const UPlotItem&); \
public:


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotItem(UPlotItem&&); \
	NO_API UPlotItem(const UPlotItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotItem)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bCanHaveMultipleChildren() { return STRUCT_OFFSET(UPlotItem, bCanHaveMultipleChildren); } \
	FORCEINLINE static uint32 __PPO__ExecuteIndex() { return STRUCT_OFFSET(UPlotItem, ExecuteIndex); } \
	FORCEINLINE static uint32 __PPO__DisplayLabel() { return STRUCT_OFFSET(UPlotItem, DisplayLabel); } \
	FORCEINLINE static uint32 __PPO__ItemIndex() { return STRUCT_OFFSET(UPlotItem, ItemIndex); } \
	FORCEINLINE static uint32 __PPO__bCanEditWait() { return STRUCT_OFFSET(UPlotItem, bCanEditWait); }


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_11_PROLOG \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_EVENT_PARMS


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_RPC_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_CALLBACK_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_INCLASS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_CALLBACK_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_INCLASS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOT_API UClass* StaticClass<class UPlotItem>();

#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_130_SPARSE_DATA
#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_130_RPC_WRAPPERS
#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_130_RPC_WRAPPERS_NO_PURE_DECLS
#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_130_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlotItem_Root(); \
	friend struct Z_Construct_UClass_UPlotItem_Root_Statics; \
public: \
	DECLARE_CLASS(UPlotItem_Root, UPlotItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotItem_Root)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_130_INCLASS \
private: \
	static void StaticRegisterNativesUPlotItem_Root(); \
	friend struct Z_Construct_UClass_UPlotItem_Root_Statics; \
public: \
	DECLARE_CLASS(UPlotItem_Root, UPlotItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotItem_Root)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_130_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotItem_Root(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotItem_Root) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotItem_Root); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotItem_Root); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotItem_Root(UPlotItem_Root&&); \
	NO_API UPlotItem_Root(const UPlotItem_Root&); \
public:


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_130_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotItem_Root(UPlotItem_Root&&); \
	NO_API UPlotItem_Root(const UPlotItem_Root&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotItem_Root); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotItem_Root); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlotItem_Root)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_130_PRIVATE_PROPERTY_OFFSET
#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_127_PROLOG
#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_130_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_130_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_130_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_130_RPC_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_130_INCLASS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_130_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_130_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_130_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_130_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_130_RPC_WRAPPERS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_130_INCLASS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_130_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOT_API UClass* StaticClass<class UPlotItem_Root>();

#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_150_SPARSE_DATA
#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_150_RPC_WRAPPERS
#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_150_RPC_WRAPPERS_NO_PURE_DECLS
#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_150_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlotSaveItem(); \
	friend struct Z_Construct_UClass_UPlotSaveItem_Statics; \
public: \
	DECLARE_CLASS(UPlotSaveItem, UPlotItem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotSaveItem)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_150_INCLASS \
private: \
	static void StaticRegisterNativesUPlotSaveItem(); \
	friend struct Z_Construct_UClass_UPlotSaveItem_Statics; \
public: \
	DECLARE_CLASS(UPlotSaveItem, UPlotItem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotSaveItem)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_150_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotSaveItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotSaveItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotSaveItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotSaveItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotSaveItem(UPlotSaveItem&&); \
	NO_API UPlotSaveItem(const UPlotSaveItem&); \
public:


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_150_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotSaveItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotSaveItem(UPlotSaveItem&&); \
	NO_API UPlotSaveItem(const UPlotSaveItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotSaveItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotSaveItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotSaveItem)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_150_PRIVATE_PROPERTY_OFFSET
#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_147_PROLOG
#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_150_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_150_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_150_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_150_RPC_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_150_INCLASS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_150_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_150_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_150_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_150_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_150_INCLASS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h_150_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOT_API UClass* StaticClass<class UPlotSaveItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TGame_Plugins_Plot_Source_Plot_Public_PlotItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
