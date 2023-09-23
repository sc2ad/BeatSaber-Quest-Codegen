#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "OVR/OpenVR/zzzz__ChaperoneCalibrationState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr OVR::OpenVR::ChaperoneCalibrationState::ChaperoneCalibrationState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void OVR::OpenVR::ChaperoneCalibrationState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t OVR::OpenVR::ChaperoneCalibrationState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::OK{1};
constexpr OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Warning{100};
constexpr OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Warning_BaseStationMayHaveMoved{101};
constexpr OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Warning_BaseStationRemoved{102};
constexpr OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Warning_SeatedBoundsInvalid{103};
constexpr OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Error{200};
constexpr OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Error_BaseStationUninitialized{201};
constexpr OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Error_BaseStationConflict{202};
constexpr OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Error_PlayAreaInvalid{203};
constexpr OVR::OpenVR::ChaperoneCalibrationState  OVR::OpenVR::ChaperoneCalibrationState::Error_CollisionBoundsInvalid{204};
