#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements {
struct ScrollViewMode;
}
// Type: UnityEngine.UIElements::ScrollViewMode
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7137))
// CS Name: UnityEngine.UIElements.ScrollViewMode
struct CORDL_TYPE ScrollViewMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ScrollViewMode(int32_t value__) noexcept;


                    constexpr ScrollViewMode(ScrollViewMode const&) = default;
                    constexpr ScrollViewMode(ScrollViewMode&&) = default;
                    constexpr ScrollViewMode& operator=(ScrollViewMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ScrollViewMode& operator=(ScrollViewMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ScrollViewMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ScrollViewMode_Unwrapped : int32_t {
__Vertical = 0,
__Horizontal = 1,
__VerticalAndHorizontal = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScrollViewMode_Unwrapped () const noexcept {
return std::bit_cast<__ScrollViewMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Vertical offset 0
static UnityEngine::UIElements::ScrollViewMode const Vertical;

/// @brief Field Horizontal offset 0
static UnityEngine::UIElements::ScrollViewMode const Horizontal;

/// @brief Field VerticalAndHorizontal offset 0
static UnityEngine::UIElements::ScrollViewMode const VerticalAndHorizontal;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::ScrollViewMode, "UnityEngine.UIElements", "ScrollViewMode");
