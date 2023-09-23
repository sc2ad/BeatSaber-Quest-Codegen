#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System {
class IFormatProvider;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
struct TimeSpan;
}
namespace System::Globalization {
class Calendar;
}
namespace System::Globalization {
struct DateTimeStyles;
}
namespace System {
class IComparable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
class IFormattable;
}
namespace System {
class ISpanFormattable;
}
namespace System {
template<typename T>
class IComparable_1;
}
// Forward declare root types
namespace System {
struct DateTimeOffset;
}
// Type: System::DateTimeOffset
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2370))
// CS Name: System.DateTimeOffset
struct CORDL_TYPE DateTimeOffset : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const;

/// @brief Convert operator to System::IFormattable
constexpr operator  System::IFormattable() const;

/// @brief Convert operator to System::IComparable_1<System::DateTimeOffset>
constexpr operator  System::IComparable_1<System::DateTimeOffset>() const;

/// @brief Convert operator to System::IEquatable_1<System::DateTimeOffset>
constexpr operator  System::IEquatable_1<System::DateTimeOffset>() const;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const;

/// @brief Convert operator to System::Runtime::Serialization::IDeserializationCallback
constexpr operator  System::Runtime::Serialization::IDeserializationCallback() const;

/// @brief Convert operator to System::ISpanFormattable
constexpr operator  System::ISpanFormattable() const;

