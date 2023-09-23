#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "OVR/OpenVR/zzzz__ETrackingResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::ETrackingResult::ETrackingResult(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void OVR::OpenVR::ETrackingResult::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t OVR::OpenVR::ETrackingResult::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr OVR::OpenVR::ETrackingResult  OVR::OpenVR::ETrackingResult::Uninitialized{1};
constexpr OVR::OpenVR::ETrackingResult  OVR::OpenVR::ETrackingResult::Calibrating_InProgress{100};
constexpr OVR::OpenVR::ETrackingResult  OVR::OpenVR::ETrackingResult::Calibrating_OutOfRange{101};
constexpr OVR::OpenVR::ETrackingResult  OVR::OpenVR::ETrackingResult::Running_OK{200};
constexpr OVR::OpenVR::ETrackingResult  OVR::OpenVR::ETrackingResult::Running_OutOfRange{201};
