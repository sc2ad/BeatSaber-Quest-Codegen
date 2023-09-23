#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Globalization {
struct NumberStyles;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System::Text {
struct ValueStringBuilder;
}
namespace System {
struct Decimal;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System {
class IFormatProvider;
}
// Forward declare root types
namespace System {
class Number;
}
namespace GlobalNamespace {
struct System__Number__NumberBuffer__DigitsAndNullTerminator;
}
namespace System {
struct System__Number__NumberBuffer;
}
// Type: ::DigitsAndNullTerminator
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2449))
// CS Name: System.Number::NumberBuffer::DigitsAndNullTerminator
struct CORDL_TYPE System__Number__NumberBuffer__DigitsAndNullTerminator : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr System__Number__NumberBuffer__DigitsAndNullTerminator(System__Number__NumberBuffer__DigitsAndNullTerminator const&) = default;
                    constexpr System__Number__NumberBuffer__DigitsAndNullTerminator(System__Number__NumberBuffer__DigitsAndNullTerminator&&) = default;
                    constexpr System__Number__NumberBuffer__DigitsAndNullTerminator& operator=(System__Number__NumberBuffer__DigitsAndNullTerminator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Number__NumberBuffer__DigitsAndNullTerminator& operator=(System__Number__NumberBuffer__DigitsAndNullTerminator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x66};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Number__NumberBuffer__DigitsAndNullTerminator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NumberBuffer
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2450))
// CS Name: System.Number::NumberBuffer
struct CORDL_TYPE System__Number__NumberBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using DigitsAndNullTerminator = GlobalNamespace::System__Number__NumberBuffer__DigitsAndNullTerminator;

// Ctor Parameters [CppParam { name: "precision", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_sign", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_digits", ty: "GlobalNamespace::System__Number__NumberBuffer__DigitsAndNullTerminator", modifiers: "", def_value: None }, CppParam { name: "_allDigits", ty: "void*", modifiers: "", def_value: None }]
constexpr System__Number__NumberBuffer(int32_t precision, int32_t scale, int32_t _sign, GlobalNamespace::System__Number__NumberBuffer__DigitsAndNullTerminator _digits, void* _allDigits) noexcept;


                    constexpr System__Number__NumberBuffer(System__Number__NumberBuffer const&) = default;
                    constexpr System__Number__NumberBuffer(System__Number__NumberBuffer&&) = default;
                    constexpr System__Number__NumberBuffer& operator=(System__Number__NumberBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Number__NumberBuffer& operator=(System__Number__NumberBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x7a};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Number__NumberBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_precision, put=__set_precision))  precision;

constexpr void __set_precision(int32_t value) ;

constexpr int32_t __get_precision() const;

 int32_t __declspec(property(get=__get_scale, put=__set_scale))  scale;

constexpr void __set_scale(int32_t value) ;

constexpr int32_t __get_scale() const;

 int32_t __declspec(property(get=__get__sign, put=__set__sign))  _sign;

constexpr void __set__sign(int32_t value) ;

constexpr int32_t __get__sign() const;

 GlobalNamespace::System__Number__NumberBuffer__DigitsAndNullTerminator __declspec(property(get=__get__digits, put=__set__digits))  _digits;

constexpr void __set__digits(GlobalNamespace::System__Number__NumberBuffer__DigitsAndNullTerminator value) ;

constexpr GlobalNamespace::System__Number__NumberBuffer__DigitsAndNullTerminator __get__digits() const;

 void* __declspec(property(get=__get__allDigits, put=__set__allDigits))  _allDigits;

constexpr void __set__allDigits(void* value) ;

constexpr void* __get__allDigits() const;


// Properties

 bool __declspec(property(get=get_sign, put=set_sign))  sign;

 void* __declspec(property(get=get_digits))  digits;


// Methods

/// @brief Method get_sign addr 0x244f62c size 0x10 virtual false final false
 bool get_sign() ;

/// @brief Method set_sign addr 0x244f63c size 0xc virtual false final false
 void set_sign(bool value) ;

/// @brief Method get_digits addr 0x244f648 size 0x8 virtual false final false
 void* get_digits() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Number
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2451))
// CS Name: System.Number
class CORDL_TYPE Number : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using NumberBuffer = System::System__Number__NumberBuffer;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Number() = default;

