#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace Newtonsoft::Json::Utilities {
struct ParserTimeZone;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
struct DateTimeParser;
}
// Type: Newtonsoft.Json.Utilities::DateTimeParser
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11788))
// CS Name: Newtonsoft.Json.Utilities.DateTimeParser
struct CORDL_TYPE DateTimeParser : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Year", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Month", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Day", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Hour", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Minute", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Second", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Fraction", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ZoneHour", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ZoneMinute", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Zone", ty: "Newtonsoft::Json::Utilities::ParserTimeZone", modifiers: "", def_value: None }, CppParam { name: "_text", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_end", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DateTimeParser(int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Fraction, int32_t ZoneHour, int32_t ZoneMinute, Newtonsoft::Json::Utilities::ParserTimeZone Zone, ::ArrayW<char16_t> _text, int32_t _end) noexcept;


                    constexpr DateTimeParser(DateTimeParser const&) = default;
                    constexpr DateTimeParser(DateTimeParser&&) = default;
                    constexpr DateTimeParser& operator=(DateTimeParser const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DateTimeParser& operator=(DateTimeParser&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DateTimeParser(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_Year, put=__set_Year))  Year;

constexpr void __set_Year(int32_t value) ;

constexpr int32_t __get_Year() const;

 int32_t __declspec(property(get=__get_Month, put=__set_Month))  Month;

constexpr void __set_Month(int32_t value) ;

constexpr int32_t __get_Month() const;

 int32_t __declspec(property(get=__get_Day, put=__set_Day))  Day;

constexpr void __set_Day(int32_t value) ;

constexpr int32_t __get_Day() const;

 int32_t __declspec(property(get=__get_Hour, put=__set_Hour))  Hour;

constexpr void __set_Hour(int32_t value) ;

constexpr int32_t __get_Hour() const;

 int32_t __declspec(property(get=__get_Minute, put=__set_Minute))  Minute;

constexpr void __set_Minute(int32_t value) ;

constexpr int32_t __get_Minute() const;

 int32_t __declspec(property(get=__get_Second, put=__set_Second))  Second;

constexpr void __set_Second(int32_t value) ;

constexpr int32_t __get_Second() const;

 int32_t __declspec(property(get=__get_Fraction, put=__set_Fraction))  Fraction;

constexpr void __set_Fraction(int32_t value) ;

constexpr int32_t __get_Fraction() const;

 int32_t __declspec(property(get=__get_ZoneHour, put=__set_ZoneHour))  ZoneHour;

constexpr void __set_ZoneHour(int32_t value) ;

constexpr int32_t __get_ZoneHour() const;

 int32_t __declspec(property(get=__get_ZoneMinute, put=__set_ZoneMinute))  ZoneMinute;

constexpr void __set_ZoneMinute(int32_t value) ;

constexpr int32_t __get_ZoneMinute() const;

 Newtonsoft::Json::Utilities::ParserTimeZone __declspec(property(get=__get_Zone, put=__set_Zone))  Zone;

constexpr void __set_Zone(Newtonsoft::Json::Utilities::ParserTimeZone value) ;

constexpr Newtonsoft::Json::Utilities::ParserTimeZone __get_Zone() const;

 ::ArrayW<char16_t> __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get__text() const;

 int32_t __declspec(property(get=__get__end, put=__set__end))  _end;

constexpr void __set__end(int32_t value) ;

constexpr int32_t __get__end() const;

static ::ArrayW<int32_t> __declspec(property(get=__get_Power10, put=__set_Power10))  Power10;

static void __set_Power10(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_Power10() ;

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

/// @brief Field MaxFractionDigits offset 0
static constexpr int16_t  MaxFractionDigits{7};


// Methods

/// @brief Method Parse addr 0x24e0fbc size 0xd8 virtual false final false
 bool Parse(::ArrayW<char16_t> text, int32_t startIndex, int32_t length) ;

/// @brief Method ParseDate addr 0x24e1094 size 0x198 virtual false final false
 bool ParseDate(int32_t start) ;

/// @brief Method ParseTimeAndZoneAndWhitespace addr 0x24e1278 size 0x40 virtual false final false
 bool ParseTimeAndZoneAndWhitespace(int32_t start) ;

/// @brief Method ParseTime addr 0x24e1428 size 0x2c0 virtual false final false
 bool ParseTime(ByRef<int32_t> start) ;

/// @brief Method ParseZone addr 0x24e16e8 size 0x1d0 virtual false final false
 bool ParseZone(int32_t start) ;

/// @brief Method Parse4Digit addr 0x24e12b8 size 0xdc virtual false final false
 bool Parse4Digit(int32_t start, ByRef<int32_t> num) ;

/// @brief Method Parse2Digit addr 0x24e1394 size 0x94 virtual false final false
 bool Parse2Digit(int32_t start, ByRef<int32_t> num) ;

/// @brief Method ParseChar addr 0x24e122c size 0x4c virtual false final false
 bool ParseChar(int32_t start, char16_t ch) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::DateTimeParser, "Newtonsoft.Json.Utilities", "DateTimeParser");
