#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrSessionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState::XrSessionState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState  ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState::Unknown{0};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState  ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState::Idle{1};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState  ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState::Ready{2};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState  ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState::Synchronized{3};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState  ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState::Visible{4};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState  ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState::Focused{5};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState  ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState::Stopping{6};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState  ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState::LossPending{7};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState  ::UnityEngine::XR::OpenXR::NativeTypes::XrSessionState::Exiting{8};
} // end anonymous namespace
