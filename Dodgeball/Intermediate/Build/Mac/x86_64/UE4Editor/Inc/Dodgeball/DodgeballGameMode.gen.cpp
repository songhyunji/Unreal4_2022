// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dodgeball/DodgeballGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDodgeballGameMode() {}
// Cross Module References
	DODGEBALL_API UClass* Z_Construct_UClass_ADodgeballGameMode_NoRegister();
	DODGEBALL_API UClass* Z_Construct_UClass_ADodgeballGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Dodgeball();
// End Cross Module References
	void ADodgeballGameMode::StaticRegisterNativesADodgeballGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADodgeballGameMode_NoRegister()
	{
		return ADodgeballGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADodgeballGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADodgeballGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Dodgeball,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADodgeballGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DodgeballGameMode.h" },
		{ "ModuleRelativePath", "DodgeballGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADodgeballGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADodgeballGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADodgeballGameMode_Statics::ClassParams = {
		&ADodgeballGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADodgeballGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADodgeballGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADodgeballGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADodgeballGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADodgeballGameMode, 803153985);
	template<> DODGEBALL_API UClass* StaticClass<ADodgeballGameMode>()
	{
		return ADodgeballGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADodgeballGameMode(Z_Construct_UClass_ADodgeballGameMode, &ADodgeballGameMode::StaticClass, TEXT("/Script/Dodgeball"), TEXT("ADodgeballGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADodgeballGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
