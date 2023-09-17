#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Globalization {
class Calendar;
}
namespace System::Globalization {
class GregorianCalendarHelper;
}
namespace System {
struct DateTime;
}
namespace System {
struct DayOfWeek;
}
namespace System::Globalization {
class EraInfo;
}
// Forward declare root types
namespace System::Globalization {
class JapaneseCalendar;
}
// Type: System.Globalization::JapaneseCalendar
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3681))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3688))
// CS Name: System.Globalization.JapaneseCalendar
class CORDL_TYPE JapaneseCalendar : public ::System::Globalization::Calendar {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~JapaneseCalendar() = default;

// Ctor Parameters [CppParam { name: "", ty: "JapaneseCalendar", modifiers: " const&", def_value: None }]
constexpr JapaneseCalendar(JapaneseCalendar const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JapaneseCalendar", modifiers: "&&", def_value: None }]
constexpr JapaneseCalendar(JapaneseCalendar&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JapaneseCalendar(void* ptr) noexcept : ::System::Globalization::Calendar(ptr) {
}


  constexpr JapaneseCalendar& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JapaneseCalendar& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JapaneseCalendar& operator=(JapaneseCalendar&& o) noexcept = default;
  constexpr JapaneseCalendar& operator=(JapaneseCalendar const& o) noexcept = default;
                


// Fields

static ::System::DateTime __declspec(property(get=__get_calendarMinValue, put=__set_calendarMinValue))  calendarMinValue;

static void __set_calendarMinValue(::System::DateTime value) ;

static ::System::DateTime __get_calendarMinValue() ;

static ::ArrayW<::System::Globalization::EraInfo> __declspec(property(get=__get_japaneseEraInfo, put=__set_japaneseEraInfo))  japaneseEraInfo;

static void __set_japaneseEraInfo(::ArrayW<::System::Globalization::EraInfo> value) ;

static ::ArrayW<::System::Globalization::EraInfo> __get_japaneseEraInfo() ;

static ::System::Globalization::Calendar __declspec(property(get=__get_s_defaultInstance, put=__set_s_defaultInstance))  s_defaultInstance;

static void __set_s_defaultInstance(::System::Globalization::Calendar value) ;

static ::System::Globalization::Calendar __get_s_defaultInstance() ;

 ::System::Globalization::GregorianCalendarHelper __declspec(property(get=__get_helper, put=__set_helper))  helper;

constexpr void __set_helper(::System::Globalization::GregorianCalendarHelper value) ;

constexpr ::System::Globalization::GregorianCalendarHelper __get_helper() const;


// Properties

 ::System::DateTime __declspec(property(get=get_MinSupportedDateTime))  MinSupportedDateTime;

 ::System::DateTime __declspec(property(get=get_MaxSupportedDateTime))  MaxSupportedDateTime;

 int32_t __declspec(property(get=get_ID))  ID;

 ::ArrayW<int32_t> __declspec(property(get=get_Eras))  Eras;

 int32_t __declspec(property(get=get_TwoDigitYearMax, put=set_TwoDigitYearMax))  TwoDigitYearMax;


// Methods

/// @brief Method get_MinSupportedDateTime addr 0x23f6404 size 0x58 virtual true final false
 ::System::DateTime get_MinSupportedDateTime() ;

/// @brief Method get_MaxSupportedDateTime addr 0x23f645c size 0x58 virtual true final false
 ::System::DateTime get_MaxSupportedDateTime() ;

/// @brief Method GetEraInfo addr 0x23f64b4 size 0x458 virtual false final false
static ::ArrayW<::System::Globalization::EraInfo> GetEraInfo() ;

/// @brief Method GetErasFromRegistry addr 0x23f690c size 0x8 virtual false final false
static ::ArrayW<::System::Globalization::EraInfo> GetErasFromRegistry() ;

/// @brief Method GetDefaultInstance addr 0x23f6914 size 0xb8 virtual false final false
static ::System::Globalization::Calendar GetDefaultInstance() ;

// Ctor Parameters []
explicit JapaneseCalendar() ;

/// @brief Method .ctor addr 0x23f69cc size 0x1cc virtual false final false
 void _ctor() ;

/// @brief Method get_ID addr 0x23f6ba4 size 0x8 virtual true final false
 int32_t get_ID() ;

/// @brief Method GetDaysInMonth addr 0x23f6bac size 0x1c virtual true final false
 int32_t GetDaysInMonth(int32_t year, int32_t month, int32_t era) ;

/// @brief Method GetDaysInYear addr 0x23f6bc8 size 0x1c virtual true final false
 int32_t GetDaysInYear(int32_t year, int32_t era) ;

/// @brief Method GetDayOfMonth addr 0x23f6be4 size 0x1c virtual true final false
 int32_t GetDayOfMonth(::System::DateTime time) ;

/// @brief Method GetDayOfWeek addr 0x23f6c00 size 0x1c virtual true final false
 ::System::DayOfWeek GetDayOfWeek(::System::DateTime time) ;

/// @brief Method GetMonthsInYear addr 0x23f6c1c size 0x1c virtual true final false
 int32_t GetMonthsInYear(int32_t year, int32_t era) ;

/// @brief Method GetEra addr 0x23f6c38 size 0x1c virtual true final false
 int32_t GetEra(::System::DateTime time) ;

/// @brief Method GetMonth addr 0x23f6c54 size 0x1c virtual true final false
 int32_t GetMonth(::System::DateTime time) ;

/// @brief Method GetYear addr 0x23f6c70 size 0x1c virtual true final false
 int32_t GetYear(::System::DateTime time) ;

/// @brief Method IsLeapYear addr 0x23f6c8c size 0x1c virtual true final false
 bool IsLeapYear(int32_t year, int32_t era) ;

/// @brief Method ToDateTime addr 0x23f6ca8 size 0x24 virtual true final false
 ::System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era) ;

/// @brief Method ToFourDigitYear addr 0x23f6ccc size 0x14c virtual true final false
 int32_t ToFourDigitYear(int32_t year) ;

/// @brief Method get_Eras addr 0x23f6e18 size 0x1c virtual true final false
 ::ArrayW<int32_t> get_Eras() ;

/// @brief Method EraNames addr 0x23f6e34 size 0x114 virtual false final false
static ::ArrayW<::StringW> EraNames() ;

/// @brief Method EnglishEraNames addr 0x23f6f48 size 0x114 virtual false final false
static ::ArrayW<::StringW> EnglishEraNames() ;

/// @brief Method IsValidYear addr 0x23f705c size 0x1c virtual true final false
 bool IsValidYear(int32_t year, int32_t era) ;

/// @brief Method get_TwoDigitYearMax addr 0x23f7078 size 0x3c virtual true final false
 int32_t get_TwoDigitYearMax() ;

/// @brief Method set_TwoDigitYearMax addr 0x23f70b4 size 0x13c virtual true final false
 void set_TwoDigitYearMax(int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
} // end anonymous namespace
NEED_NO_BOX(::System::Globalization::JapaneseCalendar);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::JapaneseCalendar, "System.Globalization", "JapaneseCalendar");
