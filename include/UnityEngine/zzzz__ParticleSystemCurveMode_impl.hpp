#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__ParticleSystemCurveMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystemCurveMode::ParticleSystemCurveMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::ParticleSystemCurveMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ParticleSystemCurveMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::ParticleSystemCurveMode  ::UnityEngine::ParticleSystemCurveMode::Constant{0};
constexpr ::UnityEngine::ParticleSystemCurveMode  ::UnityEngine::ParticleSystemCurveMode::Curve{1};
constexpr ::UnityEngine::ParticleSystemCurveMode  ::UnityEngine::ParticleSystemCurveMode::TwoCurves{2};
constexpr ::UnityEngine::ParticleSystemCurveMode  ::UnityEngine::ParticleSystemCurveMode::TwoConstants{3};
} // end anonymous namespace
