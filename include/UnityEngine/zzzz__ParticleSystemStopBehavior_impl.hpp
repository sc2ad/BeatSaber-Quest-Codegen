#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__ParticleSystemStopBehavior_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ParticleSystemStopBehavior::ParticleSystemStopBehavior(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::ParticleSystemStopBehavior::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::ParticleSystemStopBehavior::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::ParticleSystemStopBehavior  ::UnityEngine::ParticleSystemStopBehavior::StopEmittingAndClear{0};
constexpr ::UnityEngine::ParticleSystemStopBehavior  ::UnityEngine::ParticleSystemStopBehavior::StopEmitting{1};
} // end anonymous namespace
