// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IDEENFEST_PROJECT_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define IDEENFEST_PROJECT_Interactable_generated_h

#define FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_SPARSE_DATA
#define FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_RPC_WRAPPERS \
	virtual void Interact_Implementation() {}; \
	virtual void ShowInteractText_Implementation() {}; \
 \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execShowInteractText);


#define FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation() {}; \
	virtual void ShowInteractText_Implementation() {}; \
 \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execShowInteractText);


#define FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_EVENT_PARMS
#define FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_CALLBACK_WRAPPERS
#define FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IDEENFEST_PROJECT_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IDEENFEST_PROJECT_API, UInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	IDEENFEST_PROJECT_API UInteractable(UInteractable&&); \
	IDEENFEST_PROJECT_API UInteractable(const UInteractable&); \
public:


#define FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IDEENFEST_PROJECT_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	IDEENFEST_PROJECT_API UInteractable(UInteractable&&); \
	IDEENFEST_PROJECT_API UInteractable(const UInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IDEENFEST_PROJECT_API, UInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable)


#define FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractable(); \
	friend struct Z_Construct_UClass_UInteractable_Statics; \
public: \
	DECLARE_CLASS(UInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/IdeenFest_Project"), IDEENFEST_PROJECT_API) \
	DECLARE_SERIALIZER(UInteractable)


#define FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_GENERATED_UINTERFACE_BODY() \
	FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_GENERATED_UINTERFACE_BODY() \
	FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	static void Execute_Interact(UObject* O); \
	static void Execute_ShowInteractText(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	static void Execute_Interact(UObject* O); \
	static void Execute_ShowInteractText(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_9_PROLOG \
	FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_EVENT_PARMS


#define FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_SPARSE_DATA \
	FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_RPC_WRAPPERS \
	FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_CALLBACK_WRAPPERS \
	FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_SPARSE_DATA \
	FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_CALLBACK_WRAPPERS \
	FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IDEENFEST_PROJECT_API UClass* StaticClass<class UInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IdeenFest_Project_Source_IdeenFest_Project_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
