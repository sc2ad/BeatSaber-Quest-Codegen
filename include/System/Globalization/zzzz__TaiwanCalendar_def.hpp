#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System {
struct DateTime;
}
namespace System::Globalization {
class EraInfo;
}
namespace System::Globalization {
class Calendar;
}
namespace System::Globalization {
class GregorianCalendarHelper;
}
namespace System {
struct DayOfWeek;
}
// Forward declare root types
namespace System::Globalization {
class TaiwanCalendar;
}
// Type: System.Globalization::TaiwanCalendar
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3681))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3690))
// CS Name: System.Globalization.TaiwanCalendar
class CORDL_TYPE TaiwanCalendar : public ::System::Globalization::Calendar {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TaiwanCalendar() = default;

// Ctor Parameters [CppParam { name: "", ty: "TaiwanCalendar", modifiers: " const&", def_value: None }]
constexpr TaiwanCalendar(TaiwanCalendar const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TaiwanCalendar", modifiers: "&&", def_value: None }]
constexpr TaiwanCalendar(TaiwanCalendar&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TaiwanCalendar(void* ptr) noexcept : ::System::Globalization::Calendar(ptr) {
}


  constexpr TaiwanCalendar& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TaiwanCalendar& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TaiwanCalendar& operator=(TaiwanCalendar&& o) noexcept = default;
  constexpr TaiwanCalendar& operator=(TaiwanCalendar const& o) noexcept = default;
                


// Fields

static ::ArrayW<::System::Globalization::EraInfo> __declspec(property(get=__get_taiwanEraInfo, put=__set_taiwanEraInfo))  taiwanEraInfo;

static void __set_taiwanEraInfo(::ArrayW<::System::Globalization::EraInfo> value) ;

static ::ArrayW<::System::Globalization::EraInfo> __get_taiwanEraInfo() ;

static ::System::Globalization::Calendar __declspec(property(get=__get_s_defaultInstance, put=__set_s_defaultInstance))  s_defaultInstance;

static void __set_s_defaultInstance(::System::Globalization::Calendar value) ;

static ::System::Globalization::Calendar __get_s_defaultInstance() ;

 ::System::Globalization::GregorianCalendarHelper __declspec(property(get=__get_helper, put=__set_helper))  helper;

constexpr void __set_helper(::System::Globalization::GregorianCalendarHelper value) ;

constexpr ::System::Globalization::GregorianCalendarHelper __get_helper() const;

static ::System::DateTime __declspec(property(get=__get_calendarMinValue, put=__set_calendarMinValue))  calendarMinValue;

static void __set_calendarMinValue(::System::DateTime value) ;

static ::System::DateTime __get_calendarMinValue() ;


// Properties

 ::System::DateTime __declspec(property(get=get_MinSupportedDateTime))  MinSupportedDateTime;

 ::System::DateTime __declspec(property(get=get_MaxSupportedDateTime))  MaxSupportedDateTime;

 int32_t __declspec(property(get=get_ID))  ID;

 ::ArrayW<int32_t> __declspec(property(get=get_Eras))  Eras;

 int32_t __declspec(property(get=get_TwoDigitYearMax, put=set_TwoDigitYearMax))  TwoDigitYearMax;


// Methods

/// @brief Method GetDefaultInstance addr 0x23f84ac size 0xb8 virtual false final false
static ::System::Globalization::Calendar GetDefaultInstance() ;

/// @brief Method get_MinSupportedDateTime addr 0x23f8730 size 0x58 virtual true final false
 ::System::DateTime get_MinSupportedDateTime() ;

/// @brief Method get_MaxSupportedDateTime addr 0x23f8788 size 0x58 virtual true final false
 ::System::DateTime get_MaxSupportedDateTime() ;

// Ctor Parameters []
explicit TaiwanCalendar() ;

/// @brief Method .ctor addr 0x23f8564 size 0x1cc virtual false final false
 void _ctor() ;

/// @brief Method get_ID addr 0x23f87e0 size 0x8 virtual true final false
 int32_t get_ID() ;

/// @brief Method GetDaysInMonth addr 0x23f87e8 size 0x1c virtual true final false
 int32_t GetDaysInMonth(int32_t year, int32_t month, int32_t era) ;

/// @brief Method GetDaysInYear addr 0x23f8804 size 0x1c virtual true final false
 int32_t GetDaysInYear(int32_t year, int32_t era) ;

/// @brief Method GetDayOfMonth addr 0x23f8820 size 0x1c virtual true final false
 int32_t GetDayOfMonth(::System::DateTime time) ;

/// @brief Method GetDayOfWeek addr 0x23f883c size 0x1c virtual true final false
 ::System::DayOfWeek GetDayOfWeek(::System::DateTime time) ;

/// @brief Method GetMonthsInYear addr 0x23f8858 size 0x1c virtual true final false
 int32_t GetMonthsInYear(int32_t year, int32_t era) ;

/// @brief Method GetEra addr 0x23f8874 size 0x1c virtual true final false
 int32_t GetEra(::System::DateTime time) ;

/// @brief Method GetMonth addr 0x23f8890 size 0x1c virtual true final false
 int32_t GetMonth(::System::DateTime time) ;

/// @brief Method GetYear addr 0x23f88ac size 0x1c virtual true final false
 int32_t GetYear(::System::DateTime time) ;

/// @brief Method IsLeapYear addr 0x23f88c8 size 0x1c virtual true final false
 bool IsLeapYear(int32_t year, int32_t era) ;

/// @brief Method ToDateTime addr 0x23f88e4 size 0x24 virtual true final false
 ::System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era) ;

/// @brief Method get_Eras addr 0x23f8908 size 0x1c virtual true final false
 ::ArrayW<int32_t> get_Eras() ;

/// @brief Method get_TwoDigitYearMax addr 0x23f8924 size 0x3c virtual true final false
 int32_t get_TwoDigitYearMax() ;

/// @brief Method set_TwoDigitYearMax addr 0x23f8960 size 0x13c virtual true final false
 void set_TwoDigitYearMax(int32_t value) ;

/// @brief Method ToFourDigitYear addr 0x23f8a9c size 0x14c virtual true final false
 int32_t ToFourDigitYear(int32_t year) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
} // end anonymous namespace
NEED_NO_BOX(::System::Globalization::TaiwanCalendar);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::TaiwanCalendar, "System.Globalization", "TaiwanCalendar");
