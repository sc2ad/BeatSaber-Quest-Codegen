#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/zzzz__UICharInfo_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "cursorPos", ty: "UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "charWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UICharInfo::UICharInfo(UnityEngine::Vector2 cursorPos, float_t charWidth) noexcept : ::bs_hook::ValueTypeWrapper() {this->cursorPos = cursorPos;
this->charWidth = charWidth;
}
constexpr void UnityEngine::UICharInfo::__set_cursorPos(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x0>(this->__instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::UICharInfo::__get_cursorPos() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x0>(this->__instance);
}
constexpr void UnityEngine::UICharInfo::__set_charWidth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UICharInfo::__get_charWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
