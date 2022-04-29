// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dodgeball/RestartWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRestartWidget() {}
// Cross Module References
	DODGEBALL_API UClass* Z_Construct_UClass_URestartWidget_NoRegister();
	DODGEBALL_API UClass* Z_Construct_UClass_URestartWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Dodgeball();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URestartWidget::execOnExitClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExitClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URestartWidget::execOnRestartClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRestartClicked();
		P_NATIVE_END;
	}
	void URestartWidget::StaticRegisterNativesURestartWidget()
	{
		UClass* Class = URestartWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnExitClicked", &URestartWidget::execOnExitClicked },
			{ "OnRestartClicked", &URestartWidget::execOnRestartClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URestartWidget_OnExitClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URestartWidget_OnExitClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RestartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URestartWidget_OnExitClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URestartWidget, nullptr, "OnExitClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URestartWidget_OnExitClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URestartWidget_OnExitClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URestartWidget_OnExitClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URestartWidget_OnExitClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URestartWidget_OnRestartClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URestartWidget_OnRestartClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RestartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URestartWidget_OnRestartClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URestartWidget, nullptr, "OnRestartClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URestartWidget_OnRestartClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URestartWidget_OnRestartClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URestartWidget_OnRestartClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URestartWidget_OnRestartClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URestartWidget_NoRegister()
	{
		return URestartWidget::StaticClass();
	}
	struct Z_Construct_UClass_URestartWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestartButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RestartButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExitButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExitButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URestartWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Dodgeball,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URestartWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URestartWidget_OnExitClicked, "OnExitClicked" }, // 2580898879
		{ &Z_Construct_UFunction_URestartWidget_OnRestartClicked, "OnRestartClicked" }, // 2442876357
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URestartWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RestartWidget.h" },
		{ "ModuleRelativePath", "RestartWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URestartWidget_Statics::NewProp_RestartButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RestartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URestartWidget_Statics::NewProp_RestartButton = { "RestartButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URestartWidget, RestartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URestartWidget_Statics::NewProp_RestartButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URestartWidget_Statics::NewProp_RestartButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URestartWidget_Statics::NewProp_ExitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RestartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URestartWidget_Statics::NewProp_ExitButton = { "ExitButton", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URestartWidget, ExitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URestartWidget_Statics::NewProp_ExitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URestartWidget_Statics::NewProp_ExitButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URestartWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URestartWidget_Statics::NewProp_RestartButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URestartWidget_Statics::NewProp_ExitButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URestartWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URestartWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URestartWidget_Statics::ClassParams = {
		&URestartWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URestartWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URestartWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URestartWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URestartWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URestartWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URestartWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URestartWidget, 2693494739);
	template<> DODGEBALL_API UClass* StaticClass<URestartWidget>()
	{
		return URestartWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URestartWidget(Z_Construct_UClass_URestartWidget, &URestartWidget::StaticClass, TEXT("/Script/Dodgeball"), TEXT("URestartWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URestartWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
