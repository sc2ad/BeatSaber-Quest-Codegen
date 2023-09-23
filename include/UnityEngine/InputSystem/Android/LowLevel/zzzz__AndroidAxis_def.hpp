#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidAxis;
}
// Type: UnityEngine.InputSystem.Android.LowLevel::AndroidAxis
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6528))
// CS Name: UnityEngine.InputSystem.Android.LowLevel.AndroidAxis
struct CORDL_TYPE AndroidAxis : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AndroidAxis(int32_t value__) noexcept;


                    constexpr AndroidAxis(AndroidAxis const&) = default;
                    constexpr AndroidAxis(AndroidAxis&&) = default;
                    constexpr AndroidAxis& operator=(AndroidAxis const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AndroidAxis& operator=(AndroidAxis&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AndroidAxis(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AndroidAxis_Unwrapped : int32_t {
__X = 0,
__Y = 1,
__Pressure = 2,
__Size = 3,
__TouchMajor = 4,
__TouchMinor = 5,
__ToolMajor = 6,
__ToolMinor = 7,
__Orientation = 8,
__Vscroll = 9,
__Hscroll = 10,
__Z = 11,
__Rx = 12,
__Ry = 13,
__Rz = 14,
__HatX = 15,
__HatY = 16,
__Ltrigger = 17,
__Rtrigger = 18,
__Throttle = 19,
__Rudder = 20,
__Wheel = 21,
__Gas = 22,
__Brake = 23,
__Distance = 24,
__Tilt = 25,
__Generic1 = 32,
__Generic2 = 33,
__Generic3 = 34,
__Generic4 = 35,
__Generic5 = 36,
__Generic6 = 37,
__Generic7 = 38,
__Generic8 = 39,
__Generic9 = 40,
__Generic10 = 41,
__Generic11 = 42,
__Generic12 = 43,
__Generic13 = 44,
__Generic14 = 45,
__Generic15 = 46,
__Generic16 = 47,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AndroidAxis_Unwrapped () const noexcept {
return std::bit_cast<__AndroidAxis_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field X offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const X;

/// @brief Field Y offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Y;

/// @brief Field Pressure offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Pressure;

/// @brief Field Size offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Size;

/// @brief Field TouchMajor offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const TouchMajor;

/// @brief Field TouchMinor offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const TouchMinor;

/// @brief Field ToolMajor offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const ToolMajor;

/// @brief Field ToolMinor offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const ToolMinor;

/// @brief Field Orientation offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Orientation;

/// @brief Field Vscroll offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Vscroll;

/// @brief Field Hscroll offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Hscroll;

/// @brief Field Z offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Z;

/// @brief Field Rx offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Rx;

/// @brief Field Ry offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Ry;

/// @brief Field Rz offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Rz;

/// @brief Field HatX offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const HatX;

/// @brief Field HatY offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const HatY;

/// @brief Field Ltrigger offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Ltrigger;

/// @brief Field Rtrigger offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Rtrigger;

/// @brief Field Throttle offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Throttle;

/// @brief Field Rudder offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Rudder;

/// @brief Field Wheel offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Wheel;

/// @brief Field Gas offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Gas;

/// @brief Field Brake offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Brake;

/// @brief Field Distance offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Distance;

/// @brief Field Tilt offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Tilt;

/// @brief Field Generic1 offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic1;

/// @brief Field Generic2 offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic2;

/// @brief Field Generic3 offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic3;

/// @brief Field Generic4 offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic4;

/// @brief Field Generic5 offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic5;

/// @brief Field Generic6 offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic6;

/// @brief Field Generic7 offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic7;

/// @brief Field Generic8 offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic8;

/// @brief Field Generic9 offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic9;

/// @brief Field Generic10 offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic10;

/// @brief Field Generic11 offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic11;

/// @brief Field Generic12 offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic12;

/// @brief Field Generic13 offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic13;

/// @brief Field Generic14 offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic14;

/// @brief Field Generic15 offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic15;

/// @brief Field Generic16 offset 0
static UnityEngine::InputSystem::Android::LowLevel::AndroidAxis const Generic16;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Android::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Android::LowLevel::AndroidAxis, "UnityEngine.InputSystem.Android.LowLevel", "AndroidAxis");
