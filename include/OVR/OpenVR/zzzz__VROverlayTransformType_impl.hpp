#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "OVR/OpenVR/zzzz__VROverlayTransformType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::VROverlayTransformType::VROverlayTransformType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void OVR::OpenVR::VROverlayTransformType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t OVR::OpenVR::VROverlayTransformType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr OVR::OpenVR::VROverlayTransformType  OVR::OpenVR::VROverlayTransformType::VROverlayTransform_Absolute{0};
constexpr OVR::OpenVR::VROverlayTransformType  OVR::OpenVR::VROverlayTransformType::VROverlayTransform_TrackedDeviceRelative{1};
constexpr OVR::OpenVR::VROverlayTransformType  OVR::OpenVR::VROverlayTransformType::VROverlayTransform_SystemOverlay{2};
constexpr OVR::OpenVR::VROverlayTransformType  OVR::OpenVR::VROverlayTransformType::VROverlayTransform_TrackedComponent{3};
