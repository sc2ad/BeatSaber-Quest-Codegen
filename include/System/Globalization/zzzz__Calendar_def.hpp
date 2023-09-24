#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System {
struct DateTime;
}
namespace System {
struct DayOfWeek;
}
namespace System {
class ICloneable;
}
// Forward declare root types
namespace System::Globalization {
class Calendar;
}
// Type: System.Globalization::Calendar
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3681))
// CS Name: System.Globalization.Calendar
class CORDL_TYPE Calendar : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Calendar() = default;

// Ctor Parameters [CppParam { name: "", ty: "Calendar", modifiers: " const&", def_value: None }]
constexpr Calendar(Calendar const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Calendar", modifiers: "&&", def_value: None }]
constexpr Calendar(Calendar&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Calendar(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Calendar& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Calendar& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Calendar& operator=(Calendar&& o) noexcept = default;
  constexpr Calendar& operator=(Calendar const& o) noexcept = default;
                


// Fields

/// @brief Field TicksPerMillisecond offset 0
static constexpr int64_t  TicksPerMillisecond{10000};

/// @brief Field TicksPerSecond offset 0
static constexpr int64_t  TicksPerSecond{10000000};

/// @brief Field TicksPerMinute offset 0
static constexpr int64_t  TicksPerMinute{600000000};

/// @brief Field TicksPerHour offset 0
static constexpr int64_t  TicksPerHour{36000000000};

/// @brief Field TicksPerDay offset 0
static constexpr int64_t  TicksPerDay{864000000000};

/// @brief Field MillisPerSecond offset 0
static constexpr int32_t  MillisPerSecond{1000};

/// @brief Field MillisPerMinute offset 0
static constexpr int32_t  MillisPerMinute{60000};

/// @brief Field MillisPerHour offset 0
static constexpr int32_t  MillisPerHour{3600000};

/// @brief Field MillisPerDay offset 0
static constexpr int32_t  MillisPerDay{86400000};

/// @brief Field DaysPerYear offset 0
static constexpr int32_t  DaysPerYear{365};

/// @brief Field DaysPer4Years offset 0
static constexpr int32_t  DaysPer4Years{1461};

/// @brief Field DaysPer100Years offset 0
static constexpr int32_t  DaysPer100Years{36524};

/// @brief Field DaysPer400Years offset 0
static constexpr int32_t  DaysPer400Years{146097};

/// @brief Field DaysTo10000 offset 0
static constexpr int32_t  DaysTo10000{3652059};

/// @brief Field MaxMillis offset 0
static constexpr int64_t  MaxMillis{315537897600000};

/// @brief Field CAL_GREGORIAN offset 0
static constexpr int32_t  CAL_GREGORIAN{1};

/// @brief Field CAL_GREGORIAN_US offset 0
static constexpr int32_t  CAL_GREGORIAN_US{2};

/// @brief Field CAL_JAPAN offset 0
static constexpr int32_t  CAL_JAPAN{3};

/// @brief Field CAL_TAIWAN offset 0
static constexpr int32_t  CAL_TAIWAN{4};

/// @brief Field CAL_KOREA offset 0
static constexpr int32_t  CAL_KOREA{5};

/// @brief Field CAL_HIJRI offset 0
static constexpr int32_t  CAL_HIJRI{6};

/// @brief Field CAL_THAI offset 0
static constexpr int32_t  CAL_THAI{7};

/// @brief Field CAL_HEBREW offset 0
static constexpr int32_t  CAL_HEBREW{8};

/// @brief Field CAL_GREGORIAN_ME_FRENCH offset 0
static constexpr int32_t  CAL_GREGORIAN_ME_FRENCH{9};

/// @brief Field CAL_GREGORIAN_ARABIC offset 0
static constexpr int32_t  CAL_GREGORIAN_ARABIC{10};

/// @brief Field CAL_GREGORIAN_XLIT_ENGLISH offset 0
static constexpr int32_t  CAL_GREGORIAN_XLIT_ENGLISH{11};

/// @brief Field CAL_GREGORIAN_XLIT_FRENCH offset 0
static constexpr int32_t  CAL_GREGORIAN_XLIT_FRENCH{12};

/// @brief Field CAL_JULIAN offset 0
static constexpr int32_t  CAL_JULIAN{13};

/// @brief Field CAL_JAPANESELUNISOLAR offset 0
static constexpr int32_t  CAL_JAPANESELUNISOLAR{14};

/// @brief Field CAL_CHINESELUNISOLAR offset 0
static constexpr int32_t  CAL_CHINESELUNISOLAR{15};

/// @brief Field CAL_SAKA offset 0
static constexpr int32_t  CAL_SAKA{16};

/// @brief Field CAL_LUNAR_ETO_CHN offset 0
static constexpr int32_t  CAL_LUNAR_ETO_CHN{17};

/// @brief Field CAL_LUNAR_ETO_KOR offset 0
static constexpr int32_t  CAL_LUNAR_ETO_KOR{18};

/// @brief Field CAL_LUNAR_ETO_ROKUYOU offset 0
static constexpr int32_t  CAL_LUNAR_ETO_ROKUYOU{19};

/// @brief Field CAL_KOREANLUNISOLAR offset 0
static constexpr int32_t  CAL_KOREANLUNISOLAR{20};

/// @brief Field CAL_TAIWANLUNISOLAR offset 0
static constexpr int32_t  CAL_TAIWANLUNISOLAR{21};

/// @brief Field CAL_PERSIAN offset 0
static constexpr int32_t  CAL_PERSIAN{22};

/// @brief Field CAL_UMALQURA offset 0
static constexpr int32_t  CAL_UMALQURA{23};

 int32_t __declspec(property(get=__get_m_currentEraValue, put=__set_m_currentEraValue))  m_currentEraValue;

constexpr void __set_m_currentEraValue(int32_t value) ;

constexpr int32_t __get_m_currentEraValue() const;

 bool __declspec(property(get=__get_m_isReadOnly, put=__set_m_isReadOnly))  m_isReadOnly;

constexpr void __set_m_isReadOnly(bool value) ;

constexpr bool __get_m_isReadOnly() const;

/// @brief Field CurrentEra offset 0
static constexpr int32_t  CurrentEra{0};

 int32_t __declspec(property(get=__get_twoDigitYearMax, put=__set_twoDigitYearMax))  twoDigitYearMax;

constexpr void __set_twoDigitYearMax(int32_t value) ;

constexpr int32_t __get_twoDigitYearMax() const;


// Properties

 System::DateTime __declspec(property(get=get_MinSupportedDateTime))  MinSupportedDateTime;

 System::DateTime __declspec(property(get=get_MaxSupportedDateTime))  MaxSupportedDateTime;

 int32_t __declspec(property(get=get_ID))  ID;

 int32_t __declspec(property(get=get_BaseCalendarID))  BaseCalendarID;

 int32_t __declspec(property(get=get_CurrentEraValue))  CurrentEraValue;

 ::ArrayW<int32_t> __declspec(property(get=get_Eras))  Eras;

 int32_t __declspec(property(get=get_TwoDigitYearMax, put=set_TwoDigitYearMax))  TwoDigitYearMax;


// Methods

/// @brief Method get_MinSupportedDateTime addr 0x23ee594 size 0x58 virtual true final false
 System::DateTime get_MinSupportedDateTime() ;

/// @brief Method get_MaxSupportedDateTime addr 0x23ee5ec size 0x58 virtual true final false
 System::DateTime get_MaxSupportedDateTime() ;

static System::Globalization::Calendar New_ctor() ;

/// @brief Method .ctor addr 0x23ee644 size 0x14 virtual false final false
 void _ctor() ;

/// @brief Method get_ID addr 0x23ee658 size 0x8 virtual true final false
 int32_t get_ID() ;

/// @brief Method get_BaseCalendarID addr 0x23ee660 size 0xc virtual true final false
 int32_t get_BaseCalendarID() ;

/// @brief Method Clone addr 0x23ee66c size 0x88 virtual true final false
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method VerifyWritable addr 0x23ee6f4 size 0x74 virtual false final false
 void VerifyWritable() ;

/// @brief Method SetReadOnlyState addr 0x23ee768 size 0xc virtual false final false
 void SetReadOnlyState(bool readOnly) ;

/// @brief Method get_CurrentEraValue addr 0x23ee774 size 0x8c virtual true final false
 int32_t get_CurrentEraValue() ;

/// @brief Method GetDayOfMonth addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetDayOfMonth(System::DateTime time) ;

/// @brief Method GetDayOfWeek addr 0x0 size 0xffffffffffffffff virtual true final false
 System::DayOfWeek GetDayOfWeek(System::DateTime time) ;

/// @brief Method GetDaysInMonth addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetDaysInMonth(int32_t year, int32_t month, int32_t era) ;

/// @brief Method GetDaysInYear addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetDaysInYear(int32_t year, int32_t era) ;

/// @brief Method GetEra addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetEra(System::DateTime time) ;

/// @brief Method get_Eras addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<int32_t> get_Eras() ;

/// @brief Method GetMonth addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetMonth(System::DateTime time) ;

/// @brief Method GetMonthsInYear addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetMonthsInYear(int32_t year, int32_t era) ;

/// @brief Method GetYear addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetYear(System::DateTime time) ;

/// @brief Method IsLeapYear addr 0x23ee8a8 size 0x14 virtual true final false
 bool IsLeapYear(int32_t year) ;

/// @brief Method IsLeapYear addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsLeapYear(int32_t year, int32_t era) ;

/// @brief Method ToDateTime addr 0x23ee8bc size 0x28 virtual true final false
 System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond) ;

/// @brief Method ToDateTime addr 0x0 size 0xffffffffffffffff virtual true final false
 System::DateTime ToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era) ;

/// @brief Method TryToDateTime addr 0x23ee8e4 size 0x160 virtual true final false
 bool TryToDateTime(int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t millisecond, int32_t era, ByRef<System::DateTime> result) ;

/// @brief Method IsValidYear addr 0x23eea44 size 0x84 virtual true final false
 bool IsValidYear(int32_t year, int32_t era) ;

/// @brief Method IsValidMonth addr 0x23eeac8 size 0x78 virtual true final false
 bool IsValidMonth(int32_t year, int32_t month, int32_t era) ;

/// @brief Method IsValidDay addr 0x23eeb40 size 0x80 virtual true final false
 bool IsValidDay(int32_t year, int32_t month, int32_t day, int32_t era) ;

/// @brief Method get_TwoDigitYearMax addr 0x23eebc0 size 0x8 virtual true final false
 int32_t get_TwoDigitYearMax() ;

/// @brief Method set_TwoDigitYearMax addr 0x23eebc8 size 0x24 virtual true final false
 void set_TwoDigitYearMax(int32_t value) ;

/// @brief Method ToFourDigitYear addr 0x23eebec size 0xfc virtual true final false
 int32_t ToFourDigitYear(int32_t year) ;

/// @brief Method TimeToTicks addr 0x23eece8 size 0x1bc virtual false final false
static int64_t TimeToTicks(int32_t hour, int32_t minute, int32_t second, int32_t millisecond) ;

/// @brief Method GetSystemTwoDigitYearSetting addr 0x23eeea4 size 0x54 virtual false final false
static int32_t GetSystemTwoDigitYearSetting(int32_t CalID, int32_t defaultYearValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
NEED_NO_BOX(System::Globalization::Calendar);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::Calendar, "System.Globalization", "Calendar");
