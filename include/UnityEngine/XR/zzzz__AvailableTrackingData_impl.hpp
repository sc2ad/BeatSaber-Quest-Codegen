#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/XR/zzzz__AvailableTrackingData_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::AvailableTrackingData::AvailableTrackingData(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::XR::AvailableTrackingData::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::XR::AvailableTrackingData::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::XR::AvailableTrackingData  ::UnityEngine::XR::AvailableTrackingData::None{0};
constexpr ::UnityEngine::XR::AvailableTrackingData  ::UnityEngine::XR::AvailableTrackingData::PositionAvailable{1};
constexpr ::UnityEngine::XR::AvailableTrackingData  ::UnityEngine::XR::AvailableTrackingData::RotationAvailable{2};
constexpr ::UnityEngine::XR::AvailableTrackingData  ::UnityEngine::XR::AvailableTrackingData::VelocityAvailable{4};
constexpr ::UnityEngine::XR::AvailableTrackingData  ::UnityEngine::XR::AvailableTrackingData::AngularVelocityAvailable{8};
constexpr ::UnityEngine::XR::AvailableTrackingData  ::UnityEngine::XR::AvailableTrackingData::AccelerationAvailable{16};
constexpr ::UnityEngine::XR::AvailableTrackingData  ::UnityEngine::XR::AvailableTrackingData::AngularAccelerationAvailable{32};
} // end anonymous namespace
