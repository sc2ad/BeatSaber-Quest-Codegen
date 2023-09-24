#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class TextWriter;
}
namespace System {
struct DateTimeKind;
}
namespace System::Xml {
struct XmlDateTimeSerializationMode;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
struct DateTimeOffset;
}
namespace System {
struct TimeSpan;
}
namespace Newtonsoft::Json {
struct DateFormatHandling;
}
namespace Newtonsoft::Json::Utilities {
struct StringReference;
}
namespace Newtonsoft::Json::Utilities {
struct DateTimeParser;
}
namespace System::Globalization {
class CultureInfo;
}
namespace Newtonsoft::Json {
struct DateTimeZoneHandling;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class DateTimeUtils;
}
// Type: Newtonsoft.Json.Utilities::DateTimeUtils
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11821))
// CS Name: Newtonsoft.Json.Utilities.DateTimeUtils
class CORDL_TYPE DateTimeUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DateTimeUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeUtils", modifiers: " const&", def_value: None }]
constexpr DateTimeUtils(DateTimeUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeUtils", modifiers: "&&", def_value: None }]
constexpr DateTimeUtils(DateTimeUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DateTimeUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DateTimeUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DateTimeUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DateTimeUtils& operator=(DateTimeUtils&& o) noexcept = default;
  constexpr DateTimeUtils& operator=(DateTimeUtils const& o) noexcept = default;
                


// Fields

static int64_t __declspec(property(get=__get_InitialJavaScriptDateTicks, put=__set_InitialJavaScriptDateTicks))  InitialJavaScriptDateTicks;

static void __set_InitialJavaScriptDateTicks(int64_t value) ;

static int64_t __get_InitialJavaScriptDateTicks() ;

/// @brief Field IsoDateFormat offset 0
static constexpr ::ConstString  IsoDateFormat{u"yyyy-MM-ddTHH:mm:ss.FFFFFFFK"};

/// @brief Field DaysPer100Years offset 0
static constexpr int32_t  DaysPer100Years{36524};

/// @brief Field DaysPer400Years offset 0
static constexpr int32_t  DaysPer400Years{146097};

/// @brief Field DaysPer4Years offset 0
static constexpr int32_t  DaysPer4Years{1461};

/// @brief Field DaysPerYear offset 0
static constexpr int32_t  DaysPerYear{365};

/// @brief Field TicksPerDay offset 0
static constexpr int64_t  TicksPerDay{864000000000};

static ::ArrayW<int32_t> __declspec(property(get=__get_DaysToMonth365, put=__set_DaysToMonth365))  DaysToMonth365;

static void __set_DaysToMonth365(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_DaysToMonth365() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_DaysToMonth366, put=__set_DaysToMonth366))  DaysToMonth366;

static void __set_DaysToMonth366(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_DaysToMonth366() ;


// Methods

/// @brief Method GetUtcOffset addr 0x24e6e2c size 0x2c virtual false final false
static System::TimeSpan GetUtcOffset(System::DateTime d) ;

/// @brief Method ToSerializationMode addr 0x24e6e58 size 0x80 virtual false final false
static System::Xml::XmlDateTimeSerializationMode ToSerializationMode(System::DateTimeKind kind) ;

/// @brief Method EnsureDateTime addr 0x24e6ed8 size 0x128 virtual false final false
static System::DateTime EnsureDateTime(System::DateTime value, Newtonsoft::Json::DateTimeZoneHandling timeZone) ;

/// @brief Method SwitchToLocalTime addr 0x24e7000 size 0x78 virtual false final false
static System::DateTime SwitchToLocalTime(System::DateTime value) ;

/// @brief Method SwitchToUtcTime addr 0x24e7078 size 0x78 virtual false final false
static System::DateTime SwitchToUtcTime(System::DateTime value) ;

/// @brief Method ToUniversalTicks addr 0x24e70f0 size 0x8c virtual false final false
static int64_t ToUniversalTicks(System::DateTime dateTime) ;

/// @brief Method ToUniversalTicks addr 0x24e717c size 0x108 virtual false final false
static int64_t ToUniversalTicks(System::DateTime dateTime, System::TimeSpan offset) ;

/// @brief Method ConvertDateTimeToJavaScriptTicks addr 0x24e7284 size 0x68 virtual false final false
static int64_t ConvertDateTimeToJavaScriptTicks(System::DateTime dateTime, System::TimeSpan offset) ;

/// @brief Method ConvertDateTimeToJavaScriptTicks addr 0x24e7368 size 0x58 virtual false final false
static int64_t ConvertDateTimeToJavaScriptTicks(System::DateTime dateTime) ;

/// @brief Method ConvertDateTimeToJavaScriptTicks addr 0x24e73c0 size 0x98 virtual false final false
static int64_t ConvertDateTimeToJavaScriptTicks(System::DateTime dateTime, bool convertToUtc) ;

/// @brief Method UniversialTicksToJavaScriptTicks addr 0x24e72ec size 0x7c virtual false final false
static int64_t UniversialTicksToJavaScriptTicks(int64_t universialTicks) ;

/// @brief Method ConvertJavaScriptTicksToDateTime addr 0x24de2e0 size 0x88 virtual false final false
static System::DateTime ConvertJavaScriptTicksToDateTime(int64_t javaScriptTicks) ;

/// @brief Method TryParseDateTimeIso addr 0x24e7458 size 0x36c virtual false final false
static bool TryParseDateTimeIso(Newtonsoft::Json::Utilities::StringReference text, Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ByRef<System::DateTime> dt) ;

/// @brief Method TryParseDateTimeOffsetIso addr 0x24e7844 size 0x1cc virtual false final false
static bool TryParseDateTimeOffsetIso(Newtonsoft::Json::Utilities::StringReference text, ByRef<System::DateTimeOffset> dt) ;

/// @brief Method CreateDateTime addr 0x24e77c4 size 0x80 virtual false final false
static System::DateTime CreateDateTime(Newtonsoft::Json::Utilities::DateTimeParser dateTimeParser) ;

/// @brief Method TryParseDateTime addr 0x24e7a10 size 0x220 virtual false final false
static bool TryParseDateTime(Newtonsoft::Json::Utilities::StringReference s, Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ::StringW dateFormatString, System::Globalization::CultureInfo culture, ByRef<System::DateTime> dt) ;

/// @brief Method TryParseDateTime addr 0x24e7e7c size 0x2b4 virtual false final false
static bool TryParseDateTime(::StringW s, Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ::StringW dateFormatString, System::Globalization::CultureInfo culture, ByRef<System::DateTime> dt) ;

/// @brief Method TryParseDateTimeOffset addr 0x24e8130 size 0x210 virtual false final false
static bool TryParseDateTimeOffset(Newtonsoft::Json::Utilities::StringReference s, ::StringW dateFormatString, System::Globalization::CultureInfo culture, ByRef<System::DateTimeOffset> dt) ;

/// @brief Method TryParseDateTimeOffset addr 0x24e8528 size 0x2b4 virtual false final false
static bool TryParseDateTimeOffset(::StringW s, ::StringW dateFormatString, System::Globalization::CultureInfo culture, ByRef<System::DateTimeOffset> dt) ;

/// @brief Method TryParseMicrosoftDate addr 0x24e87dc size 0x174 virtual false final false
static bool TryParseMicrosoftDate(Newtonsoft::Json::Utilities::StringReference text, ByRef<int64_t> ticks, ByRef<System::TimeSpan> offset, ByRef<System::DateTimeKind> kind) ;

/// @brief Method TryParseDateTimeMicrosoft addr 0x24e7c30 size 0x164 virtual false final false
static bool TryParseDateTimeMicrosoft(Newtonsoft::Json::Utilities::StringReference text, Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ByRef<System::DateTime> dt) ;

/// @brief Method TryParseDateTimeExact addr 0x24e7d94 size 0xe8 virtual false final false
static bool TryParseDateTimeExact(::StringW text, Newtonsoft::Json::DateTimeZoneHandling dateTimeZoneHandling, ::StringW dateFormatString, System::Globalization::CultureInfo culture, ByRef<System::DateTime> dt) ;

/// @brief Method TryParseDateTimeOffsetMicrosoft addr 0x24e8340 size 0x138 virtual false final false
static bool TryParseDateTimeOffsetMicrosoft(Newtonsoft::Json::Utilities::StringReference text, ByRef<System::DateTimeOffset> dt) ;

/// @brief Method TryParseDateTimeOffsetExact addr 0x24e8478 size 0xb0 virtual false final false
static bool TryParseDateTimeOffsetExact(::StringW text, ::StringW dateFormatString, System::Globalization::CultureInfo culture, ByRef<System::DateTimeOffset> dt) ;

/// @brief Method TryReadOffset addr 0x24e8950 size 0x174 virtual false final false
static bool TryReadOffset(Newtonsoft::Json::Utilities::StringReference offsetText, int32_t startIndex, ByRef<System::TimeSpan> offset) ;

/// @brief Method WriteDateTimeString addr 0x24e8ac4 size 0x138 virtual false final false
static void WriteDateTimeString(System::IO::TextWriter writer, System::DateTime value, Newtonsoft::Json::DateFormatHandling format, ::StringW formatString, System::Globalization::CultureInfo culture) ;

/// @brief Method WriteDateTimeString addr 0x24e8bfc size 0x304 virtual false final false
static int32_t WriteDateTimeString(::ArrayW<char16_t> chars, int32_t start, System::DateTime value, System::Nullable_1<System::TimeSpan> offset, System::DateTimeKind kind, Newtonsoft::Json::DateFormatHandling format) ;

/// @brief Method WriteDefaultIsoDate addr 0x24e9078 size 0x298 virtual false final false
static int32_t WriteDefaultIsoDate(::ArrayW<char16_t> chars, int32_t start, System::DateTime dt) ;

/// @brief Method CopyIntToCharArray addr 0x24e9508 size 0x68 virtual false final false
static void CopyIntToCharArray(::ArrayW<char16_t> chars, int32_t start, int32_t value, int32_t digits) ;

/// @brief Method WriteDateTimeOffset addr 0x24e8f00 size 0x178 virtual false final false
static int32_t WriteDateTimeOffset(::ArrayW<char16_t> chars, int32_t start, System::TimeSpan offset, Newtonsoft::Json::DateFormatHandling format) ;

/// @brief Method WriteDateTimeOffsetString addr 0x24e9570 size 0x174 virtual false final false
static void WriteDateTimeOffsetString(System::IO::TextWriter writer, System::DateTimeOffset value, Newtonsoft::Json::DateFormatHandling format, ::StringW formatString, System::Globalization::CultureInfo culture) ;

/// @brief Method GetDateValues addr 0x24e9310 size 0x1f8 virtual false final false
static void GetDateValues(System::DateTime td, ByRef<int32_t> year, ByRef<int32_t> month, ByRef<int32_t> day) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
NEED_NO_BOX(Newtonsoft::Json::Utilities::DateTimeUtils);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::DateTimeUtils, "Newtonsoft.Json.Utilities", "DateTimeUtils");
