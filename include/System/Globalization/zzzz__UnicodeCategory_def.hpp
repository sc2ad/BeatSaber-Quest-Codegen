#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Globalization {
struct UnicodeCategory;
}
// Type: System.Globalization::UnicodeCategory
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3679))
// CS Name: System.Globalization.UnicodeCategory
struct CORDL_TYPE UnicodeCategory : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnicodeCategory(int32_t value__) noexcept;


                    constexpr UnicodeCategory(UnicodeCategory const&) = default;
                    constexpr UnicodeCategory(UnicodeCategory&&) = default;
                    constexpr UnicodeCategory& operator=(UnicodeCategory const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnicodeCategory& operator=(UnicodeCategory&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnicodeCategory(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnicodeCategory_Unwrapped : int32_t {
__UppercaseLetter = 0,
__LowercaseLetter = 1,
__TitlecaseLetter = 2,
__ModifierLetter = 3,
__OtherLetter = 4,
__NonSpacingMark = 5,
__SpacingCombiningMark = 6,
__EnclosingMark = 7,
__DecimalDigitNumber = 8,
__LetterNumber = 9,
__OtherNumber = 10,
__SpaceSeparator = 11,
__LineSeparator = 12,
__ParagraphSeparator = 13,
__Control = 14,
__Format = 15,
__Surrogate = 16,
__PrivateUse = 17,
__ConnectorPunctuation = 18,
__DashPunctuation = 19,
__OpenPunctuation = 20,
__ClosePunctuation = 21,
__InitialQuotePunctuation = 22,
__FinalQuotePunctuation = 23,
__OtherPunctuation = 24,
__MathSymbol = 25,
__CurrencySymbol = 26,
__ModifierSymbol = 27,
__OtherSymbol = 28,
__OtherNotAssigned = 29,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnicodeCategory_Unwrapped () const noexcept {
return std::bit_cast<__UnicodeCategory_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field UppercaseLetter offset 0
static System::Globalization::UnicodeCategory const UppercaseLetter;

/// @brief Field LowercaseLetter offset 0
static System::Globalization::UnicodeCategory const LowercaseLetter;

/// @brief Field TitlecaseLetter offset 0
static System::Globalization::UnicodeCategory const TitlecaseLetter;

/// @brief Field ModifierLetter offset 0
static System::Globalization::UnicodeCategory const ModifierLetter;

/// @brief Field OtherLetter offset 0
static System::Globalization::UnicodeCategory const OtherLetter;

/// @brief Field NonSpacingMark offset 0
static System::Globalization::UnicodeCategory const NonSpacingMark;

/// @brief Field SpacingCombiningMark offset 0
static System::Globalization::UnicodeCategory const SpacingCombiningMark;

/// @brief Field EnclosingMark offset 0
static System::Globalization::UnicodeCategory const EnclosingMark;

/// @brief Field DecimalDigitNumber offset 0
static System::Globalization::UnicodeCategory const DecimalDigitNumber;

/// @brief Field LetterNumber offset 0
static System::Globalization::UnicodeCategory const LetterNumber;

/// @brief Field OtherNumber offset 0
static System::Globalization::UnicodeCategory const OtherNumber;

/// @brief Field SpaceSeparator offset 0
static System::Globalization::UnicodeCategory const SpaceSeparator;

/// @brief Field LineSeparator offset 0
static System::Globalization::UnicodeCategory const LineSeparator;

/// @brief Field ParagraphSeparator offset 0
static System::Globalization::UnicodeCategory const ParagraphSeparator;

/// @brief Field Control offset 0
static System::Globalization::UnicodeCategory const Control;

/// @brief Field Format offset 0
static System::Globalization::UnicodeCategory const Format;

/// @brief Field Surrogate offset 0
static System::Globalization::UnicodeCategory const Surrogate;

/// @brief Field PrivateUse offset 0
static System::Globalization::UnicodeCategory const PrivateUse;

/// @brief Field ConnectorPunctuation offset 0
static System::Globalization::UnicodeCategory const ConnectorPunctuation;

/// @brief Field DashPunctuation offset 0
static System::Globalization::UnicodeCategory const DashPunctuation;

/// @brief Field OpenPunctuation offset 0
static System::Globalization::UnicodeCategory const OpenPunctuation;

/// @brief Field ClosePunctuation offset 0
static System::Globalization::UnicodeCategory const ClosePunctuation;

/// @brief Field InitialQuotePunctuation offset 0
static System::Globalization::UnicodeCategory const InitialQuotePunctuation;

/// @brief Field FinalQuotePunctuation offset 0
static System::Globalization::UnicodeCategory const FinalQuotePunctuation;

/// @brief Field OtherPunctuation offset 0
static System::Globalization::UnicodeCategory const OtherPunctuation;

/// @brief Field MathSymbol offset 0
static System::Globalization::UnicodeCategory const MathSymbol;

/// @brief Field CurrencySymbol offset 0
static System::Globalization::UnicodeCategory const CurrencySymbol;

/// @brief Field ModifierSymbol offset 0
static System::Globalization::UnicodeCategory const ModifierSymbol;

/// @brief Field OtherSymbol offset 0
static System::Globalization::UnicodeCategory const OtherSymbol;

/// @brief Field OtherNotAssigned offset 0
static System::Globalization::UnicodeCategory const OtherNotAssigned;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::UnicodeCategory, "System.Globalization", "UnicodeCategory");
