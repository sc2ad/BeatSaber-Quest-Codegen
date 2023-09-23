#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowCastingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Rendering::ShadowCastingMode::ShadowCastingMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Rendering::ShadowCastingMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Rendering::ShadowCastingMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Rendering::ShadowCastingMode  UnityEngine::Rendering::ShadowCastingMode::Off{0};
constexpr UnityEngine::Rendering::ShadowCastingMode  UnityEngine::Rendering::ShadowCastingMode::On{1};
constexpr UnityEngine::Rendering::ShadowCastingMode  UnityEngine::Rendering::ShadowCastingMode::TwoSided{2};
constexpr UnityEngine::Rendering::ShadowCastingMode  UnityEngine::Rendering::ShadowCastingMode::ShadowsOnly{3};
