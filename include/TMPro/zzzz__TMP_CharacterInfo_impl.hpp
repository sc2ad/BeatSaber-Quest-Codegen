#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "TMPro/zzzz__TMP_CharacterInfo_def.hpp"
#include "TMPro/zzzz__HighlightState_def.hpp"
#include "TMPro/zzzz__TMP_TextElementType_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "TMPro/zzzz__TMP_Vertex_def.hpp"
#include "TMPro/zzzz__TMP_SpriteAsset_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "TMPro/zzzz__TMP_TextElement_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "TMPro/zzzz__FontStyles_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
// Ctor Parameters [CppParam { name: "character", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "stringLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "elementType", ty: "TMPro::TMP_TextElementType", modifiers: "", def_value: Some("{}") }, CppParam { name: "textElement", ty: "TMPro::TMP_TextElement", modifiers: "", def_value: Some("csnull") }, CppParam { name: "fontAsset", ty: "TMPro::TMP_FontAsset", modifiers: "", def_value: Some("csnull") }, CppParam { name: "spriteAsset", ty: "TMPro::TMP_SpriteAsset", modifiers: "", def_value: Some("csnull") }, CppParam { name: "spriteIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "material", ty: "UnityEngine::Material", modifiers: "", def_value: Some("csnull") }, CppParam { name: "materialReferenceIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isUsingAlternateTypeface", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "pointSize", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pageNumber", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertex_BL", ty: "TMPro::TMP_Vertex", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertex_TL", ty: "TMPro::TMP_Vertex", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertex_TR", ty: "TMPro::TMP_Vertex", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertex_BR", ty: "TMPro::TMP_Vertex", modifiers: "", def_value: Some("{}") }, CppParam { name: "topLeft", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomLeft", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "topRight", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomRight", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "origin", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "xAdvance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ascender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "baseLine", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "descender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "adjustedAscender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "adjustedDescender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "aspectRatio", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "underlineColor", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "underlineVertexIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "strikethroughColor", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "strikethroughVertexIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "highlightColor", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "highlightState", ty: "TMPro::HighlightState", modifiers: "", def_value: Some("{}") }, CppParam { name: "style", ty: "TMPro::FontStyles", modifiers: "", def_value: Some("{}") }, CppParam { name: "isVisible", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr TMPro::TMP_CharacterInfo::TMP_CharacterInfo(char16_t character, int32_t index, int32_t stringLength, TMPro::TMP_TextElementType elementType, TMPro::TMP_TextElement textElement, TMPro::TMP_FontAsset fontAsset, TMPro::TMP_SpriteAsset spriteAsset, int32_t spriteIndex, UnityEngine::Material material, int32_t materialReferenceIndex, bool isUsingAlternateTypeface, float_t pointSize, int32_t lineNumber, int32_t pageNumber, int32_t vertexIndex, TMPro::TMP_Vertex vertex_BL, TMPro::TMP_Vertex vertex_TL, TMPro::TMP_Vertex vertex_TR, TMPro::TMP_Vertex vertex_BR, UnityEngine::Vector3 topLeft, UnityEngine::Vector3 bottomLeft, UnityEngine::Vector3 topRight, UnityEngine::Vector3 bottomRight, float_t origin, float_t xAdvance, float_t ascender, float_t baseLine, float_t descender, float_t adjustedAscender, float_t adjustedDescender, float_t aspectRatio, float_t scale, UnityEngine::Color32 color, UnityEngine::Color32 underlineColor, int32_t underlineVertexIndex, UnityEngine::Color32 strikethroughColor, int32_t strikethroughVertexIndex, UnityEngine::Color32 highlightColor, TMPro::HighlightState highlightState, TMPro::FontStyles style, bool isVisible) noexcept : ::bs_hook::ValueTypeWrapper() {this->character = character;
this->index = index;
this->stringLength = stringLength;
this->elementType = elementType;
this->textElement = textElement;
this->fontAsset = fontAsset;
this->spriteAsset = spriteAsset;
this->spriteIndex = spriteIndex;
this->material = material;
this->materialReferenceIndex = materialReferenceIndex;
this->isUsingAlternateTypeface = isUsingAlternateTypeface;
this->pointSize = pointSize;
this->lineNumber = lineNumber;
this->pageNumber = pageNumber;
this->vertexIndex = vertexIndex;
this->vertex_BL = vertex_BL;
this->vertex_TL = vertex_TL;
this->vertex_TR = vertex_TR;
this->vertex_BR = vertex_BR;
this->topLeft = topLeft;
this->bottomLeft = bottomLeft;
this->topRight = topRight;
this->bottomRight = bottomRight;
this->origin = origin;
this->xAdvance = xAdvance;
this->ascender = ascender;
this->baseLine = baseLine;
this->descender = descender;
this->adjustedAscender = adjustedAscender;
this->adjustedDescender = adjustedDescender;
this->aspectRatio = aspectRatio;
this->scale = scale;
this->color = color;
this->underlineColor = underlineColor;
this->underlineVertexIndex = underlineVertexIndex;
this->strikethroughColor = strikethroughColor;
this->strikethroughVertexIndex = strikethroughVertexIndex;
this->highlightColor = highlightColor;
this->highlightState = highlightState;
this->style = style;
this->isVisible = isVisible;
}
constexpr void TMPro::TMP_CharacterInfo::__set_character(char16_t value)  {
::cordl_internals::setInstanceField<char16_t, 0x0>(this->__instance, std::forward<char16_t>(value));
}
constexpr char16_t TMPro::TMP_CharacterInfo::__get_character() const {
return ::cordl_internals::getInstanceField<char16_t, 0x0>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::TMP_CharacterInfo::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_stringLength(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::TMP_CharacterInfo::__get_stringLength() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_elementType(TMPro::TMP_TextElementType value)  {
::cordl_internals::setInstanceField<TMPro::TMP_TextElementType, 0xc>(this->__instance, std::forward<TMPro::TMP_TextElementType>(value));
}
constexpr TMPro::TMP_TextElementType TMPro::TMP_CharacterInfo::__get_elementType() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_TextElementType, 0xc>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_textElement(TMPro::TMP_TextElement value)  {
::cordl_internals::setInstanceField<TMPro::TMP_TextElement, 0x10>(this->__instance, std::forward<TMPro::TMP_TextElement>(value));
}
constexpr TMPro::TMP_TextElement TMPro::TMP_CharacterInfo::__get_textElement() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_TextElement, 0x10>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_fontAsset(TMPro::TMP_FontAsset value)  {
::cordl_internals::setInstanceField<TMPro::TMP_FontAsset, 0x18>(this->__instance, std::forward<TMPro::TMP_FontAsset>(value));
}
constexpr TMPro::TMP_FontAsset TMPro::TMP_CharacterInfo::__get_fontAsset() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_FontAsset, 0x18>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_spriteAsset(TMPro::TMP_SpriteAsset value)  {
::cordl_internals::setInstanceField<TMPro::TMP_SpriteAsset, 0x20>(this->__instance, std::forward<TMPro::TMP_SpriteAsset>(value));
}
constexpr TMPro::TMP_SpriteAsset TMPro::TMP_CharacterInfo::__get_spriteAsset() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_SpriteAsset, 0x20>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_spriteIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::TMP_CharacterInfo::__get_spriteIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_material(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x30>(this->__instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material TMPro::TMP_CharacterInfo::__get_material() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x30>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_materialReferenceIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::TMP_CharacterInfo::__get_materialReferenceIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_isUsingAlternateTypeface(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3c>(this->__instance, std::forward<bool>(value));
}
constexpr bool TMPro::TMP_CharacterInfo::__get_isUsingAlternateTypeface() const {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_pointSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::TMP_CharacterInfo::__get_pointSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_lineNumber(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::TMP_CharacterInfo::__get_lineNumber() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_pageNumber(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::TMP_CharacterInfo::__get_pageNumber() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_vertexIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::TMP_CharacterInfo::__get_vertexIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_vertex_BL(TMPro::TMP_Vertex value)  {
::cordl_internals::setInstanceField<TMPro::TMP_Vertex, 0x50>(this->__instance, std::forward<TMPro::TMP_Vertex>(value));
}
constexpr TMPro::TMP_Vertex TMPro::TMP_CharacterInfo::__get_vertex_BL() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_Vertex, 0x50>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_vertex_TL(TMPro::TMP_Vertex value)  {
::cordl_internals::setInstanceField<TMPro::TMP_Vertex, 0x78>(this->__instance, std::forward<TMPro::TMP_Vertex>(value));
}
constexpr TMPro::TMP_Vertex TMPro::TMP_CharacterInfo::__get_vertex_TL() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_Vertex, 0x78>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_vertex_TR(TMPro::TMP_Vertex value)  {
::cordl_internals::setInstanceField<TMPro::TMP_Vertex, 0xa0>(this->__instance, std::forward<TMPro::TMP_Vertex>(value));
}
constexpr TMPro::TMP_Vertex TMPro::TMP_CharacterInfo::__get_vertex_TR() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_Vertex, 0xa0>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_vertex_BR(TMPro::TMP_Vertex value)  {
::cordl_internals::setInstanceField<TMPro::TMP_Vertex, 0xc8>(this->__instance, std::forward<TMPro::TMP_Vertex>(value));
}
constexpr TMPro::TMP_Vertex TMPro::TMP_CharacterInfo::__get_vertex_BR() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_Vertex, 0xc8>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_topLeft(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xf0>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 TMPro::TMP_CharacterInfo::__get_topLeft() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xf0>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_bottomLeft(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xfc>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 TMPro::TMP_CharacterInfo::__get_bottomLeft() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xfc>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_topRight(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x108>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 TMPro::TMP_CharacterInfo::__get_topRight() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x108>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_bottomRight(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x114>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 TMPro::TMP_CharacterInfo::__get_bottomRight() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x114>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_origin(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x120>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::TMP_CharacterInfo::__get_origin() const {
return ::cordl_internals::getInstanceField<float_t, 0x120>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_xAdvance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x124>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::TMP_CharacterInfo::__get_xAdvance() const {
return ::cordl_internals::getInstanceField<float_t, 0x124>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_ascender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x128>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::TMP_CharacterInfo::__get_ascender() const {
return ::cordl_internals::getInstanceField<float_t, 0x128>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_baseLine(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x12c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::TMP_CharacterInfo::__get_baseLine() const {
return ::cordl_internals::getInstanceField<float_t, 0x12c>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_descender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x130>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::TMP_CharacterInfo::__get_descender() const {
return ::cordl_internals::getInstanceField<float_t, 0x130>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_adjustedAscender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x134>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::TMP_CharacterInfo::__get_adjustedAscender() const {
return ::cordl_internals::getInstanceField<float_t, 0x134>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_adjustedDescender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x138>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::TMP_CharacterInfo::__get_adjustedDescender() const {
return ::cordl_internals::getInstanceField<float_t, 0x138>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_aspectRatio(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x13c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::TMP_CharacterInfo::__get_aspectRatio() const {
return ::cordl_internals::getInstanceField<float_t, 0x13c>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_scale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x140>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::TMP_CharacterInfo::__get_scale() const {
return ::cordl_internals::getInstanceField<float_t, 0x140>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_color(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x144>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 TMPro::TMP_CharacterInfo::__get_color() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x144>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_underlineColor(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x148>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 TMPro::TMP_CharacterInfo::__get_underlineColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x148>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_underlineVertexIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::TMP_CharacterInfo::__get_underlineVertexIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14c>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_strikethroughColor(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x150>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 TMPro::TMP_CharacterInfo::__get_strikethroughColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x150>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_strikethroughVertexIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x154>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::TMP_CharacterInfo::__get_strikethroughVertexIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x154>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_highlightColor(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x158>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 TMPro::TMP_CharacterInfo::__get_highlightColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x158>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_highlightState(TMPro::HighlightState value)  {
::cordl_internals::setInstanceField<TMPro::HighlightState, 0x15c>(this->__instance, std::forward<TMPro::HighlightState>(value));
}
constexpr TMPro::HighlightState TMPro::TMP_CharacterInfo::__get_highlightState() const {
return ::cordl_internals::getInstanceField<TMPro::HighlightState, 0x15c>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_style(TMPro::FontStyles value)  {
::cordl_internals::setInstanceField<TMPro::FontStyles, 0x170>(this->__instance, std::forward<TMPro::FontStyles>(value));
}
constexpr TMPro::FontStyles TMPro::TMP_CharacterInfo::__get_style() const {
return ::cordl_internals::getInstanceField<TMPro::FontStyles, 0x170>(this->__instance);
}
constexpr void TMPro::TMP_CharacterInfo::__set_isVisible(bool value)  {
::cordl_internals::setInstanceField<bool, 0x174>(this->__instance, std::forward<bool>(value));
}
constexpr bool TMPro::TMP_CharacterInfo::__get_isVisible() const {
return ::cordl_internals::getInstanceField<bool, 0x174>(this->__instance);
}
