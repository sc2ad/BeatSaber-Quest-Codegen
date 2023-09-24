#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Globalization {
struct NumberStyles;
}
// Type: System.Globalization::NumberStyles
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3664))
// CS Name: System.Globalization.NumberStyles
struct CORDL_TYPE NumberStyles : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NumberStyles(int32_t value__) noexcept;


                    constexpr NumberStyles(NumberStyles const&) = default;
                    constexpr NumberStyles(NumberStyles&&) = default;
                    constexpr NumberStyles& operator=(NumberStyles const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NumberStyles& operator=(NumberStyles&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NumberStyles(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NumberStyles_Unwrapped : int32_t {
__None = 0,
__AllowLeadingWhite = 1,
__AllowTrailingWhite = 2,
__AllowLeadingSign = 4,
__AllowTrailingSign = 8,
__AllowParentheses = 16,
__AllowDecimalPoint = 32,
__AllowThousands = 64,
__AllowExponent = 128,
__AllowCurrencySymbol = 256,
__AllowHexSpecifier = 512,
__Integer = 7,
__HexNumber = 515,
__Number = 111,
__Float = 167,
__Currency = 383,
__Any = 511,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NumberStyles_Unwrapped () const noexcept {
return std::bit_cast<__NumberStyles_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Globalization::NumberStyles const None;

/// @brief Field AllowLeadingWhite offset 0
static System::Globalization::NumberStyles const AllowLeadingWhite;

/// @brief Field AllowTrailingWhite offset 0
static System::Globalization::NumberStyles const AllowTrailingWhite;

/// @brief Field AllowLeadingSign offset 0
static System::Globalization::NumberStyles const AllowLeadingSign;

/// @brief Field AllowTrailingSign offset 0
static System::Globalization::NumberStyles const AllowTrailingSign;

/// @brief Field AllowParentheses offset 0
static System::Globalization::NumberStyles const AllowParentheses;

/// @brief Field AllowDecimalPoint offset 0
static System::Globalization::NumberStyles const AllowDecimalPoint;

/// @brief Field AllowThousands offset 0
static System::Globalization::NumberStyles const AllowThousands;

/// @brief Field AllowExponent offset 0
static System::Globalization::NumberStyles const AllowExponent;

/// @brief Field AllowCurrencySymbol offset 0
static System::Globalization::NumberStyles const AllowCurrencySymbol;

/// @brief Field AllowHexSpecifier offset 0
static System::Globalization::NumberStyles const AllowHexSpecifier;

/// @brief Field Integer offset 0
static System::Globalization::NumberStyles const Integer;

/// @brief Field HexNumber offset 0
static System::Globalization::NumberStyles const HexNumber;

/// @brief Field Number offset 0
static System::Globalization::NumberStyles const Number;

/// @brief Field Float offset 0
static System::Globalization::NumberStyles const Float;

/// @brief Field Currency offset 0
static System::Globalization::NumberStyles const Currency;

/// @brief Field Any offset 0
static System::Globalization::NumberStyles const Any;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::NumberStyles, "System.Globalization", "NumberStyles");
