#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/SceneManagement/zzzz__UnloadSceneOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::SceneManagement::UnloadSceneOptions::UnloadSceneOptions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::SceneManagement::UnloadSceneOptions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::SceneManagement::UnloadSceneOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::SceneManagement::UnloadSceneOptions  UnityEngine::SceneManagement::UnloadSceneOptions::None{0};
constexpr UnityEngine::SceneManagement::UnloadSceneOptions  UnityEngine::SceneManagement::UnloadSceneOptions::UnloadAllEmbeddedSceneObjects{1};
