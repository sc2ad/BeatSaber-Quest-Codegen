#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__ParticleSystemGradientMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystemGradientMode::ParticleSystemGradientMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::ParticleSystemGradientMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ParticleSystemGradientMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::ParticleSystemGradientMode  ::UnityEngine::ParticleSystemGradientMode::Color{0};
constexpr ::UnityEngine::ParticleSystemGradientMode  ::UnityEngine::ParticleSystemGradientMode::Gradient{1};
constexpr ::UnityEngine::ParticleSystemGradientMode  ::UnityEngine::ParticleSystemGradientMode::TwoColors{2};
constexpr ::UnityEngine::ParticleSystemGradientMode  ::UnityEngine::ParticleSystemGradientMode::TwoGradients{3};
constexpr ::UnityEngine::ParticleSystemGradientMode  ::UnityEngine::ParticleSystemGradientMode::RandomColor{4};
} // end anonymous namespace
