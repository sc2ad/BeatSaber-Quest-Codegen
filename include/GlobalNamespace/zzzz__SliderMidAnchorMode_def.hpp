#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct SliderMidAnchorMode;
}
// Type: ::SliderMidAnchorMode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14947))
// CS Name: SliderMidAnchorMode
struct CORDL_TYPE SliderMidAnchorMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SliderMidAnchorMode(int32_t value__) noexcept;


                    constexpr SliderMidAnchorMode(SliderMidAnchorMode const&) = default;
                    constexpr SliderMidAnchorMode(SliderMidAnchorMode&&) = default;
                    constexpr SliderMidAnchorMode& operator=(SliderMidAnchorMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SliderMidAnchorMode& operator=(SliderMidAnchorMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SliderMidAnchorMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SliderMidAnchorMode_Unwrapped : int32_t {
__Straight = 0,
__Clockwise = 1,
__CounterClockwise = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SliderMidAnchorMode_Unwrapped () const noexcept {
return std::bit_cast<__SliderMidAnchorMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Straight offset 0
static GlobalNamespace::SliderMidAnchorMode const Straight;

/// @brief Field Clockwise offset 0
static GlobalNamespace::SliderMidAnchorMode const Clockwise;

/// @brief Field CounterClockwise offset 0
static GlobalNamespace::SliderMidAnchorMode const CounterClockwise;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SliderMidAnchorMode, "", "SliderMidAnchorMode");
