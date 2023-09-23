#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/XR/zzzz__InputDeviceCharacteristics_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::XR::InputDeviceCharacteristics::InputDeviceCharacteristics(uint32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::XR::InputDeviceCharacteristics::__set_value__(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::XR::InputDeviceCharacteristics::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::XR::InputDeviceCharacteristics  UnityEngine::XR::InputDeviceCharacteristics::None{0u};
constexpr UnityEngine::XR::InputDeviceCharacteristics  UnityEngine::XR::InputDeviceCharacteristics::HeadMounted{1u};
constexpr UnityEngine::XR::InputDeviceCharacteristics  UnityEngine::XR::InputDeviceCharacteristics::Camera{2u};
constexpr UnityEngine::XR::InputDeviceCharacteristics  UnityEngine::XR::InputDeviceCharacteristics::HeldInHand{4u};
constexpr UnityEngine::XR::InputDeviceCharacteristics  UnityEngine::XR::InputDeviceCharacteristics::HandTracking{8u};
constexpr UnityEngine::XR::InputDeviceCharacteristics  UnityEngine::XR::InputDeviceCharacteristics::EyeTracking{16u};
constexpr UnityEngine::XR::InputDeviceCharacteristics  UnityEngine::XR::InputDeviceCharacteristics::TrackedDevice{32u};
constexpr UnityEngine::XR::InputDeviceCharacteristics  UnityEngine::XR::InputDeviceCharacteristics::Controller{64u};
constexpr UnityEngine::XR::InputDeviceCharacteristics  UnityEngine::XR::InputDeviceCharacteristics::TrackingReference{128u};
constexpr UnityEngine::XR::InputDeviceCharacteristics  UnityEngine::XR::InputDeviceCharacteristics::Left{256u};
constexpr UnityEngine::XR::InputDeviceCharacteristics  UnityEngine::XR::InputDeviceCharacteristics::Right{512u};
constexpr UnityEngine::XR::InputDeviceCharacteristics  UnityEngine::XR::InputDeviceCharacteristics::Simulated6DOF{1024u};
