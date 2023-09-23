#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PanelScreenMatchMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::PanelScreenMatchMode::PanelScreenMatchMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UIElements::PanelScreenMatchMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::PanelScreenMatchMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UIElements::PanelScreenMatchMode  UnityEngine::UIElements::PanelScreenMatchMode::MatchWidthOrHeight{0};
constexpr UnityEngine::UIElements::PanelScreenMatchMode  UnityEngine::UIElements::PanelScreenMatchMode::Shrink{1};
constexpr UnityEngine::UIElements::PanelScreenMatchMode  UnityEngine::UIElements::PanelScreenMatchMode::Expand{2};
