// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLOT_PlotEvent_generated_h
#error "PlotEvent.generated.h already included, missing '#pragma once' in PlotEvent.h"
#endif
#define PLOT_PlotEvent_generated_h

#define TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_SPARSE_DATA
#define TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_RPC_WRAPPERS \
	virtual bool DoEvent_Implementation(); \
 \
	DECLARE_FUNCTION(execDoEvent);


#define TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDoEvent);


#define TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_EVENT_PARMS \
	struct PlotEvent_eventDoEvent_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PlotEvent_eventDoEvent_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_CALLBACK_WRAPPERS
#define TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlotEvent(); \
	friend struct Z_Construct_UClass_UPlotEvent_Statics; \
public: \
	DECLARE_CLASS(UPlotEvent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotEvent)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUPlotEvent(); \
	friend struct Z_Construct_UClass_UPlotEvent_Statics; \
public: \
	DECLARE_CLASS(UPlotEvent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotEvent)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotEvent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotEvent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotEvent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotEvent(UPlotEvent&&); \
	NO_API UPlotEvent(const UPlotEvent&); \
public:


#define TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotEvent(UPlotEvent&&); \
	NO_API UPlotEvent(const UPlotEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotEvent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotEvent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlotEvent)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_PRIVATE_PROPERTY_OFFSET
#define TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_5_PROLOG \
	TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_EVENT_PARMS


#define TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_RPC_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_CALLBACK_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_INCLASS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_CALLBACK_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_INCLASS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOT_API UClass* StaticClass<class UPlotEvent>();

#define TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_20_SPARSE_DATA
#define TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_20_RPC_WRAPPERS
#define TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlotEvent_JumpKey(); \
	friend struct Z_Construct_UClass_UPlotEvent_JumpKey_Statics; \
public: \
	DECLARE_CLASS(UPlotEvent_JumpKey, UPlotEvent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotEvent_JumpKey)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUPlotEvent_JumpKey(); \
	friend struct Z_Construct_UClass_UPlotEvent_JumpKey_Statics; \
public: \
	DECLARE_CLASS(UPlotEvent_JumpKey, UPlotEvent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotEvent_JumpKey)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotEvent_JumpKey(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotEvent_JumpKey) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotEvent_JumpKey); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotEvent_JumpKey); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotEvent_JumpKey(UPlotEvent_JumpKey&&); \
	NO_API UPlotEvent_JumpKey(const UPlotEvent_JumpKey&); \
public:


#define TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotEvent_JumpKey(UPlotEvent_JumpKey&&); \
	NO_API UPlotEvent_JumpKey(const UPlotEvent_JumpKey&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotEvent_JumpKey); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotEvent_JumpKey); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlotEvent_JumpKey)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_20_PRIVATE_PROPERTY_OFFSET
#define TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_17_PROLOG
#define TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_20_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_20_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_20_RPC_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_20_INCLASS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_20_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_20_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_20_INCLASS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOT_API UClass* StaticClass<class UPlotEvent_JumpKey>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TGame_Plugins_Plot_Source_Plot_Public_PlotEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
