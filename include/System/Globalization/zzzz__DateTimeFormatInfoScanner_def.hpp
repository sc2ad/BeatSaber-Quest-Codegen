#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Globalization {
struct System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern;
}
namespace System::Globalization {
class DateTimeFormatInfo;
}
namespace System::Globalization {
struct FORMATFLAGS;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace System::Globalization {
struct System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern;
}
namespace System::Globalization {
class DateTimeFormatInfoScanner;
}
// Type: ::FoundDatePattern
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3653))
// CS Name: System.Globalization.DateTimeFormatInfoScanner::FoundDatePattern
struct CORDL_TYPE System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern(int32_t value__) noexcept;


                    constexpr System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern(System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern const&) = default;
                    constexpr System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern(System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern&&) = default;
                    constexpr System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern& operator=(System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern& operator=(System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern_Unwrapped : int32_t {
__None = 0,
__FoundYearPatternFlag = 1,
__FoundMonthPatternFlag = 2,
__FoundDayPatternFlag = 4,
__FoundYMDPatternFlag = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern_Unwrapped () const noexcept {
return std::bit_cast<__System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern const None;

/// @brief Field FoundYearPatternFlag offset 0
static System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern const FoundYearPatternFlag;

/// @brief Field FoundMonthPatternFlag offset 0
static System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern const FoundMonthPatternFlag;

/// @brief Field FoundDayPatternFlag offset 0
static System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern const FoundDayPatternFlag;

/// @brief Field FoundYMDPatternFlag offset 0
static System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern const FoundYMDPatternFlag;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
// Type: System.Globalization::DateTimeFormatInfoScanner
namespace System::Globalization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3654))
// CS Name: System.Globalization.DateTimeFormatInfoScanner
class CORDL_TYPE DateTimeFormatInfoScanner : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using FoundDatePattern = System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DateTimeFormatInfoScanner() = default;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeFormatInfoScanner", modifiers: " const&", def_value: None }]
constexpr DateTimeFormatInfoScanner(DateTimeFormatInfoScanner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DateTimeFormatInfoScanner", modifiers: "&&", def_value: None }]
constexpr DateTimeFormatInfoScanner(DateTimeFormatInfoScanner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DateTimeFormatInfoScanner(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DateTimeFormatInfoScanner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DateTimeFormatInfoScanner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DateTimeFormatInfoScanner& operator=(DateTimeFormatInfoScanner&& o) noexcept = default;
  constexpr DateTimeFormatInfoScanner& operator=(DateTimeFormatInfoScanner const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_m_dateWords, put=__set_m_dateWords))  m_dateWords;

constexpr void __set_m_dateWords(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_m_dateWords() const;

static System::Collections::Generic::Dictionary_2<::StringW,::StringW> __declspec(property(get=__get_s_knownWords, put=__set_s_knownWords))  s_knownWords;

static void __set_s_knownWords(System::Collections::Generic::Dictionary_2<::StringW,::StringW> value) ;

static System::Collections::Generic::Dictionary_2<::StringW,::StringW> __get_s_knownWords() ;

 System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern __declspec(property(get=__get__ymdFlags, put=__set__ymdFlags))  _ymdFlags;

constexpr void __set__ymdFlags(System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern value) ;

constexpr System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern __get__ymdFlags() const;


// Properties

static System::Collections::Generic::Dictionary_2<::StringW,::StringW> __declspec(property(get=get_KnownWords))  KnownWords;


// Methods

/// @brief Method get_KnownWords addr 0x23e401c size 0x400 virtual false final false
static System::Collections::Generic::Dictionary_2<::StringW,::StringW> get_KnownWords() ;

/// @brief Method SkipWhiteSpacesAndNonLetter addr 0x23e441c size 0xfc virtual false final false
static int32_t SkipWhiteSpacesAndNonLetter(::StringW pattern, int32_t currentIndex) ;

/// @brief Method AddDateWordOrPostfix addr 0x23e4518 size 0x2b0 virtual false final false
 void AddDateWordOrPostfix(::StringW formatPostfix, ::StringW str) ;

/// @brief Method AddDateWords addr 0x23e4914 size 0x1d8 virtual false final false
 int32_t AddDateWords(::StringW pattern, int32_t index, ::StringW formatPostfix) ;

/// @brief Method ScanRepeatChar addr 0x23e4aec size 0x84 virtual false final false
static int32_t ScanRepeatChar(::StringW pattern, char16_t ch, int32_t index, ByRef<int32_t> count) ;

/// @brief Method AddIgnorableSymbols addr 0x23e47c8 size 0x14c virtual false final false
 void AddIgnorableSymbols(::StringW text) ;

/// @brief Method ScanDateWord addr 0x23e4b70 size 0x23c virtual false final false
 void ScanDateWord(::StringW pattern) ;

/// @brief Method GetDateWordsOfDTFI addr 0x23e2e14 size 0x2c0 virtual false final false
 ::ArrayW<::StringW> GetDateWordsOfDTFI(System::Globalization::DateTimeFormatInfo dtfi) ;

/// @brief Method GetFormatFlagGenitiveMonth addr 0x23e1248 size 0x40 virtual false final false
static System::Globalization::FORMATFLAGS GetFormatFlagGenitiveMonth(::ArrayW<::StringW> monthNames, ::ArrayW<::StringW> genitveMonthNames, ::ArrayW<::StringW> abbrevMonthNames, ::ArrayW<::StringW> genetiveAbbrevMonthNames) ;

/// @brief Method GetFormatFlagUseSpaceInMonthNames addr 0x23e1288 size 0xa4 virtual false final false
static System::Globalization::FORMATFLAGS GetFormatFlagUseSpaceInMonthNames(::ArrayW<::StringW> monthNames, ::ArrayW<::StringW> genitveMonthNames, ::ArrayW<::StringW> abbrevMonthNames, ::ArrayW<::StringW> genetiveAbbrevMonthNames) ;

/// @brief Method GetFormatFlagUseSpaceInDayNames addr 0x23e132c size 0x30 virtual false final false
static System::Globalization::FORMATFLAGS GetFormatFlagUseSpaceInDayNames(::ArrayW<::StringW> dayNames, ::ArrayW<::StringW> abbrevDayNames) ;

/// @brief Method GetFormatFlagUseHebrewCalendar addr 0x23e135c size 0x10 virtual false final false
static System::Globalization::FORMATFLAGS GetFormatFlagUseHebrewCalendar(int32_t calID) ;

/// @brief Method EqualStringArrays addr 0x23e4dac size 0xa8 virtual false final false
static bool EqualStringArrays(::ArrayW<::StringW> array1, ::ArrayW<::StringW> array2) ;

/// @brief Method ArrayElementsHaveSpace addr 0x23e50b0 size 0xf4 virtual false final false
static bool ArrayElementsHaveSpace(::ArrayW<::StringW> array) ;

/// @brief Method ArrayElementsBeginWithDigit addr 0x23e4e54 size 0x25c virtual false final false
static bool ArrayElementsBeginWithDigit(::ArrayW<::StringW> array) ;

static System::Globalization::DateTimeFormatInfoScanner New_ctor() ;

/// @brief Method .ctor addr 0x23e2d98 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::System__Globalization__DateTimeFormatInfoScanner__FoundDatePattern, "System.Globalization", "DateTimeFormatInfoScanner/FoundDatePattern");
NEED_NO_BOX(System::Globalization::DateTimeFormatInfoScanner);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::DateTimeFormatInfoScanner, "System.Globalization", "DateTimeFormatInfoScanner");
