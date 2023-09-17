#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace TMPro {
struct FontStyles;
}
// Type: TMPro::FontStyles
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12380))
// CS Name: TMPro.FontStyles
struct CORDL_TYPE FontStyles : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FontStyles(int32_t value__) noexcept;


                    constexpr FontStyles(FontStyles const&) = default;
                    constexpr FontStyles(FontStyles&&) = default;
                    constexpr FontStyles& operator=(FontStyles const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FontStyles& operator=(FontStyles&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FontStyles(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FontStyles_Unwrapped : int32_t {
__Normal = 0,
__Bold = 1,
__Italic = 2,
__Underline = 4,
__LowerCase = 8,
__UpperCase = 16,
__SmallCaps = 32,
__Strikethrough = 64,
__Superscript = 128,
__Subscript = 256,
__Highlight = 512,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FontStyles_Unwrapped () const noexcept {
return std::bit_cast<__FontStyles_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static ::TMPro::FontStyles const Normal;

/// @brief Field Bold offset 0
static ::TMPro::FontStyles const Bold;

/// @brief Field Italic offset 0
static ::TMPro::FontStyles const Italic;

/// @brief Field Underline offset 0
static ::TMPro::FontStyles const Underline;

/// @brief Field LowerCase offset 0
static ::TMPro::FontStyles const LowerCase;

/// @brief Field UpperCase offset 0
static ::TMPro::FontStyles const UpperCase;

/// @brief Field SmallCaps offset 0
static ::TMPro::FontStyles const SmallCaps;

/// @brief Field Strikethrough offset 0
static ::TMPro::FontStyles const Strikethrough;

/// @brief Field Superscript offset 0
static ::TMPro::FontStyles const Superscript;

/// @brief Field Subscript offset 0
static ::TMPro::FontStyles const Subscript;

/// @brief Field Highlight offset 0
static ::TMPro::FontStyles const Highlight;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::TMPro::FontStyles, "TMPro", "FontStyles");
