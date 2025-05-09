// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PRIMERACLASE_EnemyFactory_generated_h
#error "EnemyFactory.generated.h already included, missing '#pragma once' in EnemyFactory.h"
#endif
#define PRIMERACLASE_EnemyFactory_generated_h

#define PrimeraClase_Source_PrimeraClase_EnemyFactory_h_13_SPARSE_DATA
#define PrimeraClase_Source_PrimeraClase_EnemyFactory_h_13_RPC_WRAPPERS
#define PrimeraClase_Source_PrimeraClase_EnemyFactory_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define PrimeraClase_Source_PrimeraClase_EnemyFactory_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PRIMERACLASE_API UEnemyFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PRIMERACLASE_API, UEnemyFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PRIMERACLASE_API UEnemyFactory(UEnemyFactory&&); \
	PRIMERACLASE_API UEnemyFactory(const UEnemyFactory&); \
public:


#define PrimeraClase_Source_PrimeraClase_EnemyFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PRIMERACLASE_API UEnemyFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PRIMERACLASE_API UEnemyFactory(UEnemyFactory&&); \
	PRIMERACLASE_API UEnemyFactory(const UEnemyFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PRIMERACLASE_API, UEnemyFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyFactory); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyFactory)


#define PrimeraClase_Source_PrimeraClase_EnemyFactory_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEnemyFactory(); \
	friend struct Z_Construct_UClass_UEnemyFactory_Statics; \
public: \
	DECLARE_CLASS(UEnemyFactory, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PrimeraClase"), PRIMERACLASE_API) \
	DECLARE_SERIALIZER(UEnemyFactory)


#define PrimeraClase_Source_PrimeraClase_EnemyFactory_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PrimeraClase_Source_PrimeraClase_EnemyFactory_h_13_GENERATED_UINTERFACE_BODY() \
	PrimeraClase_Source_PrimeraClase_EnemyFactory_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PrimeraClase_Source_PrimeraClase_EnemyFactory_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	PrimeraClase_Source_PrimeraClase_EnemyFactory_h_13_GENERATED_UINTERFACE_BODY() \
	PrimeraClase_Source_PrimeraClase_EnemyFactory_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PrimeraClase_Source_PrimeraClase_EnemyFactory_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEnemyFactory() {} \
public: \
	typedef UEnemyFactory UClassType; \
	typedef IEnemyFactory ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PrimeraClase_Source_PrimeraClase_EnemyFactory_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IEnemyFactory() {} \
public: \
	typedef UEnemyFactory UClassType; \
	typedef IEnemyFactory ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define PrimeraClase_Source_PrimeraClase_EnemyFactory_h_10_PROLOG
#define PrimeraClase_Source_PrimeraClase_EnemyFactory_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrimeraClase_Source_PrimeraClase_EnemyFactory_h_13_SPARSE_DATA \
	PrimeraClase_Source_PrimeraClase_EnemyFactory_h_13_RPC_WRAPPERS \
	PrimeraClase_Source_PrimeraClase_EnemyFactory_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PrimeraClase_Source_PrimeraClase_EnemyFactory_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrimeraClase_Source_PrimeraClase_EnemyFactory_h_13_SPARSE_DATA \
	PrimeraClase_Source_PrimeraClase_EnemyFactory_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PrimeraClase_Source_PrimeraClase_EnemyFactory_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PRIMERACLASE_API UClass* StaticClass<class UEnemyFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PrimeraClase_Source_PrimeraClase_EnemyFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