// Ctor Parameters [CppParam { name: "_dateTime", ty: "System::DateTime", modifiers: "", def_value: None }, CppParam { name: "_offsetMinutes", ty: "int16_t", modifiers: "", def_value: None }]
constexpr DateTimeOffset(System::DateTime _dateTime, int16_t _offsetMinutes) noexcept;


                    constexpr DateTimeOffset(DateTimeOffset const&) = default;
                    constexpr DateTimeOffset(DateTimeOffset&&) = default;
                    constexpr DateTimeOffset& operator=(DateTimeOffset const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DateTimeOffset& operator=(DateTimeOffset&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DateTimeOffset(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static System::DateTimeOffset __declspec(property(get=__get_MinValue, put=__set_MinValue))  MinValue;

static void __set_MinValue(System::DateTimeOffset value) ;

static System::DateTimeOffset __get_MinValue() ;

static System::DateTimeOffset __declspec(property(get=__get_MaxValue, put=__set_MaxValue))  MaxValue;

static void __set_MaxValue(System::DateTimeOffset value) ;

static System::DateTimeOffset __get_MaxValue() ;

static System::DateTimeOffset __declspec(property(get=__get_UnixEpoch, put=__set_UnixEpoch))  UnixEpoch;

static void __set_UnixEpoch(System::DateTimeOffset value) ;

static System::DateTimeOffset __get_UnixEpoch() ;

 System::DateTime __declspec(property(get=__get__dateTime, put=__set__dateTime))  _dateTime;

constexpr void __set__dateTime(System::DateTime value) ;

constexpr System::DateTime __get__dateTime() const;

 int16_t __declspec(property(get=__get__offsetMinutes, put=__set__offsetMinutes))  _offsetMinutes;

constexpr void __set__offsetMinutes(int16_t value) ;

constexpr int16_t __get__offsetMinutes() const;


// Properties

 System::DateTime __declspec(property(get=get_DateTime))  DateTime;

 System::DateTime __declspec(property(get=get_UtcDateTime))  UtcDateTime;

 System::DateTime __declspec(property(get=get_LocalDateTime))  LocalDateTime;

 System::DateTime __declspec(property(get=get_ClockDateTime))  ClockDateTime;

 int32_t __declspec(property(get=get_Day))  Day;

 int32_t __declspec(property(get=get_Hour))  Hour;

 int32_t __declspec(property(get=get_Millisecond))  Millisecond;

 int32_t __declspec(property(get=get_Minute))  Minute;

 int32_t __declspec(property(get=get_Month))  Month;

 System::TimeSpan __declspec(property(get=get_Offset))  Offset;

 int32_t __declspec(property(get=get_Second))  Second;

 int64_t __declspec(property(get=get_Ticks))  Ticks;

 System::TimeSpan __declspec(property(get=get_TimeOfDay))  TimeOfDay;

 int32_t __declspec(property(get=get_Year))  Year;


// Methods

/// @brief Method .ctor addr 0x24249e8 size 0x94 virtual false final false
 void _ctor(int64_t ticks, System::TimeSpan offset) ;

/// @brief Method .ctor addr 0x2424c38 size 0xc4 virtual false final false
 void _ctor(System::DateTime dateTime) ;

/// @brief Method .ctor addr 0x2424cfc size 0x1b4 virtual false final false
 void _ctor(System::DateTime dateTime, System::TimeSpan offset) ;

/// @brief Method .ctor addr 0x2424eb0 size 0xcc virtual false final false
 void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, System::TimeSpan offset) ;

/// @brief Method .ctor addr 0x2424f7c size 0xdc virtual false final false
 void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, System::TimeSpan offset) ;

/// @brief Method .ctor addr 0x2425058 size 0xe4 virtual false final false
 void _ctor(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, System::Globalization::Calendar calendar, System::TimeSpan offset) ;

/// @brief Method get_DateTime addr 0x242513c size 0x4 virtual false final false
 System::DateTime get_DateTime() ;

/// @brief Method get_UtcDateTime addr 0x24251e0 size 0x74 virtual false final false
 System::DateTime get_UtcDateTime() ;

/// @brief Method get_LocalDateTime addr 0x2425254 size 0x20 virtual false final false
 System::DateTime get_LocalDateTime() ;

/// @brief Method get_ClockDateTime addr 0x2425140 size 0xa0 virtual false final false
 System::DateTime get_ClockDateTime() ;

/// @brief Method get_Day addr 0x24252a0 size 0x20 virtual false final false
 int32_t get_Day() ;

/// @brief Method get_Hour addr 0x24252c0 size 0x44 virtual false final false
 int32_t get_Hour() ;

/// @brief Method get_Millisecond addr 0x2425304 size 0x50 virtual false final false
 int32_t get_Millisecond() ;

/// @brief Method get_Minute addr 0x2425354 size 0x44 virtual false final false
 int32_t get_Minute() ;

/// @brief Method get_Month addr 0x2425398 size 0x20 virtual false final false
 int32_t get_Month() ;

/// @brief Method get_Offset addr 0x2425274 size 0x2c virtual false final false
 System::TimeSpan get_Offset() ;

/// @brief Method get_Second addr 0x24253b8 size 0x44 virtual false final false
 int32_t get_Second() ;

/// @brief Method get_Ticks addr 0x24253fc size 0x14 virtual false final false
 int64_t get_Ticks() ;

/// @brief Method get_TimeOfDay addr 0x2425410 size 0x3c virtual false final false
 System::TimeSpan get_TimeOfDay() ;

/// @brief Method get_Year addr 0x242544c size 0x20 virtual false final false
 int32_t get_Year() ;

/// @brief Method AddTicks addr 0x242546c size 0x70 virtual false final false
 System::DateTimeOffset AddTicks(int64_t ticks) ;

/// @brief Method System.IComparable.CompareTo addr 0x24254dc size 0x130 virtual true final true
 int32_t System_IComparable_CompareTo(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method CompareTo addr 0x242560c size 0xa8 virtual true final true
 int32_t CompareTo(System::DateTimeOffset other) ;

/// @brief Method Equals addr 0x24256b4 size 0xbc virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2425770 size 0x34 virtual true final true
 bool Equals(System::DateTimeOffset other) ;

/// @brief Method FromFileTime addr 0x24257a4 size 0x74 virtual false final false
static System::DateTimeOffset FromFileTime(int64_t fileTime) ;

/// @brief Method FromUnixTimeSeconds addr 0x2425818 size 0x174 virtual false final false
static System::DateTimeOffset FromUnixTimeSeconds(int64_t seconds) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization addr 0x242598c size 0x180 virtual true final true
 void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::bs_hook::Il2CppWrapperType sender) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x2425b0c size 0xcc virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2425bd8 size 0x1c0 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetHashCode addr 0x2425d98 size 0x18 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Parse addr 0x2425db0 size 0x70 virtual false final false
static System::DateTimeOffset Parse(::StringW input, System::IFormatProvider formatProvider) ;

/// @brief Method Parse addr 0x2425e20 size 0x16c virtual false final false
static System::DateTimeOffset Parse(::StringW input, System::IFormatProvider formatProvider, System::Globalization::DateTimeStyles styles) ;

/// @brief Method ParseExact addr 0x242616c size 0x1d8 virtual false final false
static System::DateTimeOffset ParseExact(::StringW input, ::StringW format, System::IFormatProvider formatProvider, System::Globalization::DateTimeStyles styles) ;

/// @brief Method ToLocalTime addr 0x2426498 size 0x8 virtual false final false
 System::DateTimeOffset ToLocalTime() ;

/// @brief Method ToLocalTime addr 0x24264a0 size 0x40 virtual false final false
 System::DateTimeOffset ToLocalTime(bool throwOnOverflow) ;

/// @brief Method ToString addr 0x24264e0 size 0x98 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2426848 size 0x9c virtual false final false
 ::StringW ToString(System::IFormatProvider formatProvider) ;

/// @brief Method ToString addr 0x24268e4 size 0xa8 virtual true final true
 ::StringW ToString(::StringW format, System::IFormatProvider formatProvider) ;

/// @brief Method TryFormat addr 0x242698c size 0xdc virtual true final true
 bool TryFormat(System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider formatProvider) ;

/// @brief Method ToUniversalTime addr 0x2426c78 size 0x2c virtual false final false
 System::DateTimeOffset ToUniversalTime() ;

/// @brief Method TryParse addr 0x2426ca4 size 0x188 virtual false final false
static bool TryParse(::StringW input, System::IFormatProvider formatProvider, System::Globalization::DateTimeStyles styles, ByRef<System::DateTimeOffset> result) ;

/// @brief Method TryParseExact addr 0x2426f98 size 0x1c8 virtual false final false
static bool TryParseExact(::StringW input, ::StringW format, System::IFormatProvider formatProvider, System::Globalization::DateTimeStyles styles, ByRef<System::DateTimeOffset> result) ;

/// @brief Method TryParseExact addr 0x24272e4 size 0x188 virtual false final false
static bool TryParseExact(::StringW input, ::ArrayW<::StringW> formats, System::IFormatProvider formatProvider, System::Globalization::DateTimeStyles styles, ByRef<System::DateTimeOffset> result) ;

/// @brief Method ValidateOffset addr 0x2424a7c size 0x114 virtual false final false
static int16_t ValidateOffset(System::TimeSpan offset) ;

/// @brief Method ValidateDate addr 0x2424b90 size 0xa8 virtual false final false
static System::DateTime ValidateDate(System::DateTime dateTime, System::TimeSpan offset) ;

/// @brief Method ValidateStyles addr 0x2425f8c size 0xd8 virtual false final false
static System::Globalization::DateTimeStyles ValidateStyles(System::Globalization::DateTimeStyles style, ::StringW parameterName) ;

/// @brief Method op_Implicit addr 0x24275e0 size 0x28 virtual false final false
static System::DateTimeOffset op_Implicit_System__DateTimeOffset(System::DateTime dateTime) ;

/// @brief Method op_Equality addr 0x2427608 size 0x84 virtual false final false
static bool op_Equality(System::DateTimeOffset left, System::DateTimeOffset right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::DateTimeOffset, "System", "DateTimeOffset");
