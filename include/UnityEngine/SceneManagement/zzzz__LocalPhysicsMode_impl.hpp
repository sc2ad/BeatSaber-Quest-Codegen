#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__LocalPhysicsMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::SceneManagement::LocalPhysicsMode::LocalPhysicsMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::SceneManagement::LocalPhysicsMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::SceneManagement::LocalPhysicsMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::SceneManagement::LocalPhysicsMode  UnityEngine::SceneManagement::LocalPhysicsMode::None{0};
constexpr UnityEngine::SceneManagement::LocalPhysicsMode  UnityEngine::SceneManagement::LocalPhysicsMode::Physics2D{1};
constexpr UnityEngine::SceneManagement::LocalPhysicsMode  UnityEngine::SceneManagement::LocalPhysicsMode::Physics3D{2};
