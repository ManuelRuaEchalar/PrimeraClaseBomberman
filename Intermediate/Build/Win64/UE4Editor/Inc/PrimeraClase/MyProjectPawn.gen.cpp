// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PrimeraClase/MyProjectPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProjectPawn() {}
// Cross Module References
	PRIMERACLASE_API UClass* Z_Construct_UClass_AMyProjectPawn_NoRegister();
	PRIMERACLASE_API UClass* Z_Construct_UClass_AMyProjectPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_PrimeraClase();
	PRIMERACLASE_API UClass* Z_Construct_UClass_AMetalEnemyFactory_NoRegister();
	PRIMERACLASE_API UClass* Z_Construct_UClass_AWoodEnemyFactory_NoRegister();
	PRIMERACLASE_API UClass* Z_Construct_UClass_AEnemigo_NoRegister();
// End Cross Module References
	void AMyProjectPawn::StaticRegisterNativesAMyProjectPawn()
	{
	}
	UClass* Z_Construct_UClass_AMyProjectPawn_NoRegister()
	{
		return AMyProjectPawn::StaticClass();
	}
	struct Z_Construct_UClass_AMyProjectPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetalFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MetalFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WoodFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WoodFactory;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemigosActivos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemigosActivos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnemigosActivos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyProjectPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_PrimeraClase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyProjectPawn.h" },
		{ "ModuleRelativePath", "MyProjectPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_MetalFactory_MetaData[] = {
		{ "Comment", "// F\xc3\xa1""bricas de enemigos\n" },
		{ "ModuleRelativePath", "MyProjectPawn.h" },
		{ "ToolTip", "F\xc3\xa1""bricas de enemigos" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_MetalFactory = { "MetalFactory", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectPawn, MetalFactory), Z_Construct_UClass_AMetalEnemyFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_MetalFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_MetalFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_WoodFactory_MetaData[] = {
		{ "ModuleRelativePath", "MyProjectPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_WoodFactory = { "WoodFactory", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectPawn, WoodFactory), Z_Construct_UClass_AWoodEnemyFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_WoodFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_WoodFactory_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_EnemigosActivos_Inner = { "EnemigosActivos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AEnemigo_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_EnemigosActivos_MetaData[] = {
		{ "Comment", "// Array para almacenar enemigos creados\n" },
		{ "ModuleRelativePath", "MyProjectPawn.h" },
		{ "ToolTip", "Array para almacenar enemigos creados" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_EnemigosActivos = { "EnemigosActivos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProjectPawn, EnemigosActivos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_EnemigosActivos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_EnemigosActivos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyProjectPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_MetalFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_WoodFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_EnemigosActivos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProjectPawn_Statics::NewProp_EnemigosActivos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyProjectPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProjectPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyProjectPawn_Statics::ClassParams = {
		&AMyProjectPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyProjectPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyProjectPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProjectPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyProjectPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyProjectPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProjectPawn, 214204044);
	template<> PRIMERACLASE_API UClass* StaticClass<AMyProjectPawn>()
	{
		return AMyProjectPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProjectPawn(Z_Construct_UClass_AMyProjectPawn, &AMyProjectPawn::StaticClass, TEXT("/Script/PrimeraClase"), TEXT("AMyProjectPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProjectPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
