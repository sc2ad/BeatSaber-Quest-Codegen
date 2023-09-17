#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct GamepadButton;
}
// Type: UnityEngine.InputSystem.LowLevel::GamepadButton
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6576))
// CS Name: UnityEngine.InputSystem.LowLevel.GamepadButton
struct CORDL_TYPE GamepadButton : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GamepadButton(int32_t value__) noexcept;


                    constexpr GamepadButton(GamepadButton const&) = default;
                    constexpr GamepadButton(GamepadButton&&) = default;
                    constexpr GamepadButton& operator=(GamepadButton const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GamepadButton& operator=(GamepadButton&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GamepadButton(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GamepadButton_Unwrapped : int32_t {
__DpadUp = 0,
__DpadDown = 1,
__DpadLeft = 2,
__DpadRight = 3,
__North = 4,
__East = 5,
__South = 6,
__West = 7,
__LeftStick = 8,
__RightStick = 9,
__LeftShoulder = 10,
__RightShoulder = 11,
__Start = 12,
__Select = 13,
__LeftTrigger = 32,
__RightTrigger = 33,
__X = 7,
__Y = 4,
__A = 6,
__B = 5,
__Cross = 6,
__Square = 7,
__Triangle = 4,
__Circle = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GamepadButton_Unwrapped () const noexcept {
return std::bit_cast<__GamepadButton_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field DpadUp offset 0
static ::UnityEngine::InputSystem::LowLevel::GamepadButton const DpadUp;

/// @brief Field DpadDown offset 0
static ::UnityEngine::InputSystem::LowLevel::GamepadButton const DpadDown;

/// @brief Field DpadLeft offset 0
static ::UnityEngine::InputSystem::LowLevel::GamepadButton const DpadLeft;

/// @brief Field DpadRight offset 0
static ::UnityEngine::InputSystem::LowLevel::GamepadButton const DpadRight;

/// @brief Field North offset 0
static ::UnityEngine::InputSystem::LowLevel::GamepadButton const North;

/// @brief Field East offset 0
static ::UnityEngine::InputSystem::LowLevel::GamepadButton const East;

/// @brief Field South offset 0
static ::UnityEngine::InputSystem::LowLevel::GamepadButton const South;

/// @brief Field West offset 0
static ::UnityEngine::InputSystem::LowLevel::GamepadButton const West;

/// @brief Field LeftStick offset 0
static ::UnityEngine::InputSystem::LowLevel::GamepadButton const LeftStick;

/// @brief Field RightStick offset 0
static ::UnityEngine::InputSystem::LowLevel::GamepadButton const RightStick;

/// @brief Field LeftShoulder offset 0
static ::UnityEngine::InputSystem::LowLevel::GamepadButton const LeftShoulder;

/// @brief Field RightShoulder offset 0
static ::UnityEngine::InputSystem::LowLevel::GamepadButton const RightShoulder;

/// @brief Field Start offset 0
static ::UnityEngine::InputSystem::LowLevel::GamepadButton const Start;

/// @brief Field Select offset 0
static ::UnityEngine::InputSystem::LowLevel::GamepadButton const Select;

/// @brief Field LeftTrigger offset 0
static ::UnityEngine::InputSystem::LowLevel::GamepadButton const LeftTrigger;

/// @brief Field RightTrigger offset 0
static ::UnityEngine::InputSystem::LowLevel::GamepadButton const RightTrigger;

/// @brief Field X offset 0
static ::UnityEngine::InputSystem::LowLevel::GamepadButton const X;

/// @brief Field Y offset 0
static ::UnityEngine::InputSystem::LowLevel::GamepadButton const Y;

/// @brief Field A offset 0
static ::UnityEngine::InputSystem::LowLevel::GamepadButton const A;

/// @brief Field B offset 0
static ::UnityEngine::InputSystem::LowLevel::GamepadButton const B;

/// @brief Field Cross offset 0
static ::UnityEngine::InputSystem::LowLevel::GamepadButton const Cross;

/// @brief Field Square offset 0
static ::UnityEngine::InputSystem::LowLevel::GamepadButton const Square;

/// @brief Field Triangle offset 0
static ::UnityEngine::InputSystem::LowLevel::GamepadButton const Triangle;

/// @brief Field Circle offset 0
static ::UnityEngine::InputSystem::LowLevel::GamepadButton const Circle;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::GamepadButton, "UnityEngine.InputSystem.LowLevel", "GamepadButton");
