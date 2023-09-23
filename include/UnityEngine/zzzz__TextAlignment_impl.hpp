#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__TextAlignment_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::TextAlignment::TextAlignment(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::TextAlignment::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextAlignment::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::TextAlignment  UnityEngine::TextAlignment::Left{0};
constexpr UnityEngine::TextAlignment  UnityEngine::TextAlignment::Center{1};
constexpr UnityEngine::TextAlignment  UnityEngine::TextAlignment::Right{2};
