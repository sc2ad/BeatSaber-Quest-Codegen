#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Globalization {
class CultureData;
}
namespace System::Globalization {
struct CalendarId;
}
namespace System {
struct __DTString;
}
namespace System::Globalization {
class CompareInfo;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Type;
}
namespace System::Globalization {
struct MonthNameStyles;
}
namespace System {
struct TokenType;
}
namespace System::Globalization {
struct DateTimeFormatFlags;
}
namespace System {
class ICloneable;
}
namespace System {
struct DayOfWeek;
}
namespace System::Globalization {
class Calendar;
}
namespace System {
class IFormatProvider;
}
namespace System::Globalization {
struct DateTimeStyles;
}
// Forward declare root types
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System::Globalization {
class ____System__Globalization__DateTimeFormatInfo__TokenHashValue;
}
// Type: ::TokenHashValue
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3649))
// CS Name: System.Globalization.DateTimeFormatInfo::TokenHashValue
class CORDL_TYPE ____System__Globalization__DateTimeFormatInfo__TokenHashValue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____System__Globalization__DateTimeFormatInfo__TokenHashValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Globalization__DateTimeFormatInfo__TokenHashValue", modifiers: " const&", def_value: None }]
constexpr ____System__Globalization__DateTimeFormatInfo__TokenHashValue(____System__Globalization__DateTimeFormatInfo__TokenHashValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Globalization__DateTimeFormatInfo__TokenHashValue", modifiers: "&&", def_value: None }]
constexpr ____System__Globalization__DateTimeFormatInfo__TokenHashValue(____System__Globalization__DateTimeFormatInfo__TokenHashValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Globalization__DateTimeFormatInfo__TokenHashValue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Globalization__DateTimeFormatInfo__TokenHashValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Globalization__DateTimeFormatInfo__TokenHashValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Globalization__DateTimeFormatInfo__TokenHashValue& operator=(____System__Globalization__DateTimeFormatInfo__TokenHashValue&& o) noexcept = default;
  constexpr ____System__Globalization__DateTimeFormatInfo__TokenHashValue& operator=(____System__Globalization__DateTimeFormatInfo__TokenHashValue const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_tokenString, put=__set_tokenString))  tokenString;

constexpr void __set_tokenString(::StringW value) ;

constexpr ::StringW __get_tokenString() const;

 ::System::TokenType __declspec(property(get=__get_tokenType, put=__set_tokenType))  tokenType;

constexpr void __set_tokenType(::System::TokenType value) ;

constexpr ::System::TokenType __get_tokenType() const;

 int32_t __declspec(property(get=__get_tokenValue, put=__set_tokenValue))  tokenValue;

constexpr void __set_tokenValue(int32_t value) ;

constexpr int32_t __get_tokenValue() const;


// Methods

// Ctor Parameters [CppParam { name: "tokenString", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "tokenType", ty: "::System::TokenType", modifiers: "", def_value: None }, CppParam { name: "tokenValue", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____System__Globalization__DateTimeFormatInfo__TokenHashValue(::StringW tokenString, ::System::TokenType tokenType, int32_t tokenValue) ;

/// @brief Method .ctor addr 0x23e3e58 size 0x3c virtual false final false
 void _ctor(::StringW tokenString, ::System::TokenType tokenType, int32_t tokenValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
// Type: System.Globalization::DateTimeFormatInfo
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3650))
// CS Name: System.Globalization.DateTimeFormatInfo
class CORDL_TYPE DateTimeFormatInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using TokenHashValue = ::System::Globalization::____System__Globalization__DateTimeFormatInfo__TokenHashValue;

/// @brief Convert operator to ::System::IFormatProvider
constexpr operator  ::System::IFormatProvider() const noexcept;

/// @brief Convert operator to ::System::ICloneable
constexpr operator  ::System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x160};