// Ctor Parameters [CppParam { name: "", ty: "Number", modifiers: " const&", def_value: None }]
constexpr Number(Number const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Number", modifiers: "&&", def_value: None }]
constexpr Number(Number&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Number(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Number& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Number& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Number& operator=(Number&& o) noexcept = default;
  constexpr Number& operator=(Number const& o) noexcept = default;
                


// Fields

static ::ArrayW<::StringW> __declspec(property(get=__get_s_posCurrencyFormats, put=__set_s_posCurrencyFormats))  s_posCurrencyFormats;

static void __set_s_posCurrencyFormats(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_s_posCurrencyFormats() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_s_negCurrencyFormats, put=__set_s_negCurrencyFormats))  s_negCurrencyFormats;

static void __set_s_negCurrencyFormats(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_s_negCurrencyFormats() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_s_posPercentFormats, put=__set_s_posPercentFormats))  s_posPercentFormats;

static void __set_s_posPercentFormats(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_s_posPercentFormats() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_s_negPercentFormats, put=__set_s_negPercentFormats))  s_negPercentFormats;

static void __set_s_negPercentFormats(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_s_negPercentFormats() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_s_negNumberFormats, put=__set_s_negNumberFormats))  s_negNumberFormats;

static void __set_s_negNumberFormats(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_s_negNumberFormats() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_s_charToHexLookup, put=__set_s_charToHexLookup))  s_charToHexLookup;

