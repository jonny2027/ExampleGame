// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoreUtility/Public/CoreUtilityBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreUtilityBPLibrary() {}
// Cross Module References
	COREUTILITY_API UEnum* Z_Construct_UEnum_CoreUtility_EImageFormatBPType();
	UPackage* Z_Construct_UPackage__Script_CoreUtility();
	COREUTILITY_API UClass* Z_Construct_UClass_UCoreUtilityBPLibrary_NoRegister();
	COREUTILITY_API UClass* Z_Construct_UClass_UCoreUtilityBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUTILITY_API UFunction* Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToString();
	COREUTILITY_API UFunction* Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUTILITY_API UFunction* Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_StringToBytes();
	COREUTILITY_API UFunction* Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes();
	COREUTILITY_API UFunction* Z_Construct_UFunction_UCoreUtilityBPLibrary_GetLoginId();
	COREUTILITY_API UFunction* Z_Construct_UFunction_UCoreUtilityBPLibrary_NowUTCString();
// End Cross Module References
	static UEnum* EImageFormatBPType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CoreUtility_EImageFormatBPType, Z_Construct_UPackage__Script_CoreUtility(), TEXT("EImageFormatBPType"));
		}
		return Singleton;
	}
	template<> COREUTILITY_API UEnum* StaticEnum<EImageFormatBPType>()
	{
		return EImageFormatBPType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EImageFormatBPType(EImageFormatBPType_StaticEnum, TEXT("/Script/CoreUtility"), TEXT("EImageFormatBPType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CoreUtility_EImageFormatBPType_Hash() { return 479392454U; }
	UEnum* Z_Construct_UEnum_CoreUtility_EImageFormatBPType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CoreUtility();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EImageFormatBPType"), 0, Get_Z_Construct_UEnum_CoreUtility_EImageFormatBPType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EImageFormatBPType::Invalid", (int64)EImageFormatBPType::Invalid },
				{ "EImageFormatBPType::PNG", (int64)EImageFormatBPType::PNG },
				{ "EImageFormatBPType::JPEG", (int64)EImageFormatBPType::JPEG },
				{ "EImageFormatBPType::GrayscaleJPEG", (int64)EImageFormatBPType::GrayscaleJPEG },
				{ "EImageFormatBPType::BMP", (int64)EImageFormatBPType::BMP },
				{ "EImageFormatBPType::ICO", (int64)EImageFormatBPType::ICO },
				{ "EImageFormatBPType::EXR", (int64)EImageFormatBPType::EXR },
				{ "EImageFormatBPType::ICNS", (int64)EImageFormatBPType::ICNS },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BMP.Comment", "/** Windows Bitmap. */" },
				{ "BMP.Name", "EImageFormatBPType::BMP" },
				{ "BMP.ToolTip", "Windows Bitmap." },
				{ "Comment", "/* Wrapper for EImageFormat::Type for BP*/" },
				{ "EXR.Comment", "/** OpenEXR (HDR) image file format. */" },
				{ "EXR.Name", "EImageFormatBPType::EXR" },
				{ "EXR.ToolTip", "OpenEXR (HDR) image file format." },
				{ "GrayscaleJPEG.Comment", "/** Single channel JPEG. */" },
				{ "GrayscaleJPEG.Name", "EImageFormatBPType::GrayscaleJPEG" },
				{ "GrayscaleJPEG.ToolTip", "Single channel JPEG." },
				{ "ICNS.Comment", "/** Mac icon. */" },
				{ "ICNS.Name", "EImageFormatBPType::ICNS" },
				{ "ICNS.ToolTip", "Mac icon." },
				{ "ICO.Comment", "/** Windows Icon resource. */" },
				{ "ICO.Name", "EImageFormatBPType::ICO" },
				{ "ICO.ToolTip", "Windows Icon resource." },
				{ "Invalid.Comment", "/** Invalid or unrecognized format. */" },
				{ "Invalid.Name", "EImageFormatBPType::Invalid" },
				{ "Invalid.ToolTip", "Invalid or unrecognized format." },
				{ "JPEG.Comment", "/** Joint Photographic Experts Group. */" },
				{ "JPEG.Name", "EImageFormatBPType::JPEG" },
				{ "JPEG.ToolTip", "Joint Photographic Experts Group." },
				{ "ModuleRelativePath", "Public/CoreUtilityBPLibrary.h" },
				{ "PNG.Comment", "/** Portable Network Graphics. */" },
				{ "PNG.Name", "EImageFormatBPType::PNG" },
				{ "PNG.ToolTip", "Portable Network Graphics." },
				{ "ToolTip", "Wrapper for EImageFormat::Type for BP" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CoreUtility,
				nullptr,
				"EImageFormatBPType",
				"EImageFormatBPType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UCoreUtilityBPLibrary::StaticRegisterNativesUCoreUtilityBPLibrary()
	{
		UClass* Class = UCoreUtilityBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_BytesToString", &UCoreUtilityBPLibrary::execConv_BytesToString },
			{ "Conv_BytesToTexture", &UCoreUtilityBPLibrary::execConv_BytesToTexture },
			{ "Conv_StringToBytes", &UCoreUtilityBPLibrary::execConv_StringToBytes },
			{ "Conv_TextureToBytes", &UCoreUtilityBPLibrary::execConv_TextureToBytes },
			{ "GetLoginId", &UCoreUtilityBPLibrary::execGetLoginId },
			{ "NowUTCString", &UCoreUtilityBPLibrary::execNowUTCString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToString_Statics
	{
		struct CoreUtilityBPLibrary_eventConv_BytesToString_Parms
		{
			TArray<uint8> InBytes;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InBytes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InBytes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUtilityBPLibrary_eventConv_BytesToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToString_Statics::NewProp_InBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToString_Statics::NewProp_InBytes = { "InBytes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUtilityBPLibrary_eventConv_BytesToString_Parms, InBytes), METADATA_PARAMS(Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToString_Statics::NewProp_InBytes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToString_Statics::NewProp_InBytes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToString_Statics::NewProp_InBytes_Inner = { "InBytes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToString_Statics::NewProp_InBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToString_Statics::NewProp_InBytes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "CoreUtility|Conversion" },
		{ "Comment", "//Convert any unicode bytes to string\n" },
		{ "DisplayName", "To String (Bytes)" },
		{ "ModuleRelativePath", "Public/CoreUtilityBPLibrary.h" },
		{ "ToolTip", "Convert any unicode bytes to string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUtilityBPLibrary, nullptr, "Conv_BytesToString", nullptr, nullptr, sizeof(CoreUtilityBPLibrary_eventConv_BytesToString_Parms), Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToTexture_Statics
	{
		struct CoreUtilityBPLibrary_eventConv_BytesToTexture_Parms
		{
			TArray<uint8> InBytes;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InBytes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InBytes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUtilityBPLibrary_eventConv_BytesToTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToTexture_Statics::NewProp_InBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToTexture_Statics::NewProp_InBytes = { "InBytes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUtilityBPLibrary_eventConv_BytesToTexture_Parms, InBytes), METADATA_PARAMS(Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToTexture_Statics::NewProp_InBytes_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToTexture_Statics::NewProp_InBytes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToTexture_Statics::NewProp_InBytes_Inner = { "InBytes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToTexture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToTexture_Statics::NewProp_InBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToTexture_Statics::NewProp_InBytes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToTexture_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "CoreUtility|Conversion" },
		{ "Comment", "//Convert bytes to UTexture2D using auto-detection - optimized, but can still have performance implication\n" },
		{ "DisplayName", "To Texture2D (Bytes)" },
		{ "ModuleRelativePath", "Public/CoreUtilityBPLibrary.h" },
		{ "ToolTip", "Convert bytes to UTexture2D using auto-detection - optimized, but can still have performance implication" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUtilityBPLibrary, nullptr, "Conv_BytesToTexture", nullptr, nullptr, sizeof(CoreUtilityBPLibrary_eventConv_BytesToTexture_Parms), Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_StringToBytes_Statics
	{
		struct CoreUtilityBPLibrary_eventConv_StringToBytes_Parms
		{
			FString InString;
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_StringToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUtilityBPLibrary_eventConv_StringToBytes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_StringToBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_StringToBytes_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUtilityBPLibrary_eventConv_StringToBytes_Parms, InString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_StringToBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_StringToBytes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_StringToBytes_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_StringToBytes_Statics::NewProp_InString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_StringToBytes_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "CoreUtility|Conversion" },
		{ "Comment", "//Convert string to UTF8 bytes\n" },
		{ "DisplayName", "To Bytes (String)" },
		{ "ModuleRelativePath", "Public/CoreUtilityBPLibrary.h" },
		{ "ToolTip", "Convert string to UTF8 bytes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_StringToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUtilityBPLibrary, nullptr, "Conv_StringToBytes", nullptr, nullptr, sizeof(CoreUtilityBPLibrary_eventConv_StringToBytes_Parms), Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_StringToBytes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_StringToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_StringToBytes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_StringToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_StringToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_StringToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes_Statics
	{
		struct CoreUtilityBPLibrary_eventConv_TextureToBytes_Parms
		{
			UTexture2D* Texture;
			TArray<uint8> OutBuffer;
			EImageFormatBPType Format;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Format;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutBuffer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutBuffer_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoreUtilityBPLibrary_eventConv_TextureToBytes_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoreUtilityBPLibrary_eventConv_TextureToBytes_Parms), &Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUtilityBPLibrary_eventConv_TextureToBytes_Parms, Format), Z_Construct_UEnum_CoreUtility_EImageFormatBPType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes_Statics::NewProp_OutBuffer = { "OutBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUtilityBPLibrary_eventConv_TextureToBytes_Parms, OutBuffer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes_Statics::NewProp_OutBuffer_Inner = { "OutBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUtilityBPLibrary_eventConv_TextureToBytes_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes_Statics::NewProp_Format,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes_Statics::NewProp_Format_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes_Statics::NewProp_OutBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes_Statics::NewProp_OutBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "CoreUtility|Conversion" },
		{ "Comment", "//Convert UTexture2D to bytes in given format - can have performance implication\n" },
		{ "CPP_Default_Format", "PNG" },
		{ "DisplayName", "To Bytes (Texture2D)" },
		{ "ModuleRelativePath", "Public/CoreUtilityBPLibrary.h" },
		{ "ToolTip", "Convert UTexture2D to bytes in given format - can have performance implication" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUtilityBPLibrary, nullptr, "Conv_TextureToBytes", nullptr, nullptr, sizeof(CoreUtilityBPLibrary_eventConv_TextureToBytes_Parms), Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUtilityBPLibrary_GetLoginId_Statics
	{
		struct CoreUtilityBPLibrary_eventGetLoginId_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreUtilityBPLibrary_GetLoginId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUtilityBPLibrary_eventGetLoginId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUtilityBPLibrary_GetLoginId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUtilityBPLibrary_GetLoginId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUtilityBPLibrary_GetLoginId_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoreUtility|Conversion" },
		{ "Comment", "//Hardware ID\n" },
		{ "ModuleRelativePath", "Public/CoreUtilityBPLibrary.h" },
		{ "ToolTip", "Hardware ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUtilityBPLibrary_GetLoginId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUtilityBPLibrary, nullptr, "GetLoginId", nullptr, nullptr, sizeof(CoreUtilityBPLibrary_eventGetLoginId_Parms), Z_Construct_UFunction_UCoreUtilityBPLibrary_GetLoginId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCoreUtilityBPLibrary_GetLoginId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUtilityBPLibrary_GetLoginId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCoreUtilityBPLibrary_GetLoginId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUtilityBPLibrary_GetLoginId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUtilityBPLibrary_GetLoginId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoreUtilityBPLibrary_NowUTCString_Statics
	{
		struct CoreUtilityBPLibrary_eventNowUTCString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCoreUtilityBPLibrary_NowUTCString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoreUtilityBPLibrary_eventNowUTCString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoreUtilityBPLibrary_NowUTCString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoreUtilityBPLibrary_NowUTCString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoreUtilityBPLibrary_NowUTCString_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoreUtility|Conversion" },
		{ "Comment", "//Current UTC time in string format\n" },
		{ "ModuleRelativePath", "Public/CoreUtilityBPLibrary.h" },
		{ "ToolTip", "Current UTC time in string format" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoreUtilityBPLibrary_NowUTCString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoreUtilityBPLibrary, nullptr, "NowUTCString", nullptr, nullptr, sizeof(CoreUtilityBPLibrary_eventNowUTCString_Parms), Z_Construct_UFunction_UCoreUtilityBPLibrary_NowUTCString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCoreUtilityBPLibrary_NowUTCString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoreUtilityBPLibrary_NowUTCString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCoreUtilityBPLibrary_NowUTCString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoreUtilityBPLibrary_NowUTCString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoreUtilityBPLibrary_NowUTCString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoreUtilityBPLibrary_NoRegister()
	{
		return UCoreUtilityBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCoreUtilityBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoreUtilityBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CoreUtility,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoreUtilityBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToString, "Conv_BytesToString" }, // 3640053494
		{ &Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_BytesToTexture, "Conv_BytesToTexture" }, // 2808593871
		{ &Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_StringToBytes, "Conv_StringToBytes" }, // 3225014862
		{ &Z_Construct_UFunction_UCoreUtilityBPLibrary_Conv_TextureToBytes, "Conv_TextureToBytes" }, // 120403339
		{ &Z_Construct_UFunction_UCoreUtilityBPLibrary_GetLoginId, "GetLoginId" }, // 1394658553
		{ &Z_Construct_UFunction_UCoreUtilityBPLibrary_NowUTCString, "NowUTCString" }, // 732532220
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoreUtilityBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Useful generic blueprint functions, mostly conversion\n */" },
		{ "IncludePath", "CoreUtilityBPLibrary.h" },
		{ "ModuleRelativePath", "Public/CoreUtilityBPLibrary.h" },
		{ "ToolTip", "Useful generic blueprint functions, mostly conversion" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoreUtilityBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreUtilityBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoreUtilityBPLibrary_Statics::ClassParams = {
		&UCoreUtilityBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoreUtilityBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCoreUtilityBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoreUtilityBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoreUtilityBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoreUtilityBPLibrary, 1872082247);
	template<> COREUTILITY_API UClass* StaticClass<UCoreUtilityBPLibrary>()
	{
		return UCoreUtilityBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoreUtilityBPLibrary(Z_Construct_UClass_UCoreUtilityBPLibrary, &UCoreUtilityBPLibrary::StaticClass, TEXT("/Script/CoreUtility"), TEXT("UCoreUtilityBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreUtilityBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
