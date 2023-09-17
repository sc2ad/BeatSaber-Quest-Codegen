#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/zzzz__CollisionDetectionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CollisionDetectionMode::CollisionDetectionMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::CollisionDetectionMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::CollisionDetectionMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::CollisionDetectionMode  ::UnityEngine::CollisionDetectionMode::Discrete{0};
constexpr ::UnityEngine::CollisionDetectionMode  ::UnityEngine::CollisionDetectionMode::Continuous{1};
constexpr ::UnityEngine::CollisionDetectionMode  ::UnityEngine::CollisionDetectionMode::ContinuousDynamic{2};
constexpr ::UnityEngine::CollisionDetectionMode  ::UnityEngine::CollisionDetectionMode::ContinuousSpeculative{3};
} // end anonymous namespace
