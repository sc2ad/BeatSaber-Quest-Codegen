#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElementType_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextVertex_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextElement_def.hpp"
// Ctor Parameters [CppParam { name: "character", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "elementType", ty: "UnityEngine::TextCore::Text::TextElementType", modifiers: "", def_value: Some("{}") }, CppParam { name: "textElement", ty: "UnityEngine::TextCore::Text::TextElement", modifiers: "", def_value: Some("csnull") }, CppParam { name: "fontAsset", ty: "UnityEngine::TextCore::Text::FontAsset", modifiers: "", def_value: Some("csnull") }, CppParam { name: "spriteAsset", ty: "UnityEngine::TextCore::Text::SpriteAsset", modifiers: "", def_value: Some("csnull") }, CppParam { name: "spriteIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "material", ty: "UnityEngine::Material", modifiers: "", def_value: Some("csnull") }, CppParam { name: "materialReferenceIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isUsingAlternateTypeface", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "pointSize", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pageNumber", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexTopLeft", ty: "UnityEngine::TextCore::Text::TextVertex", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexBottomLeft", ty: "UnityEngine::TextCore::Text::TextVertex", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexTopRight", ty: "UnityEngine::TextCore::Text::TextVertex", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexBottomRight", ty: "UnityEngine::TextCore::Text::TextVertex", modifiers: "", def_value: Some("{}") }, CppParam { name: "topLeft", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomLeft", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "topRight", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomRight", ty: "UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "origin", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ascender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "baseLine", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "descender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "xAdvance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "aspectRatio", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "underlineColor", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "strikethroughColor", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "highlightColor", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "style", ty: "UnityEngine::TextCore::Text::FontStyles", modifiers: "", def_value: Some("{}") }, CppParam { name: "isVisible", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::TextCore::Text::TextElementInfo::TextElementInfo(char16_t character, int32_t index, UnityEngine::TextCore::Text::TextElementType elementType, UnityEngine::TextCore::Text::TextElement textElement, UnityEngine::TextCore::Text::FontAsset fontAsset, UnityEngine::TextCore::Text::SpriteAsset spriteAsset, int32_t spriteIndex, UnityEngine::Material material, int32_t materialReferenceIndex, bool isUsingAlternateTypeface, float_t pointSize, int32_t lineNumber, int32_t pageNumber, int32_t vertexIndex, UnityEngine::TextCore::Text::TextVertex vertexTopLeft, UnityEngine::TextCore::Text::TextVertex vertexBottomLeft, UnityEngine::TextCore::Text::TextVertex vertexTopRight, UnityEngine::TextCore::Text::TextVertex vertexBottomRight, UnityEngine::Vector3 topLeft, UnityEngine::Vector3 bottomLeft, UnityEngine::Vector3 topRight, UnityEngine::Vector3 bottomRight, float_t origin, float_t ascender, float_t baseLine, float_t descender, float_t xAdvance, float_t aspectRatio, float_t scale, UnityEngine::Color32 color, UnityEngine::Color32 underlineColor, UnityEngine::Color32 strikethroughColor, UnityEngine::Color32 highlightColor, UnityEngine::TextCore::Text::FontStyles style, bool isVisible) noexcept : ::bs_hook::ValueTypeWrapper() {this->character = character;
this->index = index;
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
this->vertexTopLeft = vertexTopLeft;
this->vertexBottomLeft = vertexBottomLeft;
this->vertexTopRight = vertexTopRight;
this->vertexBottomRight = vertexBottomRight;
this->topLeft = topLeft;
this->bottomLeft = bottomLeft;
this->topRight = topRight;
this->bottomRight = bottomRight;
this->origin = origin;
this->ascender = ascender;
this->baseLine = baseLine;
this->descender = descender;
this->xAdvance = xAdvance;
this->aspectRatio = aspectRatio;
this->scale = scale;
this->color = color;
this->underlineColor = underlineColor;
this->strikethroughColor = strikethroughColor;
this->highlightColor = highlightColor;
this->style = style;
this->isVisible = isVisible;
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_character(char16_t value)  {
::cordl_internals::setInstanceField<char16_t, 0x0>(this->__instance, std::forward<char16_t>(value));
}
constexpr char16_t UnityEngine::TextCore::Text::TextElementInfo::__get_character() const {
return ::cordl_internals::getInstanceField<char16_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_index(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::TextElementInfo::__get_index() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_elementType(UnityEngine::TextCore::Text::TextElementType value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::TextElementType, 0x8>(this->__instance, std::forward<UnityEngine::TextCore::Text::TextElementType>(value));
}
constexpr UnityEngine::TextCore::Text::TextElementType UnityEngine::TextCore::Text::TextElementInfo::__get_elementType() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::TextElementType, 0x8>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_textElement(UnityEngine::TextCore::Text::TextElement value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::TextElement, 0x10>(this->__instance, std::forward<UnityEngine::TextCore::Text::TextElement>(value));
}
constexpr UnityEngine::TextCore::Text::TextElement UnityEngine::TextCore::Text::TextElementInfo::__get_textElement() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::TextElement, 0x10>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_fontAsset(UnityEngine::TextCore::Text::FontAsset value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::FontAsset, 0x18>(this->__instance, std::forward<UnityEngine::TextCore::Text::FontAsset>(value));
}
constexpr UnityEngine::TextCore::Text::FontAsset UnityEngine::TextCore::Text::TextElementInfo::__get_fontAsset() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::FontAsset, 0x18>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_spriteAsset(UnityEngine::TextCore::Text::SpriteAsset value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::SpriteAsset, 0x20>(this->__instance, std::forward<UnityEngine::TextCore::Text::SpriteAsset>(value));
}
constexpr UnityEngine::TextCore::Text::SpriteAsset UnityEngine::TextCore::Text::TextElementInfo::__get_spriteAsset() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::SpriteAsset, 0x20>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_spriteIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::TextElementInfo::__get_spriteIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_material(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x30>(this->__instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material UnityEngine::TextCore::Text::TextElementInfo::__get_material() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x30>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_materialReferenceIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::TextElementInfo::__get_materialReferenceIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_isUsingAlternateTypeface(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3c>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::TextCore::Text::TextElementInfo::__get_isUsingAlternateTypeface() const {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_pointSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::Text::TextElementInfo::__get_pointSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_lineNumber(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::TextElementInfo::__get_lineNumber() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_pageNumber(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::TextElementInfo::__get_pageNumber() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_vertexIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::TextElementInfo::__get_vertexIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4c>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_vertexTopLeft(UnityEngine::TextCore::Text::TextVertex value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::TextVertex, 0x50>(this->__instance, std::forward<UnityEngine::TextCore::Text::TextVertex>(value));
}
constexpr UnityEngine::TextCore::Text::TextVertex UnityEngine::TextCore::Text::TextElementInfo::__get_vertexTopLeft() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::TextVertex, 0x50>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_vertexBottomLeft(UnityEngine::TextCore::Text::TextVertex value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::TextVertex, 0x78>(this->__instance, std::forward<UnityEngine::TextCore::Text::TextVertex>(value));
}
constexpr UnityEngine::TextCore::Text::TextVertex UnityEngine::TextCore::Text::TextElementInfo::__get_vertexBottomLeft() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::TextVertex, 0x78>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_vertexTopRight(UnityEngine::TextCore::Text::TextVertex value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::TextVertex, 0xa0>(this->__instance, std::forward<UnityEngine::TextCore::Text::TextVertex>(value));
}
constexpr UnityEngine::TextCore::Text::TextVertex UnityEngine::TextCore::Text::TextElementInfo::__get_vertexTopRight() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::TextVertex, 0xa0>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_vertexBottomRight(UnityEngine::TextCore::Text::TextVertex value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::TextVertex, 0xc8>(this->__instance, std::forward<UnityEngine::TextCore::Text::TextVertex>(value));
}
constexpr UnityEngine::TextCore::Text::TextVertex UnityEngine::TextCore::Text::TextElementInfo::__get_vertexBottomRight() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::TextVertex, 0xc8>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_topLeft(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xf0>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::TextCore::Text::TextElementInfo::__get_topLeft() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xf0>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_bottomLeft(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0xfc>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::TextCore::Text::TextElementInfo::__get_bottomLeft() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0xfc>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_topRight(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x108>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::TextCore::Text::TextElementInfo::__get_topRight() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x108>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_bottomRight(UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector3, 0x114>(this->__instance, std::forward<UnityEngine::Vector3>(value));
}
constexpr UnityEngine::Vector3 UnityEngine::TextCore::Text::TextElementInfo::__get_bottomRight() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector3, 0x114>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_origin(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x120>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::Text::TextElementInfo::__get_origin() const {
return ::cordl_internals::getInstanceField<float_t, 0x120>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_ascender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x124>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::Text::TextElementInfo::__get_ascender() const {
return ::cordl_internals::getInstanceField<float_t, 0x124>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_baseLine(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x128>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::Text::TextElementInfo::__get_baseLine() const {
return ::cordl_internals::getInstanceField<float_t, 0x128>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_descender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x12c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::Text::TextElementInfo::__get_descender() const {
return ::cordl_internals::getInstanceField<float_t, 0x12c>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_xAdvance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x130>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::Text::TextElementInfo::__get_xAdvance() const {
return ::cordl_internals::getInstanceField<float_t, 0x130>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_aspectRatio(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x134>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::Text::TextElementInfo::__get_aspectRatio() const {
return ::cordl_internals::getInstanceField<float_t, 0x134>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_scale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x138>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::Text::TextElementInfo::__get_scale() const {
return ::cordl_internals::getInstanceField<float_t, 0x138>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_color(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x13c>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 UnityEngine::TextCore::Text::TextElementInfo::__get_color() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x13c>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_underlineColor(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x140>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 UnityEngine::TextCore::Text::TextElementInfo::__get_underlineColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x140>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_strikethroughColor(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x144>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 UnityEngine::TextCore::Text::TextElementInfo::__get_strikethroughColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x144>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_highlightColor(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x148>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 UnityEngine::TextCore::Text::TextElementInfo::__get_highlightColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x148>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_style(UnityEngine::TextCore::Text::FontStyles value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::FontStyles, 0x14c>(this->__instance, std::forward<UnityEngine::TextCore::Text::FontStyles>(value));
}
constexpr UnityEngine::TextCore::Text::FontStyles UnityEngine::TextCore::Text::TextElementInfo::__get_style() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::FontStyles, 0x14c>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::TextElementInfo::__set_isVisible(bool value)  {
::cordl_internals::setInstanceField<bool, 0x150>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::TextCore::Text::TextElementInfo::__get_isVisible() const {
return ::cordl_internals::getInstanceField<bool, 0x150>(this->__instance);
}