virtual ~DateTimeFormatInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeFormatInfo", modifiers: " const&", def_value: None }]
constexpr DateTimeFormatInfo(DateTimeFormatInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeFormatInfo", modifiers: "&&", def_value: None }]
constexpr DateTimeFormatInfo(DateTimeFormatInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DateTimeFormatInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DateTimeFormatInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DateTimeFormatInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DateTimeFormatInfo& operator=(DateTimeFormatInfo&& o) noexcept = default;
  constexpr DateTimeFormatInfo& operator=(DateTimeFormatInfo const& o) noexcept = default;
                


// Fields

static ::System::Globalization::DateTimeFormatInfo __declspec(property(get=__get_s_invariantInfo, put=__set_s_invariantInfo))  s_invariantInfo;

static void __set_s_invariantInfo(::System::Globalization::DateTimeFormatInfo value) ;

static ::System::Globalization::DateTimeFormatInfo __get_s_invariantInfo() ;

 ::System::Globalization::CultureData __declspec(property(get=__get__cultureData, put=__set__cultureData))  _cultureData;

constexpr void __set__cultureData(::System::Globalization::CultureData value) ;

constexpr ::System::Globalization::CultureData __get__cultureData() const;

 ::StringW __declspec(property(get=__get__name, put=__set__name))  _name;

constexpr void __set__name(::StringW value) ;

constexpr ::StringW __get__name() const;

 ::StringW __declspec(property(get=__get__langName, put=__set__langName))  _langName;

constexpr void __set__langName(::StringW value) ;

constexpr ::StringW __get__langName() const;

 ::System::Globalization::CompareInfo __declspec(property(get=__get__compareInfo, put=__set__compareInfo))  _compareInfo;

constexpr void __set__compareInfo(::System::Globalization::CompareInfo value) ;

constexpr ::System::Globalization::CompareInfo __get__compareInfo() const;

 ::System::Globalization::CultureInfo __declspec(property(get=__get__cultureInfo, put=__set__cultureInfo))  _cultureInfo;

constexpr void __set__cultureInfo(::System::Globalization::CultureInfo value) ;

constexpr ::System::Globalization::CultureInfo __get__cultureInfo() const;

 ::StringW __declspec(property(get=__get_amDesignator, put=__set_amDesignator))  amDesignator;

constexpr void __set_amDesignator(::StringW value) ;

constexpr ::StringW __get_amDesignator() const;

 ::StringW __declspec(property(get=__get_pmDesignator, put=__set_pmDesignator))  pmDesignator;

constexpr void __set_pmDesignator(::StringW value) ;

constexpr ::StringW __get_pmDesignator() const;

 ::StringW __declspec(property(get=__get_dateSeparator, put=__set_dateSeparator))  dateSeparator;

constexpr void __set_dateSeparator(::StringW value) ;

constexpr ::StringW __get_dateSeparator() const;

 ::StringW __declspec(property(get=__get_generalShortTimePattern, put=__set_generalShortTimePattern))  generalShortTimePattern;

constexpr void __set_generalShortTimePattern(::StringW value) ;

constexpr ::StringW __get_generalShortTimePattern() const;

 ::StringW __declspec(property(get=__get_generalLongTimePattern, put=__set_generalLongTimePattern))  generalLongTimePattern;

constexpr void __set_generalLongTimePattern(::StringW value) ;

constexpr ::StringW __get_generalLongTimePattern() const;

 ::StringW __declspec(property(get=__get_timeSeparator, put=__set_timeSeparator))  timeSeparator;

constexpr void __set_timeSeparator(::StringW value) ;

constexpr ::StringW __get_timeSeparator() const;

 ::StringW __declspec(property(get=__get_monthDayPattern, put=__set_monthDayPattern))  monthDayPattern;

constexpr void __set_monthDayPattern(::StringW value) ;

constexpr ::StringW __get_monthDayPattern() const;

 ::StringW __declspec(property(get=__get_dateTimeOffsetPattern, put=__set_dateTimeOffsetPattern))  dateTimeOffsetPattern;

constexpr void __set_dateTimeOffsetPattern(::StringW value) ;

constexpr ::StringW __get_dateTimeOffsetPattern() const;

/// @brief Field rfc1123Pattern offset 0
static constexpr ::ConstString  rfc1123Pattern{u"ddd, dd MMM yyyy HH\':\'mm\':\'ss \'GMT\'"};

/// @brief Field sortableDateTimePattern offset 0
static constexpr ::ConstString  sortableDateTimePattern{u"yyyy\'-\'MM\'-\'dd\'T\'HH\':\'mm\':\'ss"};

/// @brief Field universalSortableDateTimePattern offset 0
static constexpr ::ConstString  universalSortableDateTimePattern{u"yyyy\'-\'MM\'-\'dd HH\':\'mm\':\'ss\'Z\'"};

 ::System::Globalization::Calendar __declspec(property(get=__get_calendar, put=__set_calendar))  calendar;

constexpr void __set_calendar(::System::Globalization::Calendar value) ;

constexpr ::System::Globalization::Calendar __get_calendar() const;

 int32_t __declspec(property(get=__get_firstDayOfWeek, put=__set_firstDayOfWeek))  firstDayOfWeek;

constexpr void __set_firstDayOfWeek(int32_t value) ;

constexpr int32_t __get_firstDayOfWeek() const;

 int32_t __declspec(property(get=__get_calendarWeekRule, put=__set_calendarWeekRule))  calendarWeekRule;

constexpr void __set_calendarWeekRule(int32_t value) ;

constexpr int32_t __get_calendarWeekRule() const;

 ::StringW __declspec(property(get=__get_fullDateTimePattern, put=__set_fullDateTimePattern))  fullDateTimePattern;

constexpr void __set_fullDateTimePattern(::StringW value) ;

constexpr ::StringW __get_fullDateTimePattern() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_abbreviatedDayNames, put=__set_abbreviatedDayNames))  abbreviatedDayNames;

constexpr void __set_abbreviatedDayNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_abbreviatedDayNames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_m_superShortDayNames, put=__set_m_superShortDayNames))  m_superShortDayNames;

constexpr void __set_m_superShortDayNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_m_superShortDayNames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_dayNames, put=__set_dayNames))  dayNames;

constexpr void __set_dayNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_dayNames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_abbreviatedMonthNames, put=__set_abbreviatedMonthNames))  abbreviatedMonthNames;

constexpr void __set_abbreviatedMonthNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_abbreviatedMonthNames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_monthNames, put=__set_monthNames))  monthNames;

constexpr void __set_monthNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_monthNames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_genitiveMonthNames, put=__set_genitiveMonthNames))  genitiveMonthNames;

constexpr void __set_genitiveMonthNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_genitiveMonthNames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_m_genitiveAbbreviatedMonthNames, put=__set_m_genitiveAbbreviatedMonthNames))  m_genitiveAbbreviatedMonthNames;

constexpr void __set_m_genitiveAbbreviatedMonthNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_m_genitiveAbbreviatedMonthNames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_leapYearMonthNames, put=__set_leapYearMonthNames))  leapYearMonthNames;

constexpr void __set_leapYearMonthNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_leapYearMonthNames() const;

 ::StringW __declspec(property(get=__get_longDatePattern, put=__set_longDatePattern))  longDatePattern;

constexpr void __set_longDatePattern(::StringW value) ;

constexpr ::StringW __get_longDatePattern() const;

 ::StringW __declspec(property(get=__get_shortDatePattern, put=__set_shortDatePattern))  shortDatePattern;

