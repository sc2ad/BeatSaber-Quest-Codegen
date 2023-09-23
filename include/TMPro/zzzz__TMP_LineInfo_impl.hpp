#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "TMPro/zzzz__TMP_LineInfo_def.hpp"
#include "TMPro/zzzz__Extents_def.hpp"
#include "TMPro/zzzz__HorizontalAlignmentOptions_def.hpp"
// Ctor Parameters [CppParam { name: "controlCharacterCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "characterCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleCharacterCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "spaceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "wordCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "firstVisibleCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastVisibleCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "length", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lineHeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ascender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "baseline", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "descender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxAdvance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "width", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "marginLeft", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "marginRight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "alignment", ty: "TMPro::HorizontalAlignmentOptions", modifiers: "", def_value: Some("{}") }, CppParam { name: "lineExtents", ty: "TMPro::Extents", modifiers: "", def_value: Some("{}") }]
constexpr TMPro::TMP_LineInfo::TMP_LineInfo(int32_t controlCharacterCount, int32_t characterCount, int32_t visibleCharacterCount, int32_t spaceCount, int32_t wordCount, int32_t firstCharacterIndex, int32_t firstVisibleCharacterIndex, int32_t lastCharacterIndex, int32_t lastVisibleCharacterIndex, float_t length, float_t lineHeight, float_t ascender, float_t baseline, float_t descender, float_t maxAdvance, float_t width, float_t marginLeft, float_t marginRight, TMPro::HorizontalAlignmentOptions alignment, TMPro::Extents lineExtents) noexcept : ::bs_hook::ValueTypeWrapper() {this->controlCharacterCount = controlCharacterCount;
this->characterCount = characterCount;
this->visibleCharacterCount = visibleCharacterCount;
this->spaceCount = spaceCount;
this->wordCount = wordCount;
this->firstCharacterIndex = firstCharacterIndex;
this->firstVisibleCharacterIndex = firstVisibleCharacterIndex;
this->lastCharacterIndex = lastCharacterIndex;
this->lastVisibleCharacterIndex = lastVisibleCharacterIndex;
this->length = length;
this->lineHeight = lineHeight;
this->ascender = ascender;
this->baseline = baseline;
this->descender = descender;
this->maxAdvance = maxAdvance;
this->width = width;
this->marginLeft = marginLeft;
this->marginRight = marginRight;
this->alignment = alignment;
this->lineExtents = lineExtents;
}
constexpr void TMPro::TMP_LineInfo::__set_controlCharacterCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::TMP_LineInfo::__get_controlCharacterCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void TMPro::TMP_LineInfo::__set_characterCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::TMP_LineInfo::__get_characterCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void TMPro::TMP_LineInfo::__set_visibleCharacterCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::TMP_LineInfo::__get_visibleCharacterCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void TMPro::TMP_LineInfo::__set_spaceCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::TMP_LineInfo::__get_spaceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void TMPro::TMP_LineInfo::__set_wordCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::TMP_LineInfo::__get_wordCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void TMPro::TMP_LineInfo::__set_firstCharacterIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::TMP_LineInfo::__get_firstCharacterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void TMPro::TMP_LineInfo::__set_firstVisibleCharacterIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::TMP_LineInfo::__get_firstVisibleCharacterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void TMPro::TMP_LineInfo::__set_lastCharacterIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::TMP_LineInfo::__get_lastCharacterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
constexpr void TMPro::TMP_LineInfo::__set_lastVisibleCharacterIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::TMP_LineInfo::__get_lastVisibleCharacterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
constexpr void TMPro::TMP_LineInfo::__set_length(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::TMP_LineInfo::__get_length() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->__instance);
}
constexpr void TMPro::TMP_LineInfo::__set_lineHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::TMP_LineInfo::__get_lineHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->__instance);
}
constexpr void TMPro::TMP_LineInfo::__set_ascender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::TMP_LineInfo::__get_ascender() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->__instance);
}
constexpr void TMPro::TMP_LineInfo::__set_baseline(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::TMP_LineInfo::__get_baseline() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->__instance);
}
constexpr void TMPro::TMP_LineInfo::__set_descender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::TMP_LineInfo::__get_descender() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->__instance);
}
constexpr void TMPro::TMP_LineInfo::__set_maxAdvance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::TMP_LineInfo::__get_maxAdvance() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->__instance);
}
constexpr void TMPro::TMP_LineInfo::__set_width(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::TMP_LineInfo::__get_width() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this->__instance);
}
constexpr void TMPro::TMP_LineInfo::__set_marginLeft(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::TMP_LineInfo::__get_marginLeft() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->__instance);
}
constexpr void TMPro::TMP_LineInfo::__set_marginRight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::TMP_LineInfo::__get_marginRight() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this->__instance);
}
constexpr void TMPro::TMP_LineInfo::__set_alignment(TMPro::HorizontalAlignmentOptions value)  {
::cordl_internals::setInstanceField<TMPro::HorizontalAlignmentOptions, 0x48>(this->__instance, std::forward<TMPro::HorizontalAlignmentOptions>(value));
}
constexpr TMPro::HorizontalAlignmentOptions TMPro::TMP_LineInfo::__get_alignment() const {
return ::cordl_internals::getInstanceField<TMPro::HorizontalAlignmentOptions, 0x48>(this->__instance);
}
constexpr void TMPro::TMP_LineInfo::__set_lineExtents(TMPro::Extents value)  {
::cordl_internals::setInstanceField<TMPro::Extents, 0x4c>(this->__instance, std::forward<TMPro::Extents>(value));
}
constexpr TMPro::Extents TMPro::TMP_LineInfo::__get_lineExtents() const {
return ::cordl_internals::getInstanceField<TMPro::Extents, 0x4c>(this->__instance);
}
