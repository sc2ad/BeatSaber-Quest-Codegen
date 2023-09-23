#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
class ISpanFormattable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
class IComparable;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IFormattable;
}
// Forward declare root types
namespace System {
struct TimeSpan;
}
// Type: System::TimeSpan
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2483))
// CS Name: System.TimeSpan
struct CORDL_TYPE TimeSpan : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IComparable
constexpr operator  System::IComparable() const;

/// @brief Convert operator to System::IComparable_1<System::TimeSpan>
constexpr operator  System::IComparable_1<System::TimeSpan>() const;

/// @brief Convert operator to System::IEquatable_1<System::TimeSpan>
constexpr operator  System::IEquatable_1<System::TimeSpan>() const;

/// @brief Convert operator to System::IFormattable
constexpr operator  System::IFormattable() const;

/// @brief Convert operator to System::ISpanFormattable
constexpr operator  System::ISpanFormattable() const;

// Ctor Parameters [CppParam { name: "_ticks", ty: "int64_t", modifiers: "", def_value: None }]
constexpr TimeSpan(int64_t _ticks) noexcept;


                    constexpr TimeSpan(TimeSpan const&) = default;
                    constexpr TimeSpan(TimeSpan&&) = default;
                    constexpr TimeSpan& operator=(TimeSpan const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TimeSpan& operator=(TimeSpan&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TimeSpan(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field TicksPerMillisecond offset 0
static constexpr int64_t  TicksPerMillisecond{10000};

/// @brief Field MillisecondsPerTick offset 0
static constexpr double_t  MillisecondsPerTick{0.0001};

/// @brief Field TicksPerSecond offset 0
static constexpr int64_t  TicksPerSecond{10000000};

/// @brief Field SecondsPerTick offset 0
static constexpr double_t  SecondsPerTick{0.0000001};

/// @brief Field TicksPerMinute offset 0
static constexpr int64_t  TicksPerMinute{600000000};

/// @brief Field MinutesPerTick offset 0
static constexpr double_t  MinutesPerTick{0.0000000016666666666666667};

/// @brief Field TicksPerHour offset 0
static constexpr int64_t  TicksPerHour{36000000000};

/// @brief Field HoursPerTick offset 0
static constexpr double_t  HoursPerTick{0.000000000027777777777777777};

/// @brief Field TicksPerDay offset 0
static constexpr int64_t  TicksPerDay{864000000000};

/// @brief Field DaysPerTick offset 0
static constexpr double_t  DaysPerTick{0.0000000000011574074074074074};

/// @brief Field MillisPerSecond offset 0
static constexpr int32_t  MillisPerSecond{1000};

/// @brief Field MillisPerMinute offset 0
static constexpr int32_t  MillisPerMinute{60000};

/// @brief Field MillisPerHour offset 0
static constexpr int32_t  MillisPerHour{3600000};

/// @brief Field MillisPerDay offset 0
static constexpr int32_t  MillisPerDay{86400000};

/// @brief Field MaxSeconds offset 0
static constexpr int64_t  MaxSeconds{922337203685};

/// @brief Field MinSeconds offset 0
static constexpr int64_t  MinSeconds{-922337203685};

/// @brief Field MaxMilliSeconds offset 0
static constexpr int64_t  MaxMilliSeconds{922337203685477};

/// @brief Field MinMilliSeconds offset 0
static constexpr int64_t  MinMilliSeconds{-922337203685477};

/// @brief Field TicksPerTenthSecond offset 0
static constexpr int64_t  TicksPerTenthSecond{1000000};

static System::TimeSpan __declspec(property(get=__get_Zero, put=__set_Zero))  Zero;

static void __set_Zero(System::TimeSpan value) ;

static System::TimeSpan __get_Zero() ;

static System::TimeSpan __declspec(property(get=__get_MaxValue, put=__set_MaxValue))  MaxValue;

static void __set_MaxValue(System::TimeSpan value) ;

static System::TimeSpan __get_MaxValue() ;

static System::TimeSpan __declspec(property(get=__get_MinValue, put=__set_MinValue))  MinValue;

static void __set_MinValue(System::TimeSpan value) ;

static System::TimeSpan __get_MinValue() ;

 int64_t __declspec(property(get=__get__ticks, put=__set__ticks))  _ticks;

constexpr void __set__ticks(int64_t value) ;

constexpr int64_t __get__ticks() const;


// Properties

 int64_t __declspec(property(get=get_Ticks))  Ticks;

 int32_t __declspec(property(get=get_Hours))  Hours;

 int32_t __declspec(property(get=get_Minutes))  Minutes;

 int32_t __declspec(property(get=get_Seconds))  Seconds;

 double_t __declspec(property(get=get_TotalDays))  TotalDays;

 double_t __declspec(property(get=get_TotalHours))  TotalHours;

 double_t __declspec(property(get=get_TotalMilliseconds))  TotalMilliseconds;

 double_t __declspec(property(get=get_TotalMinutes))  TotalMinutes;

 double_t __declspec(property(get=get_TotalSeconds))  TotalSeconds;


// Methods

/// @brief Method .ctor addr 0x2457b74 size 0x8 virtual false final false
 void _ctor(int64_t ticks) ;

/// @brief Method .ctor addr 0x2457b7c size 0x80 virtual false final false
 void _ctor(int32_t hours, int32_t minutes, int32_t seconds) ;

/// @brief Method .ctor addr 0x2457c98 size 0xc0 virtual false final false
 void _ctor(int32_t days, int32_t hours, int32_t minutes, int32_t seconds, int32_t milliseconds) ;

/// @brief Method get_Ticks addr 0x2457d58 size 0x8 virtual false final false
 int64_t get_Ticks() ;

/// @brief Method get_Hours addr 0x2457d60 size 0x48 virtual false final false
 int32_t get_Hours() ;

/// @brief Method get_Minutes addr 0x2457da8 size 0x48 virtual false final false
 int32_t get_Minutes() ;

/// @brief Method get_Seconds addr 0x2457df0 size 0x4c virtual false final false
 int32_t get_Seconds() ;

/// @brief Method get_TotalDays addr 0x2457e3c size 0x18 virtual false final false
 double_t get_TotalDays() ;

/// @brief Method get_TotalHours addr 0x2457e54 size 0x18 virtual false final false
 double_t get_TotalHours() ;

/// @brief Method get_TotalMilliseconds addr 0x2457e6c size 0x34 virtual false final false
 double_t get_TotalMilliseconds() ;

/// @brief Method get_TotalMinutes addr 0x2457ea0 size 0x18 virtual false final false
 double_t get_TotalMinutes() ;

/// @brief Method get_TotalSeconds addr 0x2457eb8 size 0x18 virtual false final false
 double_t get_TotalSeconds() ;

/// @brief Method Add addr 0x2457ed0 size 0x6c virtual false final false
 System::TimeSpan Add(System::TimeSpan ts) ;

/// @brief Method Compare addr 0x2457f3c size 0x18 virtual false final false
static int32_t Compare(System::TimeSpan t1, System::TimeSpan t2) ;

/// @brief Method CompareTo addr 0x2457f54 size 0xc8 virtual true final true
 int32_t CompareTo(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method CompareTo addr 0x245801c size 0x1c virtual true final true
 int32_t CompareTo(System::TimeSpan value) ;

/// @brief Method FromDays addr 0x2458038 size 0x64 virtual false final false
static System::TimeSpan FromDays(double_t value) ;

/// @brief Method Duration addr 0x24581e8 size 0xbc virtual false final false
 System::TimeSpan Duration() ;

/// @brief Method Equals addr 0x24582a4 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method Equals addr 0x245831c size 0x10 virtual true final true
 bool Equals(System::TimeSpan obj) ;

/// @brief Method GetHashCode addr 0x245832c size 0xc virtual true final false
 int32_t GetHashCode() ;

/// @brief Method FromHours addr 0x2458338 size 0x64 virtual false final false
static System::TimeSpan FromHours(double_t value) ;

/// @brief Method Interval addr 0x245809c size 0x14c virtual false final false
static System::TimeSpan Interval(double_t value, int32_t scale) ;

/// @brief Method FromMilliseconds addr 0x245839c size 0x60 virtual false final false
static System::TimeSpan FromMilliseconds(double_t value) ;

/// @brief Method FromMinutes addr 0x24583fc size 0x60 virtual false final false
static System::TimeSpan FromMinutes(double_t value) ;

/// @brief Method Negate addr 0x245845c size 0xb8 virtual false final false
 System::TimeSpan Negate() ;

/// @brief Method FromSeconds addr 0x2458514 size 0x60 virtual false final false
static System::TimeSpan FromSeconds(double_t value) ;

/// @brief Method Subtract addr 0x2458574 size 0x6c virtual false final false
 System::TimeSpan Subtract(System::TimeSpan ts) ;

/// @brief Method FromTicks addr 0x24585e0 size 0x4 virtual false final false
static System::TimeSpan FromTicks(int64_t value) ;

/// @brief Method TimeToTicks addr 0x2457bfc size 0x9c virtual false final false
static int64_t TimeToTicks(int32_t hour, int32_t minute, int32_t second) ;

/// @brief Method Parse addr 0x24585e4 size 0x5c virtual false final false
static System::TimeSpan Parse(::StringW s) ;

/// @brief Method Parse addr 0x2458640 size 0x60 virtual false final false
static System::TimeSpan Parse(::StringW input, System::IFormatProvider formatProvider) ;

/// @brief Method TryParseExact addr 0x24586a0 size 0xd4 virtual false final false
static bool TryParseExact(::StringW input, ::StringW format, System::IFormatProvider formatProvider, ByRef<System::TimeSpan> result) ;

/// @brief Method ToString addr 0x2458774 size 0x64 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x24587d8 size 0x70 virtual false final false
 ::StringW ToString(::StringW format) ;

/// @brief Method ToString addr 0x2458848 size 0x74 virtual true final true
 ::StringW ToString(::StringW format, System::IFormatProvider formatProvider) ;

/// @brief Method TryFormat addr 0x24588bc size 0xa4 virtual true final true
 bool TryFormat(System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider formatProvider) ;

/// @brief Method op_UnaryNegation addr 0x2458960 size 0xb0 virtual false final false
static System::TimeSpan op_UnaryNegation(System::TimeSpan t) ;

/// @brief Method op_Subtraction addr 0x2458a10 size 0x18 virtual false final false
static System::TimeSpan op_Subtraction(System::TimeSpan t1, System::TimeSpan t2) ;

/// @brief Method op_Addition addr 0x2458a28 size 0x18 virtual false final false
static System::TimeSpan op_Addition(System::TimeSpan t1, System::TimeSpan t2) ;

/// @brief Method op_Equality addr 0x2458a40 size 0xc virtual false final false
static bool op_Equality(System::TimeSpan t1, System::TimeSpan t2) ;

/// @brief Method op_Inequality addr 0x2458a4c size 0xc virtual false final false
static bool op_Inequality(System::TimeSpan t1, System::TimeSpan t2) ;

/// @brief Method op_LessThan addr 0x2458a58 size 0xc virtual false final false
static bool op_LessThan(System::TimeSpan t1, System::TimeSpan t2) ;

/// @brief Method op_LessThanOrEqual addr 0x2458a64 size 0xc virtual false final false
static bool op_LessThanOrEqual(System::TimeSpan t1, System::TimeSpan t2) ;

/// @brief Method op_GreaterThan addr 0x2458a70 size 0xc virtual false final false
static bool op_GreaterThan(System::TimeSpan t1, System::TimeSpan t2) ;

/// @brief Method op_GreaterThanOrEqual addr 0x2458a7c size 0xc virtual false final false
static bool op_GreaterThanOrEqual(System::TimeSpan t1, System::TimeSpan t2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::TimeSpan, "System", "TimeSpan");
