#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__WrapMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::WrapMode::WrapMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::WrapMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::WrapMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::WrapMode  UnityEngine::WrapMode::Once{1};
constexpr UnityEngine::WrapMode  UnityEngine::WrapMode::Loop{2};
constexpr UnityEngine::WrapMode  UnityEngine::WrapMode::PingPong{4};
constexpr UnityEngine::WrapMode  UnityEngine::WrapMode::Default{0};
constexpr UnityEngine::WrapMode  UnityEngine::WrapMode::ClampForever{8};
constexpr UnityEngine::WrapMode  UnityEngine::WrapMode::Clamp{1};