constexpr void __set_shortDatePattern(::StringW value) ;

constexpr ::StringW __get_shortDatePattern() const;

 ::StringW __declspec(property(get=__get_yearMonthPattern, put=__set_yearMonthPattern))  yearMonthPattern;

constexpr void __set_yearMonthPattern(::StringW value) ;

constexpr ::StringW __get_yearMonthPattern() const;

 ::StringW __declspec(property(get=__get_longTimePattern, put=__set_longTimePattern))  longTimePattern;

constexpr void __set_longTimePattern(::StringW value) ;

constexpr ::StringW __get_longTimePattern() const;

 ::StringW __declspec(property(get=__get_shortTimePattern, put=__set_shortTimePattern))  shortTimePattern;

constexpr void __set_shortTimePattern(::StringW value) ;

constexpr ::StringW __get_shortTimePattern() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_allYearMonthPatterns, put=__set_allYearMonthPatterns))  allYearMonthPatterns;

constexpr void __set_allYearMonthPatterns(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_allYearMonthPatterns() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_allShortDatePatterns, put=__set_allShortDatePatterns))  allShortDatePatterns;

constexpr void __set_allShortDatePatterns(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_allShortDatePatterns() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_allLongDatePatterns, put=__set_allLongDatePatterns))  allLongDatePatterns;

constexpr void __set_allLongDatePatterns(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_allLongDatePatterns() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_allShortTimePatterns, put=__set_allShortTimePatterns))  allShortTimePatterns;

constexpr void __set_allShortTimePatterns(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_allShortTimePatterns() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_allLongTimePatterns, put=__set_allLongTimePatterns))  allLongTimePatterns;

constexpr void __set_allLongTimePatterns(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_allLongTimePatterns() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_m_eraNames, put=__set_m_eraNames))  m_eraNames;

constexpr void __set_m_eraNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_m_eraNames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_m_abbrevEraNames, put=__set_m_abbrevEraNames))  m_abbrevEraNames;

constexpr void __set_m_abbrevEraNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_m_abbrevEraNames() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_m_abbrevEnglishEraNames, put=__set_m_abbrevEnglishEraNames))  m_abbrevEnglishEraNames;

