#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Globalization {
class CalendarData;
}
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System::Globalization {
struct System__Globalization__CultureData__NumberFormatEntryManaged;
}
namespace System::Globalization {
struct CalendarId;
}
// Forward declare root types
namespace System::Globalization {
class CultureData;
}
namespace System::Globalization {
struct System__Globalization__CultureData__NumberFormatEntryManaged;
}
// Type: ::NumberFormatEntryManaged
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3697))
// CS Name: System.Globalization.CultureData::NumberFormatEntryManaged
struct CORDL_TYPE System__Globalization__CultureData__NumberFormatEntryManaged : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "currency_decimal_digits", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currency_decimal_separator", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currency_group_separator", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currency_group_sizes0", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currency_group_sizes1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currency_negative_pattern", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currency_positive_pattern", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currency_symbol", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nan_symbol", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "negative_infinity_symbol", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "negative_sign", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "number_decimal_digits", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "number_decimal_separator", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "number_group_separator", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "number_group_sizes0", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "number_group_sizes1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "number_negative_pattern", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "per_mille_symbol", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "percent_negative_pattern", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "percent_positive_pattern", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "percent_symbol", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "positive_infinity_symbol", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "positive_sign", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Globalization__CultureData__NumberFormatEntryManaged(int32_t currency_decimal_digits, int32_t currency_decimal_separator, int32_t currency_group_separator, int32_t currency_group_sizes0, int32_t currency_group_sizes1, int32_t currency_negative_pattern, int32_t currency_positive_pattern, int32_t currency_symbol, int32_t nan_symbol, int32_t negative_infinity_symbol, int32_t negative_sign, int32_t number_decimal_digits, int32_t number_decimal_separator, int32_t number_group_separator, int32_t number_group_sizes0, int32_t number_group_sizes1, int32_t number_negative_pattern, int32_t per_mille_symbol, int32_t percent_negative_pattern, int32_t percent_positive_pattern, int32_t percent_symbol, int32_t positive_infinity_symbol, int32_t positive_sign) noexcept;


                    constexpr System__Globalization__CultureData__NumberFormatEntryManaged(System__Globalization__CultureData__NumberFormatEntryManaged const&) = default;
                    constexpr System__Globalization__CultureData__NumberFormatEntryManaged(System__Globalization__CultureData__NumberFormatEntryManaged&&) = default;
                    constexpr System__Globalization__CultureData__NumberFormatEntryManaged& operator=(System__Globalization__CultureData__NumberFormatEntryManaged const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Globalization__CultureData__NumberFormatEntryManaged& operator=(System__Globalization__CultureData__NumberFormatEntryManaged&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x5c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Globalization__CultureData__NumberFormatEntryManaged(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_currency_decimal_digits, put=__set_currency_decimal_digits))  currency_decimal_digits;

constexpr void __set_currency_decimal_digits(int32_t value) ;

constexpr int32_t __get_currency_decimal_digits() const;

 int32_t __declspec(property(get=__get_currency_decimal_separator, put=__set_currency_decimal_separator))  currency_decimal_separator;

constexpr void __set_currency_decimal_separator(int32_t value) ;

constexpr int32_t __get_currency_decimal_separator() const;

 int32_t __declspec(property(get=__get_currency_group_separator, put=__set_currency_group_separator))  currency_group_separator;

constexpr void __set_currency_group_separator(int32_t value) ;

constexpr int32_t __get_currency_group_separator() const;

 int32_t __declspec(property(get=__get_currency_group_sizes0, put=__set_currency_group_sizes0))  currency_group_sizes0;

constexpr void __set_currency_group_sizes0(int32_t value) ;

constexpr int32_t __get_currency_group_sizes0() const;

 int32_t __declspec(property(get=__get_currency_group_sizes1, put=__set_currency_group_sizes1))  currency_group_sizes1;

constexpr void __set_currency_group_sizes1(int32_t value) ;

constexpr int32_t __get_currency_group_sizes1() const;

 int32_t __declspec(property(get=__get_currency_negative_pattern, put=__set_currency_negative_pattern))  currency_negative_pattern;

constexpr void __set_currency_negative_pattern(int32_t value) ;

constexpr int32_t __get_currency_negative_pattern() const;

 int32_t __declspec(property(get=__get_currency_positive_pattern, put=__set_currency_positive_pattern))  currency_positive_pattern;

constexpr void __set_currency_positive_pattern(int32_t value) ;

constexpr int32_t __get_currency_positive_pattern() const;

 int32_t __declspec(property(get=__get_currency_symbol, put=__set_currency_symbol))  currency_symbol;

constexpr void __set_currency_symbol(int32_t value) ;

constexpr int32_t __get_currency_symbol() const;

 int32_t __declspec(property(get=__get_nan_symbol, put=__set_nan_symbol))  nan_symbol;

constexpr void __set_nan_symbol(int32_t value) ;

constexpr int32_t __get_nan_symbol() const;

 int32_t __declspec(property(get=__get_negative_infinity_symbol, put=__set_negative_infinity_symbol))  negative_infinity_symbol;

constexpr void __set_negative_infinity_symbol(int32_t value) ;

constexpr int32_t __get_negative_infinity_symbol() const;

 int32_t __declspec(property(get=__get_negative_sign, put=__set_negative_sign))  negative_sign;

constexpr void __set_negative_sign(int32_t value) ;

constexpr int32_t __get_negative_sign() const;

 int32_t __declspec(property(get=__get_number_decimal_digits, put=__set_number_decimal_digits))  number_decimal_digits;

constexpr void __set_number_decimal_digits(int32_t value) ;

constexpr int32_t __get_number_decimal_digits() const;

 int32_t __declspec(property(get=__get_number_decimal_separator, put=__set_number_decimal_separator))  number_decimal_separator;

constexpr void __set_number_decimal_separator(int32_t value) ;

constexpr int32_t __get_number_decimal_separator() const;

 int32_t __declspec(property(get=__get_number_group_separator, put=__set_number_group_separator))  number_group_separator;

constexpr void __set_number_group_separator(int32_t value) ;

constexpr int32_t __get_number_group_separator() const;

 int32_t __declspec(property(get=__get_number_group_sizes0, put=__set_number_group_sizes0))  number_group_sizes0;

constexpr void __set_number_group_sizes0(int32_t value) ;

constexpr int32_t __get_number_group_sizes0() const;

 int32_t __declspec(property(get=__get_number_group_sizes1, put=__set_number_group_sizes1))  number_group_sizes1;

constexpr void __set_number_group_sizes1(int32_t value) ;

constexpr int32_t __get_number_group_sizes1() const;

 int32_t __declspec(property(get=__get_number_negative_pattern, put=__set_number_negative_pattern))  number_negative_pattern;

constexpr void __set_number_negative_pattern(int32_t value) ;

constexpr int32_t __get_number_negative_pattern() const;

 int32_t __declspec(property(get=__get_per_mille_symbol, put=__set_per_mille_symbol))  per_mille_symbol;

constexpr void __set_per_mille_symbol(int32_t value) ;

constexpr int32_t __get_per_mille_symbol() const;

 int32_t __declspec(property(get=__get_percent_negative_pattern, put=__set_percent_negative_pattern))  percent_negative_pattern;

constexpr void __set_percent_negative_pattern(int32_t value) ;

constexpr int32_t __get_percent_negative_pattern() const;

 int32_t __declspec(property(get=__get_percent_positive_pattern, put=__set_percent_positive_pattern))  percent_positive_pattern;

constexpr void __set_percent_positive_pattern(int32_t value) ;

constexpr int32_t __get_percent_positive_pattern() const;

 int32_t __declspec(property(get=__get_percent_symbol, put=__set_percent_symbol))  percent_symbol;

constexpr void __set_percent_symbol(int32_t value) ;

constexpr int32_t __get_percent_symbol() const;

 int32_t __declspec(property(get=__get_positive_infinity_symbol, put=__set_positive_infinity_symbol))  positive_infinity_symbol;

constexpr void __set_positive_infinity_symbol(int32_t value) ;

constexpr int32_t __get_positive_infinity_symbol() const;

 int32_t __declspec(property(get=__get_positive_sign, put=__set_positive_sign))  positive_sign;

constexpr void __set_positive_sign(int32_t value) ;

constexpr int32_t __get_positive_sign() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
// Type: System.Globalization::CultureData
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3698))
// CS Name: System.Globalization.CultureData
class CORDL_TYPE CultureData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using NumberFormatEntryManaged = System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~CultureData() = default;

