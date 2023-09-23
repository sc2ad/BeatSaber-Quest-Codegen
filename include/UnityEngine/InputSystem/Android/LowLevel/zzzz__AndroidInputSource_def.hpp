#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidInputSource;
}
// Type: UnityEngine.InputSystem.Android.LowLevel::AndroidInputSource
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6533))
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource
struct CORDL_TYPE AndroidInputSource : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AndroidInputSource(int32_t value__) noexcept;


                    constexpr AndroidInputSource(AndroidInputSource const&) = default;
                    constexpr AndroidInputSource(AndroidInputSource&&) = default;
                    constexpr AndroidInputSource& operator=(AndroidInputSource const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AndroidInputSource& operator=(AndroidInputSource&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AndroidInputSource(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AndroidInputSource_Unwrapped : int32_t {
__Keyboard = 257,
__Dpad = 513,
__Gamepad = 1025,
__Touchscreen = 4098,
__Mouse = 8194,
__Stylus = 16386,
__Trackball = 65540,
__Touchpad = 1048584,
__Joystick = 16777232,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AndroidInputSource_Unwrapped () const noexcept {
return std::bit_cast<__AndroidInputSource_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Keyboard offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Keyboard;

/// @brief Field Dpad offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Dpad;

/// @brief Field Gamepad offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Gamepad;

/// @brief Field Touchscreen offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Touchscreen;

/// @brief Field Mouse offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Mouse;

/// @brief Field Stylus offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Stylus;

/// @brief Field Trackball offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Trackball;

/// @brief Field Touchpad offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Touchpad;

/// @brief Field Joystick offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource const Joystick;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource, "UnityEngine.InputSystem.Android.LowLevel", "AndroidInputSource");
