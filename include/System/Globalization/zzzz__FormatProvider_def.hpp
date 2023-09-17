#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Text {
struct ValueStringBuilder;
}
namespace System::Globalization {
class NumberFormatInfo;
}
// Forward declare root types
namespace System::Globalization {
class FormatProvider;
}
namespace System::Globalization {
class ____System__Globalization__FormatProvider__Number;
}
namespace GlobalNamespace {
struct ______System__Globalization__FormatProvider__Number__NumberBuffer;
}
// Type: ::NumberBuffer
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15629))
// CS Name: System.Globalization.FormatProvider::Number::NumberBuffer
struct CORDL_TYPE ______System__Globalization__FormatProvider__Number__NumberBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "precision", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sign", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "overrideDigits", ty: "void*", modifiers: "", def_value: None }]
constexpr ______System__Globalization__FormatProvider__Number__NumberBuffer(int32_t precision, int32_t scale, bool sign, void* overrideDigits) noexcept;


                    constexpr ______System__Globalization__FormatProvider__Number__NumberBuffer(______System__Globalization__FormatProvider__Number__NumberBuffer const&) = default;
                    constexpr ______System__Globalization__FormatProvider__Number__NumberBuffer(______System__Globalization__FormatProvider__Number__NumberBuffer&&) = default;
                    constexpr ______System__Globalization__FormatProvider__Number__NumberBuffer& operator=(______System__Globalization__FormatProvider__Number__NumberBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ______System__Globalization__FormatProvider__Number__NumberBuffer& operator=(______System__Globalization__FormatProvider__Number__NumberBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ______System__Globalization__FormatProvider__Number__NumberBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_precision, put=__set_precision))  precision;

constexpr void __set_precision(int32_t value) ;

constexpr int32_t __get_precision() const;

 int32_t __declspec(property(get=__get_scale, put=__set_scale))  scale;

constexpr void __set_scale(int32_t value) ;

constexpr int32_t __get_scale() const;

 bool __declspec(property(get=__get_sign, put=__set_sign))  sign;

constexpr void __set_sign(bool value) ;

constexpr bool __get_sign() const;

 void* __declspec(property(get=__get_overrideDigits, put=__set_overrideDigits))  overrideDigits;

constexpr void __set_overrideDigits(void* value) ;

constexpr void* __get_overrideDigits() const;


// Properties

 void* __declspec(property(get=get_digits))  digits;


// Methods

/// @brief Method get_digits addr 0x26ba5b4 size 0x8 virtual false final false
 void* get_digits() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Number
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15630))
// CS Name: System.Globalization.FormatProvider::Number
class CORDL_TYPE ____System__Globalization__FormatProvider__Number : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using NumberBuffer = ::GlobalNamespace::______System__Globalization__FormatProvider__Number__NumberBuffer;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____System__Globalization__FormatProvider__Number() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Globalization__FormatProvider__Number", modifiers: " const&", def_value: None }]
constexpr ____System__Globalization__FormatProvider__Number(____System__Globalization__FormatProvider__Number const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Globalization__FormatProvider__Number", modifiers: "&&", def_value: None }]
constexpr ____System__Globalization__FormatProvider__Number(____System__Globalization__FormatProvider__Number&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Globalization__FormatProvider__Number(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Globalization__FormatProvider__Number& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Globalization__FormatProvider__Number& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Globalization__FormatProvider__Number& operator=(____System__Globalization__FormatProvider__Number&& o) noexcept = default;
  constexpr ____System__Globalization__FormatProvider__Number& operator=(____System__Globalization__FormatProvider__Number const& o) noexcept = default;
                


// Fields

static ::ArrayW<::StringW> __declspec(property(get=__get_s_posCurrencyFormats, put=__set_s_posCurrencyFormats))  s_posCurrencyFormats;

static void __set_s_posCurrencyFormats(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_s_posCurrencyFormats() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_s_negCurrencyFormats, put=__set_s_negCurrencyFormats))  s_negCurrencyFormats;

static void __set_s_negCurrencyFormats(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_s_negCurrencyFormats() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_s_posPercentFormats, put=__set_s_posPercentFormats))  s_posPercentFormats;

static void __set_s_posPercentFormats(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_s_posPercentFormats() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_s_negPercentFormats, put=__set_s_negPercentFormats))  s_negPercentFormats;

static void __set_s_negPercentFormats(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_s_negPercentFormats() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_s_negNumberFormats, put=__set_s_negNumberFormats))  s_negNumberFormats;

