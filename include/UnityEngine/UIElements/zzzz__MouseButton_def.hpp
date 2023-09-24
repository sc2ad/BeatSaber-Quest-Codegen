#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements {
struct MouseButton;
}
// Type: UnityEngine.UIElements::MouseButton
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6857))
// CS Name: UnityEngine.UIElements.MouseButton
struct CORDL_TYPE MouseButton : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MouseButton(int32_t value__) noexcept;


                    constexpr MouseButton(MouseButton const&) = default;
                    constexpr MouseButton(MouseButton&&) = default;
                    constexpr MouseButton& operator=(MouseButton const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MouseButton& operator=(MouseButton&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MouseButton(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MouseButton_Unwrapped : int32_t {
__LeftMouse = 0,
__RightMouse = 1,
__MiddleMouse = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MouseButton_Unwrapped () const noexcept {
return std::bit_cast<__MouseButton_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field LeftMouse offset 0
static UnityEngine::UIElements::MouseButton const LeftMouse;

/// @brief Field RightMouse offset 0
static UnityEngine::UIElements::MouseButton const RightMouse;

/// @brief Field MiddleMouse offset 0
static UnityEngine::UIElements::MouseButton const MiddleMouse;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::MouseButton, "UnityEngine.UIElements", "MouseButton");
