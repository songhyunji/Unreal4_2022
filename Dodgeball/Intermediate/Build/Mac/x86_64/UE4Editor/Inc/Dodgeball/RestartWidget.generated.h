// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DODGEBALL_RestartWidget_generated_h
#error "RestartWidget.generated.h already included, missing '#pragma once' in RestartWidget.h"
#endif
#define DODGEBALL_RestartWidget_generated_h

#define Dodgeball_Source_Dodgeball_RestartWidget_h_15_SPARSE_DATA
#define Dodgeball_Source_Dodgeball_RestartWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnExitClicked); \
	DECLARE_FUNCTION(execOnRestartClicked);


#define Dodgeball_Source_Dodgeball_RestartWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnExitClicked); \
	DECLARE_FUNCTION(execOnRestartClicked);


#define Dodgeball_Source_Dodgeball_RestartWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURestartWidget(); \
	friend struct Z_Construct_UClass_URestartWidget_Statics; \
public: \
	DECLARE_CLASS(URestartWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Dodgeball"), NO_API) \
	DECLARE_SERIALIZER(URestartWidget)


#define Dodgeball_Source_Dodgeball_RestartWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesURestartWidget(); \
	friend struct Z_Construct_UClass_URestartWidget_Statics; \
public: \
	DECLARE_CLASS(URestartWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Dodgeball"), NO_API) \
	DECLARE_SERIALIZER(URestartWidget)


#define Dodgeball_Source_Dodgeball_RestartWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URestartWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URestartWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URestartWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URestartWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URestartWidget(URestartWidget&&); \
	NO_API URestartWidget(const URestartWidget&); \
public:


#define Dodgeball_Source_Dodgeball_RestartWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URestartWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URestartWidget(URestartWidget&&); \
	NO_API URestartWidget(const URestartWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URestartWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URestartWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URestartWidget)


#define Dodgeball_Source_Dodgeball_RestartWidget_h_15_PRIVATE_PROPERTY_OFFSET
#define Dodgeball_Source_Dodgeball_RestartWidget_h_12_PROLOG
#define Dodgeball_Source_Dodgeball_RestartWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dodgeball_Source_Dodgeball_RestartWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Dodgeball_Source_Dodgeball_RestartWidget_h_15_SPARSE_DATA \
	Dodgeball_Source_Dodgeball_RestartWidget_h_15_RPC_WRAPPERS \
	Dodgeball_Source_Dodgeball_RestartWidget_h_15_INCLASS \
	Dodgeball_Source_Dodgeball_RestartWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dodgeball_Source_Dodgeball_RestartWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dodgeball_Source_Dodgeball_RestartWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Dodgeball_Source_Dodgeball_RestartWidget_h_15_SPARSE_DATA \
	Dodgeball_Source_Dodgeball_RestartWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Dodgeball_Source_Dodgeball_RestartWidget_h_15_INCLASS_NO_PURE_DECLS \
	Dodgeball_Source_Dodgeball_RestartWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DODGEBALL_API UClass* StaticClass<class URestartWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dodgeball_Source_Dodgeball_RestartWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
