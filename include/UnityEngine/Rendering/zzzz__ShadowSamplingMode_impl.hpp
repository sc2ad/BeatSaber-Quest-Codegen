#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/Rendering/zzzz__ShadowSamplingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ShadowSamplingMode::ShadowSamplingMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Rendering::ShadowSamplingMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Rendering::ShadowSamplingMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Rendering::ShadowSamplingMode  ::UnityEngine::Rendering::ShadowSamplingMode::CompareDepths{0};
constexpr ::UnityEngine::Rendering::ShadowSamplingMode  ::UnityEngine::Rendering::ShadowSamplingMode::RawDepth{1};
constexpr ::UnityEngine::Rendering::ShadowSamplingMode  ::UnityEngine::Rendering::ShadowSamplingMode::None{2};
} // end anonymous namespace
