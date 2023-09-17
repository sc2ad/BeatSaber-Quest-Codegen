#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace TMPro {
struct ColorMode;
}
// Type: TMPro::ColorMode
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12275))
// CS Name: TMPro.ColorMode
struct CORDL_TYPE ColorMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ColorMode(int32_t value__) noexcept;


                    constexpr ColorMode(ColorMode const&) = default;
                    constexpr ColorMode(ColorMode&&) = default;
                    constexpr ColorMode& operator=(ColorMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ColorMode& operator=(ColorMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ColorMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ColorMode_Unwrapped : int32_t {
__Single = 0,
__HorizontalGradient = 1,
__VerticalGradient = 2,
__FourCornersGradient = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ColorMode_Unwrapped () const noexcept {
return std::bit_cast<__ColorMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Single offset 0
static ::TMPro::ColorMode const Single;

/// @brief Field HorizontalGradient offset 0
static ::TMPro::ColorMode const HorizontalGradient;

/// @brief Field VerticalGradient offset 0
static ::TMPro::ColorMode const VerticalGradient;

/// @brief Field FourCornersGradient offset 0
static ::TMPro::ColorMode const FourCornersGradient;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::TMPro::ColorMode, "TMPro", "ColorMode");