constexpr void __set_m_abbrevEnglishEraNames(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_m_abbrevEnglishEraNames() const;

 ::ArrayW<::System::Globalization::CalendarId> __declspec(property(get=__get_optionalCalendars, put=__set_optionalCalendars))  optionalCalendars;

constexpr void __set_optionalCalendars(::ArrayW<::System::Globalization::CalendarId> value) ;

constexpr ::ArrayW<::System::Globalization::CalendarId> __get_optionalCalendars() const;

/// @brief Field DEFAULT_ALL_DATETIMES_SIZE offset 0
static constexpr int32_t  DEFAULT_ALL_DATETIMES_SIZE{132};

 bool __declspec(property(get=__get__isReadOnly, put=__set__isReadOnly))  _isReadOnly;

constexpr void __set__isReadOnly(bool value) ;

constexpr bool __get__isReadOnly() const;

 ::System::Globalization::DateTimeFormatFlags __declspec(property(get=__get_formatFlags, put=__set_formatFlags))  formatFlags;

constexpr void __set_formatFlags(::System::Globalization::DateTimeFormatFlags value) ;

constexpr ::System::Globalization::DateTimeFormatFlags __get_formatFlags() const;

static ::ArrayW<char16_t> __declspec(property(get=__get_s_monthSpaces, put=__set_s_monthSpaces))  s_monthSpaces;

static void __set_s_monthSpaces(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_s_monthSpaces() ;

/// @brief Field RoundtripFormat offset 0
static constexpr ::ConstString  RoundtripFormat{u"yyyy\'-\'MM\'-\'dd\'T\'HH\':\'mm\':\'ss.fffffffK"};

/// @brief Field RoundtripDateTimeUnfixed offset 0
static constexpr ::ConstString  RoundtripDateTimeUnfixed{u"yyyy\'-\'MM\'-\'ddTHH\':\'mm\':\'ss zzz"};

 ::StringW __declspec(property(get=__get__fullTimeSpanPositivePattern, put=__set__fullTimeSpanPositivePattern))  _fullTimeSpanPositivePattern;

constexpr void __set__fullTimeSpanPositivePattern(::StringW value) ;

constexpr ::StringW __get__fullTimeSpanPositivePattern() const;

 ::StringW __declspec(property(get=__get__fullTimeSpanNegativePattern, put=__set__fullTimeSpanNegativePattern))  _fullTimeSpanNegativePattern;

constexpr void __set__fullTimeSpanNegativePattern(::StringW value) ;

constexpr ::StringW __get__fullTimeSpanNegativePattern() const;

/// @brief Field InvalidDateTimeStyles offset 0
static ::System::Globalization::DateTimeStyles const InvalidDateTimeStyles;

 ::ArrayW<::System::Globalization::____System__Globalization__DateTimeFormatInfo__TokenHashValue> __declspec(property(get=__get__dtfiTokenHash, put=__set__dtfiTokenHash))  _dtfiTokenHash;

constexpr void __set__dtfiTokenHash(::ArrayW<::System::Globalization::____System__Globalization__DateTimeFormatInfo__TokenHashValue> value) ;

constexpr ::ArrayW<::System::Globalization::____System__Globalization__DateTimeFormatInfo__TokenHashValue> __get__dtfiTokenHash() const;

/// @brief Field TOKEN_HASH_SIZE offset 0
static constexpr int32_t  TOKEN_HASH_SIZE{199};

/// @brief Field SECOND_PRIME offset 0
static constexpr int32_t  SECOND_PRIME{197};

/// @brief Field dateSeparatorOrTimeZoneOffset offset 0
static constexpr ::ConstString  dateSeparatorOrTimeZoneOffset{u"-"};

/// @brief Field invariantDateSeparator offset 0
static constexpr ::ConstString  invariantDateSeparator{u"/"};

/// @brief Field invariantTimeSeparator offset 0
static constexpr ::ConstString  invariantTimeSeparator{u":"};

/// @brief Field IgnorablePeriod offset 0
static constexpr ::ConstString  IgnorablePeriod{u"."};

/// @brief Field IgnorableComma offset 0
static constexpr ::ConstString  IgnorableComma{u","};

/// @brief Field CJKYearSuff offset 0
static constexpr ::ConstString  CJKYearSuff{u"\u{5e74}"};

/// @brief Field CJKMonthSuff offset 0
static constexpr ::ConstString  CJKMonthSuff{u"\u{6708}"};

/// @brief Field CJKDaySuff offset 0
static constexpr ::ConstString  CJKDaySuff{u"\u{65e5}"};

/// @brief Field KoreanYearSuff offset 0
static constexpr ::ConstString  KoreanYearSuff{u"\u{b144}"};

/// @brief Field KoreanMonthSuff offset 0
static constexpr ::ConstString  KoreanMonthSuff{u"\u{c6d4}"};

/// @brief Field KoreanDaySuff offset 0
static constexpr ::ConstString  KoreanDaySuff{u"\u{c77c}"};

/// @brief Field KoreanHourSuff offset 0
static constexpr ::ConstString  KoreanHourSuff{u"\u{c2dc}"};

/// @brief Field KoreanMinuteSuff offset 0
static constexpr ::ConstString  KoreanMinuteSuff{u"\u{bd84}"};

/// @brief Field KoreanSecondSuff offset 0
static constexpr ::ConstString  KoreanSecondSuff{u"\u{cd08}"};

/// @brief Field CJKHourSuff offset 0
static constexpr ::ConstString  CJKHourSuff{u"\u{6642}"};

/// @brief Field ChineseHourSuff offset 0
static constexpr ::ConstString  ChineseHourSuff{u"\u{65f6}"};

/// @brief Field CJKMinuteSuff offset 0
static constexpr ::ConstString  CJKMinuteSuff{u"\u{5206}"};

/// @brief Field CJKSecondSuff offset 0
static constexpr ::ConstString  CJKSecondSuff{u"\u{79d2}"};

/// @brief Field JapaneseEraStart offset 0
static constexpr ::ConstString  JapaneseEraStart{u"\u{5143}"};

/// @brief Field LocalTimeMark offset 0
static constexpr ::ConstString  LocalTimeMark{u"T"};

/// @brief Field GMTName offset 0
static constexpr ::ConstString  GMTName{u"GMT"};

/// @brief Field ZuluName offset 0
static constexpr ::ConstString  ZuluName{u"Z"};

/// @brief Field KoreanLangName offset 0
static constexpr ::ConstString  KoreanLangName{u"ko"};

/// @brief Field JapaneseLangName offset 0
static constexpr ::ConstString  JapaneseLangName{u"ja"};

/// @brief Field EnglishLangName offset 0
static constexpr ::ConstString  EnglishLangName{u"en"};

static ::System::Globalization::DateTimeFormatInfo __declspec(property(get=__get_s_jajpDTFI, put=__set_s_jajpDTFI))  s_jajpDTFI;

static void __set_s_jajpDTFI(::System::Globalization::DateTimeFormatInfo value) ;

static ::System::Globalization::DateTimeFormatInfo __get_s_jajpDTFI() ;

static ::System::Globalization::DateTimeFormatInfo __declspec(property(get=__get_s_zhtwDTFI, put=__set_s_zhtwDTFI))  s_zhtwDTFI;

static void __set_s_zhtwDTFI(::System::Globalization::DateTimeFormatInfo value) ;

static ::System::Globalization::DateTimeFormatInfo __get_s_zhtwDTFI() ;


// Properties

 ::StringW __declspec(property(get=get_CultureName))  CultureName;

 ::System::Globalization::CultureInfo __declspec(property(get=get_Culture))  Culture;

 ::StringW __declspec(property(get=get_LanguageName))  LanguageName;

static ::System::Globalization::DateTimeFormatInfo __declspec(property(get=get_InvariantInfo))  InvariantInfo;

static ::System::Globalization::DateTimeFormatInfo __declspec(property(get=get_CurrentInfo))  CurrentInfo;

 ::StringW __declspec(property(get=get_AMDesignator))  AMDesignator;

 ::System::Globalization::Calendar __declspec(property(get=get_Calendar, put=set_Calendar))  Calendar;

 ::ArrayW<::System::Globalization::CalendarId> __declspec(property(get=get_OptionalCalendars))  OptionalCalendars;

 ::ArrayW<::StringW> __declspec(property(get=get_EraNames))  EraNames;

 ::ArrayW<::StringW> __declspec(property(get=get_AbbreviatedEraNames))  AbbreviatedEraNames;

 ::ArrayW<::StringW> __declspec(property(get=get_AbbreviatedEnglishEraNames))  AbbreviatedEnglishEraNames;

 ::StringW __declspec(property(get=get_DateSeparator))  DateSeparator;

 ::StringW __declspec(property(get=get_FullDateTimePattern))  FullDateTimePattern;

 ::StringW __declspec(property(get=get_LongDatePattern))  LongDatePattern;

 ::StringW __declspec(property(get=get_LongTimePattern))  LongTimePattern;

 ::StringW __declspec(property(get=get_MonthDayPattern))  MonthDayPattern;

 ::StringW __declspec(property(get=get_PMDesignator))  PMDesignator;

 ::StringW __declspec(property(get=get_RFC1123Pattern))  RFC1123Pattern;

 ::StringW __declspec(property(get=get_ShortDatePattern))  ShortDatePattern;

 ::StringW __declspec(property(get=get_ShortTimePattern))  ShortTimePattern;

 ::StringW __declspec(property(get=get_SortableDateTimePattern))  SortableDateTimePattern;

 ::StringW __declspec(property(get=get_GeneralShortTimePattern))  GeneralShortTimePattern;

 ::StringW __declspec(property(get=get_GeneralLongTimePattern))  GeneralLongTimePattern;

 ::StringW __declspec(property(get=get_DateTimeOffsetPattern))  DateTimeOffsetPattern;

 ::StringW __declspec(property(get=get_TimeSeparator))  TimeSeparator;

 ::StringW __declspec(property(get=get_UniversalSortableDateTimePattern))  UniversalSortableDateTimePattern;

 ::StringW __declspec(property(get=get_YearMonthPattern))  YearMonthPattern;

 ::ArrayW<::StringW> __declspec(property(get=get_AbbreviatedDayNames))  AbbreviatedDayNames;

 ::ArrayW<::StringW> __declspec(property(get=get_DayNames))  DayNames;

 ::ArrayW<::StringW> __declspec(property(get=get_AbbreviatedMonthNames))  AbbreviatedMonthNames;

 ::ArrayW<::StringW> __declspec(property(get=get_MonthNames))  MonthNames;

 bool __declspec(property(get=get_HasSpacesInMonthNames))  HasSpacesInMonthNames;

 bool __declspec(property(get=get_HasSpacesInDayNames))  HasSpacesInDayNames;

 ::ArrayW<::StringW> __declspec(property(get=get_AllYearMonthPatterns))  AllYearMonthPatterns;

 ::ArrayW<::StringW> __declspec(property(get=get_AllShortDatePatterns))  AllShortDatePatterns;

 ::ArrayW<::StringW> __declspec(property(get=get_AllShortTimePatterns))  AllShortTimePatterns;

 ::ArrayW<::StringW> __declspec(property(get=get_AllLongDatePatterns))  AllLongDatePatterns;

 ::ArrayW<::StringW> __declspec(property(get=get_AllLongTimePatterns))  AllLongTimePatterns;

 ::ArrayW<::StringW> __declspec(property(get=get_UnclonedYearMonthPatterns))  UnclonedYearMonthPatterns;

 ::ArrayW<::StringW> __declspec(property(get=get_UnclonedShortDatePatterns))  UnclonedShortDatePatterns;

 ::ArrayW<::StringW> __declspec(property(get=get_UnclonedLongDatePatterns))  UnclonedLongDatePatterns;

 ::ArrayW<::StringW> __declspec(property(get=get_UnclonedShortTimePatterns))  UnclonedShortTimePatterns;

 ::ArrayW<::StringW> __declspec(property(get=get_UnclonedLongTimePatterns))  UnclonedLongTimePatterns;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;

 ::ArrayW<::StringW> __declspec(property(get=get_MonthGenitiveNames))  MonthGenitiveNames;

 ::StringW __declspec(property(get=get_FullTimeSpanPositivePattern))  FullTimeSpanPositivePattern;

 ::StringW __declspec(property(get=get_FullTimeSpanNegativePattern))  FullTimeSpanNegativePattern;

 ::System::Globalization::CompareInfo __declspec(property(get=get_CompareInfo))  CompareInfo;

 ::System::Globalization::DateTimeFormatFlags __declspec(property(get=get_FormatFlags))  FormatFlags;

 bool __declspec(property(get=get_HasForceTwoDigitYears))  HasForceTwoDigitYears;

 bool __declspec(property(get=get_HasYearMonthAdjustment))  HasYearMonthAdjustment;


// Methods

/// @brief Method get_CultureName addr 0x23de3b8 size 0x2c virtual false final false
 ::StringW get_CultureName() ;

/// @brief Method get_Culture addr 0x23de3e4 size 0x84 virtual false final false
 ::System::Globalization::CultureInfo get_Culture() ;

/// @brief Method get_LanguageName addr 0x23de468 size 0x2c virtual false final false
 ::StringW get_LanguageName() ;

/// @brief Method internalGetAbbreviatedDayOfWeekNames addr 0x23de494 size 0x14 virtual false final false
 ::ArrayW<::StringW> internalGetAbbreviatedDayOfWeekNames() ;

/// @brief Method internalGetAbbreviatedDayOfWeekNamesCore addr 0x23de4a8 size 0x4c virtual false final false
 ::ArrayW<::StringW> internalGetAbbreviatedDayOfWeekNamesCore() ;

/// @brief Method internalGetDayOfWeekNames addr 0x23de4f4 size 0x14 virtual false final false
 ::ArrayW<::StringW> internalGetDayOfWeekNames() ;

/// @brief Method internalGetDayOfWeekNamesCore addr 0x23de508 size 0x4c virtual false final false
 ::ArrayW<::StringW> internalGetDayOfWeekNamesCore() ;

/// @brief Method internalGetAbbreviatedMonthNames addr 0x23de554 size 0x14 virtual false final false
 ::ArrayW<::StringW> internalGetAbbreviatedMonthNames() ;

/// @brief Method internalGetAbbreviatedMonthNamesCore addr 0x23de568 size 0x4c virtual false final false
 ::ArrayW<::StringW> internalGetAbbreviatedMonthNamesCore() ;

/// @brief Method internalGetMonthNames addr 0x23de5b4 size 0x14 virtual false final false
 ::ArrayW<::StringW> internalGetMonthNames() ;

/// @brief Method internalGetMonthNamesCore addr 0x23de5c8 size 0x4c virtual false final false
 ::ArrayW<::StringW> internalGetMonthNamesCore() ;

// Ctor Parameters []
explicit DateTimeFormatInfo() ;

/// @brief Method .ctor addr 0x23de614 size 0xd0 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "cultureData", ty: "::System::Globalization::CultureData", modifiers: "", def_value: None }, CppParam { name: "cal", ty: "::System::Globalization::Calendar", modifiers: "", def_value: None }]
explicit DateTimeFormatInfo(::System::Globalization::CultureData cultureData, ::System::Globalization::Calendar cal) ;

/// @brief Method .ctor addr 0x23de8d0 size 0x44 virtual false final false
 void _ctor(::System::Globalization::CultureData cultureData, ::System::Globalization::Calendar cal) ;

/// @brief Method InitializeOverridableProperties addr 0x23de7b4 size 0x11c virtual false final false
 void InitializeOverridableProperties(::System::Globalization::CultureData cultureData, int32_t calendarId) ;

/// @brief Method get_InvariantInfo addr 0x23debc0 size 0xd0 virtual false final false
static ::System::Globalization::DateTimeFormatInfo get_InvariantInfo() ;

/// @brief Method get_CurrentInfo addr 0x23dec90 size 0x10c virtual false final false
static ::System::Globalization::DateTimeFormatInfo get_CurrentInfo() ;

/// @brief Method GetInstance addr 0x23ded9c size 0x1c0 virtual false final false
static ::System::Globalization::DateTimeFormatInfo GetInstance(::System::IFormatProvider provider) ;

/// @brief Method GetFormat addr 0x23def5c size 0x98 virtual true final true
 ::bs_hook::Il2CppWrapperType GetFormat(::System::Type formatType) ;

/// @brief Method Clone addr 0x23deff4 size 0x100 virtual true final true
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method get_AMDesignator addr 0x23df0f4 size 0x2c virtual false final false
 ::StringW get_AMDesignator() ;

/// @brief Method get_Calendar addr 0x23df120 size 0x8 virtual false final false
 ::System::Globalization::Calendar get_Calendar() ;

/// @brief Method set_Calendar addr 0x23de914 size 0x2ac virtual false final false
 void set_Calendar(::System::Globalization::Calendar value) ;

/// @brief Method get_OptionalCalendars addr 0x23df1cc size 0x30 virtual false final false
 ::ArrayW<::System::Globalization::CalendarId> get_OptionalCalendars() ;

/// @brief Method get_EraNames addr 0x23df20c size 0x54 virtual false final false
 ::ArrayW<::StringW> get_EraNames() ;

/// @brief Method GetEraName addr 0x23df260 size 0xdc virtual false final false
 ::StringW GetEraName(int32_t era) ;

/// @brief Method get_AbbreviatedEraNames addr 0x23df33c size 0x54 virtual false final false
 ::ArrayW<::StringW> get_AbbreviatedEraNames() ;

/// @brief Method GetAbbreviatedEraName addr 0x23df390 size 0xec virtual false final false
 ::StringW GetAbbreviatedEraName(int32_t era) ;

/// @brief Method get_AbbreviatedEnglishEraNames addr 0x23df47c size 0x54 virtual false final false
 ::ArrayW<::StringW> get_AbbreviatedEnglishEraNames() ;

/// @brief Method get_DateSeparator addr 0x23df4d0 size 0x54 virtual false final false
 ::StringW get_DateSeparator() ;

/// @brief Method get_FullDateTimePattern addr 0x23df524 size 0x74 virtual false final false
 ::StringW get_FullDateTimePattern() ;

/// @brief Method get_LongDatePattern addr 0x23df598 size 0x3c virtual false final false
 ::StringW get_LongDatePattern() ;

/// @brief Method get_LongTimePattern addr 0x23df5d4 size 0x3c virtual false final false
 ::StringW get_LongTimePattern() ;

/// @brief Method get_MonthDayPattern addr 0x23df694 size 0x54 virtual false final false
 ::StringW get_MonthDayPattern() ;

/// @brief Method get_PMDesignator addr 0x23df6e8 size 0x2c virtual false final false
 ::StringW get_PMDesignator() ;

/// @brief Method get_RFC1123Pattern addr 0x23df714 size 0x40 virtual false final false
 ::StringW get_RFC1123Pattern() ;

/// @brief Method get_ShortDatePattern addr 0x23df754 size 0x3c virtual false final false
 ::StringW get_ShortDatePattern() ;

/// @brief Method get_ShortTimePattern addr 0x23df7e4 size 0x3c virtual false final false
 ::StringW get_ShortTimePattern() ;

/// @brief Method get_SortableDateTimePattern addr 0x23df850 size 0x40 virtual false final false
 ::StringW get_SortableDateTimePattern() ;

/// @brief Method get_GeneralShortTimePattern addr 0x23df890 size 0x74 virtual false final false
 ::StringW get_GeneralShortTimePattern() ;

/// @brief Method get_GeneralLongTimePattern addr 0x23df904 size 0x74 virtual false final false
 ::StringW get_GeneralLongTimePattern() ;

/// @brief Method get_DateTimeOffsetPattern addr 0x23df978 size 0x19c virtual false final false
 ::StringW get_DateTimeOffsetPattern() ;

/// @brief Method get_TimeSeparator addr 0x23dfb14 size 0x2c virtual false final false
 ::StringW get_TimeSeparator() ;

/// @brief Method get_UniversalSortableDateTimePattern addr 0x23dfb40 size 0x40 virtual false final false
 ::StringW get_UniversalSortableDateTimePattern() ;

/// @brief Method get_YearMonthPattern addr 0x23dfb80 size 0x3c virtual false final false
 ::StringW get_YearMonthPattern() ;

/// @brief Method get_AbbreviatedDayNames addr 0x23dfc10 size 0x84 virtual false final false
 ::ArrayW<::StringW> get_AbbreviatedDayNames() ;

/// @brief Method get_DayNames addr 0x23dfc94 size 0x84 virtual false final false
 ::ArrayW<::StringW> get_DayNames() ;

/// @brief Method get_AbbreviatedMonthNames addr 0x23dfd18 size 0x84 virtual false final false
 ::ArrayW<::StringW> get_AbbreviatedMonthNames() ;

/// @brief Method get_MonthNames addr 0x23dfd9c size 0x84 virtual false final false
 ::ArrayW<::StringW> get_MonthNames() ;

/// @brief Method get_HasSpacesInMonthNames addr 0x23dfe20 size 0x28 virtual false final false
 bool get_HasSpacesInMonthNames() ;

/// @brief Method get_HasSpacesInDayNames addr 0x23dfe60 size 0x28 virtual false final false
 bool get_HasSpacesInDayNames() ;

/// @brief Method internalGetMonthName addr 0x23dfe88 size 0x16c virtual false final false
 ::StringW internalGetMonthName(int32_t month, ::System::Globalization::MonthNameStyles style, bool abbreviated) ;

/// @brief Method internalGetGenitiveMonthNames addr 0x23dfff4 size 0x94 virtual false final false
 ::ArrayW<::StringW> internalGetGenitiveMonthNames(bool abbreviated) ;

/// @brief Method internalGetLeapYearMonthNames addr 0x23e0088 size 0x54 virtual false final false
 ::ArrayW<::StringW> internalGetLeapYearMonthNames() ;

/// @brief Method GetAbbreviatedDayName addr 0x23e00dc size 0x100 virtual false final false
 ::StringW GetAbbreviatedDayName(::System::DayOfWeek dayofweek) ;

/// @brief Method GetCombinedPatterns addr 0x23e01dc size 0x16c virtual false final false
static ::ArrayW<::StringW> GetCombinedPatterns(::ArrayW<::StringW> patterns1, ::ArrayW<::StringW> patterns2, ::StringW connectString) ;

/// @brief Method GetAllDateTimePatterns addr 0x23e0348 size 0x37c virtual false final false
 ::ArrayW<::StringW> GetAllDateTimePatterns(char16_t format) ;

/// @brief Method GetDayName addr 0x23e0908 size 0x100 virtual false final false
 ::StringW GetDayName(::System::DayOfWeek dayofweek) ;

/// @brief Method GetAbbreviatedMonthName addr 0x23e0a08 size 0x104 virtual false final false
 ::StringW GetAbbreviatedMonthName(int32_t month) ;

/// @brief Method GetMonthName addr 0x23e0b0c size 0x104 virtual false final false
 ::StringW GetMonthName(int32_t month) ;

/// @brief Method GetMergedPatterns addr 0x23e0c10 size 0x1e4 virtual false final false
static ::ArrayW<::StringW> GetMergedPatterns(::ArrayW<::StringW> patterns, ::StringW defaultPattern) ;

/// @brief Method get_AllYearMonthPatterns addr 0x23e0894 size 0x74 virtual false final false
 ::ArrayW<::StringW> get_AllYearMonthPatterns() ;

/// @brief Method get_AllShortDatePatterns addr 0x23e06c4 size 0x74 virtual false final false
 ::ArrayW<::StringW> get_AllShortDatePatterns() ;

/// @brief Method get_AllShortTimePatterns addr 0x23e07ac size 0x74 virtual false final false
 ::ArrayW<::StringW> get_AllShortTimePatterns() ;

/// @brief Method get_AllLongDatePatterns addr 0x23e0738 size 0x74 virtual false final false
 ::ArrayW<::StringW> get_AllLongDatePatterns() ;

/// @brief Method get_AllLongTimePatterns addr 0x23e0820 size 0x74 virtual false final false
 ::ArrayW<::StringW> get_AllLongTimePatterns() ;

/// @brief Method get_UnclonedYearMonthPatterns addr 0x23dfbbc size 0x54 virtual false final false
 ::ArrayW<::StringW> get_UnclonedYearMonthPatterns() ;

/// @brief Method get_UnclonedShortDatePatterns addr 0x23df790 size 0x54 virtual false final false
 ::ArrayW<::StringW> get_UnclonedShortDatePatterns() ;

/// @brief Method get_UnclonedLongDatePatterns addr 0x23df610 size 0x54 virtual false final false
 ::ArrayW<::StringW> get_UnclonedLongDatePatterns() ;

/// @brief Method get_UnclonedShortTimePatterns addr 0x23df820 size 0x30 virtual false final false
 ::ArrayW<::StringW> get_UnclonedShortTimePatterns() ;

/// @brief Method get_UnclonedLongTimePatterns addr 0x23df664 size 0x30 virtual false final false
 ::ArrayW<::StringW> get_UnclonedLongTimePatterns() ;

/// @brief Method get_IsReadOnly addr 0x23df128 size 0xa4 virtual false final false
 bool get_IsReadOnly() ;

/// @brief Method get_MonthGenitiveNames addr 0x23e0df4 size 0x80 virtual false final false
 ::ArrayW<::StringW> get_MonthGenitiveNames() ;

/// @brief Method get_FullTimeSpanPositivePattern addr 0x23e0e74 size 0xd4 virtual false final false
 ::StringW get_FullTimeSpanPositivePattern() ;

/// @brief Method get_FullTimeSpanNegativePattern addr 0x23e0f48 size 0x68 virtual false final false
 ::StringW get_FullTimeSpanNegativePattern() ;

/// @brief Method get_CompareInfo addr 0x23e0fb0 size 0x84 virtual false final false
 ::System::Globalization::CompareInfo get_CompareInfo() ;

/// @brief Method ValidateStyles addr 0x23e1034 size 0xd8 virtual false final false
static void ValidateStyles(::System::Globalization::DateTimeStyles style, ::StringW parameterName) ;

/// @brief Method get_FormatFlags addr 0x23dfe48 size 0x18 virtual false final false
 ::System::Globalization::DateTimeFormatFlags get_FormatFlags() ;

/// @brief Method InitializeFormatFlags addr 0x23e110c size 0x13c virtual false final false
 ::System::Globalization::DateTimeFormatFlags InitializeFormatFlags() ;

/// @brief Method get_HasForceTwoDigitYears addr 0x23e136c size 0x34 virtual false final false
 bool get_HasForceTwoDigitYears() ;

/// @brief Method get_HasYearMonthAdjustment addr 0x23e13a0 size 0x28 virtual false final false
 bool get_HasYearMonthAdjustment() ;

/// @brief Method YearMonthAdjustment addr 0x23e13c8 size 0x134 virtual false final false
 bool YearMonthAdjustment(ByRef<int32_t> year, ByRef<int32_t> month, bool parsedMonthName) ;

/// @brief Method GetJapaneseCalendarDTFI addr 0x23e14fc size 0x194 virtual false final false
static ::System::Globalization::DateTimeFormatInfo GetJapaneseCalendarDTFI() ;

/// @brief Method GetTaiwanCalendarDTFI addr 0x23e1690 size 0x194 virtual false final false
static ::System::Globalization::DateTimeFormatInfo GetTaiwanCalendarDTFI() ;

/// @brief Method ClearTokenHashTable addr 0x23df1fc size 0x10 virtual false final false
 void ClearTokenHashTable() ;

/// @brief Method CreateTokenHashTable addr 0x23e1824 size 0x8f0 virtual false final false
 ::ArrayW<::System::Globalization::____System__Globalization__DateTimeFormatInfo__TokenHashValue> CreateTokenHashTable() ;

/// @brief Method PopulateSpecialTokenHashTable addr 0x23e2410 size 0x8dc virtual false final false
 void PopulateSpecialTokenHashTable(::ArrayW<::System::Globalization::____System__Globalization__DateTimeFormatInfo__TokenHashValue> temp, ByRef<bool> useDateSepAsIgnorableSymbol) ;

/// @brief Method IsJapaneseCalendar addr 0x23e30d4 size 0x13c virtual false final false
static bool IsJapaneseCalendar(::System::Globalization::Calendar calendar) ;

/// @brief Method AddMonthNames addr 0x23e2cec size 0xac virtual false final false
 void AddMonthNames(::ArrayW<::System::Globalization::____System__Globalization__DateTimeFormatInfo__TokenHashValue> temp, ::StringW monthPostfix) ;

/// @brief Method TryParseHebrewNumber addr 0x23e3210 size 0x134 virtual false final false
static bool TryParseHebrewNumber(ByRef<::System::__DTString> str, ByRef<bool> badFormat, ByRef<int32_t> number) ;

/// @brief Method IsHebrewChar addr 0x23e35b0 size 0x14 virtual false final false
static bool IsHebrewChar(char16_t ch) ;

/// @brief Method IsAllowedJapaneseTokenFollowedByNonSpaceLetter addr 0x23e35c4 size 0x108 virtual false final false
 bool IsAllowedJapaneseTokenFollowedByNonSpaceLetter(::StringW tokenString, char16_t nextCh) ;

/// @brief Method Tokenize addr 0x23e36cc size 0x5cc virtual false final false
 bool Tokenize(::System::TokenType TokenMask, ByRef<::System::TokenType> tokenType, ByRef<int32_t> tokenValue, ByRef<::System::__DTString> str) ;

/// @brief Method InsertAtCurrentHashNode addr 0x23e3c98 size 0x1c0 virtual false final false
 void InsertAtCurrentHashNode(::ArrayW<::System::Globalization::____System__Globalization__DateTimeFormatInfo__TokenHashValue> hashTable, ::StringW str, char16_t ch, ::System::TokenType tokenType, int32_t tokenValue, int32_t pos, int32_t hashcode, int32_t hashProbe) ;

/// @brief Method InsertHash addr 0x23e2114 size 0x2fc virtual false final false
 void InsertHash(::ArrayW<::System::Globalization::____System__Globalization__DateTimeFormatInfo__TokenHashValue> hashTable, ::StringW str, ::System::TokenType tokenType, int32_t tokenValue) ;

/// @brief Method CompareStringIgnoreCaseOptimized addr 0x23e3e94 size 0xf4 virtual false final false
 bool CompareStringIgnoreCaseOptimized(::StringW string1, int32_t offset1, int32_t length1, ::StringW string2, int32_t offset2, int32_t length2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
} // end anonymous namespace
NEED_NO_BOX(::System::Globalization::DateTimeFormatInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::DateTimeFormatInfo, "System.Globalization", "DateTimeFormatInfo");
NEED_NO_BOX(::System::Globalization::____System__Globalization__DateTimeFormatInfo__TokenHashValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::____System__Globalization__DateTimeFormatInfo__TokenHashValue, "System.Globalization", "DateTimeFormatInfo/TokenHashValue");