// Ctor Parameters [CppParam { name: "", ty: "CultureData", modifiers: " const&", def_value: None }]
constexpr CultureData(CultureData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CultureData", modifiers: "&&", def_value: None }]
constexpr CultureData(CultureData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CultureData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CultureData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CultureData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CultureData& operator=(CultureData&& o) noexcept = default;
  constexpr CultureData& operator=(CultureData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_sAM1159, put=__set_sAM1159))  sAM1159;

constexpr void __set_sAM1159(::StringW value) ;

constexpr ::StringW __get_sAM1159() const;

 ::StringW __declspec(property(get=__get_sPM2359, put=__set_sPM2359))  sPM2359;

constexpr void __set_sPM2359(::StringW value) ;

constexpr ::StringW __get_sPM2359() const;

 ::StringW __declspec(property(get=__get_sTimeSeparator, put=__set_sTimeSeparator))  sTimeSeparator;

constexpr void __set_sTimeSeparator(::StringW value) ;

constexpr ::StringW __get_sTimeSeparator() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_saLongTimes, put=__set_saLongTimes))  saLongTimes;

constexpr void __set_saLongTimes(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_saLongTimes() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_saShortTimes, put=__set_saShortTimes))  saShortTimes;

constexpr void __set_saShortTimes(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_saShortTimes() const;

 int32_t __declspec(property(get=__get_iFirstDayOfWeek, put=__set_iFirstDayOfWeek))  iFirstDayOfWeek;

constexpr void __set_iFirstDayOfWeek(int32_t value) ;

constexpr int32_t __get_iFirstDayOfWeek() const;

 int32_t __declspec(property(get=__get_iFirstWeekOfYear, put=__set_iFirstWeekOfYear))  iFirstWeekOfYear;

constexpr void __set_iFirstWeekOfYear(int32_t value) ;

constexpr int32_t __get_iFirstWeekOfYear() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_waCalendars, put=__set_waCalendars))  waCalendars;

