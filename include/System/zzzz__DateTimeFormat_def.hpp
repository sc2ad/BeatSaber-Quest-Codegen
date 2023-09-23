#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
class IFormatProvider;
}
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System {
class DateTimeFormat;
}
// Type: System::DateTimeFormat
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2385))
// CS Name: System.DateTimeFormat
class CORDL_TYPE DateTimeFormat : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DateTimeFormat() = default;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeFormat", modifiers: " const&", def_value: None }]
constexpr DateTimeFormat(DateTimeFormat const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeFormat", modifiers: "&&", def_value: None }]
constexpr DateTimeFormat(DateTimeFormat&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DateTimeFormat(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DateTimeFormat& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DateTimeFormat& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DateTimeFormat& operator=(DateTimeFormat&& o) noexcept = default;
  constexpr DateTimeFormat& operator=(DateTimeFormat const& o) noexcept = default;
                


// Fields

static System::TimeSpan __declspec(property(get=__get_NullOffset, put=__set_NullOffset))  NullOffset;

static void __set_NullOffset(System::TimeSpan value) ;

static System::TimeSpan __get_NullOffset() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_allStandardFormats, put=__set_allStandardFormats))  allStandardFormats;

static void __set_allStandardFormats(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_allStandardFormats() ;

static System::Globalization::DateTimeFormatInfo __declspec(property(get=__get_InvariantFormatInfo, put=__set_InvariantFormatInfo))  InvariantFormatInfo;

static void __set_InvariantFormatInfo(System::Globalization::DateTimeFormatInfo value) ;

static System::Globalization::DateTimeFormatInfo __get_InvariantFormatInfo() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_InvariantAbbreviatedMonthNames, put=__set_InvariantAbbreviatedMonthNames))  InvariantAbbreviatedMonthNames;

static void __set_InvariantAbbreviatedMonthNames(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_InvariantAbbreviatedMonthNames() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_InvariantAbbreviatedDayNames, put=__set_InvariantAbbreviatedDayNames))  InvariantAbbreviatedDayNames;

static void __set_InvariantAbbreviatedDayNames(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_InvariantAbbreviatedDayNames() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_fixedNumberFormats, put=__set_fixedNumberFormats))  fixedNumberFormats;

