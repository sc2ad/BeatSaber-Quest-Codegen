#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System {
struct DateTime;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
class IConvertible;
}
namespace System {
struct Base64FormattingOptions;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
namespace System {
struct Decimal;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace System {
class Convert;
}
// Type: System::Convert
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2364))
// CS Name: System.Convert
class CORDL_TYPE Convert : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Convert() = default;

// Ctor Parameters [CppParam { name: "", ty: "Convert", modifiers: " const&", def_value: None }]
constexpr Convert(Convert const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Convert", modifiers: "&&", def_value: None }]
constexpr Convert(Convert&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Convert(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Convert& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Convert& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Convert& operator=(Convert&& o) noexcept = default;
  constexpr Convert& operator=(Convert const& o) noexcept = default;
                


// Fields

static ::ArrayW<int8_t> __declspec(property(get=__get_s_decodingMap, put=__set_s_decodingMap))  s_decodingMap;

static void __set_s_decodingMap(::ArrayW<int8_t> value) ;

static ::ArrayW<int8_t> __get_s_decodingMap() ;

static ::ArrayW<System::Type> __declspec(property(get=__get_ConvertTypes, put=__set_ConvertTypes))  ConvertTypes;

static void __set_ConvertTypes(::ArrayW<System::Type> value) ;

static ::ArrayW<System::Type> __get_ConvertTypes() ;

static System::Type __declspec(property(get=__get_EnumType, put=__set_EnumType))  EnumType;

static void __set_EnumType(System::Type value) ;

static System::Type __get_EnumType() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_base64Table, put=__set_base64Table))  base64Table;

static void __set_base64Table(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_base64Table() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_DBNull, put=__set_DBNull))  DBNull;

