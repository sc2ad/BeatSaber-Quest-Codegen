#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "OVR/OpenVR/zzzz__ETrackedControllerRole_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::ETrackedControllerRole::ETrackedControllerRole(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void OVR::OpenVR::ETrackedControllerRole::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t OVR::OpenVR::ETrackedControllerRole::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr OVR::OpenVR::ETrackedControllerRole  OVR::OpenVR::ETrackedControllerRole::Invalid{0};
constexpr OVR::OpenVR::ETrackedControllerRole  OVR::OpenVR::ETrackedControllerRole::LeftHand{1};
constexpr OVR::OpenVR::ETrackedControllerRole  OVR::OpenVR::ETrackedControllerRole::RightHand{2};
constexpr OVR::OpenVR::ETrackedControllerRole  OVR::OpenVR::ETrackedControllerRole::OptOut{3};
constexpr OVR::OpenVR::ETrackedControllerRole  OVR::OpenVR::ETrackedControllerRole::Max{4};
