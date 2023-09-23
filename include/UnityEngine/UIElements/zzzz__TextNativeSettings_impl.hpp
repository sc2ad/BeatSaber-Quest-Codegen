#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextNativeSettings_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
// Ctor Parameters [CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "font", ty: "UnityEngine::Font", modifiers: "", def_value: Some("csnull") }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "scaling", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "style", ty: "UnityEngine::FontStyle", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "anchor", ty: "UnityEngine::TextAnchor", modifiers: "", def_value: Some("{}") }, CppParam { name: "wordWrap", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "wordWrapWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "richText", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::TextNativeSettings::TextNativeSettings(::StringW text, UnityEngine::Font font, int32_t size, float_t scaling, UnityEngine::FontStyle style, UnityEngine::Color color, UnityEngine::TextAnchor anchor, bool wordWrap, float_t wordWrapWidth, bool richText) noexcept : ::bs_hook::ValueTypeWrapper() {this->text = text;
this->font = font;
this->size = size;
this->scaling = scaling;
this->style = style;
this->color = color;
this->anchor = anchor;
this->wordWrap = wordWrap;
this->wordWrapWidth = wordWrapWidth;
this->richText = richText;
}
constexpr void UnityEngine::UIElements::TextNativeSettings::__set_text(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::UIElements::TextNativeSettings::__get_text() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::TextNativeSettings::__set_font(UnityEngine::Font value)  {
::cordl_internals::setInstanceField<UnityEngine::Font, 0x8>(this->__instance, std::forward<UnityEngine::Font>(value));
}
constexpr UnityEngine::Font UnityEngine::UIElements::TextNativeSettings::__get_font() const {
return ::cordl_internals::getInstanceField<UnityEngine::Font, 0x8>(this->__instance);
}
constexpr void UnityEngine::UIElements::TextNativeSettings::__set_size(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::TextNativeSettings::__get_size() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void UnityEngine::UIElements::TextNativeSettings::__set_scaling(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::TextNativeSettings::__get_scaling() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->__instance);
}
constexpr void UnityEngine::UIElements::TextNativeSettings::__set_style(UnityEngine::FontStyle value)  {
::cordl_internals::setInstanceField<UnityEngine::FontStyle, 0x18>(this->__instance, std::forward<UnityEngine::FontStyle>(value));
}
constexpr UnityEngine::FontStyle UnityEngine::UIElements::TextNativeSettings::__get_style() const {
return ::cordl_internals::getInstanceField<UnityEngine::FontStyle, 0x18>(this->__instance);
}
constexpr void UnityEngine::UIElements::TextNativeSettings::__set_color(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x1c>(this->__instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color UnityEngine::UIElements::TextNativeSettings::__get_color() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x1c>(this->__instance);
}
constexpr void UnityEngine::UIElements::TextNativeSettings::__set_anchor(UnityEngine::TextAnchor value)  {
::cordl_internals::setInstanceField<UnityEngine::TextAnchor, 0x2c>(this->__instance, std::forward<UnityEngine::TextAnchor>(value));
}
constexpr UnityEngine::TextAnchor UnityEngine::UIElements::TextNativeSettings::__get_anchor() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextAnchor, 0x2c>(this->__instance);
}
constexpr void UnityEngine::UIElements::TextNativeSettings::__set_wordWrap(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::TextNativeSettings::__get_wordWrap() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->__instance);
}
constexpr void UnityEngine::UIElements::TextNativeSettings::__set_wordWrapWidth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::TextNativeSettings::__get_wordWrapWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->__instance);
}
constexpr void UnityEngine::UIElements::TextNativeSettings::__set_richText(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::TextNativeSettings::__get_richText() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->__instance);
}
