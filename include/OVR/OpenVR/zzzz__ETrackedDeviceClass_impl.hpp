#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "OVR/OpenVR/zzzz__ETrackedDeviceClass_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::ETrackedDeviceClass::ETrackedDeviceClass(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::OVR::OpenVR::ETrackedDeviceClass::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::OVR::OpenVR::ETrackedDeviceClass::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::OVR::OpenVR::ETrackedDeviceClass  ::OVR::OpenVR::ETrackedDeviceClass::Invalid{0};
constexpr ::OVR::OpenVR::ETrackedDeviceClass  ::OVR::OpenVR::ETrackedDeviceClass::HMD{1};
constexpr ::OVR::OpenVR::ETrackedDeviceClass  ::OVR::OpenVR::ETrackedDeviceClass::Controller{2};
constexpr ::OVR::OpenVR::ETrackedDeviceClass  ::OVR::OpenVR::ETrackedDeviceClass::GenericTracker{3};
constexpr ::OVR::OpenVR::ETrackedDeviceClass  ::OVR::OpenVR::ETrackedDeviceClass::TrackingReference{4};
constexpr ::OVR::OpenVR::ETrackedDeviceClass  ::OVR::OpenVR::ETrackedDeviceClass::DisplayRedirect{5};
constexpr ::OVR::OpenVR::ETrackedDeviceClass  ::OVR::OpenVR::ETrackedDeviceClass::Max{6};
} // end anonymous namespace
