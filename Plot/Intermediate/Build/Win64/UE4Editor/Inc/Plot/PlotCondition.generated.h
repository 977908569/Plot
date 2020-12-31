// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlot;
#ifdef PLOT_PlotCondition_generated_h
#error "PlotCondition.generated.h already included, missing '#pragma once' in PlotCondition.h"
#endif
#define PLOT_PlotCondition_generated_h

#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_SPARSE_DATA
#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_RPC_WRAPPERS \
	virtual bool Check_Implementation(); \
 \
	DECLARE_FUNCTION(execGetPlot); \
	DECLARE_FUNCTION(execCheck);


#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlot); \
	DECLARE_FUNCTION(execCheck);


#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_EVENT_PARMS \
	struct PlotCondition_eventCheck_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PlotCondition_eventCheck_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_CALLBACK_WRAPPERS
#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlotCondition(); \
	friend struct Z_Construct_UClass_UPlotCondition_Statics; \
public: \
	DECLARE_CLASS(UPlotCondition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotCondition)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUPlotCondition(); \
	friend struct Z_Construct_UClass_UPlotCondition_Statics; \
public: \
	DECLARE_CLASS(UPlotCondition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotCondition)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotCondition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotCondition(UPlotCondition&&); \
	NO_API UPlotCondition(const UPlotCondition&); \
public:


#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotCondition(UPlotCondition&&); \
	NO_API UPlotCondition(const UPlotCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotCondition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlotCondition)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_PRIVATE_PROPERTY_OFFSET
#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_6_PROLOG \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_EVENT_PARMS


#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_RPC_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_CALLBACK_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_INCLASS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_CALLBACK_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_INCLASS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOT_API UClass* StaticClass<class UPlotCondition>();

#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_25_SPARSE_DATA
#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_25_RPC_WRAPPERS
#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlotReadKeyCondition(); \
	friend struct Z_Construct_UClass_UPlotReadKeyCondition_Statics; \
public: \
	DECLARE_CLASS(UPlotReadKeyCondition, UPlotCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotReadKeyCondition)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUPlotReadKeyCondition(); \
	friend struct Z_Construct_UClass_UPlotReadKeyCondition_Statics; \
public: \
	DECLARE_CLASS(UPlotReadKeyCondition, UPlotCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotReadKeyCondition)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotReadKeyCondition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotReadKeyCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotReadKeyCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotReadKeyCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotReadKeyCondition(UPlotReadKeyCondition&&); \
	NO_API UPlotReadKeyCondition(const UPlotReadKeyCondition&); \
public:


#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotReadKeyCondition(UPlotReadKeyCondition&&); \
	NO_API UPlotReadKeyCondition(const UPlotReadKeyCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotReadKeyCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotReadKeyCondition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlotReadKeyCondition)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_25_PRIVATE_PROPERTY_OFFSET
#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_22_PROLOG
#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_25_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_25_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_25_RPC_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_25_INCLASS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_25_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_25_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_25_INCLASS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOT_API UClass* StaticClass<class UPlotReadKeyCondition>();

#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_37_SPARSE_DATA
#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_37_RPC_WRAPPERS
#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_37_RPC_WRAPPERS_NO_PURE_DECLS
#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlotSelectNumCondition(); \
	friend struct Z_Construct_UClass_UPlotSelectNumCondition_Statics; \
public: \
	DECLARE_CLASS(UPlotSelectNumCondition, UPlotCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotSelectNumCondition)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUPlotSelectNumCondition(); \
	friend struct Z_Construct_UClass_UPlotSelectNumCondition_Statics; \
public: \
	DECLARE_CLASS(UPlotSelectNumCondition, UPlotCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotSelectNumCondition)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotSelectNumCondition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotSelectNumCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotSelectNumCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotSelectNumCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotSelectNumCondition(UPlotSelectNumCondition&&); \
	NO_API UPlotSelectNumCondition(const UPlotSelectNumCondition&); \
public:


#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotSelectNumCondition(UPlotSelectNumCondition&&); \
	NO_API UPlotSelectNumCondition(const UPlotSelectNumCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotSelectNumCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotSelectNumCondition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlotSelectNumCondition)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_37_PRIVATE_PROPERTY_OFFSET
#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_34_PROLOG
#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_37_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_37_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_37_RPC_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_37_INCLASS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_37_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_37_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_37_INCLASS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOT_API UClass* StaticClass<class UPlotSelectNumCondition>();

#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_49_SPARSE_DATA
#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_49_RPC_WRAPPERS
#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_49_RPC_WRAPPERS_NO_PURE_DECLS
#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlotTimeoutCondition(); \
	friend struct Z_Construct_UClass_UPlotTimeoutCondition_Statics; \
public: \
	DECLARE_CLASS(UPlotTimeoutCondition, UPlotCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotTimeoutCondition)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUPlotTimeoutCondition(); \
	friend struct Z_Construct_UClass_UPlotTimeoutCondition_Statics; \
public: \
	DECLARE_CLASS(UPlotTimeoutCondition, UPlotCondition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Plot"), NO_API) \
	DECLARE_SERIALIZER(UPlotTimeoutCondition)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlotTimeoutCondition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlotTimeoutCondition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotTimeoutCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotTimeoutCondition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotTimeoutCondition(UPlotTimeoutCondition&&); \
	NO_API UPlotTimeoutCondition(const UPlotTimeoutCondition&); \
public:


#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlotTimeoutCondition(UPlotTimeoutCondition&&); \
	NO_API UPlotTimeoutCondition(const UPlotTimeoutCondition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlotTimeoutCondition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlotTimeoutCondition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlotTimeoutCondition)


#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_49_PRIVATE_PROPERTY_OFFSET
#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_46_PROLOG
#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_49_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_49_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_49_RPC_WRAPPERS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_49_INCLASS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_49_PRIVATE_PROPERTY_OFFSET \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_49_SPARSE_DATA \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_49_INCLASS_NO_PURE_DECLS \
	TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLOT_API UClass* StaticClass<class UPlotTimeoutCondition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TGame_Plugins_Plot_Source_Plot_Public_PlotCondition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
