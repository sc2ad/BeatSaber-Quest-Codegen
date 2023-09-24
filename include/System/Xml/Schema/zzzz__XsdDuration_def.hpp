#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Xml::Schema {
struct System__Xml__Schema__XsdDuration__Parts;
}
namespace System::Xml::Schema {
struct System__Xml__Schema__XsdDuration__DurationType;
}
namespace System {
struct TimeSpan;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Xml::Schema {
struct System__Xml__Schema__XsdDuration__DurationType;
}
namespace System::Xml::Schema {
struct System__Xml__Schema__XsdDuration__Parts;
}
namespace System::Xml::Schema {
struct XsdDuration;
}
// Type: ::Parts
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11706))
// CS Name: System.Xml.Schema.XsdDuration::Parts
struct CORDL_TYPE System__Xml__Schema__XsdDuration__Parts : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Xml__Schema__XsdDuration__Parts(int32_t value__) noexcept;


                    constexpr System__Xml__Schema__XsdDuration__Parts(System__Xml__Schema__XsdDuration__Parts const&) = default;
                    constexpr System__Xml__Schema__XsdDuration__Parts(System__Xml__Schema__XsdDuration__Parts&&) = default;
                    constexpr System__Xml__Schema__XsdDuration__Parts& operator=(System__Xml__Schema__XsdDuration__Parts const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__Schema__XsdDuration__Parts& operator=(System__Xml__Schema__XsdDuration__Parts&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__Schema__XsdDuration__Parts(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Xml__Schema__XsdDuration__Parts_Unwrapped : int32_t {
__HasNone = 0,
__HasYears = 1,
__HasMonths = 2,
__HasDays = 4,
__HasHours = 8,
__HasMinutes = 16,
__HasSeconds = 32,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Xml__Schema__XsdDuration__Parts_Unwrapped () const noexcept {
return std::bit_cast<__System__Xml__Schema__XsdDuration__Parts_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field HasNone offset 0
static System::Xml::Schema::System__Xml__Schema__XsdDuration__Parts const HasNone;

/// @brief Field HasYears offset 0
static System::Xml::Schema::System__Xml__Schema__XsdDuration__Parts const HasYears;

/// @brief Field HasMonths offset 0
static System::Xml::Schema::System__Xml__Schema__XsdDuration__Parts const HasMonths;

/// @brief Field HasDays offset 0
static System::Xml::Schema::System__Xml__Schema__XsdDuration__Parts const HasDays;

/// @brief Field HasHours offset 0
static System::Xml::Schema::System__Xml__Schema__XsdDuration__Parts const HasHours;

/// @brief Field HasMinutes offset 0
static System::Xml::Schema::System__Xml__Schema__XsdDuration__Parts const HasMinutes;

/// @brief Field HasSeconds offset 0
static System::Xml::Schema::System__Xml__Schema__XsdDuration__Parts const HasSeconds;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
// Type: ::DurationType
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11707))
// CS Name: System.Xml.Schema.XsdDuration::DurationType
struct CORDL_TYPE System__Xml__Schema__XsdDuration__DurationType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Xml__Schema__XsdDuration__DurationType(int32_t value__) noexcept;


                    constexpr System__Xml__Schema__XsdDuration__DurationType(System__Xml__Schema__XsdDuration__DurationType const&) = default;
                    constexpr System__Xml__Schema__XsdDuration__DurationType(System__Xml__Schema__XsdDuration__DurationType&&) = default;
                    constexpr System__Xml__Schema__XsdDuration__DurationType& operator=(System__Xml__Schema__XsdDuration__DurationType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__Schema__XsdDuration__DurationType& operator=(System__Xml__Schema__XsdDuration__DurationType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__Schema__XsdDuration__DurationType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Xml__Schema__XsdDuration__DurationType_Unwrapped : int32_t {
__Duration = 0,
__YearMonthDuration = 1,
__DayTimeDuration = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Xml__Schema__XsdDuration__DurationType_Unwrapped () const noexcept {
return std::bit_cast<__System__Xml__Schema__XsdDuration__DurationType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Duration offset 0
static System::Xml::Schema::System__Xml__Schema__XsdDuration__DurationType const Duration;

/// @brief Field YearMonthDuration offset 0
static System::Xml::Schema::System__Xml__Schema__XsdDuration__DurationType const YearMonthDuration;

/// @brief Field DayTimeDuration offset 0
static System::Xml::Schema::System__Xml__Schema__XsdDuration__DurationType const DayTimeDuration;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
// Type: System.Xml.Schema::XsdDuration
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11708))
// CS Name: System.Xml.Schema.XsdDuration
struct CORDL_TYPE XsdDuration : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using DurationType = System::Xml::Schema::System__Xml__Schema__XsdDuration__DurationType;

using Parts = System::Xml::Schema::System__Xml__Schema__XsdDuration__Parts;

// Ctor Parameters [CppParam { name: "years", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "months", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "days", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hours", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minutes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "seconds", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nanoseconds", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr XsdDuration(int32_t years, int32_t months, int32_t days, int32_t hours, int32_t minutes, int32_t seconds, uint32_t nanoseconds) noexcept;


                    constexpr XsdDuration(XsdDuration const&) = default;
                    constexpr XsdDuration(XsdDuration&&) = default;
                    constexpr XsdDuration& operator=(XsdDuration const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XsdDuration& operator=(XsdDuration&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XsdDuration(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_years, put=__set_years))  years;

constexpr void __set_years(int32_t value) ;

constexpr int32_t __get_years() const;

 int32_t __declspec(property(get=__get_months, put=__set_months))  months;

constexpr void __set_months(int32_t value) ;

constexpr int32_t __get_months() const;

 int32_t __declspec(property(get=__get_days, put=__set_days))  days;

constexpr void __set_days(int32_t value) ;

constexpr int32_t __get_days() const;

 int32_t __declspec(property(get=__get_hours, put=__set_hours))  hours;

constexpr void __set_hours(int32_t value) ;

constexpr int32_t __get_hours() const;

 int32_t __declspec(property(get=__get_minutes, put=__set_minutes))  minutes;

constexpr void __set_minutes(int32_t value) ;

constexpr int32_t __get_minutes() const;

 int32_t __declspec(property(get=__get_seconds, put=__set_seconds))  seconds;

constexpr void __set_seconds(int32_t value) ;

constexpr int32_t __get_seconds() const;

 uint32_t __declspec(property(get=__get_nanoseconds, put=__set_nanoseconds))  nanoseconds;

constexpr void __set_nanoseconds(uint32_t value) ;

constexpr uint32_t __get_nanoseconds() const;


// Properties

 bool __declspec(property(get=get_IsNegative))  IsNegative;

 int32_t __declspec(property(get=get_Years))  Years;

 int32_t __declspec(property(get=get_Months))  Months;

 int32_t __declspec(property(get=get_Days))  Days;

 int32_t __declspec(property(get=get_Hours))  Hours;

 int32_t __declspec(property(get=get_Minutes))  Minutes;

 int32_t __declspec(property(get=get_Seconds))  Seconds;

 int32_t __declspec(property(get=get_Nanoseconds))  Nanoseconds;


// Methods

/// @brief Method .ctor addr 0x2755b40 size 0x178 virtual false final false
 void _ctor(bool isNegative, int32_t years, int32_t months, int32_t days, int32_t hours, int32_t minutes, int32_t seconds, int32_t nanoseconds) ;

/// @brief Method .ctor addr 0x2755cb8 size 0xd8 virtual false final false
 void _ctor(System::TimeSpan timeSpan) ;

/// @brief Method .ctor addr 0x2755d90 size 0x180 virtual false final false
 void _ctor(System::TimeSpan timeSpan, System::Xml::Schema::System__Xml__Schema__XsdDuration__DurationType durationType) ;

/// @brief Method .ctor addr 0x2755f10 size 0x8c virtual false final false
 void _ctor(::StringW s, System::Xml::Schema::System__Xml__Schema__XsdDuration__DurationType durationType) ;

/// @brief Method get_IsNegative addr 0x2756694 size 0xc virtual false final false
 bool get_IsNegative() ;

/// @brief Method get_Years addr 0x27566a0 size 0x8 virtual false final false
 int32_t get_Years() ;

/// @brief Method get_Months addr 0x27566a8 size 0x8 virtual false final false
 int32_t get_Months() ;

/// @brief Method get_Days addr 0x27566b0 size 0x8 virtual false final false
 int32_t get_Days() ;

/// @brief Method get_Hours addr 0x27566b8 size 0x8 virtual false final false
 int32_t get_Hours() ;

/// @brief Method get_Minutes addr 0x27566c0 size 0x8 virtual false final false
 int32_t get_Minutes() ;

/// @brief Method get_Seconds addr 0x27566c8 size 0x8 virtual false final false
 int32_t get_Seconds() ;

/// @brief Method get_Nanoseconds addr 0x2756688 size 0xc virtual false final false
 int32_t get_Nanoseconds() ;

/// @brief Method ToTimeSpan addr 0x27566d0 size 0x48 virtual false final false
 System::TimeSpan ToTimeSpan(System::Xml::Schema::System__Xml__Schema__XsdDuration__DurationType durationType) ;

/// @brief Method TryToTimeSpan addr 0x2756bf8 size 0xc virtual false final false
 System::Exception TryToTimeSpan(ByRef<System::TimeSpan> result) ;

/// @brief Method TryToTimeSpan addr 0x2756718 size 0x4e0 virtual false final false
 System::Exception TryToTimeSpan(System::Xml::Schema::System__Xml__Schema__XsdDuration__DurationType durationType, ByRef<System::TimeSpan> result) ;

/// @brief Method ToString addr 0x2756c04 size 0x8 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2756c0c size 0x3fc virtual false final false
 ::StringW ToString(System::Xml::Schema::System__Xml__Schema__XsdDuration__DurationType durationType) ;

/// @brief Method TryParse addr 0x2757008 size 0xc virtual false final false
static System::Exception TryParse(::StringW s, ByRef<System::Xml::Schema::XsdDuration> result) ;

/// @brief Method TryParse addr 0x2755f9c size 0x6ec virtual false final false
static System::Exception TryParse(::StringW s, System::Xml::Schema::System__Xml__Schema__XsdDuration__DurationType durationType, ByRef<System::Xml::Schema::XsdDuration> result) ;

/// @brief Method TryParseDigits addr 0x2757014 size 0x1bc virtual false final false
static ::StringW TryParseDigits(::StringW s, ByRef<int32_t> offset, bool eatDigits, ByRef<int32_t> result, ByRef<int32_t> numDigits) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::System__Xml__Schema__XsdDuration__DurationType, "System.Xml.Schema", "XsdDuration/DurationType");
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::System__Xml__Schema__XsdDuration__Parts, "System.Xml.Schema", "XsdDuration/Parts");
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XsdDuration, "System.Xml.Schema", "XsdDuration");