static void __set_s_negNumberFormats(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_s_negNumberFormats() ;

static ::StringW __declspec(property(get=__get_s_posNumberFormat, put=__set_s_posNumberFormat))  s_posNumberFormat;

static void __set_s_posNumberFormat(::StringW value) ;

static ::StringW __get_s_posNumberFormat() ;


// Methods

/// @brief Method Int32ToDecChars addr 0x26b8118 size 0x5c virtual false final false
static void Int32ToDecChars(void* buffer, ByRef<int32_t> index, uint32_t value, int32_t digits) ;

/// @brief Method ParseFormatSpecifier addr 0x26b6a10 size 0x140 virtual false final false
static char16_t ParseFormatSpecifier(::System::ReadOnlySpan_1<char16_t> format, ByRef<int32_t> digits) ;

/// @brief Method NumberToString addr 0x26b6b50 size 0x548 virtual false final false
static void NumberToString(ByRef<::System::Text::ValueStringBuilder> sb, ByRef<::GlobalNamespace::______System__Globalization__FormatProvider__Number__NumberBuffer> number, char16_t format, int32_t nMaxDigits, ::System::Globalization::NumberFormatInfo info, bool isDecimal) ;

/// @brief Method FormatCurrency addr 0x26b8248 size 0x260 virtual false final false
static void FormatCurrency(ByRef<::System::Text::ValueStringBuilder> sb, ByRef<::GlobalNamespace::______System__Globalization__FormatProvider__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits, ::System::Globalization::NumberFormatInfo info) ;

/// @brief Method wcslen addr 0x26b9464 size 0x20 virtual false final false
static int32_t wcslen(void* s) ;

/// @brief Method FormatFixed addr 0x26b84a8 size 0x53c virtual false final false
static void FormatFixed(ByRef<::System::Text::ValueStringBuilder> sb, ByRef<::GlobalNamespace::______System__Globalization__FormatProvider__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits, ::System::Globalization::NumberFormatInfo info, ::ArrayW<int32_t> groupDigits, ::StringW sDecimal, ::StringW sGroup) ;

/// @brief Method FormatNumber addr 0x26b89e4 size 0x248 virtual false final false
static void FormatNumber(ByRef<::System::Text::ValueStringBuilder> sb, ByRef<::GlobalNamespace::______System__Globalization__FormatProvider__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits, ::System::Globalization::NumberFormatInfo info) ;

/// @brief Method FormatScientific addr 0x26b8c2c size 0x23c virtual false final false
static void FormatScientific(ByRef<::System::Text::ValueStringBuilder> sb, ByRef<::GlobalNamespace::______System__Globalization__FormatProvider__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits, ::System::Globalization::NumberFormatInfo info, char16_t expChar) ;

/// @brief Method FormatExponent addr 0x26b9640 size 0x2f0 virtual false final false
static void FormatExponent(ByRef<::System::Text::ValueStringBuilder> sb, ::System::Globalization::NumberFormatInfo info, int32_t value, char16_t expChar, int32_t minDigits, bool positiveSign) ;

/// @brief Method FormatGeneral addr 0x26b8e68 size 0x39c virtual false final false
static void FormatGeneral(ByRef<::System::Text::ValueStringBuilder> sb, ByRef<::GlobalNamespace::______System__Globalization__FormatProvider__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits, ::System::Globalization::NumberFormatInfo info, char16_t expChar, bool bSuppressScientific) ;

/// @brief Method FormatPercent addr 0x26b9204 size 0x260 virtual false final false
static void FormatPercent(ByRef<::System::Text::ValueStringBuilder> sb, ByRef<::GlobalNamespace::______System__Globalization__FormatProvider__Number__NumberBuffer> number, int32_t nMinDigits, int32_t nMaxDigits, ::System::Globalization::NumberFormatInfo info) ;

/// @brief Method RoundNumber addr 0x26b8174 size 0xd4 virtual false final false
static void RoundNumber(ByRef<::GlobalNamespace::______System__Globalization__FormatProvider__Number__NumberBuffer> number, int32_t pos) ;

/// @brief Method FindSection addr 0x26b9930 size 0x134 virtual false final false
static int32_t FindSection(::System::ReadOnlySpan_1<char16_t> format, int32_t section) ;

/// @brief Method NumberToStringFormat addr 0x26b7098 size 0x1080 virtual false final false
static void NumberToStringFormat(ByRef<::System::Text::ValueStringBuilder> sb, ByRef<::GlobalNamespace::______System__Globalization__FormatProvider__Number__NumberBuffer> number, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo info) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
// Type: System.Globalization::FormatProvider
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15631))
// CS Name: System.Globalization.FormatProvider
class CORDL_TYPE FormatProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Number = ::System::Globalization::____System__Globalization__FormatProvider__Number;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FormatProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "FormatProvider", modifiers: " const&", def_value: None }]
constexpr FormatProvider(FormatProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FormatProvider", modifiers: "&&", def_value: None }]
constexpr FormatProvider(FormatProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FormatProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FormatProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FormatProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FormatProvider& operator=(FormatProvider&& o) noexcept = default;
  constexpr FormatProvider& operator=(FormatProvider const& o) noexcept = default;
                


// Methods

/// @brief Method FormatBigInteger addr 0x26b68c8 size 0x140 virtual false final false
static void FormatBigInteger(ByRef<::System::Text::ValueStringBuilder> sb, int32_t precision, int32_t scale, bool sign, ::System::ReadOnlySpan_1<char16_t> format, ::System::Globalization::NumberFormatInfo numberFormatInfo, ::ArrayW<char16_t> digits, int32_t startIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
} // end anonymous namespace
NEED_NO_BOX(::System::Globalization::FormatProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::FormatProvider, "System.Globalization", "FormatProvider");
NEED_NO_BOX(::System::Globalization::____System__Globalization__FormatProvider__Number);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::____System__Globalization__FormatProvider__Number, "System.Globalization", "FormatProvider/Number");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::______System__Globalization__FormatProvider__Number__NumberBuffer, "System.Globalization", "FormatProvider/Number/NumberBuffer");
