#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace OVR::OpenVR {
struct EVRButtonId;
}
// Type: OVR.OpenVR::EVRButtonId
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9376))
// CS Name: OVR.OpenVR.EVRButtonId
struct CORDL_TYPE EVRButtonId : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EVRButtonId(int32_t value__) noexcept;


                    constexpr EVRButtonId(EVRButtonId const&) = default;
                    constexpr EVRButtonId(EVRButtonId&&) = default;
                    constexpr EVRButtonId& operator=(EVRButtonId const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EVRButtonId& operator=(EVRButtonId&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EVRButtonId(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EVRButtonId_Unwrapped : int32_t {
__k_EButton_System = 0,
__k_EButton_ApplicationMenu = 1,
__k_EButton_Grip = 2,
__k_EButton_DPad_Left = 3,
__k_EButton_DPad_Up = 4,
__k_EButton_DPad_Right = 5,
__k_EButton_DPad_Down = 6,
__k_EButton_A = 7,
__k_EButton_ProximitySensor = 31,
__k_EButton_Axis0 = 32,
__k_EButton_Axis1 = 33,
__k_EButton_Axis2 = 34,
__k_EButton_Axis3 = 35,
__k_EButton_Axis4 = 36,
__k_EButton_SteamVR_Touchpad = 32,
__k_EButton_SteamVR_Trigger = 33,
__k_EButton_Dashboard_Back = 2,
__k_EButton_Knuckles_A = 2,
__k_EButton_Knuckles_B = 1,
__k_EButton_Knuckles_JoyStick = 35,
__k_EButton_Max = 64,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EVRButtonId_Unwrapped () const noexcept {
return std::bit_cast<__EVRButtonId_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field k_EButton_System offset 0
static ::OVR::OpenVR::EVRButtonId const k_EButton_System;

/// @brief Field k_EButton_ApplicationMenu offset 0
static ::OVR::OpenVR::EVRButtonId const k_EButton_ApplicationMenu;

/// @brief Field k_EButton_Grip offset 0
static ::OVR::OpenVR::EVRButtonId const k_EButton_Grip;

/// @brief Field k_EButton_DPad_Left offset 0
static ::OVR::OpenVR::EVRButtonId const k_EButton_DPad_Left;

/// @brief Field k_EButton_DPad_Up offset 0
static ::OVR::OpenVR::EVRButtonId const k_EButton_DPad_Up;

/// @brief Field k_EButton_DPad_Right offset 0
static ::OVR::OpenVR::EVRButtonId const k_EButton_DPad_Right;

/// @brief Field k_EButton_DPad_Down offset 0
static ::OVR::OpenVR::EVRButtonId const k_EButton_DPad_Down;

/// @brief Field k_EButton_A offset 0
static ::OVR::OpenVR::EVRButtonId const k_EButton_A;

/// @brief Field k_EButton_ProximitySensor offset 0
static ::OVR::OpenVR::EVRButtonId const k_EButton_ProximitySensor;

/// @brief Field k_EButton_Axis0 offset 0
static ::OVR::OpenVR::EVRButtonId const k_EButton_Axis0;

/// @brief Field k_EButton_Axis1 offset 0
static ::OVR::OpenVR::EVRButtonId const k_EButton_Axis1;

/// @brief Field k_EButton_Axis2 offset 0
static ::OVR::OpenVR::EVRButtonId const k_EButton_Axis2;

/// @brief Field k_EButton_Axis3 offset 0
static ::OVR::OpenVR::EVRButtonId const k_EButton_Axis3;

/// @brief Field k_EButton_Axis4 offset 0
static ::OVR::OpenVR::EVRButtonId const k_EButton_Axis4;

/// @brief Field k_EButton_SteamVR_Touchpad offset 0
static ::OVR::OpenVR::EVRButtonId const k_EButton_SteamVR_Touchpad;

/// @brief Field k_EButton_SteamVR_Trigger offset 0
static ::OVR::OpenVR::EVRButtonId const k_EButton_SteamVR_Trigger;

/// @brief Field k_EButton_Dashboard_Back offset 0
static ::OVR::OpenVR::EVRButtonId const k_EButton_Dashboard_Back;

/// @brief Field k_EButton_Knuckles_A offset 0
static ::OVR::OpenVR::EVRButtonId const k_EButton_Knuckles_A;

/// @brief Field k_EButton_Knuckles_B offset 0
static ::OVR::OpenVR::EVRButtonId const k_EButton_Knuckles_B;

/// @brief Field k_EButton_Knuckles_JoyStick offset 0
static ::OVR::OpenVR::EVRButtonId const k_EButton_Knuckles_JoyStick;

/// @brief Field k_EButton_Max offset 0
static ::OVR::OpenVR::EVRButtonId const k_EButton_Max;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def OVR::OpenVR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRButtonId, "OVR.OpenVR", "EVRButtonId");
