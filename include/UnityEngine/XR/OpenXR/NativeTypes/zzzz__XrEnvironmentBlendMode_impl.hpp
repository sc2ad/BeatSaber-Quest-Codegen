#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrEnvironmentBlendMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode::XrEnvironmentBlendMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode  ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode::Opaque{1};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode  ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode::Additive{2};
constexpr ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode  ::UnityEngine::XR::OpenXR::NativeTypes::XrEnvironmentBlendMode::AlphaBlend{3};
} // end anonymous namespace
