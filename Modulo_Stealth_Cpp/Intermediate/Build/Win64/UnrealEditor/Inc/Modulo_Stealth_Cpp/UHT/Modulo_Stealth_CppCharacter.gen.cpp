// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modulo_Stealth_Cpp/Modulo_Stealth_CppCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModulo_Stealth_CppCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
MODULO_STEALTH_CPP_API UClass* Z_Construct_UClass_AModulo_Stealth_CppCharacter();
MODULO_STEALTH_CPP_API UClass* Z_Construct_UClass_AModulo_Stealth_CppCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Modulo_Stealth_Cpp();
// End Cross Module References

// Begin Class AModulo_Stealth_CppCharacter
void AModulo_Stealth_CppCharacter::StaticRegisterNativesAModulo_Stealth_CppCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModulo_Stealth_CppCharacter);
UClass* Z_Construct_UClass_AModulo_Stealth_CppCharacter_NoRegister()
{
	return AModulo_Stealth_CppCharacter::StaticClass();
}
struct Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Modulo_Stealth_CppCharacter.h" },
		{ "ModuleRelativePath", "Modulo_Stealth_CppCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera boom (Spring Arm) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Modulo_Stealth_CppCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera boom (Spring Arm)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera principale che segue il personaggio */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Modulo_Stealth_CppCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera principale che segue il personaggio" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mapping Context */" },
#endif
		{ "ModuleRelativePath", "Modulo_Stealth_CppCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mapping Context" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input per il salto */" },
#endif
		{ "ModuleRelativePath", "Modulo_Stealth_CppCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input per il salto" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input per il movimento */" },
#endif
		{ "ModuleRelativePath", "Modulo_Stealth_CppCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input per il movimento" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input per guardarsi attorno */" },
#endif
		{ "ModuleRelativePath", "Modulo_Stealth_CppCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input per guardarsi attorno" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input per il crouch */" },
#endif
		{ "ModuleRelativePath", "Modulo_Stealth_CppCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input per il crouch" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchSpringArmLength_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lunghezza della Spring Arm quando il personaggio \xef\xbf\xbd accovacciato */" },
#endif
		{ "ModuleRelativePath", "Modulo_Stealth_CppCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lunghezza della Spring Arm quando il personaggio \xef\xbf\xbd accovacciato" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Velocit\xef\xbf\xbd di movimento quando il personaggio \xef\xbf\xbd accovacciato */" },
#endif
		{ "ModuleRelativePath", "Modulo_Stealth_CppCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Velocit\xef\xbf\xbd di movimento quando il personaggio \xef\xbf\xbd accovacciato" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchSpringArmLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModulo_Stealth_CppCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModulo_Stealth_CppCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModulo_Stealth_CppCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModulo_Stealth_CppCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModulo_Stealth_CppCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModulo_Stealth_CppCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModulo_Stealth_CppCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::NewProp_CrouchAction = { "CrouchAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModulo_Stealth_CppCharacter, CrouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchAction_MetaData), NewProp_CrouchAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::NewProp_CrouchSpringArmLength = { "CrouchSpringArmLength", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModulo_Stealth_CppCharacter, CrouchSpringArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchSpringArmLength_MetaData), NewProp_CrouchSpringArmLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::NewProp_CrouchSpeed = { "CrouchSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AModulo_Stealth_CppCharacter, CrouchSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchSpeed_MetaData), NewProp_CrouchSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::NewProp_FollowCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::NewProp_CrouchAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::NewProp_CrouchSpringArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::NewProp_CrouchSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Modulo_Stealth_Cpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::ClassParams = {
	&AModulo_Stealth_CppCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModulo_Stealth_CppCharacter()
{
	if (!Z_Registration_Info_UClass_AModulo_Stealth_CppCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModulo_Stealth_CppCharacter.OuterSingleton, Z_Construct_UClass_AModulo_Stealth_CppCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModulo_Stealth_CppCharacter.OuterSingleton;
}
template<> MODULO_STEALTH_CPP_API UClass* StaticClass<AModulo_Stealth_CppCharacter>()
{
	return AModulo_Stealth_CppCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModulo_Stealth_CppCharacter);
AModulo_Stealth_CppCharacter::~AModulo_Stealth_CppCharacter() {}
// End Class AModulo_Stealth_CppCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Progetti_Unreal_PrimoModulo2025_Modulo_Stealth_2025_Modulo_Stealth_Cpp_Source_Modulo_Stealth_Cpp_Modulo_Stealth_CppCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AModulo_Stealth_CppCharacter, AModulo_Stealth_CppCharacter::StaticClass, TEXT("AModulo_Stealth_CppCharacter"), &Z_Registration_Info_UClass_AModulo_Stealth_CppCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModulo_Stealth_CppCharacter), 461725072U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Progetti_Unreal_PrimoModulo2025_Modulo_Stealth_2025_Modulo_Stealth_Cpp_Source_Modulo_Stealth_Cpp_Modulo_Stealth_CppCharacter_h_3427285131(TEXT("/Script/Modulo_Stealth_Cpp"),
	Z_CompiledInDeferFile_FID_Progetti_Unreal_PrimoModulo2025_Modulo_Stealth_2025_Modulo_Stealth_Cpp_Source_Modulo_Stealth_Cpp_Modulo_Stealth_CppCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Progetti_Unreal_PrimoModulo2025_Modulo_Stealth_2025_Modulo_Stealth_Cpp_Source_Modulo_Stealth_Cpp_Modulo_Stealth_CppCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
