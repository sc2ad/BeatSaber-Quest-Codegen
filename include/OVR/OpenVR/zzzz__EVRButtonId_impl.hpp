#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__EVRButtonId_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRButtonId::EVRButtonId(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::EVRButtonId::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::EVRButtonId::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::EVRButtonId  ::OVR::OpenVR::EVRButtonId::k_EButton_System{0};
constexpr ::OVR::OpenVR::EVRButtonId  ::OVR::OpenVR::EVRButtonId::k_EButton_ApplicationMenu{1};
constexpr ::OVR::OpenVR::EVRButtonId  ::OVR::OpenVR::EVRButtonId::k_EButton_Grip{2};
constexpr ::OVR::OpenVR::EVRButtonId  ::OVR::OpenVR::EVRButtonId::k_EButton_DPad_Left{3};
constexpr ::OVR::OpenVR::EVRButtonId  ::OVR::OpenVR::EVRButtonId::k_EButton_DPad_Up{4};
constexpr ::OVR::OpenVR::EVRButtonId  ::OVR::OpenVR::EVRButtonId::k_EButton_DPad_Right{5};
constexpr ::OVR::OpenVR::EVRButtonId  ::OVR::OpenVR::EVRButtonId::k_EButton_DPad_Down{6};
constexpr ::OVR::OpenVR::EVRButtonId  ::OVR::OpenVR::EVRButtonId::k_EButton_A{7};
constexpr ::OVR::OpenVR::EVRButtonId  ::OVR::OpenVR::EVRButtonId::k_EButton_ProximitySensor{31};
constexpr ::OVR::OpenVR::EVRButtonId  ::OVR::OpenVR::EVRButtonId::k_EButton_Axis0{32};
constexpr ::OVR::OpenVR::EVRButtonId  ::OVR::OpenVR::EVRButtonId::k_EButton_Axis1{33};
constexpr ::OVR::OpenVR::EVRButtonId  ::OVR::OpenVR::EVRButtonId::k_EButton_Axis2{34};
constexpr ::OVR::OpenVR::EVRButtonId  ::OVR::OpenVR::EVRButtonId::k_EButton_Axis3{35};
constexpr ::OVR::OpenVR::EVRButtonId  ::OVR::OpenVR::EVRButtonId::k_EButton_Axis4{36};
constexpr ::OVR::OpenVR::EVRButtonId  ::OVR::OpenVR::EVRButtonId::k_EButton_SteamVR_Touchpad{32};
constexpr ::OVR::OpenVR::EVRButtonId  ::OVR::OpenVR::EVRButtonId::k_EButton_SteamVR_Trigger{33};
constexpr ::OVR::OpenVR::EVRButtonId  ::OVR::OpenVR::EVRButtonId::k_EButton_Dashboard_Back{2};
constexpr ::OVR::OpenVR::EVRButtonId  ::OVR::OpenVR::EVRButtonId::k_EButton_Knuckles_A{2};
constexpr ::OVR::OpenVR::EVRButtonId  ::OVR::OpenVR::EVRButtonId::k_EButton_Knuckles_B{1};
constexpr ::OVR::OpenVR::EVRButtonId  ::OVR::OpenVR::EVRButtonId::k_EButton_Knuckles_JoyStick{35};
constexpr ::OVR::OpenVR::EVRButtonId  ::OVR::OpenVR::EVRButtonId::k_EButton_Max{64};
} // end anonymous namespace
