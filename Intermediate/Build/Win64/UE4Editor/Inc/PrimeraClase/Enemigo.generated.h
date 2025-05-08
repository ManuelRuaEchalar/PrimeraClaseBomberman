// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PRIMERACLASE_Enemigo_generated_h
#error "Enemigo.generated.h already included, missing '#pragma once' in Enemigo.h"
#endif
#define PRIMERACLASE_Enemigo_generated_h

#define PrimeraClase_Source_PrimeraClase_Enemigo_h_10_SPARSE_DATA
#define PrimeraClase_Source_PrimeraClase_Enemigo_h_10_RPC_WRAPPERS
#define PrimeraClase_Source_PrimeraClase_Enemigo_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define PrimeraClase_Source_PrimeraClase_Enemigo_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemigo(); \
	friend struct Z_Construct_UClass_AEnemigo_Statics; \
public: \
	DECLARE_CLASS(AEnemigo, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrimeraClase"), NO_API) \
	DECLARE_SERIALIZER(AEnemigo)


#define PrimeraClase_Source_PrimeraClase_Enemigo_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAEnemigo(); \
	friend struct Z_Construct_UClass_AEnemigo_Statics; \
public: \
	DECLARE_CLASS(AEnemigo, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PrimeraClase"), NO_API) \
	DECLARE_SERIALIZER(AEnemigo)


#define PrimeraClase_Source_PrimeraClase_Enemigo_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemigo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemigo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemigo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemigo(AEnemigo&&); \
	NO_API AEnemigo(const AEnemigo&); \
public:


#define PrimeraClase_Source_PrimeraClase_Enemigo_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemigo(AEnemigo&&); \
	NO_API AEnemigo(const AEnemigo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemigo); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AEnemigo)


#define PrimeraClase_Source_PrimeraClase_Enemigo_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AEnemigo, Mesh); } \
	FORCEINLINE static uint32 __PPO__Vida() { return STRUCT_OFFSET(AEnemigo, Vida); }


#define PrimeraClase_Source_PrimeraClase_Enemigo_h_7_PROLOG
#define PrimeraClase_Source_PrimeraClase_Enemigo_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrimeraClase_Source_PrimeraClase_Enemigo_h_10_PRIVATE_PROPERTY_OFFSET \
	PrimeraClase_Source_PrimeraClase_Enemigo_h_10_SPARSE_DATA \
	PrimeraClase_Source_PrimeraClase_Enemigo_h_10_RPC_WRAPPERS \
	PrimeraClase_Source_PrimeraClase_Enemigo_h_10_INCLASS \
	PrimeraClase_Source_PrimeraClase_Enemigo_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PrimeraClase_Source_PrimeraClase_Enemigo_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PrimeraClase_Source_PrimeraClase_Enemigo_h_10_PRIVATE_PROPERTY_OFFSET \
	PrimeraClase_Source_PrimeraClase_Enemigo_h_10_SPARSE_DATA \
	PrimeraClase_Source_PrimeraClase_Enemigo_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	PrimeraClase_Source_PrimeraClase_Enemigo_h_10_INCLASS_NO_PURE_DECLS \
	PrimeraClase_Source_PrimeraClase_Enemigo_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PRIMERACLASE_API UClass* StaticClass<class AEnemigo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PrimeraClase_Source_PrimeraClase_Enemigo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
