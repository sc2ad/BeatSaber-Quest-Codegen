#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__VROverlayFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::VROverlayFlags::VROverlayFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::VROverlayFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::VROverlayFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::VROverlayFlags  ::OVR::OpenVR::VROverlayFlags::None{0};
constexpr ::OVR::OpenVR::VROverlayFlags  ::OVR::OpenVR::VROverlayFlags::Curved{1};
constexpr ::OVR::OpenVR::VROverlayFlags  ::OVR::OpenVR::VROverlayFlags::RGSS4X{2};
constexpr ::OVR::OpenVR::VROverlayFlags  ::OVR::OpenVR::VROverlayFlags::NoDashboardTab{3};
constexpr ::OVR::OpenVR::VROverlayFlags  ::OVR::OpenVR::VROverlayFlags::AcceptsGamepadEvents{4};
constexpr ::OVR::OpenVR::VROverlayFlags  ::OVR::OpenVR::VROverlayFlags::ShowGamepadFocus{5};
constexpr ::OVR::OpenVR::VROverlayFlags  ::OVR::OpenVR::VROverlayFlags::SendVRScrollEvents{6};
constexpr ::OVR::OpenVR::VROverlayFlags  ::OVR::OpenVR::VROverlayFlags::SendVRTouchpadEvents{7};
constexpr ::OVR::OpenVR::VROverlayFlags  ::OVR::OpenVR::VROverlayFlags::ShowTouchPadScrollWheel{8};
constexpr ::OVR::OpenVR::VROverlayFlags  ::OVR::OpenVR::VROverlayFlags::TransferOwnershipToInternalProcess{9};
constexpr ::OVR::OpenVR::VROverlayFlags  ::OVR::OpenVR::VROverlayFlags::SideBySide_Parallel{10};
constexpr ::OVR::OpenVR::VROverlayFlags  ::OVR::OpenVR::VROverlayFlags::SideBySide_Crossed{11};
constexpr ::OVR::OpenVR::VROverlayFlags  ::OVR::OpenVR::VROverlayFlags::Panorama{12};
constexpr ::OVR::OpenVR::VROverlayFlags  ::OVR::OpenVR::VROverlayFlags::StereoPanorama{13};
constexpr ::OVR::OpenVR::VROverlayFlags  ::OVR::OpenVR::VROverlayFlags::SortWithNonSceneOverlays{14};
constexpr ::OVR::OpenVR::VROverlayFlags  ::OVR::OpenVR::VROverlayFlags::VisibleInDashboard{15};
} // end anonymous namespace