constexpr void __set_waCalendars(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_waCalendars() const;

 ::ArrayW<System::Globalization::CalendarData> __declspec(property(get=__get_calendars, put=__set_calendars))  calendars;

constexpr void __set_calendars(::ArrayW<System::Globalization::CalendarData> value) ;

constexpr ::ArrayW<System::Globalization::CalendarData> __get_calendars() const;

 ::StringW __declspec(property(get=__get_sISO639Language, put=__set_sISO639Language))  sISO639Language;

constexpr void __set_sISO639Language(::StringW value) ;

constexpr ::StringW __get_sISO639Language() const;

 ::StringW __declspec(property(get=__get_sRealName, put=__set_sRealName))  sRealName;

constexpr void __set_sRealName(::StringW value) ;

constexpr ::StringW __get_sRealName() const;

 bool __declspec(property(get=__get_bUseOverrides, put=__set_bUseOverrides))  bUseOverrides;

constexpr void __set_bUseOverrides(bool value) ;

constexpr bool __get_bUseOverrides() const;

 int32_t __declspec(property(get=__get_calendarId, put=__set_calendarId))  calendarId;

constexpr void __set_calendarId(int32_t value) ;

constexpr int32_t __get_calendarId() const;

 int32_t __declspec(property(get=__get_numberIndex, put=__set_numberIndex))  numberIndex;

constexpr void __set_numberIndex(int32_t value) ;

constexpr int32_t __get_numberIndex() const;

 int32_t __declspec(property(get=__get_iDefaultAnsiCodePage, put=__set_iDefaultAnsiCodePage))  iDefaultAnsiCodePage;

constexpr void __set_iDefaultAnsiCodePage(int32_t value) ;

constexpr int32_t __get_iDefaultAnsiCodePage() const;

 int32_t __declspec(property(get=__get_iDefaultOemCodePage, put=__set_iDefaultOemCodePage))  iDefaultOemCodePage;

constexpr void __set_iDefaultOemCodePage(int32_t value) ;

constexpr int32_t __get_iDefaultOemCodePage() const;

 int32_t __declspec(property(get=__get_iDefaultMacCodePage, put=__set_iDefaultMacCodePage))  iDefaultMacCodePage;

constexpr void __set_iDefaultMacCodePage(int32_t value) ;

constexpr int32_t __get_iDefaultMacCodePage() const;

 int32_t __declspec(property(get=__get_iDefaultEbcdicCodePage, put=__set_iDefaultEbcdicCodePage))  iDefaultEbcdicCodePage;

constexpr void __set_iDefaultEbcdicCodePage(int32_t value) ;

constexpr int32_t __get_iDefaultEbcdicCodePage() const;

 bool __declspec(property(get=__get_isRightToLeft, put=__set_isRightToLeft))  isRightToLeft;

constexpr void __set_isRightToLeft(bool value) ;

constexpr bool __get_isRightToLeft() const;

 ::StringW __declspec(property(get=__get_sListSeparator, put=__set_sListSeparator))  sListSeparator;

constexpr void __set_sListSeparator(::StringW value) ;

constexpr ::StringW __get_sListSeparator() const;

static System::Globalization::CultureData __declspec(property(get=__get_s_Invariant, put=__set_s_Invariant))  s_Invariant;

static void __set_s_Invariant(System::Globalization::CultureData value) ;

static System::Globalization::CultureData __get_s_Invariant() ;


// Properties

static System::Globalization::CultureData __declspec(property(get=get_Invariant))  Invariant;

 ::ArrayW<::StringW> __declspec(property(get=get_LongTimes))  LongTimes;

 ::ArrayW<::StringW> __declspec(property(get=get_ShortTimes))  ShortTimes;

 ::StringW __declspec(property(get=get_SISO639LANGNAME))  SISO639LANGNAME;

 int32_t __declspec(property(get=get_IFIRSTDAYOFWEEK))  IFIRSTDAYOFWEEK;

 int32_t __declspec(property(get=get_IFIRSTWEEKOFYEAR))  IFIRSTWEEKOFYEAR;

 ::StringW __declspec(property(get=get_SAM1159))  SAM1159;

 ::StringW __declspec(property(get=get_SPM2359))  SPM2359;

 ::StringW __declspec(property(get=get_TimeSeparator))  TimeSeparator;

 ::ArrayW<int32_t> __declspec(property(get=get_CalendarIds))  CalendarIds;

 bool __declspec(property(get=get_IsInvariantCulture))  IsInvariantCulture;

 ::StringW __declspec(property(get=get_CultureName))  CultureName;

 ::StringW __declspec(property(get=get_SCOMPAREINFO))  SCOMPAREINFO;

 ::StringW __declspec(property(get=get_STEXTINFO))  STEXTINFO;

 bool __declspec(property(get=get_UseUserOverride))  UseUserOverride;


// Methods

static System::Globalization::CultureData New_ctor(::StringW name) ;

/// @brief Method .ctor addr 0x23fd000 size 0x28 virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method get_Invariant addr 0x23f8da8 size 0x3a4 virtual false final false
static System::Globalization::CultureData get_Invariant() ;

/// @brief Method GetCultureData addr 0x23fd028 size 0xec virtual false final false
static System::Globalization::CultureData GetCultureData(::StringW cultureName, bool useUserOverride) ;

/// @brief Method GetCultureData addr 0x23fd120 size 0x120 virtual false final false
static System::Globalization::CultureData GetCultureData(::StringW cultureName, bool useUserOverride, int32_t datetimeIndex, int32_t calendarId, int32_t numberIndex, ::StringW iso2lang, int32_t ansiCodePage, int32_t oemCodePage, int32_t macCodePage, int32_t ebcdicCodePage, bool rightToLeft, ::StringW listSeparator) ;

/// @brief Method fill_culture_data addr 0x23fd240 size 0x4 virtual false final false
 void fill_culture_data(int32_t datetimeIndex) ;

/// @brief Method GetCalendar addr 0x23fd244 size 0x11c virtual false final false
 System::Globalization::CalendarData GetCalendar(int32_t calendarId) ;

/// @brief Method get_LongTimes addr 0x23fd360 size 0x18 virtual false final false
 ::ArrayW<::StringW> get_LongTimes() ;

/// @brief Method get_ShortTimes addr 0x23fd378 size 0x18 virtual false final false
 ::ArrayW<::StringW> get_ShortTimes() ;

/// @brief Method get_SISO639LANGNAME addr 0x23fd390 size 0x8 virtual false final false
 ::StringW get_SISO639LANGNAME() ;

/// @brief Method get_IFIRSTDAYOFWEEK addr 0x23fd398 size 0x8 virtual false final false
 int32_t get_IFIRSTDAYOFWEEK() ;

/// @brief Method get_IFIRSTWEEKOFYEAR addr 0x23fd3a0 size 0x8 virtual false final false
 int32_t get_IFIRSTWEEKOFYEAR() ;

/// @brief Method get_SAM1159 addr 0x23fd3a8 size 0x8 virtual false final false
 ::StringW get_SAM1159() ;

/// @brief Method get_SPM2359 addr 0x23fd3b0 size 0x8 virtual false final false
 ::StringW get_SPM2359() ;

/// @brief Method get_TimeSeparator addr 0x23fd3b8 size 0x8 virtual false final false
 ::StringW get_TimeSeparator() ;

/// @brief Method get_CalendarIds addr 0x23fd3c0 size 0x1b0 virtual false final false
 ::ArrayW<int32_t> get_CalendarIds() ;

/// @brief Method GetCalendarIds addr 0x23fd570 size 0xd8 virtual false final false
 ::ArrayW<System::Globalization::CalendarId> GetCalendarIds() ;

/// @brief Method get_IsInvariantCulture addr 0x23f7a48 size 0xc virtual false final false
 bool get_IsInvariantCulture() ;

/// @brief Method get_CultureName addr 0x23fd648 size 0x8 virtual false final false
 ::StringW get_CultureName() ;

/// @brief Method get_SCOMPAREINFO addr 0x23fd650 size 0x40 virtual false final false
 ::StringW get_SCOMPAREINFO() ;

/// @brief Method get_STEXTINFO addr 0x23fd690 size 0x8 virtual false final false
 ::StringW get_STEXTINFO() ;

/// @brief Method get_UseUserOverride addr 0x23fd698 size 0x8 virtual false final false
 bool get_UseUserOverride() ;

/// @brief Method EraNames addr 0x23fd6a0 size 0x1c virtual false final false
 ::ArrayW<::StringW> EraNames(int32_t calendarId) ;

/// @brief Method AbbrevEraNames addr 0x23fd6bc size 0x1c virtual false final false
 ::ArrayW<::StringW> AbbrevEraNames(int32_t calendarId) ;

/// @brief Method AbbreviatedEnglishEraNames addr 0x23fd6d8 size 0x1c virtual false final false
 ::ArrayW<::StringW> AbbreviatedEnglishEraNames(int32_t calendarId) ;

/// @brief Method ShortDates addr 0x23fd6f4 size 0x1c virtual false final false
 ::ArrayW<::StringW> ShortDates(int32_t calendarId) ;

/// @brief Method LongDates addr 0x23fd710 size 0x1c virtual false final false
 ::ArrayW<::StringW> LongDates(int32_t calendarId) ;

/// @brief Method YearMonths addr 0x23fd72c size 0x1c virtual false final false
 ::ArrayW<::StringW> YearMonths(int32_t calendarId) ;

/// @brief Method DayNames addr 0x23fd748 size 0x1c virtual false final false
 ::ArrayW<::StringW> DayNames(int32_t calendarId) ;

/// @brief Method AbbreviatedDayNames addr 0x23fd764 size 0x1c virtual false final false
 ::ArrayW<::StringW> AbbreviatedDayNames(int32_t calendarId) ;

/// @brief Method MonthNames addr 0x23fd780 size 0x1c virtual false final false
 ::ArrayW<::StringW> MonthNames(int32_t calendarId) ;

/// @brief Method GenitiveMonthNames addr 0x23fd79c size 0x1c virtual false final false
 ::ArrayW<::StringW> GenitiveMonthNames(int32_t calendarId) ;

/// @brief Method AbbreviatedMonthNames addr 0x23fd7b8 size 0x1c virtual false final false
 ::ArrayW<::StringW> AbbreviatedMonthNames(int32_t calendarId) ;

/// @brief Method AbbreviatedGenitiveMonthNames addr 0x23fd7d4 size 0x1c virtual false final false
 ::ArrayW<::StringW> AbbreviatedGenitiveMonthNames(int32_t calendarId) ;

/// @brief Method LeapYearMonthNames addr 0x23fd7f0 size 0x1c virtual false final false
 ::ArrayW<::StringW> LeapYearMonthNames(int32_t calendarId) ;

/// @brief Method MonthDay addr 0x23fd80c size 0x1c virtual false final false
 ::StringW MonthDay(int32_t calendarId) ;

/// @brief Method DateSeparator addr 0x23fd828 size 0xac virtual false final false
 ::StringW DateSeparator(int32_t calendarId) ;

/// @brief Method GetDateSeparator addr 0x23fd8d4 size 0x48 virtual false final false
static ::StringW GetDateSeparator(::StringW format) ;

/// @brief Method GetSeparator addr 0x23fd91c size 0x104 virtual false final false
static ::StringW GetSeparator(::StringW format, ::StringW timeParts) ;

/// @brief Method IndexOfTimePart addr 0x23fda20 size 0xec virtual false final false
static int32_t IndexOfTimePart(::StringW format, int32_t startIndex, ::StringW timeParts) ;

/// @brief Method UnescapeNlsString addr 0x23fdb0c size 0x1a4 virtual false final false
static ::StringW UnescapeNlsString(::StringW str, int32_t start, int32_t end) ;

/// @brief Method ReescapeWin32Strings addr 0x23fdcb0 size 0x4 virtual false final false
static ::ArrayW<::StringW> ReescapeWin32Strings(::ArrayW<::StringW> array) ;

/// @brief Method ReescapeWin32String addr 0x23fdcb4 size 0x4 virtual false final false
static ::StringW ReescapeWin32String(::StringW str) ;

/// @brief Method strlen addr 0x23fdcb8 size 0x18 virtual false final false
static int32_t strlen(void* s) ;

/// @brief Method idx2string addr 0x23fdcd0 size 0x44 virtual false final false
static ::StringW idx2string(void* data, int32_t idx) ;

/// @brief Method create_group_sizes_array addr 0x23fdd14 size 0xb4 virtual false final false
 ::ArrayW<int32_t> create_group_sizes_array(int32_t gs0, int32_t gs1) ;

/// @brief Method GetNFIValues addr 0x23f78b0 size 0x198 virtual false final false
 void GetNFIValues(System::Globalization::NumberFormatInfo nfi) ;

/// @brief Method fill_number_data addr 0x23fddc8 size 0x4 virtual false final false
static void* fill_number_data(int32_t index, ByRef<System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged> nfe) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
NEED_NO_BOX(System::Globalization::CultureData);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::CultureData, "System.Globalization", "CultureData");
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::System__Globalization__CultureData__NumberFormatEntryManaged, "System.Globalization", "CultureData/NumberFormatEntryManaged");
