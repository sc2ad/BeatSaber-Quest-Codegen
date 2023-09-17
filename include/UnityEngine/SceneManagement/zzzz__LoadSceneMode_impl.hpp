#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::SceneManagement::LoadSceneMode::LoadSceneMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::SceneManagement::LoadSceneMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::SceneManagement::LoadSceneMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::SceneManagement::LoadSceneMode  ::UnityEngine::SceneManagement::LoadSceneMode::Single{0};
constexpr ::UnityEngine::SceneManagement::LoadSceneMode  ::UnityEngine::SceneManagement::LoadSceneMode::Additive{1};
} // end anonymous namespace