static void __set_fixedNumberFormats(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_fixedNumberFormats() ;


// Methods

/// @brief Method FormatDigits addr 0x242972c size 0x70 virtual false final false
static void FormatDigits(System::Text::StringBuilder outputBuffer, int32_t value, int32_t len) ;

/// @brief Method FormatDigits addr 0x242979c size 0xf8 virtual false final false
static void FormatDigits(System::Text::StringBuilder outputBuffer, int32_t value, int32_t len, bool overrideLengthLimit) ;

/// @brief Method HebrewFormatDigits addr 0x2429894 size 0x7c virtual false final false
static void HebrewFormatDigits(System::Text::StringBuilder outputBuffer, int32_t digits) ;

/// @brief Method ParseRepeatPattern addr 0x2429910 size 0x78 virtual false final false
static int32_t ParseRepeatPattern(System::ReadOnlySpan_1<char16_t> format, int32_t pos, char16_t patternChar) ;

/// @brief Method FormatDayOfWeek addr 0x2429988 size 0x34 virtual false final false
static ::StringW FormatDayOfWeek(int32_t dayOfWeek, int32_t repeat, System::Globalization::DateTimeFormatInfo dtfi) ;

/// @brief Method FormatMonth addr 0x24299bc size 0x34 virtual false final false
static ::StringW FormatMonth(int32_t month, int32_t repeatCount, System::Globalization::DateTimeFormatInfo dtfi) ;

/// @brief Method FormatHebrewMonthName addr 0x24299f0 size 0xc0 virtual false final false
static ::StringW FormatHebrewMonthName(System::DateTime time, int32_t month, int32_t repeatCount, System::Globalization::DateTimeFormatInfo dtfi) ;

/// @brief Method ParseQuoteString addr 0x2429ab0 size 0x1b0 virtual false final false
static int32_t ParseQuoteString(System::ReadOnlySpan_1<char16_t> format, int32_t pos, System::Text::StringBuilder result) ;

/// @brief Method ParseNextChar addr 0x2429c60 size 0x70 virtual false final false
static int32_t ParseNextChar(System::ReadOnlySpan_1<char16_t> format, int32_t pos) ;

/// @brief Method IsUseGenitiveForm addr 0x2429cd0 size 0x14c virtual false final false
static bool IsUseGenitiveForm(System::ReadOnlySpan_1<char16_t> format, int32_t index, int32_t tokenLen, char16_t patternToMatch) ;

/// @brief Method FormatCustomized addr 0x2429e1c size 0x10cc virtual false final false
static System::Text::StringBuilder FormatCustomized(System::DateTime dateTime, System::ReadOnlySpan_1<char16_t> format, System::Globalization::DateTimeFormatInfo dtfi, System::TimeSpan offset, System::Text::StringBuilder result) ;

/// @brief Method FormatCustomizedTimeZone addr 0x242aee8 size 0x31c virtual false final false
static void FormatCustomizedTimeZone(System::DateTime dateTime, System::TimeSpan offset, System::ReadOnlySpan_1<char16_t> format, int32_t tokenLen, bool timeOnly, System::Text::StringBuilder result) ;

/// @brief Method FormatCustomizedRoundripTimeZone addr 0x242b204 size 0x1fc virtual false final false
static void FormatCustomizedRoundripTimeZone(System::DateTime dateTime, System::TimeSpan offset, System::Text::StringBuilder result) ;

/// @brief Method Append2DigitNumber addr 0x242b400 size 0x5c virtual false final false
static void Append2DigitNumber(System::Text::StringBuilder result, int32_t val) ;

/// @brief Method GetRealFormat addr 0x242b45c size 0x2a8 virtual false final false
static ::StringW GetRealFormat(System::ReadOnlySpan_1<char16_t> format, System::Globalization::DateTimeFormatInfo dtfi) ;

/// @brief Method ExpandPredefinedFormat addr 0x242b704 size 0x370 virtual false final false
static ::StringW ExpandPredefinedFormat(System::ReadOnlySpan_1<char16_t> format, ByRef<System::DateTime> dateTime, ByRef<System::Globalization::DateTimeFormatInfo> dtfi, ByRef<System::TimeSpan> offset) ;

/// @brief Method Format addr 0x24234d0 size 0x78 virtual false final false
static ::StringW Format(System::DateTime dateTime, ::StringW format, System::IFormatProvider provider) ;

/// @brief Method Format addr 0x2426578 size 0x2d0 virtual false final false
static ::StringW Format(System::DateTime dateTime, ::StringW format, System::IFormatProvider provider, System::TimeSpan offset) ;

/// @brief Method TryFormat addr 0x2423730 size 0xb8 virtual false final false
static bool TryFormat(System::DateTime dateTime, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider) ;

/// @brief Method TryFormat addr 0x2426a68 size 0x210 virtual false final false
static bool TryFormat(System::DateTime dateTime, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider provider, System::TimeSpan offset) ;

/// @brief Method FormatStringBuilder addr 0x242c398 size 0x30c virtual false final false
static System::Text::StringBuilder FormatStringBuilder(System::DateTime dateTime, System::ReadOnlySpan_1<char16_t> format, System::Globalization::DateTimeFormatInfo dtfi, System::TimeSpan offset) ;

/// @brief Method TryFormatO addr 0x242ba78 size 0x508 virtual false final false
static bool TryFormatO(System::DateTime dateTime, System::TimeSpan offset, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten) ;

/// @brief Method TryFormatR addr 0x242bf80 size 0x418 virtual false final false
static bool TryFormatR(System::DateTime dateTime, System::TimeSpan offset, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten) ;

/// @brief Method WriteTwoDecimalDigits addr 0x242c6a4 size 0x4c virtual false final false
static void WriteTwoDecimalDigits(uint32_t value, System::Span_1<char16_t> destination, int32_t offset) ;

/// @brief Method WriteFourDecimalDigits addr 0x242c6f0 size 0xa0 virtual false final false
static void WriteFourDecimalDigits(uint32_t value, System::Span_1<char16_t> buffer, int32_t startingIndex) ;

/// @brief Method WriteDigits addr 0x242c790 size 0xac virtual false final false
static void WriteDigits(uint64_t value, System::Span_1<char16_t> buffer) ;

/// @brief Method InvalidFormatForLocal addr 0x242ba74 size 0x4 virtual false final false
static void InvalidFormatForLocal(System::ReadOnlySpan_1<char16_t> format, System::DateTime dateTime) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::DateTimeFormat);
DEFINE_IL2CPP_ARG_TYPE(System::DateTimeFormat, "System", "DateTimeFormat");
