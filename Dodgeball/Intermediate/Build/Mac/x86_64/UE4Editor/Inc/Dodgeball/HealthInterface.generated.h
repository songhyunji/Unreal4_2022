// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DODGEBALL_HealthInterface_generated_h
#error "HealthInterface.generated.h already included, missing '#pragma once' in HealthInterface.h"
#endif
#define DODGEBALL_HealthInterface_generated_h

#define Dodgeball_Source_Dodgeball_HealthInterface_h_13_SPARSE_DATA
#define Dodgeball_Source_Dodgeball_HealthInterface_h_13_RPC_WRAPPERS \
	virtual void OnDeath_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnDeath);


#define Dodgeball_Source_Dodgeball_HealthInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDeath);


#define Dodgeball_Source_Dodgeball_HealthInterface_h_13_EVENT_PARMS
#define Dodgeball_Source_Dodgeball_HealthInterface_h_13_CALLBACK_WRAPPERS
#define Dodgeball_Source_Dodgeball_HealthInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DODGEBALL_API UHealthInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DODGEBALL_API, UHealthInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DODGEBALL_API UHealthInterface(UHealthInterface&&); \
	DODGEBALL_API UHealthInterface(const UHealthInterface&); \
public:


#define Dodgeball_Source_Dodgeball_HealthInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DODGEBALL_API UHealthInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DODGEBALL_API UHealthInterface(UHealthInterface&&); \
	DODGEBALL_API UHealthInterface(const UHealthInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DODGEBALL_API, UHealthInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthInterface)


#define Dodgeball_Source_Dodgeball_HealthInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHealthInterface(); \
	friend struct Z_Construct_UClass_UHealthInterface_Statics; \
public: \
	DECLARE_CLASS(UHealthInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Dodgeball"), DODGEBALL_API) \
	DECLARE_SERIALIZER(UHealthInterface)


#define Dodgeball_Source_Dodgeball_HealthInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Dodgeball_Source_Dodgeball_HealthInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Dodgeball_Source_Dodgeball_HealthInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dodgeball_Source_Dodgeball_HealthInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Dodgeball_Source_Dodgeball_HealthInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Dodgeball_Source_Dodgeball_HealthInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dodgeball_Source_Dodgeball_HealthInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHealthInterface() {} \
public: \
	typedef UHealthInterface UClassType; \
	typedef IHealthInterface ThisClass; \
	static void Execute_OnDeath(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Dodgeball_Source_Dodgeball_HealthInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IHealthInterface() {} \
public: \
	typedef UHealthInterface UClassType; \
	typedef IHealthInterface ThisClass; \
	static void Execute_OnDeath(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Dodgeball_Source_Dodgeball_HealthInterface_h_10_PROLOG \
	Dodgeball_Source_Dodgeball_HealthInterface_h_13_EVENT_PARMS


#define Dodgeball_Source_Dodgeball_HealthInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dodgeball_Source_Dodgeball_HealthInterface_h_13_SPARSE_DATA \
	Dodgeball_Source_Dodgeball_HealthInterface_h_13_RPC_WRAPPERS \
	Dodgeball_Source_Dodgeball_HealthInterface_h_13_CALLBACK_WRAPPERS \
	Dodgeball_Source_Dodgeball_HealthInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dodgeball_Source_Dodgeball_HealthInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dodgeball_Source_Dodgeball_HealthInterface_h_13_SPARSE_DATA \
	Dodgeball_Source_Dodgeball_HealthInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Dodgeball_Source_Dodgeball_HealthInterface_h_13_CALLBACK_WRAPPERS \
	Dodgeball_Source_Dodgeball_HealthInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DODGEBALL_API UClass* StaticClass<class UHealthInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dodgeball_Source_Dodgeball_HealthInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
