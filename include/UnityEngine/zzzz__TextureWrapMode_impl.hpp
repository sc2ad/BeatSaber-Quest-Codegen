#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__TextureWrapMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::TextureWrapMode::TextureWrapMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::TextureWrapMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextureWrapMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::TextureWrapMode  UnityEngine::TextureWrapMode::Repeat{0};
constexpr UnityEngine::TextureWrapMode  UnityEngine::TextureWrapMode::Clamp{1};
constexpr UnityEngine::TextureWrapMode  UnityEngine::TextureWrapMode::Mirror{2};
constexpr UnityEngine::TextureWrapMode  UnityEngine::TextureWrapMode::MirrorOnce{3};
