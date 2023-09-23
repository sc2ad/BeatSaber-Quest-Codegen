#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PanelClearSettings_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
// Ctor Parameters [CppParam { name: "clearDepthStencil", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "clearColor", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "UnityEngine::Color", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::PanelClearSettings::PanelClearSettings(bool clearDepthStencil, bool clearColor, UnityEngine::Color color) noexcept : ::bs_hook::ValueTypeWrapper() {this->clearDepthStencil = clearDepthStencil;
this->clearColor = clearColor;
this->color = color;
}
constexpr void UnityEngine::UIElements::PanelClearSettings::__set_clearDepthStencil(bool value)  {
::cordl_internals::setInstanceField<bool, 0x0>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::PanelClearSettings::__get_clearDepthStencil() const {
return ::cordl_internals::getInstanceField<bool, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::PanelClearSettings::__set_clearColor(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::PanelClearSettings::__get_clearColor() const {
return ::cordl_internals::getInstanceField<bool, 0x1>(this->__instance);
}
constexpr void UnityEngine::UIElements::PanelClearSettings::__set_color(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x4>(this->__instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color UnityEngine::UIElements::PanelClearSettings::__get_color() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x4>(this->__instance);
}
