#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollerVisibility_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::ScrollerVisibility::ScrollerVisibility(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::ScrollerVisibility::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::ScrollerVisibility::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::ScrollerVisibility  UnityEngine::UIElements::ScrollerVisibility::Auto{0};
constexpr UnityEngine::UIElements::ScrollerVisibility  UnityEngine::UIElements::ScrollerVisibility::AlwaysVisible{1};
constexpr UnityEngine::UIElements::ScrollerVisibility  UnityEngine::UIElements::ScrollerVisibility::Hidden{2};
