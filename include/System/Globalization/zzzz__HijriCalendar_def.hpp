#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
class HijriCalendar;
}
// Type: System.Globalization::HijriCalendar
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3681))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3687))
// CS Name: System.Globalization.HijriCalendar
class CORDL_TYPE HijriCalendar : public ::System::Globalization::Calendar {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HijriCalendar() = default;

// Ctor Parameters [CppParam { name: "", ty: "HijriCalendar", modifiers: " const&", def_value: None }]
constexpr HijriCalendar(HijriCalendar const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HijriCalendar", modifiers: "&&", def_value: None }]
constexpr HijriCalendar(HijriCalendar&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HijriCalendar(void* ptr) noexcept : ::System::Globalization::Calendar(ptr) {
}


  constexpr HijriCalendar& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HijriCalendar& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HijriCalendar& operator=(HijriCalendar&& o) noexcept = default;
  constexpr HijriCalendar& operator=(HijriCalendar const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_HijriEra, put=__set_HijriEra))  HijriEra;

static void __set_HijriEra(int32_t value) ;

static int32_t __get_HijriEra() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_HijriMonthDays, put=__set_HijriMonthDays))  HijriMonthDays;

static void __set_HijriMonthDays(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_HijriMonthDays() ;

 int32_t __declspec(property(get=__get_m_HijriAdvance, put=__set_m_HijriAdvance))  m_HijriAdvance;

constexpr void __set_m_HijriAdvance(int32_t value) ;

constexpr int32_t __get_m_HijriAdvance() const;

static ::System::DateTime __declspec(property(get=__get_calendarMinValue, put=__set_calendarMinValue))  calendarMinValue;

static void __set_calendarMinValue(::System::DateTime value) ;

static ::System::DateTime __get_calendarMinValue() ;

static ::System::DateTime __declspec(property(get=__get_calendarMaxValue, put=__set_calendarMaxValue))  calendarMaxValue;

static void __set_calendarMaxValue(::System::DateTime value) ;

static ::System::DateTime __get_calendarMaxValue() ;


// Properties

 ::System::DateTime __declspec(property(get=get_MinSupportedDateTime))  MinSupportedDateTime;

 ::System::DateTime __declspec(property(get=get_MaxSupportedDateTime))  MaxSupportedDateTime;

 int32_t __declspec(property(get=get_ID))  ID;

 int32_t __declspec(property(get=get_HijriAdjustment))  HijriAdjustment;

 ::ArrayW<int32_t> __declspec(property(get=get_Eras))  Eras;

 int32_t __declspec(property(get=get_TwoDigitYearMax, put=set_TwoDigitYearMax))  TwoDigitYearMax;


// Methods

/// @brief Method get_MinSupportedDateTime addr 0x23f4ecc size 0x58 virtual true final false
 ::System::DateTime get_MinSupportedDateTime() ;

/// @brief Method get_MaxSupportedDateTime addr 0x23f4f24 size 0x58 virtual true final false
 ::System::DateTime get_MaxSupportedDateTime() ;

// Ctor Parameters []
explicit HijriCalendar() ;

/// @brief Method .ctor addr 0x23f4f7c size 0x10 virtual false final false
 void _ctor() ;

/// @brief Method get_ID addr 0x23f4f8c size 0x8 virtual true final false
 int32_t get_ID() ;

/// @brief Method GetAbsoluteDateHijri addr 0x23f4f94 size 0xc8 virtual false final false
 int64_t GetAbsoluteDateHijri(int32_t y, int32_t m, int32_t d) ;

/// @brief Method DaysUpToHijriYear addr 0x23f505c size 0xbc virtual false final false
 int64_t DaysUpToHijriYear(int32_t HijriYear) ;

/// @brief Method get_HijriAdjustment addr 0x23f5118 size 0x68 virtual false final false
 int32_t get_HijriAdjustment() ;

/// @brief Method GetAdvanceHijriDate addr 0x23f5180 size 0x8 virtual false final false
static int32_t GetAdvanceHijriDate() ;

/// @brief Method CheckTicksRange addr 0x23f5188 size 0x1ac virtual false final false
static void CheckTicksRange(int64_t ticks) ;

/// @brief Method CheckEraRange addr 0x23f5394 size 0xd0 virtual false final false
static void CheckEraRange(int32_t era) ;

/// @brief Method CheckYearRange addr 0x23f5464 size 0x154 virtual false final false
static void CheckYearRange(int32_t year, int32_t era) ;

/// @brief Method CheckYearMonthRange addr 0x23f55d8 size 0x184 virtual false final false
static void CheckYearMonthRange(int32_t year, int32_t month, int32_t era) ;

/// @brief Method GetDatePart addr 0x23f575c size 0x270 virtual true final false
 int32_t GetDatePart(int64_t ticks, int32_t part) ;

/// @brief Method GetDayOfMonth addr 0x23f59cc size 0x44 virtual true final false
 int32_t GetDayOfMonth(::System::DateTime time) ;

/// @brief Method GetDayOfWeek addr 0x23f5a10 size 0x68 virtual true final false
 ::System::DayOfWeek GetDayOfWeek(::System::DateTime time) ;

/// @brief Method GetDaysInMonth addr 0x23f5a78 size 0xcc virtual true final false
 int32_t GetDaysInMonth(int32_t year, int32_t month, int32_t era) ;

/// @brief Method GetDaysInYear addr 0x23f5b44 size 0x94 virtual true final false
 int32_t GetDaysInYear(int32_t year, int32_t era) ;

/// @brief Method GetEra addr 0x23f5bd8 size 0x78 virtual true final false
 int32_t GetEra(::System::DateTime time) ;

/// @brief Method get_Eras addr 0x23f5c50 size 0x9c virtual true final false
 ::ArrayW<int32_t> get_Eras() ;

/// @brief Method GetMonth addr 0x23f5cec size 0x44 virtual true final false
 int32_t GetMonth(::System::DateTime time) ;

/// @brief Method GetMonthsInYear addr 0x23f5d30 size 0x6c virtual true final false
 int32_t GetMonthsInYear(int32_t year, int32_t era) ;

/// @brief Method GetYear addr 0x23f5d9c size 0x44 virtual true final false
 int32_t GetYear(::System::DateTime time) ;

/// @brief Method IsLeapYear addr 0x23f5de0 size 0xa0 virtual true final false
 bool IsLeapYear(int32_t year, int32_t era) ;

/// @brief Method ToDateTime addr 0x23f5e80 size 0x1e0 virtual true final false
 ::System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era) ;

/// @brief Method get_TwoDigitYearMax addr 0x23f6060 size 0x3c virtual true final false
 int32_t get_TwoDigitYearMax() ;

/// @brief Method set_TwoDigitYearMax addr 0x23f609c size 0x118 virtual true final false
 void set_TwoDigitYearMax(int32_t value) ;

/// @brief Method ToFourDigitYear addr 0x23f61b4 size 0x13c virtual true final false
 int32_t ToFourDigitYear(int32_t year) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
} // end anonymous namespace
NEED_NO_BOX(::System::Globalization::HijriCalendar);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::HijriCalendar, "System.Globalization", "HijriCalendar");
