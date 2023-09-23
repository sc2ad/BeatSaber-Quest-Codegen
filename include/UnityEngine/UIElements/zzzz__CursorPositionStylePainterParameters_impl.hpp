#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__CursorPositionStylePainterParameters_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextNativeSettings_def.hpp"
//  Writing Method size for method: UnityEngine::UIElements::CursorPositionStylePainterParameters.GetDefault
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::CursorPositionStylePainterParameters (*)(UnityEngine::UIElements::VisualElement, ::StringW)>(&UnityEngine::UIElements::CursorPositionStylePainterParameters::GetDefault)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2c3df18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::CursorPositionStylePainterParameters>::get(),
                            "GetDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UIElements::CursorPositionStylePainterParameters.GetTextNativeSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UIElements::TextNativeSettings (UnityEngine::UIElements::CursorPositionStylePainterParameters::*)(float_t)>(&UnityEngine::UIElements::CursorPositionStylePainterParameters::GetTextNativeSettings)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2c3e060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::CursorPositionStylePainterParameters>::get(),
                            "GetTextNativeSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "rect", ty: "UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "font", ty: "UnityEngine::Font", modifiers: "", def_value: Some("csnull") }, CppParam { name: "fontSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontStyle", ty: "UnityEngine::FontStyle", modifiers: "", def_value: Some("{}") }, CppParam { name: "anchor", ty: "UnityEngine::TextAnchor", modifiers: "", def_value: Some("{}") }, CppParam { name: "wordWrapWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "richText", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "cursorIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UIElements::CursorPositionStylePainterParameters::CursorPositionStylePainterParameters(UnityEngine::Rect rect, ::StringW text, UnityEngine::Font font, int32_t fontSize, UnityEngine::FontStyle fontStyle, UnityEngine::TextAnchor anchor, float_t wordWrapWidth, bool richText, int32_t cursorIndex) noexcept : ::bs_hook::ValueTypeWrapper() {this->rect = rect;
this->text = text;
this->font = font;
this->fontSize = fontSize;
this->fontStyle = fontStyle;
this->anchor = anchor;
this->wordWrapWidth = wordWrapWidth;
this->richText = richText;
this->cursorIndex = cursorIndex;
}
constexpr void UnityEngine::UIElements::CursorPositionStylePainterParameters::__set_rect(UnityEngine::Rect value)  {
::cordl_internals::setInstanceField<UnityEngine::Rect, 0x0>(this->__instance, std::forward<UnityEngine::Rect>(value));
}
constexpr UnityEngine::Rect UnityEngine::UIElements::CursorPositionStylePainterParameters::__get_rect() const {
return ::cordl_internals::getInstanceField<UnityEngine::Rect, 0x0>(this->__instance);
}
constexpr void UnityEngine::UIElements::CursorPositionStylePainterParameters::__set_text(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::UIElements::CursorPositionStylePainterParameters::__get_text() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->__instance);
}
constexpr void UnityEngine::UIElements::CursorPositionStylePainterParameters::__set_font(UnityEngine::Font value)  {
::cordl_internals::setInstanceField<UnityEngine::Font, 0x18>(this->__instance, std::forward<UnityEngine::Font>(value));
}
constexpr UnityEngine::Font UnityEngine::UIElements::CursorPositionStylePainterParameters::__get_font() const {
return ::cordl_internals::getInstanceField<UnityEngine::Font, 0x18>(this->__instance);
}
constexpr void UnityEngine::UIElements::CursorPositionStylePainterParameters::__set_fontSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::CursorPositionStylePainterParameters::__get_fontSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
constexpr void UnityEngine::UIElements::CursorPositionStylePainterParameters::__set_fontStyle(UnityEngine::FontStyle value)  {
::cordl_internals::setInstanceField<UnityEngine::FontStyle, 0x24>(this->__instance, std::forward<UnityEngine::FontStyle>(value));
}
constexpr UnityEngine::FontStyle UnityEngine::UIElements::CursorPositionStylePainterParameters::__get_fontStyle() const {
return ::cordl_internals::getInstanceField<UnityEngine::FontStyle, 0x24>(this->__instance);
}
constexpr void UnityEngine::UIElements::CursorPositionStylePainterParameters::__set_anchor(UnityEngine::TextAnchor value)  {
::cordl_internals::setInstanceField<UnityEngine::TextAnchor, 0x28>(this->__instance, std::forward<UnityEngine::TextAnchor>(value));
}
constexpr UnityEngine::TextAnchor UnityEngine::UIElements::CursorPositionStylePainterParameters::__get_anchor() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextAnchor, 0x28>(this->__instance);
}
constexpr void UnityEngine::UIElements::CursorPositionStylePainterParameters::__set_wordWrapWidth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::UIElements::CursorPositionStylePainterParameters::__get_wordWrapWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->__instance);
}
constexpr void UnityEngine::UIElements::CursorPositionStylePainterParameters::__set_richText(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UIElements::CursorPositionStylePainterParameters::__get_richText() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this->__instance);
}
constexpr void UnityEngine::UIElements::CursorPositionStylePainterParameters::__set_cursorIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x34>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UIElements::CursorPositionStylePainterParameters::__get_cursorIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x34>(this->__instance);
}
 UnityEngine::UIElements::CursorPositionStylePainterParameters UnityEngine::UIElements::CursorPositionStylePainterParameters::GetDefault(UnityEngine::UIElements::VisualElement ve, ::StringW text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::CursorPositionStylePainterParameters>::get(),
                            "GetDefault",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UIElements::VisualElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::CursorPositionStylePainterParameters, false>(nullptr, ___internal_method, ve, text);
}
 UnityEngine::UIElements::TextNativeSettings UnityEngine::UIElements::CursorPositionStylePainterParameters::GetTextNativeSettings(float_t scaling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UIElements::CursorPositionStylePainterParameters>::get(),
                            "GetTextNativeSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UIElements::TextNativeSettings, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, scaling);
}
