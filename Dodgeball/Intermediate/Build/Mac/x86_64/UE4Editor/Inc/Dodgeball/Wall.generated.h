// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DODGEBALL_Wall_generated_h
#error "Wall.generated.h already included, missing '#pragma once' in Wall.h"
#endif
#define DODGEBALL_Wall_generated_h

#define Dodgeball_Source_Dodgeball_Wall_h_12_SPARSE_DATA
#define Dodgeball_Source_Dodgeball_Wall_h_12_RPC_WRAPPERS
#define Dodgeball_Source_Dodgeball_Wall_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Dodgeball_Source_Dodgeball_Wall_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWall(); \
	friend struct Z_Construct_UClass_AWall_Statics; \
public: \
	DECLARE_CLASS(AWall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dodgeball"), NO_API) \
	DECLARE_SERIALIZER(AWall)


#define Dodgeball_Source_Dodgeball_Wall_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAWall(); \
	friend struct Z_Construct_UClass_AWall_Statics; \
public: \
	DECLARE_CLASS(AWall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dodgeball"), NO_API) \
	DECLARE_SERIALIZER(AWall)


#define Dodgeball_Source_Dodgeball_Wall_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWall(AWall&&); \
	NO_API AWall(const AWall&); \
public:


#define Dodgeball_Source_Dodgeball_Wall_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWall(AWall&&); \
	NO_API AWall(const AWall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWall)


#define Dodgeball_Source_Dodgeball_Wall_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RootScene() { return STRUCT_OFFSET(AWall, RootScene); }


#define Dodgeball_Source_Dodgeball_Wall_h_9_PROLOG
#define Dodgeball_Source_Dodgeball_Wall_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dodgeball_Source_Dodgeball_Wall_h_12_PRIVATE_PROPERTY_OFFSET \
	Dodgeball_Source_Dodgeball_Wall_h_12_SPARSE_DATA \
	Dodgeball_Source_Dodgeball_Wall_h_12_RPC_WRAPPERS \
	Dodgeball_Source_Dodgeball_Wall_h_12_INCLASS \
	Dodgeball_Source_Dodgeball_Wall_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dodgeball_Source_Dodgeball_Wall_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dodgeball_Source_Dodgeball_Wall_h_12_PRIVATE_PROPERTY_OFFSET \
	Dodgeball_Source_Dodgeball_Wall_h_12_SPARSE_DATA \
	Dodgeball_Source_Dodgeball_Wall_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Dodgeball_Source_Dodgeball_Wall_h_12_INCLASS_NO_PURE_DECLS \
	Dodgeball_Source_Dodgeball_Wall_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DODGEBALL_API UClass* StaticClass<class AWall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dodgeball_Source_Dodgeball_Wall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