static void __set_DBNull(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_DBNull() ;


// Methods

/// @brief Method TryDecodeFromUtf16 addr 0x23ba950 size 0x374 virtual false final false
static bool TryDecodeFromUtf16(System::ReadOnlySpan_1<char16_t> utf16, System::Span_1<uint8_t> bytes, ByRef<int32_t> consumed, ByRef<int32_t> written) ;

/// @brief Method Decode addr 0x23bacc4 size 0x50 virtual false final false
static int32_t Decode(ByRef<char16_t> encodedChars, ByRef<int8_t> decodingMap) ;

/// @brief Method WriteThreeLowOrderBytes addr 0x23bad14 size 0x18 virtual false final false
static void WriteThreeLowOrderBytes(ByRef<uint8_t> destination, int32_t value) ;

/// @brief Method GetTypeCode addr 0x23bad2c size 0xc4 virtual false final false
static System::TypeCode GetTypeCode(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ChangeType addr 0x23badf0 size 0x848 virtual false final false
static ::bs_hook::Il2CppWrapperType ChangeType(::bs_hook::Il2CppWrapperType value, System::TypeCode typeCode, System::IFormatProvider provider) ;

/// @brief Method DefaultToType addr 0x23b6b24 size 0xd14 virtual false final false
static ::bs_hook::Il2CppWrapperType DefaultToType(System::IConvertible value, System::Type targetType, System::IFormatProvider provider) ;

/// @brief Method ChangeType addr 0x23bb638 size 0x9c virtual false final false
static ::bs_hook::Il2CppWrapperType ChangeType(::bs_hook::Il2CppWrapperType value, System::Type conversionType) ;

/// @brief Method ChangeType addr 0x23bb6d4 size 0xbfc virtual false final false
static ::bs_hook::Il2CppWrapperType ChangeType(::bs_hook::Il2CppWrapperType value, System::Type conversionType, System::IFormatProvider provider) ;

/// @brief Method ThrowCharOverflowException addr 0x23bc2d0 size 0x50 virtual false final false
static void ThrowCharOverflowException() ;

/// @brief Method ThrowByteOverflowException addr 0x23bc320 size 0x50 virtual false final false
static void ThrowByteOverflowException() ;

/// @brief Method ThrowSByteOverflowException addr 0x23bc370 size 0x50 virtual false final false
static void ThrowSByteOverflowException() ;

/// @brief Method ThrowInt16OverflowException addr 0x23bc3c0 size 0x50 virtual false final false
static void ThrowInt16OverflowException() ;

/// @brief Method ThrowUInt16OverflowException addr 0x23bc410 size 0x50 virtual false final false
static void ThrowUInt16OverflowException() ;

/// @brief Method ThrowInt32OverflowException addr 0x23bc460 size 0x50 virtual false final false
static void ThrowInt32OverflowException() ;

/// @brief Method ThrowUInt32OverflowException addr 0x23bc4b0 size 0x50 virtual false final false
static void ThrowUInt32OverflowException() ;

/// @brief Method ThrowInt64OverflowException addr 0x23bc500 size 0x50 virtual false final false
static void ThrowInt64OverflowException() ;

/// @brief Method ThrowUInt64OverflowException addr 0x23bc550 size 0x50 virtual false final false
static void ThrowUInt64OverflowException() ;

/// @brief Method ToBoolean addr 0x23bc5a0 size 0xf4 virtual false final false
static bool ToBoolean(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToBoolean addr 0x23bc694 size 0x104 virtual false final false
static bool ToBoolean(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToBoolean addr 0x23bc798 size 0xc virtual false final false
static bool ToBoolean(int8_t value) ;

/// @brief Method ToBoolean addr 0x23b81f4 size 0xc virtual false final false
static bool ToBoolean(uint8_t value) ;

/// @brief Method ToBoolean addr 0x23bc7a4 size 0xc virtual false final false
static bool ToBoolean(int16_t value) ;

/// @brief Method ToBoolean addr 0x23bc7b0 size 0xc virtual false final false
static bool ToBoolean(uint16_t value) ;

/// @brief Method ToBoolean addr 0x23bc7bc size 0xc virtual false final false
static bool ToBoolean(int32_t value) ;

/// @brief Method ToBoolean addr 0x23bc7c8 size 0xc virtual false final false
static bool ToBoolean(uint32_t value) ;

/// @brief Method ToBoolean addr 0x23bc7d4 size 0xc virtual false final false
static bool ToBoolean(int64_t value) ;

/// @brief Method ToBoolean addr 0x23bc7e0 size 0xc virtual false final false
static bool ToBoolean(uint64_t value) ;

/// @brief Method ToBoolean addr 0x23bc7ec size 0x68 virtual false final false
static bool ToBoolean(::StringW value) ;

/// @brief Method ToBoolean addr 0x23bc854 size 0x68 virtual false final false
static bool ToBoolean(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToBoolean addr 0x23bc8bc size 0xc virtual false final false
static bool ToBoolean(float_t value) ;

/// @brief Method ToBoolean addr 0x23bc8c8 size 0xc virtual false final false
static bool ToBoolean(double_t value) ;

/// @brief Method ToBoolean addr 0x23bc8d4 size 0x74 virtual false final false
static bool ToBoolean(System::Decimal value) ;

/// @brief Method ToChar addr 0x23bc948 size 0xf4 virtual false final false
static char16_t ToChar(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToChar addr 0x23bca3c size 0x104 virtual false final false
static char16_t ToChar(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToChar addr 0x23bcb40 size 0x54 virtual false final false
static char16_t ToChar(int8_t value) ;

/// @brief Method ToChar addr 0x23b8258 size 0x8 virtual false final false
static char16_t ToChar(uint8_t value) ;

/// @brief Method ToChar addr 0x23bcb94 size 0x58 virtual false final false
static char16_t ToChar(int16_t value) ;

/// @brief Method ToChar addr 0x23bcbec size 0x4 virtual false final false
static char16_t ToChar(uint16_t value) ;

/// @brief Method ToChar addr 0x23bcbf0 size 0x58 virtual false final false
static char16_t ToChar(int32_t value) ;

/// @brief Method ToChar addr 0x23bcc48 size 0x58 virtual false final false
static char16_t ToChar(uint32_t value) ;

/// @brief Method ToChar addr 0x23bcca0 size 0x58 virtual false final false
static char16_t ToChar(int64_t value) ;

/// @brief Method ToChar addr 0x23bccf8 size 0x58 virtual false final false
static char16_t ToChar(uint64_t value) ;

/// @brief Method ToChar addr 0x23bcd50 size 0x54 virtual false final false
static char16_t ToChar(::StringW value) ;

/// @brief Method ToChar addr 0x23bcda4 size 0xa4 virtual false final false
static char16_t ToChar(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToSByte addr 0x23bce48 size 0xf4 virtual false final false
static int8_t ToSByte(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToSByte addr 0x23bcf3c size 0x104 virtual false final false
static int8_t ToSByte(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToSByte addr 0x23b657c size 0x8 virtual false final false
static int8_t ToSByte(bool value) ;

/// @brief Method ToSByte addr 0x23b9300 size 0x5c virtual false final false
static int8_t ToSByte(char16_t value) ;

/// @brief Method ToSByte addr 0x23b82b8 size 0x58 virtual false final false
static int8_t ToSByte(uint8_t value) ;

/// @brief Method ToSByte addr 0x23bd040 size 0x60 virtual false final false
static int8_t ToSByte(int16_t value) ;

/// @brief Method ToSByte addr 0x23bd0a0 size 0x5c virtual false final false
static int8_t ToSByte(uint16_t value) ;

/// @brief Method ToSByte addr 0x23bd0fc size 0x58 virtual false final false
static int8_t ToSByte(int32_t value) ;

/// @brief Method ToSByte addr 0x23bd154 size 0x58 virtual false final false
static int8_t ToSByte(uint32_t value) ;

/// @brief Method ToSByte addr 0x23bd1ac size 0x58 virtual false final false
static int8_t ToSByte(int64_t value) ;

/// @brief Method ToSByte addr 0x23bd204 size 0x58 virtual false final false
static int8_t ToSByte(uint64_t value) ;

/// @brief Method ToSByte addr 0x23bd25c size 0x5c virtual false final false
static int8_t ToSByte(float_t value) ;

/// @brief Method ToSByte addr 0x23bd2b8 size 0x60 virtual false final false
static int8_t ToSByte(double_t value) ;

/// @brief Method ToSByte addr 0x23bd414 size 0x74 virtual false final false
static int8_t ToSByte(System::Decimal value) ;

/// @brief Method ToSByte addr 0x23bd488 size 0x10 virtual false final false
static int8_t ToSByte(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToByte addr 0x23bd498 size 0xf4 virtual false final false
static uint8_t ToByte(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToByte addr 0x23bd58c size 0x104 virtual false final false
static uint8_t ToByte(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToByte addr 0x23b65e0 size 0x8 virtual false final false
static uint8_t ToByte(bool value) ;

/// @brief Method ToByte addr 0x23b93b4 size 0x5c virtual false final false
static uint8_t ToByte(char16_t value) ;

/// @brief Method ToByte addr 0x23bd690 size 0x58 virtual false final false
static uint8_t ToByte(int8_t value) ;

/// @brief Method ToByte addr 0x23bd6e8 size 0x5c virtual false final false
static uint8_t ToByte(int16_t value) ;

/// @brief Method ToByte addr 0x23bd744 size 0x5c virtual false final false
static uint8_t ToByte(uint16_t value) ;

/// @brief Method ToByte addr 0x23bd7a0 size 0x58 virtual false final false
static uint8_t ToByte(int32_t value) ;

/// @brief Method ToByte addr 0x23bd7f8 size 0x58 virtual false final false
static uint8_t ToByte(uint32_t value) ;

/// @brief Method ToByte addr 0x23bd850 size 0x58 virtual false final false
static uint8_t ToByte(int64_t value) ;

/// @brief Method ToByte addr 0x23bd8a8 size 0x58 virtual false final false
static uint8_t ToByte(uint64_t value) ;

/// @brief Method ToByte addr 0x23bd900 size 0x5c virtual false final false
static uint8_t ToByte(float_t value) ;

/// @brief Method ToByte addr 0x23bd95c size 0x60 virtual false final false
static uint8_t ToByte(double_t value) ;

/// @brief Method ToByte addr 0x23bd9bc size 0x74 virtual false final false
static uint8_t ToByte(System::Decimal value) ;

/// @brief Method ToByte addr 0x23bda30 size 0x74 virtual false final false
static uint8_t ToByte(::StringW value) ;

/// @brief Method ToByte addr 0x23bdaa4 size 0x14 virtual false final false
static uint8_t ToByte(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToInt16 addr 0x23bdab8 size 0xf4 virtual false final false
static int16_t ToInt16(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToInt16 addr 0x23bdbac size 0x104 virtual false final false
static int16_t ToInt16(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToInt16 addr 0x23b6644 size 0x8 virtual false final false
static int16_t ToInt16(bool value) ;

/// @brief Method ToInt16 addr 0x23b9468 size 0x58 virtual false final false
static int16_t ToInt16(char16_t value) ;

/// @brief Method ToInt16 addr 0x23bdcb0 size 0x8 virtual false final false
static int16_t ToInt16(int8_t value) ;

/// @brief Method ToInt16 addr 0x23b8370 size 0x8 virtual false final false
static int16_t ToInt16(uint8_t value) ;

/// @brief Method ToInt16 addr 0x23bdcb8 size 0x58 virtual false final false
static int16_t ToInt16(uint16_t value) ;

/// @brief Method ToInt16 addr 0x23bdd10 size 0x58 virtual false final false
static int16_t ToInt16(int32_t value) ;

/// @brief Method ToInt16 addr 0x23bdd68 size 0x58 virtual false final false
static int16_t ToInt16(uint32_t value) ;

/// @brief Method ToInt16 addr 0x23bddc0 size 0x58 virtual false final false
static int16_t ToInt16(int64_t value) ;

/// @brief Method ToInt16 addr 0x23bde18 size 0x58 virtual false final false
static int16_t ToInt16(uint64_t value) ;

/// @brief Method ToInt16 addr 0x23bde70 size 0x5c virtual false final false
static int16_t ToInt16(float_t value) ;

/// @brief Method ToInt16 addr 0x23bdecc size 0x60 virtual false final false
static int16_t ToInt16(double_t value) ;

/// @brief Method ToInt16 addr 0x23bdf2c size 0x74 virtual false final false
static int16_t ToInt16(System::Decimal value) ;

/// @brief Method ToInt16 addr 0x23bdfa0 size 0x18 virtual false final false
static int16_t ToInt16(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToUInt16 addr 0x23bdfb8 size 0xf4 virtual false final false
static uint16_t ToUInt16(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToUInt16 addr 0x23be0ac size 0x104 virtual false final false
static uint16_t ToUInt16(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToUInt16 addr 0x23b66a8 size 0x8 virtual false final false
static uint16_t ToUInt16(bool value) ;

/// @brief Method ToUInt16 addr 0x23b9518 size 0x4 virtual false final false
static uint16_t ToUInt16(char16_t value) ;

/// @brief Method ToUInt16 addr 0x23be1b0 size 0x54 virtual false final false
static uint16_t ToUInt16(int8_t value) ;

/// @brief Method ToUInt16 addr 0x23b83d0 size 0x8 virtual false final false
static uint16_t ToUInt16(uint8_t value) ;

/// @brief Method ToUInt16 addr 0x23be204 size 0x58 virtual false final false
static uint16_t ToUInt16(int16_t value) ;

/// @brief Method ToUInt16 addr 0x23be25c size 0x58 virtual false final false
static uint16_t ToUInt16(int32_t value) ;

/// @brief Method ToUInt16 addr 0x23be2b4 size 0x58 virtual false final false
static uint16_t ToUInt16(uint32_t value) ;

/// @brief Method ToUInt16 addr 0x23be30c size 0x58 virtual false final false
static uint16_t ToUInt16(int64_t value) ;

/// @brief Method ToUInt16 addr 0x23be364 size 0x58 virtual false final false
static uint16_t ToUInt16(uint64_t value) ;

/// @brief Method ToUInt16 addr 0x23be3bc size 0x5c virtual false final false
static uint16_t ToUInt16(float_t value) ;

/// @brief Method ToUInt16 addr 0x23be418 size 0x60 virtual false final false
static uint16_t ToUInt16(double_t value) ;

/// @brief Method ToUInt16 addr 0x23be478 size 0x74 virtual false final false
static uint16_t ToUInt16(System::Decimal value) ;

/// @brief Method ToUInt16 addr 0x23be4ec size 0x18 virtual false final false
static uint16_t ToUInt16(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToInt32 addr 0x23be504 size 0xf4 virtual false final false
static int32_t ToInt32(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToInt32 addr 0x23be5f8 size 0x104 virtual false final false
static int32_t ToInt32(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToInt32 addr 0x23b670c size 0x8 virtual false final false
static int32_t ToInt32(bool value) ;

/// @brief Method ToInt32 addr 0x23b9574 size 0x8 virtual false final false
static int32_t ToInt32(char16_t value) ;

/// @brief Method ToInt32 addr 0x23b8430 size 0x8 virtual false final false
static int32_t ToInt32(uint8_t value) ;

/// @brief Method ToInt32 addr 0x23be6fc size 0x8 virtual false final false
static int32_t ToInt32(int16_t value) ;

/// @brief Method ToInt32 addr 0x23be704 size 0x8 virtual false final false
static int32_t ToInt32(uint16_t value) ;

/// @brief Method ToInt32 addr 0x23be70c size 0x54 virtual false final false
static int32_t ToInt32(uint32_t value) ;

/// @brief Method ToInt32 addr 0x23be760 size 0x58 virtual false final false
static int32_t ToInt32(int64_t value) ;

/// @brief Method ToInt32 addr 0x23be7b8 size 0x58 virtual false final false
static int32_t ToInt32(uint64_t value) ;

/// @brief Method ToInt32 addr 0x23be810 size 0x5c virtual false final false
static int32_t ToInt32(float_t value) ;

/// @brief Method ToInt32 addr 0x23bd318 size 0xfc virtual false final false
static int32_t ToInt32(double_t value) ;

/// @brief Method ToInt32 addr 0x23be86c size 0x74 virtual false final false
static int32_t ToInt32(System::Decimal value) ;

/// @brief Method ToInt32 addr 0x23be8e0 size 0x78 virtual false final false
static int32_t ToInt32(::StringW value) ;

/// @brief Method ToInt32 addr 0x23be958 size 0x18 virtual false final false
static int32_t ToInt32(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToUInt32 addr 0x23be970 size 0xf4 virtual false final false
static uint32_t ToUInt32(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToUInt32 addr 0x23bea64 size 0x104 virtual false final false
static uint32_t ToUInt32(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToUInt32 addr 0x23b6770 size 0x8 virtual false final false
static uint32_t ToUInt32(bool value) ;

/// @brief Method ToUInt32 addr 0x23b95d4 size 0x8 virtual false final false
static uint32_t ToUInt32(char16_t value) ;

/// @brief Method ToUInt32 addr 0x23beb68 size 0x54 virtual false final false
static uint32_t ToUInt32(int8_t value) ;

/// @brief Method ToUInt32 addr 0x23b8490 size 0x8 virtual false final false
static uint32_t ToUInt32(uint8_t value) ;

/// @brief Method ToUInt32 addr 0x23bebbc size 0x54 virtual false final false
static uint32_t ToUInt32(int16_t value) ;

/// @brief Method ToUInt32 addr 0x23bec10 size 0x8 virtual false final false
static uint32_t ToUInt32(uint16_t value) ;

/// @brief Method ToUInt32 addr 0x23bec18 size 0x54 virtual false final false
static uint32_t ToUInt32(int32_t value) ;

/// @brief Method ToUInt32 addr 0x23bec6c size 0x58 virtual false final false
static uint32_t ToUInt32(int64_t value) ;

/// @brief Method ToUInt32 addr 0x23becc4 size 0x58 virtual false final false
static uint32_t ToUInt32(uint64_t value) ;

/// @brief Method ToUInt32 addr 0x23bed1c size 0x5c virtual false final false
static uint32_t ToUInt32(float_t value) ;

/// @brief Method ToUInt32 addr 0x23bed78 size 0xa8 virtual false final false
static uint32_t ToUInt32(double_t value) ;

/// @brief Method ToUInt32 addr 0x23bee20 size 0x74 virtual false final false
static uint32_t ToUInt32(System::Decimal value) ;

/// @brief Method ToUInt32 addr 0x23bee94 size 0x18 virtual false final false
static uint32_t ToUInt32(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToInt64 addr 0x23beeac size 0xf4 virtual false final false
static int64_t ToInt64(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToInt64 addr 0x23befa0 size 0x104 virtual false final false
static int64_t ToInt64(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToInt64 addr 0x23b67d4 size 0x8 virtual false final false
static int64_t ToInt64(bool value) ;

/// @brief Method ToInt64 addr 0x23b9634 size 0x8 virtual false final false
static int64_t ToInt64(char16_t value) ;

/// @brief Method ToInt64 addr 0x23bf0a4 size 0x8 virtual false final false
static int64_t ToInt64(int8_t value) ;

/// @brief Method ToInt64 addr 0x23b84f0 size 0x8 virtual false final false
static int64_t ToInt64(uint8_t value) ;

/// @brief Method ToInt64 addr 0x23bf0ac size 0x8 virtual false final false
static int64_t ToInt64(int16_t value) ;

/// @brief Method ToInt64 addr 0x23bf0b4 size 0x8 virtual false final false
static int64_t ToInt64(uint16_t value) ;

/// @brief Method ToInt64 addr 0x23bf0bc size 0x8 virtual false final false
static int64_t ToInt64(int32_t value) ;

/// @brief Method ToInt64 addr 0x23bf0c4 size 0x8 virtual false final false
static int64_t ToInt64(uint32_t value) ;

/// @brief Method ToInt64 addr 0x23bf0cc size 0x54 virtual false final false
static int64_t ToInt64(uint64_t value) ;

/// @brief Method ToInt64 addr 0x23bf120 size 0x5c virtual false final false
static int64_t ToInt64(float_t value) ;

/// @brief Method ToInt64 addr 0x23bf17c size 0x110 virtual false final false
static int64_t ToInt64(double_t value) ;

/// @brief Method ToInt64 addr 0x23bf28c size 0x74 virtual false final false
static int64_t ToInt64(System::Decimal value) ;

/// @brief Method ToInt64 addr 0x23bf300 size 0x78 virtual false final false
static int64_t ToInt64(::StringW value) ;

/// @brief Method ToInt64 addr 0x23bf378 size 0x18 virtual false final false
static int64_t ToInt64(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToUInt64 addr 0x23bf390 size 0xf4 virtual false final false
static uint64_t ToUInt64(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToUInt64 addr 0x23bf484 size 0x104 virtual false final false
static uint64_t ToUInt64(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToUInt64 addr 0x23b6838 size 0x8 virtual false final false
static uint64_t ToUInt64(bool value) ;

/// @brief Method ToUInt64 addr 0x23b9694 size 0x8 virtual false final false
static uint64_t ToUInt64(char16_t value) ;

/// @brief Method ToUInt64 addr 0x23bf588 size 0x58 virtual false final false
static uint64_t ToUInt64(int8_t value) ;

/// @brief Method ToUInt64 addr 0x23b8550 size 0x8 virtual false final false
static uint64_t ToUInt64(uint8_t value) ;

/// @brief Method ToUInt64 addr 0x23bf5e0 size 0x58 virtual false final false
static uint64_t ToUInt64(int16_t value) ;

/// @brief Method ToUInt64 addr 0x23bf638 size 0x8 virtual false final false
static uint64_t ToUInt64(uint16_t value) ;

/// @brief Method ToUInt64 addr 0x23bf640 size 0x54 virtual false final false
static uint64_t ToUInt64(int32_t value) ;

/// @brief Method ToUInt64 addr 0x23bf694 size 0x8 virtual false final false
static uint64_t ToUInt64(uint32_t value) ;

/// @brief Method ToUInt64 addr 0x23bf69c size 0x54 virtual false final false
static uint64_t ToUInt64(int64_t value) ;

/// @brief Method ToUInt64 addr 0x23bf6f0 size 0x5c virtual false final false
static uint64_t ToUInt64(float_t value) ;

/// @brief Method ToUInt64 addr 0x23bf74c size 0xfc virtual false final false
static uint64_t ToUInt64(double_t value) ;

/// @brief Method ToUInt64 addr 0x23bf848 size 0x74 virtual false final false
static uint64_t ToUInt64(System::Decimal value) ;

/// @brief Method ToUInt64 addr 0x23bf8bc size 0x18 virtual false final false
static uint64_t ToUInt64(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToSingle addr 0x23bf8d4 size 0xf4 virtual false final false
static float_t ToSingle(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToSingle addr 0x23bf9c8 size 0x104 virtual false final false
static float_t ToSingle(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToSingle addr 0x23bfacc size 0xc virtual false final false
static float_t ToSingle(int8_t value) ;

/// @brief Method ToSingle addr 0x23b85b0 size 0xc virtual false final false
static float_t ToSingle(uint8_t value) ;

/// @brief Method ToSingle addr 0x23bfad8 size 0xc virtual false final false
static float_t ToSingle(int16_t value) ;

/// @brief Method ToSingle addr 0x23bfae4 size 0xc virtual false final false
static float_t ToSingle(uint16_t value) ;

/// @brief Method ToSingle addr 0x23bfaf0 size 0x8 virtual false final false
static float_t ToSingle(int32_t value) ;

/// @brief Method ToSingle addr 0x23bfaf8 size 0xc virtual false final false
static float_t ToSingle(uint32_t value) ;

/// @brief Method ToSingle addr 0x23bfb04 size 0x8 virtual false final false
static float_t ToSingle(int64_t value) ;

/// @brief Method ToSingle addr 0x23bfb0c size 0xc virtual false final false
static float_t ToSingle(uint64_t value) ;

/// @brief Method ToSingle addr 0x23bfb18 size 0x8 virtual false final false
static float_t ToSingle(double_t value) ;

/// @brief Method ToSingle addr 0x23bfb20 size 0x68 virtual false final false
static float_t ToSingle(System::Decimal value) ;

/// @brief Method ToSingle addr 0x23bfb88 size 0x78 virtual false final false
static float_t ToSingle(::StringW value) ;

/// @brief Method ToSingle addr 0x23bfc00 size 0x1c virtual false final false
static float_t ToSingle(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToSingle addr 0x23b68a4 size 0x14 virtual false final false
static float_t ToSingle(bool value) ;

/// @brief Method ToDouble addr 0x23bfc1c size 0xf4 virtual false final false
static double_t ToDouble(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method ToDouble addr 0x23bfd10 size 0x104 virtual false final false
static double_t ToDouble(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToDouble addr 0x23bfe14 size 0xc virtual false final false
static double_t ToDouble(int8_t value) ;

/// @brief Method ToDouble addr 0x23b8614 size 0xc virtual false final false
static double_t ToDouble(uint8_t value) ;

/// @brief Method ToDouble addr 0x23bfe20 size 0xc virtual false final false
static double_t ToDouble(int16_t value) ;

/// @brief Method ToDouble addr 0x23bfe2c size 0xc virtual false final false
static double_t ToDouble(uint16_t value) ;

/// @brief Method ToDouble addr 0x23bfe38 size 0x8 virtual false final false
static double_t ToDouble(int32_t value) ;

/// @brief Method ToDouble addr 0x23bfe40 size 0x8 virtual false final false
static double_t ToDouble(uint32_t value) ;

/// @brief Method ToDouble addr 0x23bfe48 size 0x8 virtual false final false
static double_t ToDouble(int64_t value) ;

/// @brief Method ToDouble addr 0x23bfe50 size 0x8 virtual false final false
static double_t ToDouble(uint64_t value) ;

/// @brief Method ToDouble addr 0x23bfe58 size 0x8 virtual false final false
static double_t ToDouble(float_t value) ;

/// @brief Method ToDouble addr 0x23bfe60 size 0x68 virtual false final false
static double_t ToDouble(System::Decimal value) ;

/// @brief Method ToDouble addr 0x23bfec8 size 0x1c virtual false final false
static double_t ToDouble(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToDouble addr 0x23b691c size 0x14 virtual false final false
static double_t ToDouble(bool value) ;

/// @brief Method ToDecimal addr 0x23bfee4 size 0x128 virtual false final false
static System::Decimal ToDecimal(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToDecimal addr 0x23c000c size 0x58 virtual false final false
static System::Decimal ToDecimal(int8_t value) ;

/// @brief Method ToDecimal addr 0x23b8678 size 0x58 virtual false final false
static System::Decimal ToDecimal(uint8_t value) ;

/// @brief Method ToDecimal addr 0x23c0064 size 0x58 virtual false final false
static System::Decimal ToDecimal(int16_t value) ;

/// @brief Method ToDecimal addr 0x23c00bc size 0x58 virtual false final false
static System::Decimal ToDecimal(uint16_t value) ;

/// @brief Method ToDecimal addr 0x23c0114 size 0x58 virtual false final false
static System::Decimal ToDecimal(int32_t value) ;

/// @brief Method ToDecimal addr 0x23c016c size 0x58 virtual false final false
static System::Decimal ToDecimal(uint32_t value) ;

/// @brief Method ToDecimal addr 0x23c01c4 size 0x58 virtual false final false
static System::Decimal ToDecimal(int64_t value) ;

/// @brief Method ToDecimal addr 0x23c021c size 0x58 virtual false final false
static System::Decimal ToDecimal(uint64_t value) ;

/// @brief Method ToDecimal addr 0x23c0274 size 0x60 virtual false final false
static System::Decimal ToDecimal(float_t value) ;

/// @brief Method ToDecimal addr 0x23c02d4 size 0x60 virtual false final false
static System::Decimal ToDecimal(double_t value) ;

/// @brief Method ToDecimal addr 0x23c0334 size 0x88 virtual false final false
static System::Decimal ToDecimal(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToDecimal addr 0x23b698c size 0x5c virtual false final false
static System::Decimal ToDecimal(bool value) ;

/// @brief Method ToDateTime addr 0x23c03bc size 0x130 virtual false final false
static System::DateTime ToDateTime(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToDateTime addr 0x23c04ec size 0x90 virtual false final false
static System::DateTime ToDateTime(::StringW value, System::IFormatProvider provider) ;

/// @brief Method ToString addr 0x23c057c size 0x1a0 virtual false final false
static ::StringW ToString(::bs_hook::Il2CppWrapperType value, System::IFormatProvider provider) ;

/// @brief Method ToString addr 0x23c071c size 0x1c virtual false final false
static ::StringW ToString(bool value) ;

/// @brief Method ToString addr 0x23c0738 size 0x18 virtual false final false
static ::StringW ToString(char16_t value, System::IFormatProvider provider) ;

/// @brief Method ToString addr 0x23c0750 size 0x68 virtual false final false
static ::StringW ToString(int32_t value) ;

/// @brief Method ToString addr 0x23c07b8 size 0x1c virtual false final false
static ::StringW ToString(int32_t value, System::IFormatProvider provider) ;

/// @brief Method ToString addr 0x23c07d4 size 0x68 virtual false final false
static ::StringW ToString(int64_t value) ;

/// @brief Method ToString addr 0x23c083c size 0x68 virtual false final false
static ::StringW ToString(float_t value) ;

/// @brief Method ToByte addr 0x23c08a4 size 0x10c virtual false final false
static uint8_t ToByte(::StringW value, int32_t fromBase) ;

/// @brief Method ToSByte addr 0x23c09b0 size 0x11c virtual false final false
static int8_t ToSByte(::StringW value, int32_t fromBase) ;

/// @brief Method ToInt16 addr 0x23c0acc size 0x11c virtual false final false
static int16_t ToInt16(::StringW value, int32_t fromBase) ;

/// @brief Method ToUInt16 addr 0x23c0be8 size 0x10c virtual false final false
static uint16_t ToUInt16(::StringW value, int32_t fromBase) ;

/// @brief Method ToInt32 addr 0x23c0cf4 size 0xd8 virtual false final false
static int32_t ToInt32(::StringW value, int32_t fromBase) ;

/// @brief Method ToUInt32 addr 0x23c0dcc size 0xd8 virtual false final false
static uint32_t ToUInt32(::StringW value, int32_t fromBase) ;

/// @brief Method ToInt64 addr 0x23c0ea4 size 0xd8 virtual false final false
static int64_t ToInt64(::StringW value, int32_t fromBase) ;

/// @brief Method ToUInt64 addr 0x23c0f7c size 0xd8 virtual false final false
static uint64_t ToUInt64(::StringW value, int32_t fromBase) ;

/// @brief Method ToString addr 0x23c1054 size 0x84 virtual false final false
static ::StringW ToString(int32_t value, int32_t toBase) ;

/// @brief Method ToString addr 0x23c10d8 size 0x84 virtual false final false
static ::StringW ToString(int64_t value, int32_t toBase) ;

/// @brief Method ToBase64String addr 0x23c115c size 0xbc virtual false final false
static ::StringW ToBase64String(::ArrayW<uint8_t> inArray) ;

/// @brief Method ToBase64String addr 0x23c13cc size 0x70 virtual false final false
static ::StringW ToBase64String(::ArrayW<uint8_t> inArray, int32_t offset, int32_t length) ;

/// @brief Method ToBase64String addr 0x23c143c size 0x1b4 virtual false final false
static ::StringW ToBase64String(::ArrayW<uint8_t> inArray, int32_t offset, int32_t length, System::Base64FormattingOptions options) ;

/// @brief Method ToBase64String addr 0x23c1218 size 0x1b4 virtual false final false
static ::StringW ToBase64String(System::ReadOnlySpan_1<uint8_t> bytes, System::Base64FormattingOptions options) ;

/// @brief Method ToBase64CharArray addr 0x23c18ec size 0x88 virtual false final false
static int32_t ToBase64CharArray(::ArrayW<uint8_t> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t> outArray, int32_t offsetOut) ;

/// @brief Method ToBase64CharArray addr 0x23c1974 size 0x32c virtual false final false
static int32_t ToBase64CharArray(::ArrayW<uint8_t> inArray, int32_t offsetIn, int32_t length, ::ArrayW<char16_t> outArray, int32_t offsetOut, System::Base64FormattingOptions options) ;

/// @brief Method ConvertToBase64Array addr 0x23c16a8 size 0x244 virtual false final false
static int32_t ConvertToBase64Array(void* outChars, void* inData, int32_t offset, int32_t length, bool insertLineBreaks) ;

/// @brief Method ToBase64_CalculateAndValidateOutputLength addr 0x23c15f0 size 0xb8 virtual false final false
static int32_t ToBase64_CalculateAndValidateOutputLength(int32_t inputLength, bool insertLineBreaks) ;

/// @brief Method FromBase64String addr 0x23c1ca0 size 0xb8 virtual false final false
static ::ArrayW<uint8_t> FromBase64String(::StringW s) ;

/// @brief Method TryFromBase64Chars addr 0x23c1f00 size 0x4f8 virtual false final false
static bool TryFromBase64Chars(System::ReadOnlySpan_1<char16_t> chars, System::Span_1<uint8_t> bytes, ByRef<int32_t> bytesWritten) ;

/// @brief Method CopyToTempBufferWithoutWhiteSpace addr 0x23c23f8 size 0x120 virtual false final false
static void CopyToTempBufferWithoutWhiteSpace(System::ReadOnlySpan_1<char16_t> chars, System::Span_1<char16_t> tempBuffer, ByRef<int32_t> consumed, ByRef<int32_t> charsWritten) ;

/// @brief Method IsSpace addr 0x23c2518 size 0x38 virtual false final false
static bool IsSpace(char16_t c) ;

/// @brief Method FromBase64CharArray addr 0x23c2550 size 0x1f0 virtual false final false
static ::ArrayW<uint8_t> FromBase64CharArray(::ArrayW<char16_t> inArray, int32_t offset, int32_t length) ;

/// @brief Method FromBase64CharPtr addr 0x23c1d58 size 0x1a8 virtual false final false
static ::ArrayW<uint8_t> FromBase64CharPtr(void* inputPtr, int32_t inputLength) ;

/// @brief Method FromBase64_ComputeResultLength addr 0x23c2740 size 0xc0 virtual false final false
static int32_t FromBase64_ComputeResultLength(void* inputPtr, int32_t inputLength) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::Convert);
DEFINE_IL2CPP_ARG_TYPE(System::Convert, "System", "Convert");
