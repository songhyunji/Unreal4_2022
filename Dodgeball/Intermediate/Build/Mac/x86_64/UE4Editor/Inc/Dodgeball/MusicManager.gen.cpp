// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dodgeball/MusicManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMusicManager() {}
// Cross Module References
	DODGEBALL_API UClass* Z_Construct_UClass_AMusicManager_NoRegister();
	DODGEBALL_API UClass* Z_Construct_UClass_AMusicManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Dodgeball();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	void AMusicManager::StaticRegisterNativesAMusicManager()
	{
	}
	UClass* Z_Construct_UClass_AMusicManager_NoRegister()
	{
		return AMusicManager::StaticClass();
	}
	struct Z_Construct_UClass_AMusicManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMusicManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Dodgeball,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMusicManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MusicManager.h" },
		{ "ModuleRelativePath", "MusicManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMusicManager_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Category", "MusicManager" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MusicManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMusicManager_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMusicManager, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMusicManager_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMusicManager_Statics::NewProp_AudioComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMusicManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMusicManager_Statics::NewProp_AudioComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMusicManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMusicManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMusicManager_Statics::ClassParams = {
		&AMusicManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMusicManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMusicManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMusicManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMusicManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMusicManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMusicManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMusicManager, 3733055882);
	template<> DODGEBALL_API UClass* StaticClass<AMusicManager>()
	{
		return AMusicManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMusicManager(Z_Construct_UClass_AMusicManager, &AMusicManager::StaticClass, TEXT("/Script/Dodgeball"), TEXT("AMusicManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMusicManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
