#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Globalization {
class Calendar;
}
namespace System {
struct DateTime;
}
namespace System {
struct ParseFailureKind;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
struct ParseFlags;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System {
struct DateTimeResult;
}
// Type: System::DateTimeResult
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2399))
// CS Name: System.DateTimeResult
struct CORDL_TYPE DateTimeResult : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Year", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Month", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Day", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Hour", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Minute", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Second", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fraction", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "era", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "System::ParseFlags", modifiers: "", def_value: None }, CppParam { name: "timeZoneOffset", ty: "System::TimeSpan", modifiers: "", def_value: None }, CppParam { name: "calendar", ty: "System::Globalization::Calendar", modifiers: "", def_value: None }, CppParam { name: "parsedDate", ty: "System::DateTime", modifiers: "", def_value: None }, CppParam { name: "failure", ty: "System::ParseFailureKind", modifiers: "", def_value: None }, CppParam { name: "failureMessageID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "failureMessageFormatArgument", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "failureArgumentName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "originalDateTimeString", ty: "System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "failedFormatSpecifier", ty: "System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }]
constexpr DateTimeResult(int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, double_t fraction, int32_t era, System::ParseFlags flags, System::TimeSpan timeZoneOffset, System::Globalization::Calendar calendar, System::DateTime parsedDate, System::ParseFailureKind failure, ::StringW failureMessageID, ::bs_hook::Il2CppWrapperType failureMessageFormatArgument, ::StringW failureArgumentName, System::ReadOnlySpan_1<char16_t> originalDateTimeString, System::ReadOnlySpan_1<char16_t> failedFormatSpecifier) noexcept;


                    constexpr DateTimeResult(DateTimeResult const&) = default;
                    constexpr DateTimeResult(DateTimeResult&&) = default;
                    constexpr DateTimeResult& operator=(DateTimeResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DateTimeResult& operator=(DateTimeResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x80};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DateTimeResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_Year, put=__set_Year))  Year;

constexpr void __set_Year(int32_t value) ;

constexpr int32_t __get_Year() const;

 int32_t __declspec(property(get=__get_Month, put=__set_Month))  Month;

constexpr void __set_Month(int32_t value) ;

constexpr int32_t __get_Month() const;

 int32_t __declspec(property(get=__get_Day, put=__set_Day))  Day;

constexpr void __set_Day(int32_t value) ;

constexpr int32_t __get_Day() const;

 int32_t __declspec(property(get=__get_Hour, put=__set_Hour))  Hour;

constexpr void __set_Hour(int32_t value) ;

constexpr int32_t __get_Hour() const;

 int32_t __declspec(property(get=__get_Minute, put=__set_Minute))  Minute;

constexpr void __set_Minute(int32_t value) ;

constexpr int32_t __get_Minute() const;

 int32_t __declspec(property(get=__get_Second, put=__set_Second))  Second;

constexpr void __set_Second(int32_t value) ;

constexpr int32_t __get_Second() const;

 double_t __declspec(property(get=__get_fraction, put=__set_fraction))  fraction;

constexpr void __set_fraction(double_t value) ;

constexpr double_t __get_fraction() const;

 int32_t __declspec(property(get=__get_era, put=__set_era))  era;

constexpr void __set_era(int32_t value) ;

constexpr int32_t __get_era() const;

 System::ParseFlags __declspec(property(get=__get_flags, put=__set_flags))  flags;

constexpr void __set_flags(System::ParseFlags value) ;

constexpr System::ParseFlags __get_flags() const;

 System::TimeSpan __declspec(property(get=__get_timeZoneOffset, put=__set_timeZoneOffset))  timeZoneOffset;

constexpr void __set_timeZoneOffset(System::TimeSpan value) ;

constexpr System::TimeSpan __get_timeZoneOffset() const;

 System::Globalization::Calendar __declspec(property(get=__get_calendar, put=__set_calendar))  calendar;

constexpr void __set_calendar(System::Globalization::Calendar value) ;

constexpr System::Globalization::Calendar __get_calendar() const;

 System::DateTime __declspec(property(get=__get_parsedDate, put=__set_parsedDate))  parsedDate;

constexpr void __set_parsedDate(System::DateTime value) ;

constexpr System::DateTime __get_parsedDate() const;

 System::ParseFailureKind __declspec(property(get=__get_failure, put=__set_failure))  failure;

constexpr void __set_failure(System::ParseFailureKind value) ;

constexpr System::ParseFailureKind __get_failure() const;

 ::StringW __declspec(property(get=__get_failureMessageID, put=__set_failureMessageID))  failureMessageID;

constexpr void __set_failureMessageID(::StringW value) ;

constexpr ::StringW __get_failureMessageID() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_failureMessageFormatArgument, put=__set_failureMessageFormatArgument))  failureMessageFormatArgument;

constexpr void __set_failureMessageFormatArgument(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_failureMessageFormatArgument() const;

 ::StringW __declspec(property(get=__get_failureArgumentName, put=__set_failureArgumentName))  failureArgumentName;

constexpr void __set_failureArgumentName(::StringW value) ;

constexpr ::StringW __get_failureArgumentName() const;

 System::ReadOnlySpan_1<char16_t> __declspec(property(get=__get_originalDateTimeString, put=__set_originalDateTimeString))  originalDateTimeString;

constexpr void __set_originalDateTimeString(System::ReadOnlySpan_1<char16_t> value) ;

constexpr System::ReadOnlySpan_1<char16_t> __get_originalDateTimeString() const;

 System::ReadOnlySpan_1<char16_t> __declspec(property(get=__get_failedFormatSpecifier, put=__set_failedFormatSpecifier))  failedFormatSpecifier;

constexpr void __set_failedFormatSpecifier(System::ReadOnlySpan_1<char16_t> value) ;

constexpr System::ReadOnlySpan_1<char16_t> __get_failedFormatSpecifier() const;


// Methods

/// @brief Method Init addr 0x2438a1c size 0x24 virtual false final false
 void Init(System::ReadOnlySpan_1<char16_t> originalDateTimeString) ;

/// @brief Method SetDate addr 0x2438a40 size 0xc virtual false final false
 void SetDate(int32_t year, int32_t month, int32_t day) ;

/// @brief Method SetBadFormatSpecifierFailure addr 0x2438a4c size 0x94 virtual false final false
 void SetBadFormatSpecifierFailure() ;

/// @brief Method SetBadFormatSpecifierFailure addr 0x2438ae0 size 0x64 virtual false final false
 void SetBadFormatSpecifierFailure(System::ReadOnlySpan_1<char16_t> failedFormatSpecifier) ;

/// @brief Method SetBadDateTimeFailure addr 0x2438b44 size 0x50 virtual false final false
 void SetBadDateTimeFailure() ;

/// @brief Method SetFailure addr 0x2438b94 size 0xc virtual false final false
 void SetFailure(System::ParseFailureKind failure, ::StringW failureMessageID) ;

/// @brief Method SetFailure addr 0x2438ba0 size 0xc virtual false final false
 void SetFailure(System::ParseFailureKind failure, ::StringW failureMessageID, ::bs_hook::Il2CppWrapperType failureMessageFormatArgument) ;

/// @brief Method SetFailure addr 0x2438bac size 0x10 virtual false final false
 void SetFailure(System::ParseFailureKind failure, ::StringW failureMessageID, ::bs_hook::Il2CppWrapperType failureMessageFormatArgument, ::StringW failureArgumentName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::DateTimeResult, "System", "DateTimeResult");
