#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "OVR/OpenVR/zzzz__EVRApplicationTransitionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::EVRApplicationTransitionState::EVRApplicationTransitionState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void OVR::OpenVR::EVRApplicationTransitionState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t OVR::OpenVR::EVRApplicationTransitionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr OVR::OpenVR::EVRApplicationTransitionState  OVR::OpenVR::EVRApplicationTransitionState::VRApplicationTransition_None{0};
constexpr OVR::OpenVR::EVRApplicationTransitionState  OVR::OpenVR::EVRApplicationTransitionState::VRApplicationTransition_OldAppQuitSent{10};
constexpr OVR::OpenVR::EVRApplicationTransitionState  OVR::OpenVR::EVRApplicationTransitionState::VRApplicationTransition_WaitingForExternalLaunch{11};
constexpr OVR::OpenVR::EVRApplicationTransitionState  OVR::OpenVR::EVRApplicationTransitionState::VRApplicationTransition_NewAppLaunched{20};