static void __set_s_charToHexLookup(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_s_charToHexLookup() ;

static ::ArrayW<uint64_t> __declspec(property(get=__get_s_rgval64Power10, put=__set_s_rgval64Power10))  s_rgval64Power10;

static void __set_s_rgval64Power10(::ArrayW<uint64_t> value) ;

static ::ArrayW<uint64_t> __get_s_rgval64Power10() ;

static ::ArrayW<int8_t> __declspec(property(get=__get_s_rgexp64Power10, put=__set_s_rgexp64Power10))  s_rgexp64Power10;

static void __set_s_rgexp64Power10(::ArrayW<int8_t> value) ;

static ::ArrayW<int8_t> __get_s_rgexp64Power10() ;

static ::ArrayW<uint64_t> __declspec(property(get=__get_s_rgval64Power10By16, put=__set_s_rgval64Power10By16))  s_rgval64Power10By16;

static void __set_s_rgval64Power10By16(::ArrayW<uint64_t> value) ;

static ::ArrayW<uint64_t> __get_s_rgval64Power10By16() ;

static ::ArrayW<int16_t> __declspec(property(get=__get_s_rgexp64Power10By16, put=__set_s_rgexp64Power10By16))  s_rgexp64Power10By16;

static void __set_s_rgexp64Power10By16(::ArrayW<int16_t> value) ;

static ::ArrayW<int16_t> __get_s_rgexp64Power10By16() ;


// Methods

/// @brief Method FormatDecimal addr 0x2442d54 size 0x1e0 virtual false final false
static ::StringW FormatDecimal(System::Decimal value, System::ReadOnlySpan_1<char16_t> format, System::Globalization::NumberFormatInfo info) ;

/// @brief Method TryFormatDecimal addr 0x2444924 size 0x20c virtual false final false
static bool TryFormatDecimal(System::Decimal value, System::ReadOnlySpan_1<char16_t> format, System::Globalization::NumberFormatInfo info, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten) ;

/// @brief Method DecimalToNumber addr 0x2443074 size 0x218 virtual false final false
static void DecimalToNumber(System::Decimal value, ByRef<System::System__Number__NumberBuffer> number) ;

/// @brief Method FormatDouble addr 0x2444b7c size 0x160 virtual false final false
static ::StringW FormatDouble(double_t value, ::StringW format, System::Globalization::NumberFormatInfo info) ;

/// @brief Method TryFormatDouble addr 0x2444fc0 size 0x17c virtual false final false
static bool TryFormatDouble(double_t value, System::ReadOnlySpan_1<char16_t> format, System::Globalization::NumberFormatInfo info, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten) ;

/// @brief Method FormatDouble addr 0x2444cdc size 0x2e4 virtual false final false
static ::StringW FormatDouble(ByRef<System::Text::ValueStringBuilder> sb, double_t value, System::ReadOnlySpan_1<char16_t> format, System::Globalization::NumberFormatInfo info) ;

/// @brief Method FormatSingle addr 0x2445b7c size 0x160 virtual false final false
static ::StringW FormatSingle(float_t value, ::StringW format, System::Globalization::NumberFormatInfo info) ;

/// @brief Method TryFormatSingle addr 0x2445fcc size 0x17c virtual false final false
static bool TryFormatSingle(float_t value, System::ReadOnlySpan_1<char16_t> format, System::Globalization::NumberFormatInfo info, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten) ;

/// @brief Method FormatSingle addr 0x2445cdc size 0x2f0 virtual false final false
static ::StringW FormatSingle(ByRef<System::Text::ValueStringBuilder> sb, float_t value, System::ReadOnlySpan_1<char16_t> format, System::Globalization::NumberFormatInfo info) ;

/// @brief Method TryCopyTo addr 0x244513c size 0xdc virtual false final false
static bool TryCopyTo(::StringW source, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten) ;

/// @brief Method FormatInt32 addr 0x243bdec size 0x3c0 virtual false final false
static ::StringW FormatInt32(int32_t value, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider) ;

/// @brief Method TryFormatInt32 addr 0x243cc14 size 0x420 virtual false final false
static bool TryFormatInt32(int32_t value, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten) ;

/// @brief Method FormatUInt32 addr 0x243c3b8 size 0x370 virtual false final false
static ::StringW FormatUInt32(uint32_t value, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider) ;

/// @brief Method TryFormatUInt32 addr 0x243c83c size 0x3d8 virtual false final false
static bool TryFormatUInt32(uint32_t value, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten) ;

/// @brief Method FormatInt64 addr 0x243f0b4 size 0x2c8 virtual false final false
static ::StringW FormatInt64(int64_t value, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider) ;

/// @brief Method TryFormatInt64 addr 0x243f618 size 0x334 virtual false final false
static bool TryFormatInt64(int64_t value, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten) ;

/// @brief Method FormatUInt64 addr 0x2447ab4 size 0x290 virtual false final false
static ::StringW FormatUInt64(uint64_t value, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider) ;

/// @brief Method TryFormatUInt64 addr 0x2447ed8 size 0x2dc virtual false final false
static bool TryFormatUInt64(uint64_t value, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten) ;

/// @brief Method Int32ToNumber addr 0x24481b4 size 0x12c virtual false final false
static void Int32ToNumber(int32_t value, ByRef<System::System__Number__NumberBuffer> number) ;

/// @brief Method NegativeInt32ToDecStr addr 0x24462d8 size 0x1ac virtual false final false
static ::StringW NegativeInt32ToDecStr(int32_t value, int32_t digits, ::StringW sNegative) ;

/// @brief Method TryNegativeInt32ToDecStr addr 0x2446780 size 0x1e8 virtual false final false
static bool TryNegativeInt32ToDecStr(int32_t value, int32_t digits, ::StringW sNegative, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten) ;

/// @brief Method Int32ToHexStr addr 0x2446484 size 0x138 virtual false final false
static ::StringW Int32ToHexStr(int32_t value, char16_t hexBase, int32_t digits) ;

/// @brief Method TryInt32ToHexStr addr 0x2446968 size 0x174 virtual false final false
static bool TryInt32ToHexStr(int32_t value, char16_t hexBase, int32_t digits, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten) ;

/// @brief Method Int32ToHexChars addr 0x24482e0 size 0x40 virtual false final false
static void* Int32ToHexChars(void* buffer, uint32_t value, int32_t hexBase, int32_t digits) ;

/// @brief Method UInt32ToNumber addr 0x2448320 size 0x118 virtual false final false
static void UInt32ToNumber(uint32_t value, ByRef<System::System__Number__NumberBuffer> number) ;

/// @brief Method UInt32ToDecChars addr 0x2444b30 size 0x4c virtual false final false
static void* UInt32ToDecChars(void* bufferEnd, uint32_t value, int32_t digits) ;

/// @brief Method UInt32ToDecStr addr 0x2446148 size 0x190 virtual false final false
static ::StringW UInt32ToDecStr(uint32_t value, int32_t digits) ;

/// @brief Method TryUInt32ToDecStr addr 0x24465bc size 0x1c4 virtual false final false
static bool TryUInt32ToDecStr(uint32_t value, int32_t digits, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten) ;

/// @brief Method Int64ToNumber addr 0x24471c0 size 0x1a8 virtual false final false
static void Int64ToNumber(int64_t input, ByRef<System::System__Number__NumberBuffer> number) ;

/// @brief Method NegativeInt64ToDecStr addr 0x2446d34 size 0x2a0 virtual false final false
static ::StringW NegativeInt64ToDecStr(int64_t input, int32_t digits, ::StringW sNegative) ;

/// @brief Method TryNegativeInt64ToDecStr addr 0x24475ec size 0x2c4 virtual false final false
static bool TryNegativeInt64ToDecStr(int64_t input, int32_t digits, ::StringW sNegative, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten) ;

/// @brief Method Int64ToHexStr addr 0x2446fd4 size 0x1ec virtual false final false
static ::StringW Int64ToHexStr(int64_t value, char16_t hexBase, int32_t digits) ;

/// @brief Method TryInt64ToHexStr addr 0x24478b0 size 0x204 virtual false final false
static bool TryInt64ToHexStr(int64_t value, char16_t hexBase, int32_t digits, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten) ;

/// @brief Method UInt64ToNumber addr 0x2447d44 size 0x194 virtual false final false
static void UInt64ToNumber(uint64_t value, ByRef<System::System__Number__NumberBuffer> number) ;

/// @brief Method UInt64ToDecStr addr 0x2446adc size 0x258 virtual false final false
static ::StringW UInt64ToDecStr(uint64_t value, int32_t digits) ;

/// @brief Method TryUInt64ToDecStr addr 0x2447368 size 0x284 virtual false final false
static bool TryUInt64ToDecStr(uint64_t value, int32_t digits, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten) ;

/// @brief Method ParseFormatSpecifier addr 0x2442f34 size 0x140 virtual false final false
static char16_t ParseFormatSpecifier(System::ReadOnlySpan_1<char16_t> format, ByRef<int32_t> digits) ;

/// @brief Method NumberToString addr 0x244328c size 0x580 virtual false final false
static void NumberToString(ByRef<System::Text::ValueStringBuilder> sb, ByRef<System::System__Number__NumberBuffer> number, char16_t format, int32_t nMaxDigits, System::Globalization::NumberFormatInfo info, bool isDecimal) ;

/// @brief Method NumberToStringFormat addr 0x244380c size 0x1118 virtual false final false
static void NumberToStringFormat(ByRef<System::Text::ValueStringBuilder> sb, ByRef<System::System__Number__NumberBuffer> number, System::ReadOnlySpan_1<char16_t> format, System::Globalization::NumberFormatInfo info) ;

/// @brief Method FormatCurrency addr 0x244857c size 0x268 virtual false final false
static void FormatCurrency(ByRef<System::Text::ValueStringBuilder> sb, ByRef<System::System__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits, System::Globalization::NumberFormatInfo info) ;

/// @brief Method FormatFixed addr 0x24487e4 size 0x540 virtual false final false
static void FormatFixed(ByRef<System::Text::ValueStringBuilder> sb, ByRef<System::System__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits, System::Globalization::NumberFormatInfo info, ::ArrayW<int32_t> groupDigits, ::StringW sDecimal, ::StringW sGroup) ;

/// @brief Method FormatNumber addr 0x2448d24 size 0x254 virtual false final false
static void FormatNumber(ByRef<System::Text::ValueStringBuilder> sb, ByRef<System::System__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits, System::Globalization::NumberFormatInfo info) ;

/// @brief Method FormatScientific addr 0x2448f78 size 0x258 virtual false final false
static void FormatScientific(ByRef<System::Text::ValueStringBuilder> sb, ByRef<System::System__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits, System::Globalization::NumberFormatInfo info, char16_t expChar) ;

/// @brief Method FormatExponent addr 0x2449924 size 0x2a8 virtual false final false
static void FormatExponent(ByRef<System::Text::ValueStringBuilder> sb, System::Globalization::NumberFormatInfo info, int32_t value, char16_t expChar, int32_t minDigits, bool positiveSign) ;

/// @brief Method FormatGeneral addr 0x24491d0 size 0x3b8 virtual false final false
static void FormatGeneral(ByRef<System::Text::ValueStringBuilder> sb, ByRef<System::System__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits, System::Globalization::NumberFormatInfo info, char16_t expChar, bool bSuppressScientific) ;

/// @brief Method FormatPercent addr 0x2449588 size 0x268 virtual false final false
static void FormatPercent(ByRef<System::Text::ValueStringBuilder> sb, ByRef<System::System__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits, System::Globalization::NumberFormatInfo info) ;

/// @brief Method RoundNumber addr 0x244847c size 0x100 virtual false final false
static void RoundNumber(ByRef<System::System__Number__NumberBuffer> number, int32_t pos) ;

/// @brief Method FindSection addr 0x24497f0 size 0x134 virtual false final false
static int32_t FindSection(System::ReadOnlySpan_1<char16_t> format, int32_t section) ;

/// @brief Method Low32 addr 0x2448478 size 0x4 virtual false final false
static uint32_t Low32(uint64_t value) ;

/// @brief Method High32 addr 0x2448470 size 0x8 virtual false final false
static uint32_t High32(uint64_t value) ;

/// @brief Method Int64DivMod1E9 addr 0x2448438 size 0x38 virtual false final false
static uint32_t Int64DivMod1E9(ByRef<uint64_t> value) ;

/// @brief Method NumberToInt32 addr 0x2449bcc size 0xbc virtual false final false
static bool NumberToInt32(ByRef<System::System__Number__NumberBuffer> number, ByRef<int32_t> value) ;

/// @brief Method NumberToInt64 addr 0x2449c88 size 0xb4 virtual false final false
static bool NumberToInt64(ByRef<System::System__Number__NumberBuffer> number, ByRef<int64_t> value) ;

/// @brief Method NumberToUInt32 addr 0x2449d3c size 0xb0 virtual false final false
static bool NumberToUInt32(ByRef<System::System__Number__NumberBuffer> number, ByRef<uint32_t> value) ;

/// @brief Method NumberToUInt64 addr 0x2449dec size 0xb0 virtual false final false
static bool NumberToUInt64(ByRef<System::System__Number__NumberBuffer> number, ByRef<uint64_t> value) ;

/// @brief Method ParseInt32 addr 0x243d308 size 0x1d8 virtual false final false
static int32_t ParseInt32(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info) ;

/// @brief Method ParseInt64 addr 0x243fa0c size 0x1dc virtual false final false
static int64_t ParseInt64(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info) ;

/// @brief Method ParseUInt32 addr 0x244b64c size 0x1b8 virtual false final false
static uint32_t ParseUInt32(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info) ;

/// @brief Method ParseUInt64 addr 0x244bfa4 size 0x1b8 virtual false final false
static uint64_t ParseUInt64(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info) ;

/// @brief Method ParseNumber addr 0x244c908 size 0x708 virtual false final false
static bool ParseNumber(ByRef<void*> str, void* strEnd, System::Globalization::NumberStyles styles, ByRef<System::System__Number__NumberBuffer> number, System::Globalization::NumberFormatInfo info, bool parseDecimal) ;

/// @brief Method TryParseInt32 addr 0x243d64c size 0x18c virtual false final false
static bool TryParseInt32(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<int32_t> result) ;

/// @brief Method TryParseInt32IntegerStyle addr 0x2449e9c size 0x7a8 virtual false final false
static bool TryParseInt32IntegerStyle(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<int32_t> result, ByRef<bool> failureIsOverflow) ;

/// @brief Method TryParseInt64IntegerStyle addr 0x244ab54 size 0x7b4 virtual false final false
static bool TryParseInt64IntegerStyle(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<int64_t> result, ByRef<bool> failureIsOverflow) ;

/// @brief Method TryParseInt64 addr 0x243fe68 size 0x18c virtual false final false
static bool TryParseInt64(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<int64_t> result) ;

/// @brief Method TryParseUInt32 addr 0x244d26c size 0x18c virtual false final false
static bool TryParseUInt32(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<uint32_t> result) ;

/// @brief Method TryParseUInt32IntegerStyle addr 0x244b804 size 0x7a0 virtual false final false
static bool TryParseUInt32IntegerStyle(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<uint32_t> result, ByRef<bool> failureIsOverflow) ;

/// @brief Method TryParseUInt32HexNumberStyle addr 0x244a6d8 size 0x344 virtual false final false
static bool TryParseUInt32HexNumberStyle(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<uint32_t> result, ByRef<bool> failureIsOverflow) ;

/// @brief Method TryParseUInt64 addr 0x244d3f8 size 0x18c virtual false final false
static bool TryParseUInt64(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<uint64_t> result) ;

/// @brief Method TryParseUInt64IntegerStyle addr 0x244c15c size 0x7ac virtual false final false
static bool TryParseUInt64IntegerStyle(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<uint64_t> result, ByRef<bool> failureIsOverflow) ;

/// @brief Method TryParseUInt64HexNumberStyle addr 0x244b308 size 0x344 virtual false final false
static bool TryParseUInt64HexNumberStyle(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<uint64_t> result, ByRef<bool> failureIsOverflow) ;

/// @brief Method ParseDecimal addr 0x244d584 size 0x108 virtual false final false
static System::Decimal ParseDecimal(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info) ;

/// @brief Method NumberBufferToDecimal addr 0x244d68c size 0x2d8 virtual false final false
static bool NumberBufferToDecimal(ByRef<System::System__Number__NumberBuffer> number, ByRef<System::Decimal> value) ;

/// @brief Method ParseDouble addr 0x244d964 size 0x530 virtual false final false
static double_t ParseDouble(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info) ;

/// @brief Method ParseSingle addr 0x244df64 size 0x5a0 virtual false final false
static float_t ParseSingle(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info) ;

/// @brief Method TryParseDecimal addr 0x244e504 size 0x104 virtual false final false
static bool TryParseDecimal(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<System::Decimal> result) ;

/// @brief Method TryParseDouble addr 0x244e608 size 0x104 virtual false final false
static bool TryParseDouble(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<double_t> result) ;

/// @brief Method TryParseSingle addr 0x244e70c size 0x174 virtual false final false
static bool TryParseSingle(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, System::Globalization::NumberFormatInfo info, ByRef<float_t> result) ;

/// @brief Method StringToNumber addr 0x244aa1c size 0x138 virtual false final false
static void StringToNumber(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, ByRef<System::System__Number__NumberBuffer> number, System::Globalization::NumberFormatInfo info, bool parseDecimal) ;

/// @brief Method TryStringToNumber addr 0x244d0c0 size 0x130 virtual false final false
static bool TryStringToNumber(System::ReadOnlySpan_1<char16_t> value, System::Globalization::NumberStyles styles, ByRef<System::System__Number__NumberBuffer> number, System::Globalization::NumberFormatInfo info, bool parseDecimal) ;

/// @brief Method TrailingZeros addr 0x244d1f0 size 0x7c virtual false final false
static bool TrailingZeros(System::ReadOnlySpan_1<char16_t> value, int32_t index) ;

/// @brief Method MatchChars addr 0x244d02c size 0x84 virtual false final false
static void* MatchChars(void* p, void* pEnd, ::StringW value) ;

/// @brief Method IsWhite addr 0x244d010 size 0x1c virtual false final false
static bool IsWhite(int32_t ch) ;

/// @brief Method IsDigit addr 0x244d0b0 size 0x10 virtual false final false
static bool IsDigit(int32_t ch) ;

/// @brief Method ThrowOverflowOrFormatException addr 0x244a644 size 0x94 virtual false final false
static void ThrowOverflowOrFormatException(bool overflow, ::StringW overflowResourceKey) ;

/// @brief Method NumberBufferToDouble addr 0x244de94 size 0xd0 virtual false final false
static bool NumberBufferToDouble(ByRef<System::System__Number__NumberBuffer> number, ByRef<double_t> value) ;

/// @brief Method DigitsToInt addr 0x244e880 size 0x34 virtual false final false
static uint32_t DigitsToInt(void* p, int32_t count) ;

/// @brief Method Mul32x32To64 addr 0x244e8b4 size 0x8 virtual false final false
static uint64_t Mul32x32To64(uint32_t a, uint32_t b) ;

/// @brief Method Mul64Lossy addr 0x244e8bc size 0x98 virtual false final false
static uint64_t Mul64Lossy(uint64_t a, uint64_t b, ByRef<int32_t> pexp) ;

/// @brief Method abs addr 0x244e954 size 0xc virtual false final false
static int32_t abs(int32_t value) ;

/// @brief Method NumberToDouble addr 0x2445694 size 0x4e8 virtual false final false
static double_t NumberToDouble(ByRef<System::System__Number__NumberBuffer> number) ;

/// @brief Method DoubleToNumber addr 0x2445218 size 0x47c virtual false final false
static void DoubleToNumber(double_t value, int32_t precision, ByRef<System::System__Number__NumberBuffer> number) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::Number);
DEFINE_IL2CPP_ARG_TYPE(System::Number, "System", "Number");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::System__Number__NumberBuffer__DigitsAndNullTerminator, "System", "Number/NumberBuffer/DigitsAndNullTerminator");
DEFINE_IL2CPP_ARG_TYPE(System::System__Number__NumberBuffer, "System", "Number/NumberBuffer");
