#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Xml::Schema {
struct XsdDateTimeFlags;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System {
struct DateTime;
}
namespace System {
struct DateTimeOffset;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Xml::Schema {
struct System__Xml__Schema__XsdDateTime__DateTimeTypeCode;
}
namespace System::Xml::Schema {
struct System__Xml__Schema__XsdDateTime__XsdDateTimeKind;
}
namespace System::Xml::Schema {
struct System__Xml__Schema__XsdDateTime__Parser;
}
namespace System::Xml::Schema {
struct XsdDateTime;
}
// Type: ::DateTimeTypeCode
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11702))
// CS Name: System.Xml.Schema.XsdDateTime::DateTimeTypeCode
struct CORDL_TYPE System__Xml__Schema__XsdDateTime__DateTimeTypeCode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Xml__Schema__XsdDateTime__DateTimeTypeCode(int32_t value__) noexcept;


                    constexpr System__Xml__Schema__XsdDateTime__DateTimeTypeCode(System__Xml__Schema__XsdDateTime__DateTimeTypeCode const&) = default;
                    constexpr System__Xml__Schema__XsdDateTime__DateTimeTypeCode(System__Xml__Schema__XsdDateTime__DateTimeTypeCode&&) = default;
                    constexpr System__Xml__Schema__XsdDateTime__DateTimeTypeCode& operator=(System__Xml__Schema__XsdDateTime__DateTimeTypeCode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__Schema__XsdDateTime__DateTimeTypeCode& operator=(System__Xml__Schema__XsdDateTime__DateTimeTypeCode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__Schema__XsdDateTime__DateTimeTypeCode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Xml__Schema__XsdDateTime__DateTimeTypeCode_Unwrapped : int32_t {
__DateTime = 0,
__Time = 1,
__Date = 2,
__GYearMonth = 3,
__GYear = 4,
__GMonthDay = 5,
__GDay = 6,
__GMonth = 7,
__XdrDateTime = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Xml__Schema__XsdDateTime__DateTimeTypeCode_Unwrapped () const noexcept {
return std::bit_cast<__System__Xml__Schema__XsdDateTime__DateTimeTypeCode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field DateTime offset 0
static System::Xml::Schema::System__Xml__Schema__XsdDateTime__DateTimeTypeCode const DateTime;

/// @brief Field Time offset 0
static System::Xml::Schema::System__Xml__Schema__XsdDateTime__DateTimeTypeCode const Time;

/// @brief Field Date offset 0
static System::Xml::Schema::System__Xml__Schema__XsdDateTime__DateTimeTypeCode const Date;

/// @brief Field GYearMonth offset 0
static System::Xml::Schema::System__Xml__Schema__XsdDateTime__DateTimeTypeCode const GYearMonth;

/// @brief Field GYear offset 0
static System::Xml::Schema::System__Xml__Schema__XsdDateTime__DateTimeTypeCode const GYear;

/// @brief Field GMonthDay offset 0
static System::Xml::Schema::System__Xml__Schema__XsdDateTime__DateTimeTypeCode const GMonthDay;

/// @brief Field GDay offset 0
static System::Xml::Schema::System__Xml__Schema__XsdDateTime__DateTimeTypeCode const GDay;

/// @brief Field GMonth offset 0
static System::Xml::Schema::System__Xml__Schema__XsdDateTime__DateTimeTypeCode const GMonth;

/// @brief Field XdrDateTime offset 0
static System::Xml::Schema::System__Xml__Schema__XsdDateTime__DateTimeTypeCode const XdrDateTime;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
// Type: ::XsdDateTimeKind
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11703))
// CS Name: System.Xml.Schema.XsdDateTime::XsdDateTimeKind
struct CORDL_TYPE System__Xml__Schema__XsdDateTime__XsdDateTimeKind : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Xml__Schema__XsdDateTime__XsdDateTimeKind(int32_t value__) noexcept;


                    constexpr System__Xml__Schema__XsdDateTime__XsdDateTimeKind(System__Xml__Schema__XsdDateTime__XsdDateTimeKind const&) = default;
                    constexpr System__Xml__Schema__XsdDateTime__XsdDateTimeKind(System__Xml__Schema__XsdDateTime__XsdDateTimeKind&&) = default;
                    constexpr System__Xml__Schema__XsdDateTime__XsdDateTimeKind& operator=(System__Xml__Schema__XsdDateTime__XsdDateTimeKind const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__Schema__XsdDateTime__XsdDateTimeKind& operator=(System__Xml__Schema__XsdDateTime__XsdDateTimeKind&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__Schema__XsdDateTime__XsdDateTimeKind(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Xml__Schema__XsdDateTime__XsdDateTimeKind_Unwrapped : int32_t {
__Unspecified = 0,
__Zulu = 1,
__LocalWestOfZulu = 2,
__LocalEastOfZulu = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Xml__Schema__XsdDateTime__XsdDateTimeKind_Unwrapped () const noexcept {
return std::bit_cast<__System__Xml__Schema__XsdDateTime__XsdDateTimeKind_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unspecified offset 0
static System::Xml::Schema::System__Xml__Schema__XsdDateTime__XsdDateTimeKind const Unspecified;

/// @brief Field Zulu offset 0
static System::Xml::Schema::System__Xml__Schema__XsdDateTime__XsdDateTimeKind const Zulu;

/// @brief Field LocalWestOfZulu offset 0
static System::Xml::Schema::System__Xml__Schema__XsdDateTime__XsdDateTimeKind const LocalWestOfZulu;

/// @brief Field LocalEastOfZulu offset 0
static System::Xml::Schema::System__Xml__Schema__XsdDateTime__XsdDateTimeKind const LocalEastOfZulu;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
// Type: ::Parser
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11704))
// CS Name: System.Xml.Schema.XsdDateTime::Parser
struct CORDL_TYPE System__Xml__Schema__XsdDateTime__Parser : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "typeCode", ty: "System::Xml::Schema::System__Xml__Schema__XsdDateTime__DateTimeTypeCode", modifiers: "", def_value: None }, CppParam { name: "year", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "month", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "day", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hour", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minute", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "second", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fraction", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "kind", ty: "System::Xml::Schema::System__Xml__Schema__XsdDateTime__XsdDateTimeKind", modifiers: "", def_value: None }, CppParam { name: "zoneHour", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "zoneMinute", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Xml__Schema__XsdDateTime__Parser(System::Xml::Schema::System__Xml__Schema__XsdDateTime__DateTimeTypeCode typeCode, int32_t year, int32_t month, int32_t day, int32_t hour, int32_t minute, int32_t second, int32_t fraction, System::Xml::Schema::System__Xml__Schema__XsdDateTime__XsdDateTimeKind kind, int32_t zoneHour, int32_t zoneMinute, ::StringW text, int32_t length) noexcept;


                    constexpr System__Xml__Schema__XsdDateTime__Parser(System__Xml__Schema__XsdDateTime__Parser const&) = default;
                    constexpr System__Xml__Schema__XsdDateTime__Parser(System__Xml__Schema__XsdDateTime__Parser&&) = default;
                    constexpr System__Xml__Schema__XsdDateTime__Parser& operator=(System__Xml__Schema__XsdDateTime__Parser const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__Schema__XsdDateTime__Parser& operator=(System__Xml__Schema__XsdDateTime__Parser&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__Schema__XsdDateTime__Parser(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Xml::Schema::System__Xml__Schema__XsdDateTime__DateTimeTypeCode __declspec(property(get=__get_typeCode, put=__set_typeCode))  typeCode;

constexpr void __set_typeCode(System::Xml::Schema::System__Xml__Schema__XsdDateTime__DateTimeTypeCode value) ;

constexpr System::Xml::Schema::System__Xml__Schema__XsdDateTime__DateTimeTypeCode __get_typeCode() const;

 int32_t __declspec(property(get=__get_year, put=__set_year))  year;

constexpr void __set_year(int32_t value) ;

constexpr int32_t __get_year() const;

 int32_t __declspec(property(get=__get_month, put=__set_month))  month;

constexpr void __set_month(int32_t value) ;

constexpr int32_t __get_month() const;

 int32_t __declspec(property(get=__get_day, put=__set_day))  day;

constexpr void __set_day(int32_t value) ;

constexpr int32_t __get_day() const;

 int32_t __declspec(property(get=__get_hour, put=__set_hour))  hour;

constexpr void __set_hour(int32_t value) ;

constexpr int32_t __get_hour() const;

 int32_t __declspec(property(get=__get_minute, put=__set_minute))  minute;

constexpr void __set_minute(int32_t value) ;

constexpr int32_t __get_minute() const;

 int32_t __declspec(property(get=__get_second, put=__set_second))  second;

constexpr void __set_second(int32_t value) ;

constexpr int32_t __get_second() const;

 int32_t __declspec(property(get=__get_fraction, put=__set_fraction))  fraction;

constexpr void __set_fraction(int32_t value) ;

constexpr int32_t __get_fraction() const;

 System::Xml::Schema::System__Xml__Schema__XsdDateTime__XsdDateTimeKind __declspec(property(get=__get_kind, put=__set_kind))  kind;

constexpr void __set_kind(System::Xml::Schema::System__Xml__Schema__XsdDateTime__XsdDateTimeKind value) ;

constexpr System::Xml::Schema::System__Xml__Schema__XsdDateTime__XsdDateTimeKind __get_kind() const;

 int32_t __declspec(property(get=__get_zoneHour, put=__set_zoneHour))  zoneHour;

constexpr void __set_zoneHour(int32_t value) ;

constexpr int32_t __get_zoneHour() const;

 int32_t __declspec(property(get=__get_zoneMinute, put=__set_zoneMinute))  zoneMinute;

constexpr void __set_zoneMinute(int32_t value) ;

constexpr int32_t __get_zoneMinute() const;

 ::StringW __declspec(property(get=__get_text, put=__set_text))  text;

constexpr void __set_text(::StringW value) ;

constexpr ::StringW __get_text() const;

 int32_t __declspec(property(get=__get_length, put=__set_length))  length;

constexpr void __set_length(int32_t value) ;

constexpr int32_t __get_length() const;

static ::ArrayW<int32_t> __declspec(property(get=__get_Power10, put=__set_Power10))  Power10;

static void __set_Power10(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_Power10() ;


// Methods

/// @brief Method Parse addr 0x275302c size 0x8b0 virtual false final false
 bool Parse(::StringW text, System::Xml::Schema::XsdDateTimeFlags kinds) ;

/// @brief Method ParseDate addr 0x2755184 size 0x1a0 virtual false final false
 bool ParseDate(int32_t start) ;

/// @brief Method ParseTimeAndZoneAndWhitespace addr 0x2755368 size 0x44 virtual false final false
 bool ParseTimeAndZoneAndWhitespace(int32_t start) ;

/// @brief Method ParseTimeAndWhitespace addr 0x27555c0 size 0x58 virtual false final false
 bool ParseTimeAndWhitespace(int32_t start) ;

/// @brief Method ParseTime addr 0x27557bc size 0x2f0 virtual false final false
 bool ParseTime(ByRef<int32_t> start) ;

/// @brief Method ParseZoneAndWhitespace addr 0x27553ac size 0x214 virtual false final false
 bool ParseZoneAndWhitespace(int32_t start) ;

/// @brief Method Parse4Dig addr 0x2755618 size 0x10c virtual false final false
 bool Parse4Dig(int32_t start, ByRef<int32_t> num) ;

/// @brief Method Parse2Dig addr 0x2755724 size 0x98 virtual false final false
 bool Parse2Dig(int32_t start, ByRef<int32_t> num) ;

/// @brief Method ParseChar addr 0x2755324 size 0x44 virtual false final false
 bool ParseChar(int32_t start, char16_t ch) ;

/// @brief Method Test addr 0x2755178 size 0xc virtual false final false
static bool Test(System::Xml::Schema::XsdDateTimeFlags left, System::Xml::Schema::XsdDateTimeFlags right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
// Type: System.Xml.Schema::XsdDateTime
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11705))
// CS Name: System.Xml.Schema.XsdDateTime
struct CORDL_TYPE XsdDateTime : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Parser = System::Xml::Schema::System__Xml__Schema__XsdDateTime__Parser;

using XsdDateTimeKind = System::Xml::Schema::System__Xml__Schema__XsdDateTime__XsdDateTimeKind;

using DateTimeTypeCode = System::Xml::Schema::System__Xml__Schema__XsdDateTime__DateTimeTypeCode;

// Ctor Parameters [CppParam { name: "dt", ty: "System::DateTime", modifiers: "", def_value: None }, CppParam { name: "extra", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr XsdDateTime(System::DateTime dt, uint32_t extra) noexcept;


                    constexpr XsdDateTime(XsdDateTime const&) = default;
                    constexpr XsdDateTime(XsdDateTime&&) = default;
                    constexpr XsdDateTime& operator=(XsdDateTime const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr XsdDateTime& operator=(XsdDateTime&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit XsdDateTime(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::DateTime __declspec(property(get=__get_dt, put=__set_dt))  dt;

constexpr void __set_dt(System::DateTime value) ;

constexpr System::DateTime __get_dt() const;

 uint32_t __declspec(property(get=__get_extra, put=__set_extra))  extra;

constexpr void __set_extra(uint32_t value) ;

constexpr uint32_t __get_extra() const;

static int32_t __declspec(property(get=__get_Lzyyyy, put=__set_Lzyyyy))  Lzyyyy;

static void __set_Lzyyyy(int32_t value) ;

static int32_t __get_Lzyyyy() ;

static int32_t __declspec(property(get=__get_Lzyyyy_, put=__set_Lzyyyy_))  Lzyyyy_;

static void __set_Lzyyyy_(int32_t value) ;

static int32_t __get_Lzyyyy_() ;

static int32_t __declspec(property(get=__get_Lzyyyy_MM, put=__set_Lzyyyy_MM))  Lzyyyy_MM;

static void __set_Lzyyyy_MM(int32_t value) ;

static int32_t __get_Lzyyyy_MM() ;

static int32_t __declspec(property(get=__get_Lzyyyy_MM_, put=__set_Lzyyyy_MM_))  Lzyyyy_MM_;

static void __set_Lzyyyy_MM_(int32_t value) ;

static int32_t __get_Lzyyyy_MM_() ;

static int32_t __declspec(property(get=__get_Lzyyyy_MM_dd, put=__set_Lzyyyy_MM_dd))  Lzyyyy_MM_dd;

static void __set_Lzyyyy_MM_dd(int32_t value) ;

static int32_t __get_Lzyyyy_MM_dd() ;

static int32_t __declspec(property(get=__get_Lzyyyy_MM_ddT, put=__set_Lzyyyy_MM_ddT))  Lzyyyy_MM_ddT;

static void __set_Lzyyyy_MM_ddT(int32_t value) ;

static int32_t __get_Lzyyyy_MM_ddT() ;

static int32_t __declspec(property(get=__get_LzHH, put=__set_LzHH))  LzHH;

static void __set_LzHH(int32_t value) ;

static int32_t __get_LzHH() ;

static int32_t __declspec(property(get=__get_LzHH_, put=__set_LzHH_))  LzHH_;

static void __set_LzHH_(int32_t value) ;

static int32_t __get_LzHH_() ;

static int32_t __declspec(property(get=__get_LzHH_mm, put=__set_LzHH_mm))  LzHH_mm;

static void __set_LzHH_mm(int32_t value) ;

static int32_t __get_LzHH_mm() ;

static int32_t __declspec(property(get=__get_LzHH_mm_, put=__set_LzHH_mm_))  LzHH_mm_;

static void __set_LzHH_mm_(int32_t value) ;

static int32_t __get_LzHH_mm_() ;

static int32_t __declspec(property(get=__get_LzHH_mm_ss, put=__set_LzHH_mm_ss))  LzHH_mm_ss;

static void __set_LzHH_mm_ss(int32_t value) ;

static int32_t __get_LzHH_mm_ss() ;

static int32_t __declspec(property(get=__get_Lz_, put=__set_Lz_))  Lz_;

static void __set_Lz_(int32_t value) ;

static int32_t __get_Lz_() ;

static int32_t __declspec(property(get=__get_Lz_zz, put=__set_Lz_zz))  Lz_zz;

static void __set_Lz_zz(int32_t value) ;

static int32_t __get_Lz_zz() ;

static int32_t __declspec(property(get=__get_Lz_zz_, put=__set_Lz_zz_))  Lz_zz_;

static void __set_Lz_zz_(int32_t value) ;

static int32_t __get_Lz_zz_() ;

static int32_t __declspec(property(get=__get_Lz_zz_zz, put=__set_Lz_zz_zz))  Lz_zz_zz;

static void __set_Lz_zz_zz(int32_t value) ;

static int32_t __get_Lz_zz_zz() ;

static int32_t __declspec(property(get=__get_Lz__, put=__set_Lz__))  Lz__;

static void __set_Lz__(int32_t value) ;

static int32_t __get_Lz__() ;

static int32_t __declspec(property(get=__get_Lz__mm, put=__set_Lz__mm))  Lz__mm;

static void __set_Lz__mm(int32_t value) ;

static int32_t __get_Lz__mm() ;

static int32_t __declspec(property(get=__get_Lz__mm_, put=__set_Lz__mm_))  Lz__mm_;

static void __set_Lz__mm_(int32_t value) ;

static int32_t __get_Lz__mm_() ;

static int32_t __declspec(property(get=__get_Lz__mm__, put=__set_Lz__mm__))  Lz__mm__;

static void __set_Lz__mm__(int32_t value) ;

static int32_t __get_Lz__mm__() ;

static int32_t __declspec(property(get=__get_Lz__mm_dd, put=__set_Lz__mm_dd))  Lz__mm_dd;

static void __set_Lz__mm_dd(int32_t value) ;

static int32_t __get_Lz__mm_dd() ;

static int32_t __declspec(property(get=__get_Lz___, put=__set_Lz___))  Lz___;

static void __set_Lz___(int32_t value) ;

static int32_t __get_Lz___() ;

static int32_t __declspec(property(get=__get_Lz___dd, put=__set_Lz___dd))  Lz___dd;

static void __set_Lz___dd(int32_t value) ;

static int32_t __get_Lz___dd() ;

static ::ArrayW<System::Xml::Schema::XmlTypeCode> __declspec(property(get=__get_typeCodes, put=__set_typeCodes))  typeCodes;

static void __set_typeCodes(::ArrayW<System::Xml::Schema::XmlTypeCode> value) ;

static ::ArrayW<System::Xml::Schema::XmlTypeCode> __get_typeCodes() ;


// Properties

 System::Xml::Schema::System__Xml__Schema__XsdDateTime__DateTimeTypeCode __declspec(property(get=get_InternalTypeCode))  InternalTypeCode;

 System::Xml::Schema::System__Xml__Schema__XsdDateTime__XsdDateTimeKind __declspec(property(get=get_InternalKind))  InternalKind;

 int32_t __declspec(property(get=get_Year))  Year;

 int32_t __declspec(property(get=get_Month))  Month;

 int32_t __declspec(property(get=get_Day))  Day;

 int32_t __declspec(property(get=get_Hour))  Hour;

 int32_t __declspec(property(get=get_Minute))  Minute;

 int32_t __declspec(property(get=get_Second))  Second;

 int32_t __declspec(property(get=get_Fraction))  Fraction;

 int32_t __declspec(property(get=get_ZoneHour))  ZoneHour;

 int32_t __declspec(property(get=get_ZoneMinute))  ZoneMinute;


// Methods

/// @brief Method .ctor addr 0x2752ef0 size 0x13c virtual false final false
 void _ctor(::StringW text, System::Xml::Schema::XsdDateTimeFlags kinds) ;

/// @brief Method .ctor addr 0x2753958 size 0x30 virtual false final false
 void _ctor(System::Xml::Schema::System__Xml__Schema__XsdDateTime__Parser parser) ;

/// @brief Method InitiateXsdDateTime addr 0x27538dc size 0x7c virtual false final false
 void InitiateXsdDateTime(System::Xml::Schema::System__Xml__Schema__XsdDateTime__Parser parser) ;

/// @brief Method TryParse addr 0x2753988 size 0x74 virtual false final false
static bool TryParse(::StringW text, System::Xml::Schema::XsdDateTimeFlags kinds, ByRef<System::Xml::Schema::XsdDateTime> result) ;

/// @brief Method .ctor addr 0x27539fc size 0x15c virtual false final false
 void _ctor(System::DateTime dateTime, System::Xml::Schema::XsdDateTimeFlags kinds) ;

/// @brief Method .ctor addr 0x2753b58 size 0x8 virtual false final false
 void _ctor(System::DateTimeOffset dateTimeOffset) ;

/// @brief Method .ctor addr 0x2753b60 size 0x114 virtual false final false
 void _ctor(System::DateTimeOffset dateTimeOffset, System::Xml::Schema::XsdDateTimeFlags kinds) ;

/// @brief Method get_InternalTypeCode addr 0x2753c74 size 0x8 virtual false final false
 System::Xml::Schema::System__Xml__Schema__XsdDateTime__DateTimeTypeCode get_InternalTypeCode() ;

/// @brief Method get_InternalKind addr 0x2753c7c size 0x8 virtual false final false
 System::Xml::Schema::System__Xml__Schema__XsdDateTime__XsdDateTimeKind get_InternalKind() ;

/// @brief Method get_Year addr 0x2753c84 size 0x8 virtual false final false
 int32_t get_Year() ;

/// @brief Method get_Month addr 0x2753c8c size 0x8 virtual false final false
 int32_t get_Month() ;

/// @brief Method get_Day addr 0x2753c94 size 0x8 virtual false final false
 int32_t get_Day() ;

/// @brief Method get_Hour addr 0x2753c9c size 0x8 virtual false final false
 int32_t get_Hour() ;

/// @brief Method get_Minute addr 0x2753ca4 size 0x8 virtual false final false
 int32_t get_Minute() ;

/// @brief Method get_Second addr 0x2753cac size 0x8 virtual false final false
 int32_t get_Second() ;

/// @brief Method get_Fraction addr 0x2753cb4 size 0xd8 virtual false final false
 int32_t get_Fraction() ;

/// @brief Method get_ZoneHour addr 0x2753d8c size 0x8 virtual false final false
 int32_t get_ZoneHour() ;

/// @brief Method get_ZoneMinute addr 0x2753d94 size 0x8 virtual false final false
 int32_t get_ZoneMinute() ;

/// @brief Method op_Implicit addr 0x2753d9c size 0x420 virtual false final false
static System::DateTime op_Implicit_System__DateTime(System::Xml::Schema::XsdDateTime xdt) ;

/// @brief Method op_Implicit addr 0x27541bc size 0x280 virtual false final false
static System::DateTimeOffset op_Implicit_System__DateTimeOffset(System::Xml::Schema::XsdDateTime xdt) ;

/// @brief Method ToString addr 0x275443c size 0x3d8 virtual true final false
 ::StringW ToString() ;

/// @brief Method PrintDate addr 0x2754814 size 0x150 virtual false final false
 void PrintDate(System::Text::StringBuilder sb) ;

/// @brief Method PrintTime addr 0x2754964 size 0x20c virtual false final false
 void PrintTime(System::Text::StringBuilder sb) ;

/// @brief Method PrintZone addr 0x2754c40 size 0x188 virtual false final false
 void PrintZone(System::Text::StringBuilder sb) ;

/// @brief Method IntToCharArray addr 0x2754b70 size 0x68 virtual false final false
 void IntToCharArray(::ArrayW<char16_t> text, int32_t start, int32_t value, int32_t digits) ;

/// @brief Method ShortToCharArray addr 0x2754bd8 size 0x68 virtual false final false
 void ShortToCharArray(::ArrayW<char16_t> text, int32_t start, int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::System__Xml__Schema__XsdDateTime__DateTimeTypeCode, "System.Xml.Schema", "XsdDateTime/DateTimeTypeCode");
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::System__Xml__Schema__XsdDateTime__XsdDateTimeKind, "System.Xml.Schema", "XsdDateTime/XsdDateTimeKind");
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::System__Xml__Schema__XsdDateTime__Parser, "System.Xml.Schema", "XsdDateTime/Parser");
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Schema::XsdDateTime, "System.Xml.Schema", "XsdDateTime");
