#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/XR/zzzz__InputTrackingState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::InputTrackingState::InputTrackingState(uint32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::XR::InputTrackingState::__set_value__(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t ::UnityEngine::XR::InputTrackingState::__get_value__() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::XR::InputTrackingState  ::UnityEngine::XR::InputTrackingState::None{0u};
constexpr ::UnityEngine::XR::InputTrackingState  ::UnityEngine::XR::InputTrackingState::Position{1u};
constexpr ::UnityEngine::XR::InputTrackingState  ::UnityEngine::XR::InputTrackingState::Rotation{2u};
constexpr ::UnityEngine::XR::InputTrackingState  ::UnityEngine::XR::InputTrackingState::Velocity{4u};
constexpr ::UnityEngine::XR::InputTrackingState  ::UnityEngine::XR::InputTrackingState::AngularVelocity{8u};
constexpr ::UnityEngine::XR::InputTrackingState  ::UnityEngine::XR::InputTrackingState::Acceleration{16u};
constexpr ::UnityEngine::XR::InputTrackingState  ::UnityEngine::XR::InputTrackingState::AngularAcceleration{32u};
constexpr ::UnityEngine::XR::InputTrackingState  ::UnityEngine::XR::InputTrackingState::All{63u};
} // end anonymous namespace
