#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "OVR/OpenVR/zzzz__EVRTrackedCameraFrameLayout_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::EVRTrackedCameraFrameLayout::EVRTrackedCameraFrameLayout(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void OVR::OpenVR::EVRTrackedCameraFrameLayout::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t OVR::OpenVR::EVRTrackedCameraFrameLayout::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr OVR::OpenVR::EVRTrackedCameraFrameLayout  OVR::OpenVR::EVRTrackedCameraFrameLayout::Mono{1};
constexpr OVR::OpenVR::EVRTrackedCameraFrameLayout  OVR::OpenVR::EVRTrackedCameraFrameLayout::Stereo{2};
constexpr OVR::OpenVR::EVRTrackedCameraFrameLayout  OVR::OpenVR::EVRTrackedCameraFrameLayout::VerticalLayout{16};
constexpr OVR::OpenVR::EVRTrackedCameraFrameLayout  OVR::OpenVR::EVRTrackedCameraFrameLayout::HorizontalLayout{32};
