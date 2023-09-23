#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__AlternatingRowBackground_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::AlternatingRowBackground::AlternatingRowBackground(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::AlternatingRowBackground::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::AlternatingRowBackground::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::AlternatingRowBackground  UnityEngine::UIElements::AlternatingRowBackground::None{0};
constexpr UnityEngine::UIElements::AlternatingRowBackground  UnityEngine::UIElements::AlternatingRowBackground::ContentOnly{1};
constexpr UnityEngine::UIElements::AlternatingRowBackground  UnityEngine::UIElements::AlternatingRowBackground::All{2};
