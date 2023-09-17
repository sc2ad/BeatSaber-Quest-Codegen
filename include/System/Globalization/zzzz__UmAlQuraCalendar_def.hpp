#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
struct DayOfWeek;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::Globalization {
class UmAlQuraCalendar;
}
namespace System::Globalization {
struct ____System__Globalization__UmAlQuraCalendar__DateMapping;
}
// Type: ::DateMapping
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3693))
// CS Name: System.Globalization.UmAlQuraCalendar::DateMapping
struct CORDL_TYPE ____System__Globalization__UmAlQuraCalendar__DateMapping : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "HijriMonthsLengthFlags", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "GregorianDate", ty: "::System::DateTime", modifiers: "", def_value: None }]
constexpr ____System__Globalization__UmAlQuraCalendar__DateMapping(int32_t HijriMonthsLengthFlags, ::System::DateTime GregorianDate) noexcept;


                    constexpr ____System__Globalization__UmAlQuraCalendar__DateMapping(____System__Globalization__UmAlQuraCalendar__DateMapping const&) = default;
                    constexpr ____System__Globalization__UmAlQuraCalendar__DateMapping(____System__Globalization__UmAlQuraCalendar__DateMapping&&) = default;
                    constexpr ____System__Globalization__UmAlQuraCalendar__DateMapping& operator=(____System__Globalization__UmAlQuraCalendar__DateMapping const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Globalization__UmAlQuraCalendar__DateMapping& operator=(____System__Globalization__UmAlQuraCalendar__DateMapping&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Globalization__UmAlQuraCalendar__DateMapping(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_HijriMonthsLengthFlags, put=__set_HijriMonthsLengthFlags))  HijriMonthsLengthFlags;

constexpr void __set_HijriMonthsLengthFlags(int32_t value) ;

constexpr int32_t __get_HijriMonthsLengthFlags() const;

 ::System::DateTime __declspec(property(get=__get_GregorianDate, put=__set_GregorianDate))  GregorianDate;

constexpr void __set_GregorianDate(::System::DateTime value) ;

constexpr ::System::DateTime __get_GregorianDate() const;


// Methods

/// @brief Method .ctor addr 0x23fb4c8 size 0x40 virtual false final false
 void _ctor(int32_t MonthsLengthFlags, int32_t GYear, int32_t GMonth, int32_t GDay) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
// Type: System.Globalization::UmAlQuraCalendar
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3681))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3694))
// CS Name: System.Globalization.UmAlQuraCalendar
class CORDL_TYPE UmAlQuraCalendar : public ::System::Globalization::Calendar {
public:
// Declarations
using DateMapping = ::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UmAlQuraCalendar() = default;

// Ctor Parameters [CppParam { name: "", ty: "UmAlQuraCalendar", modifiers: " const&", def_value: None }]
constexpr UmAlQuraCalendar(UmAlQuraCalendar const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UmAlQuraCalendar", modifiers: "&&", def_value: None }]
constexpr UmAlQuraCalendar(UmAlQuraCalendar&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UmAlQuraCalendar(void* ptr) noexcept : ::System::Globalization::Calendar(ptr) {
}


  constexpr UmAlQuraCalendar& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UmAlQuraCalendar& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UmAlQuraCalendar& operator=(UmAlQuraCalendar&& o) noexcept = default;
  constexpr UmAlQuraCalendar& operator=(UmAlQuraCalendar const& o) noexcept = default;
                


// Fields

static ::ArrayW<::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping> __declspec(property(get=__get_HijriYearInfo, put=__set_HijriYearInfo))  HijriYearInfo;

static void __set_HijriYearInfo(::ArrayW<::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping> value) ;

static ::ArrayW<::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping> __get_HijriYearInfo() ;

static ::System::DateTime __declspec(property(get=__get_minDate, put=__set_minDate))  minDate;

static void __set_minDate(::System::DateTime value) ;

static ::System::DateTime __get_minDate() ;

static ::System::DateTime __declspec(property(get=__get_maxDate, put=__set_maxDate))  maxDate;

static void __set_maxDate(::System::DateTime value) ;

static ::System::DateTime __get_maxDate() ;


// Properties

 ::System::DateTime __declspec(property(get=get_MinSupportedDateTime))  MinSupportedDateTime;

 ::System::DateTime __declspec(property(get=get_MaxSupportedDateTime))  MaxSupportedDateTime;

 int32_t __declspec(property(get=get_BaseCalendarID))  BaseCalendarID;

 int32_t __declspec(property(get=get_ID))  ID;

 ::ArrayW<int32_t> __declspec(property(get=get_Eras))  Eras;

 int32_t __declspec(property(get=get_TwoDigitYearMax, put=set_TwoDigitYearMax))  TwoDigitYearMax;


// Methods

/// @brief Method InitDateMapping addr 0x23fb364 size 0x164 virtual false final false
static ::ArrayW<::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping> InitDateMapping() ;

/// @brief Method get_MinSupportedDateTime addr 0x23fb508 size 0x58 virtual true final false
 ::System::DateTime get_MinSupportedDateTime() ;

/// @brief Method get_MaxSupportedDateTime addr 0x23fb560 size 0x58 virtual true final false
 ::System::DateTime get_MaxSupportedDateTime() ;

// Ctor Parameters []
explicit UmAlQuraCalendar() ;

/// @brief Method .ctor addr 0x23fb5b8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_BaseCalendarID addr 0x23fb5c0 size 0x8 virtual true final false
 int32_t get_BaseCalendarID() ;

/// @brief Method get_ID addr 0x23fb5c8 size 0x8 virtual true final false
 int32_t get_ID() ;

/// @brief Method ConvertHijriToGregorian addr 0x23fb5d0 size 0x140 virtual false final false
static void ConvertHijriToGregorian(int32_t HijriYear, int32_t HijriMonth, int32_t HijriDay, ByRef<int32_t> yg, ByRef<int32_t> mg, ByRef<int32_t> dg) ;

/// @brief Method GetAbsoluteDateUmAlQura addr 0x23fb710 size 0xc8 virtual false final false
static int64_t GetAbsoluteDateUmAlQura(int32_t year, int32_t month, int32_t day) ;

/// @brief Method CheckTicksRange addr 0x23fb7d8 size 0x1ac virtual false final false
static void CheckTicksRange(int64_t ticks) ;

/// @brief Method CheckEraRange addr 0x23fb984 size 0x7c virtual false final false
static void CheckEraRange(int32_t era) ;

/// @brief Method CheckYearRange addr 0x23fba00 size 0x148 virtual false final false
static void CheckYearRange(int32_t year, int32_t era) ;

/// @brief Method CheckYearMonthRange addr 0x23fbb48 size 0xe0 virtual false final false
static void CheckYearMonthRange(int32_t year, int32_t month, int32_t era) ;

/// @brief Method ConvertGregorianToHijri addr 0x23fbc28 size 0x258 virtual false final false
static void ConvertGregorianToHijri(::System::DateTime time, ByRef<int32_t> HijriYear, ByRef<int32_t> HijriMonth, ByRef<int32_t> HijriDay) ;

/// @brief Method GetDatePart addr 0x23fbe80 size 0x16c virtual true final false
 int32_t GetDatePart(::System::DateTime time, int32_t part) ;

/// @brief Method GetDayOfMonth addr 0x23fbfec size 0x14 virtual true final false
 int32_t GetDayOfMonth(::System::DateTime time) ;

/// @brief Method GetDayOfWeek addr 0x23fc000 size 0x68 virtual true final false
 ::System::DayOfWeek GetDayOfWeek(::System::DateTime time) ;

/// @brief Method GetDaysInMonth addr 0x23fc068 size 0xb8 virtual true final false
 int32_t GetDaysInMonth(int32_t year, int32_t month, int32_t era) ;

/// @brief Method RealGetDaysInYear addr 0x23fc120 size 0xa0 virtual false final false
static int32_t RealGetDaysInYear(int32_t year) ;

/// @brief Method GetDaysInYear addr 0x23fc1c0 size 0x6c virtual true final false
 int32_t GetDaysInYear(int32_t year, int32_t era) ;

/// @brief Method GetEra addr 0x23fc22c size 0x70 virtual true final false
 int32_t GetEra(::System::DateTime time) ;

/// @brief Method get_Eras addr 0x23fc29c size 0x64 virtual true final false
 ::ArrayW<int32_t> get_Eras() ;

/// @brief Method GetMonth addr 0x23fc300 size 0x14 virtual true final false
 int32_t GetMonth(::System::DateTime time) ;

/// @brief Method GetMonthsInYear addr 0x23fc314 size 0x6c virtual true final false
 int32_t GetMonthsInYear(int32_t year, int32_t era) ;

/// @brief Method GetYear addr 0x23fc380 size 0x14 virtual true final false
 int32_t GetYear(::System::DateTime time) ;

/// @brief Method IsLeapYear addr 0x23fc394 size 0x78 virtual true final false
 bool IsLeapYear(int32_t year, int32_t era) ;

/// @brief Method ToDateTime addr 0x23fc40c size 0x254 virtual true final false
 ::System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era) ;

/// @brief Method get_TwoDigitYearMax addr 0x23fc660 size 0x3c virtual true final false
 int32_t get_TwoDigitYearMax() ;

/// @brief Method set_TwoDigitYearMax addr 0x23fc69c size 0x120 virtual true final false
 void set_TwoDigitYearMax(int32_t value) ;

/// @brief Method ToFourDigitYear addr 0x23fc7bc size 0x13c virtual true final false
 int32_t ToFourDigitYear(int32_t year) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
} // end anonymous namespace
NEED_NO_BOX(::System::Globalization::UmAlQuraCalendar);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::UmAlQuraCalendar, "System.Globalization", "UmAlQuraCalendar");
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::____System__Globalization__UmAlQuraCalendar__DateMapping, "System.Globalization", "UmAlQuraCalendar/DateMapping");
