#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System {
class IFormatProvider;
}
namespace System::Globalization {
struct System__Globalization__TimeSpanFormat__Pattern;
}
namespace System::Globalization {
struct System__Globalization__TimeSpanFormat__FormatLiterals;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Globalization {
struct System__Globalization__TimeSpanFormat__Pattern;
}
namespace System::Globalization {
class TimeSpanFormat;
}
namespace System::Globalization {
struct System__Globalization__TimeSpanFormat__FormatLiterals;
}
// Type: ::Pattern
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3666))
// CS Name: System.Globalization.TimeSpanFormat::Pattern
struct CORDL_TYPE System__Globalization__TimeSpanFormat__Pattern : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Globalization__TimeSpanFormat__Pattern(int32_t value__) noexcept;


                    constexpr System__Globalization__TimeSpanFormat__Pattern(System__Globalization__TimeSpanFormat__Pattern const&) = default;
                    constexpr System__Globalization__TimeSpanFormat__Pattern(System__Globalization__TimeSpanFormat__Pattern&&) = default;
                    constexpr System__Globalization__TimeSpanFormat__Pattern& operator=(System__Globalization__TimeSpanFormat__Pattern const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Globalization__TimeSpanFormat__Pattern& operator=(System__Globalization__TimeSpanFormat__Pattern&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Globalization__TimeSpanFormat__Pattern(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Globalization__TimeSpanFormat__Pattern_Unwrapped : int32_t {
__None = 0,
__Minimum = 1,
__Full = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Globalization__TimeSpanFormat__Pattern_Unwrapped () const noexcept {
return std::bit_cast<__System__Globalization__TimeSpanFormat__Pattern_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Globalization::System__Globalization__TimeSpanFormat__Pattern const None;

/// @brief Field Minimum offset 0
static System::Globalization::System__Globalization__TimeSpanFormat__Pattern const Minimum;

/// @brief Field Full offset 0
static System::Globalization::System__Globalization__TimeSpanFormat__Pattern const Full;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
// Type: ::FormatLiterals
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3667))
// CS Name: System.Globalization.TimeSpanFormat::FormatLiterals
struct CORDL_TYPE System__Globalization__TimeSpanFormat__FormatLiterals : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "AppCompatLiteral", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "dd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hh", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "mm", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ss", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ff", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_literals", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
constexpr System__Globalization__TimeSpanFormat__FormatLiterals(::StringW AppCompatLiteral, int32_t dd, int32_t hh, int32_t mm, int32_t ss, int32_t ff, ::ArrayW<::StringW> _literals) noexcept;


                    constexpr System__Globalization__TimeSpanFormat__FormatLiterals(System__Globalization__TimeSpanFormat__FormatLiterals const&) = default;
                    constexpr System__Globalization__TimeSpanFormat__FormatLiterals(System__Globalization__TimeSpanFormat__FormatLiterals&&) = default;
                    constexpr System__Globalization__TimeSpanFormat__FormatLiterals& operator=(System__Globalization__TimeSpanFormat__FormatLiterals const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Globalization__TimeSpanFormat__FormatLiterals& operator=(System__Globalization__TimeSpanFormat__FormatLiterals&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Globalization__TimeSpanFormat__FormatLiterals(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_AppCompatLiteral, put=__set_AppCompatLiteral))  AppCompatLiteral;

constexpr void __set_AppCompatLiteral(::StringW value) ;

constexpr ::StringW __get_AppCompatLiteral() const;

 int32_t __declspec(property(get=__get_dd, put=__set_dd))  dd;

constexpr void __set_dd(int32_t value) ;

constexpr int32_t __get_dd() const;

 int32_t __declspec(property(get=__get_hh, put=__set_hh))  hh;

constexpr void __set_hh(int32_t value) ;

constexpr int32_t __get_hh() const;

 int32_t __declspec(property(get=__get_mm, put=__set_mm))  mm;

constexpr void __set_mm(int32_t value) ;

constexpr int32_t __get_mm() const;

 int32_t __declspec(property(get=__get_ss, put=__set_ss))  ss;

constexpr void __set_ss(int32_t value) ;

constexpr int32_t __get_ss() const;

 int32_t __declspec(property(get=__get_ff, put=__set_ff))  ff;

constexpr void __set_ff(int32_t value) ;

constexpr int32_t __get_ff() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__literals, put=__set__literals))  _literals;

constexpr void __set__literals(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__literals() const;


// Properties

 ::StringW __declspec(property(get=get_Start))  Start;

 ::StringW __declspec(property(get=get_DayHourSep))  DayHourSep;

 ::StringW __declspec(property(get=get_HourMinuteSep))  HourMinuteSep;

 ::StringW __declspec(property(get=get_MinuteSecondSep))  MinuteSecondSep;

 ::StringW __declspec(property(get=get_SecondFractionSep))  SecondFractionSep;

 ::StringW __declspec(property(get=get_End))  End;


// Methods

/// @brief Method get_Start addr 0x23e6c98 size 0x28 virtual false final false
 ::StringW get_Start() ;

/// @brief Method get_DayHourSep addr 0x23e6cc0 size 0x2c virtual false final false
 ::StringW get_DayHourSep() ;

/// @brief Method get_HourMinuteSep addr 0x23e6cec size 0x2c virtual false final false
 ::StringW get_HourMinuteSep() ;

/// @brief Method get_MinuteSecondSep addr 0x23e6d18 size 0x2c virtual false final false
 ::StringW get_MinuteSecondSep() ;

/// @brief Method get_SecondFractionSep addr 0x23e6d44 size 0x2c virtual false final false
 ::StringW get_SecondFractionSep() ;

/// @brief Method get_End addr 0x23e6d70 size 0x2c virtual false final false
 ::StringW get_End() ;

/// @brief Method InitInvariant addr 0x23e6e30 size 0x210 virtual false final false
static System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals InitInvariant(bool isNegative) ;

/// @brief Method Init addr 0x23e6810 size 0x3f8 virtual false final false
 void Init(System::ReadOnlySpan_1<char16_t> format, bool useInvariantFieldLengths) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
// Type: System.Globalization::TimeSpanFormat
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3668))
// CS Name: System.Globalization.TimeSpanFormat
class CORDL_TYPE TimeSpanFormat : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using FormatLiterals = System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals;

using Pattern = System::Globalization::System__Globalization__TimeSpanFormat__Pattern;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TimeSpanFormat() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanFormat", modifiers: " const&", def_value: None }]
constexpr TimeSpanFormat(TimeSpanFormat const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanFormat", modifiers: "&&", def_value: None }]
constexpr TimeSpanFormat(TimeSpanFormat&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeSpanFormat(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TimeSpanFormat& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeSpanFormat& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeSpanFormat& operator=(TimeSpanFormat&& o) noexcept = default;
  constexpr TimeSpanFormat& operator=(TimeSpanFormat const& o) noexcept = default;
                


// Fields

static System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals __declspec(property(get=__get_PositiveInvariantFormatLiterals, put=__set_PositiveInvariantFormatLiterals))  PositiveInvariantFormatLiterals;

static void __set_PositiveInvariantFormatLiterals(System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals value) ;

static System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals __get_PositiveInvariantFormatLiterals() ;

static System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals __declspec(property(get=__get_NegativeInvariantFormatLiterals, put=__set_NegativeInvariantFormatLiterals))  NegativeInvariantFormatLiterals;

static void __set_NegativeInvariantFormatLiterals(System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals value) ;

static System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals __get_NegativeInvariantFormatLiterals() ;


// Methods

/// @brief Method AppendNonNegativeInt32 addr 0x23e5718 size 0xf8 virtual false final false
static void AppendNonNegativeInt32(System::Text::StringBuilder sb, int32_t n, int32_t digits) ;

/// @brief Method Format addr 0x23e5810 size 0xb8 virtual false final false
static ::StringW Format(System::TimeSpan value, ::StringW format, System::IFormatProvider formatProvider) ;

/// @brief Method TryFormat addr 0x23e5b70 size 0x11c virtual false final false
static bool TryFormat(System::TimeSpan value, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider formatProvider) ;

/// @brief Method FormatToBuilder addr 0x23e58c8 size 0x2a8 virtual false final false
static System::Text::StringBuilder FormatToBuilder(System::TimeSpan value, System::ReadOnlySpan_1<char16_t> format, System::IFormatProvider formatProvider) ;

/// @brief Method FormatStandard addr 0x23e5c8c size 0x48c virtual false final false
static System::Text::StringBuilder FormatStandard(System::TimeSpan value, bool isInvariant, System::ReadOnlySpan_1<char16_t> format, System::Globalization::System__Globalization__TimeSpanFormat__Pattern pattern) ;

/// @brief Method FormatCustomized addr 0x23e6118 size 0x6f8 virtual false final false
static System::Text::StringBuilder FormatCustomized(System::TimeSpan value, System::ReadOnlySpan_1<char16_t> format, System::Globalization::DateTimeFormatInfo dtfi, System::Text::StringBuilder result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::System__Globalization__TimeSpanFormat__Pattern, "System.Globalization", "TimeSpanFormat/Pattern");
NEED_NO_BOX(System::Globalization::TimeSpanFormat);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::TimeSpanFormat, "System.Globalization", "TimeSpanFormat");
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::System__Globalization__TimeSpanFormat__FormatLiterals, "System.Globalization", "TimeSpanFormat/FormatLiterals");
