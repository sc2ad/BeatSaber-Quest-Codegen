#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__DepthTextureMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::DepthTextureMode::DepthTextureMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::DepthTextureMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::DepthTextureMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::DepthTextureMode  ::UnityEngine::DepthTextureMode::None{0};
constexpr ::UnityEngine::DepthTextureMode  ::UnityEngine::DepthTextureMode::Depth{1};
constexpr ::UnityEngine::DepthTextureMode  ::UnityEngine::DepthTextureMode::DepthNormals{2};
constexpr ::UnityEngine::DepthTextureMode  ::UnityEngine::DepthTextureMode::MotionVectors{4};
} // end anonymous namespace
