#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__WordWrapState_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteAsset_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAlignment_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__Extents_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextColorGradient_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__LineInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyleStack_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextInfo_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextProcessingStack_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MaterialReference_def.hpp"
// Ctor Parameters [CppParam { name: "previousWordBreak", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "totalCharacterCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleCharacterCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleSpriteCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visibleLinkCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "firstVisibleCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastVisibleCharIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxCapHeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxAscender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxDescender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxLineAscender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxLineDescender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "previousLineAscender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "xAdvance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "preferredWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "preferredHeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "previousLineScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "wordCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontStyle", ty: "UnityEngine::TextCore::Text::FontStyles", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontScaleMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "currentFontSize", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "baselineOffset", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lineOffset", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "textInfo", ty: "UnityEngine::TextCore::Text::TextInfo", modifiers: "", def_value: Some("csnull") }, CppParam { name: "lineInfo", ty: "UnityEngine::TextCore::Text::LineInfo", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexColor", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "underlineColor", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "strikethroughColor", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "highlightColor", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "basicStyleStack", ty: "UnityEngine::TextCore::Text::FontStyleStack", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorStack", ty: "UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32>", modifiers: "", def_value: Some("{}") }, CppParam { name: "underlineColorStack", ty: "UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32>", modifiers: "", def_value: Some("{}") }, CppParam { name: "strikethroughColorStack", ty: "UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32>", modifiers: "", def_value: Some("{}") }, CppParam { name: "highlightColorStack", ty: "UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32>", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorGradientStack", ty: "UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::TextColorGradient>", modifiers: "", def_value: Some("{}") }, CppParam { name: "sizeStack", ty: "UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "indentStack", ty: "UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontWeightStack", ty: "UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::TextFontWeight>", modifiers: "", def_value: Some("{}") }, CppParam { name: "styleStack", ty: "UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "baselineStack", ty: "UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "actionStack", ty: "UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "materialReferenceStack", ty: "UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::MaterialReference>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lineJustificationStack", ty: "UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::TextAlignment>", modifiers: "", def_value: Some("{}") }, CppParam { name: "spriteAnimationId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "currentFontAsset", ty: "UnityEngine::TextCore::Text::FontAsset", modifiers: "", def_value: Some("csnull") }, CppParam { name: "currentSpriteAsset", ty: "UnityEngine::TextCore::Text::SpriteAsset", modifiers: "", def_value: Some("csnull") }, CppParam { name: "currentMaterial", ty: "UnityEngine::Material", modifiers: "", def_value: Some("csnull") }, CppParam { name: "currentMaterialIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "meshExtents", ty: "UnityEngine::TextCore::Text::Extents", modifiers: "", def_value: Some("{}") }, CppParam { name: "tagNoParsing", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isNonBreakingSpace", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::TextCore::Text::WordWrapState::WordWrapState(int32_t previousWordBreak, int32_t totalCharacterCount, int32_t visibleCharacterCount, int32_t visibleSpriteCount, int32_t visibleLinkCount, int32_t firstCharacterIndex, int32_t firstVisibleCharacterIndex, int32_t lastCharacterIndex, int32_t lastVisibleCharIndex, int32_t lineNumber, float_t maxCapHeight, float_t maxAscender, float_t maxDescender, float_t maxLineAscender, float_t maxLineDescender, float_t previousLineAscender, float_t xAdvance, float_t preferredWidth, float_t preferredHeight, float_t previousLineScale, int32_t wordCount, UnityEngine::TextCore::Text::FontStyles fontStyle, float_t fontScale, float_t fontScaleMultiplier, float_t currentFontSize, float_t baselineOffset, float_t lineOffset, UnityEngine::TextCore::Text::TextInfo textInfo, UnityEngine::TextCore::Text::LineInfo lineInfo, UnityEngine::Color32 vertexColor, UnityEngine::Color32 underlineColor, UnityEngine::Color32 strikethroughColor, UnityEngine::Color32 highlightColor, UnityEngine::TextCore::Text::FontStyleStack basicStyleStack, UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32> colorStack, UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32> underlineColorStack, UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32> strikethroughColorStack, UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32> highlightColorStack, UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::TextColorGradient> colorGradientStack, UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> sizeStack, UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> indentStack, UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::TextFontWeight> fontWeightStack, UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> styleStack, UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> baselineStack, UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> actionStack, UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::MaterialReference> materialReferenceStack, UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::TextAlignment> lineJustificationStack, int32_t spriteAnimationId, UnityEngine::TextCore::Text::FontAsset currentFontAsset, UnityEngine::TextCore::Text::SpriteAsset currentSpriteAsset, UnityEngine::Material currentMaterial, int32_t currentMaterialIndex, UnityEngine::TextCore::Text::Extents meshExtents, bool tagNoParsing, bool isNonBreakingSpace) noexcept : ::bs_hook::ValueTypeWrapper() {this->previousWordBreak = previousWordBreak;
this->totalCharacterCount = totalCharacterCount;
this->visibleCharacterCount = visibleCharacterCount;
this->visibleSpriteCount = visibleSpriteCount;
this->visibleLinkCount = visibleLinkCount;
this->firstCharacterIndex = firstCharacterIndex;
this->firstVisibleCharacterIndex = firstVisibleCharacterIndex;
this->lastCharacterIndex = lastCharacterIndex;
this->lastVisibleCharIndex = lastVisibleCharIndex;
this->lineNumber = lineNumber;
this->maxCapHeight = maxCapHeight;
this->maxAscender = maxAscender;
this->maxDescender = maxDescender;
this->maxLineAscender = maxLineAscender;
this->maxLineDescender = maxLineDescender;
this->previousLineAscender = previousLineAscender;
this->xAdvance = xAdvance;
this->preferredWidth = preferredWidth;
this->preferredHeight = preferredHeight;
this->previousLineScale = previousLineScale;
this->wordCount = wordCount;
this->fontStyle = fontStyle;
this->fontScale = fontScale;
this->fontScaleMultiplier = fontScaleMultiplier;
this->currentFontSize = currentFontSize;
this->baselineOffset = baselineOffset;
this->lineOffset = lineOffset;
this->textInfo = textInfo;
this->lineInfo = lineInfo;
this->vertexColor = vertexColor;
this->underlineColor = underlineColor;
this->strikethroughColor = strikethroughColor;
this->highlightColor = highlightColor;
this->basicStyleStack = basicStyleStack;
this->colorStack = colorStack;
this->underlineColorStack = underlineColorStack;
this->strikethroughColorStack = strikethroughColorStack;
this->highlightColorStack = highlightColorStack;
this->colorGradientStack = colorGradientStack;
this->sizeStack = sizeStack;
this->indentStack = indentStack;
this->fontWeightStack = fontWeightStack;
this->styleStack = styleStack;
this->baselineStack = baselineStack;
this->actionStack = actionStack;
this->materialReferenceStack = materialReferenceStack;
this->lineJustificationStack = lineJustificationStack;
this->spriteAnimationId = spriteAnimationId;
this->currentFontAsset = currentFontAsset;
this->currentSpriteAsset = currentSpriteAsset;
this->currentMaterial = currentMaterial;
this->currentMaterialIndex = currentMaterialIndex;
this->meshExtents = meshExtents;
this->tagNoParsing = tagNoParsing;
this->isNonBreakingSpace = isNonBreakingSpace;
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_previousWordBreak(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::WordWrapState::__get_previousWordBreak() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_totalCharacterCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::WordWrapState::__get_totalCharacterCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_visibleCharacterCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::WordWrapState::__get_visibleCharacterCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_visibleSpriteCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::WordWrapState::__get_visibleSpriteCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_visibleLinkCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::WordWrapState::__get_visibleLinkCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_firstCharacterIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::WordWrapState::__get_firstCharacterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_firstVisibleCharacterIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::WordWrapState::__get_firstVisibleCharacterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_lastCharacterIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::WordWrapState::__get_lastCharacterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_lastVisibleCharIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::WordWrapState::__get_lastVisibleCharIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_lineNumber(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::WordWrapState::__get_lineNumber() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_maxCapHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::Text::WordWrapState::__get_maxCapHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_maxAscender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::Text::WordWrapState::__get_maxAscender() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_maxDescender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::Text::WordWrapState::__get_maxDescender() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_maxLineAscender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::Text::WordWrapState::__get_maxLineAscender() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_maxLineDescender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::Text::WordWrapState::__get_maxLineDescender() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_previousLineAscender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::Text::WordWrapState::__get_previousLineAscender() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_xAdvance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::Text::WordWrapState::__get_xAdvance() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_preferredWidth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::Text::WordWrapState::__get_preferredWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_preferredHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::Text::WordWrapState::__get_preferredHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_previousLineScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::Text::WordWrapState::__get_previousLineScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_wordCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x50>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::WordWrapState::__get_wordCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x50>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_fontStyle(UnityEngine::TextCore::Text::FontStyles value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::FontStyles, 0x54>(this->__instance, std::forward<UnityEngine::TextCore::Text::FontStyles>(value));
}
constexpr UnityEngine::TextCore::Text::FontStyles UnityEngine::TextCore::Text::WordWrapState::__get_fontStyle() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::FontStyles, 0x54>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_fontScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::Text::WordWrapState::__get_fontScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_fontScaleMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::Text::WordWrapState::__get_fontScaleMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_currentFontSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::Text::WordWrapState::__get_currentFontSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_baselineOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::Text::WordWrapState::__get_baselineOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_lineOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::TextCore::Text::WordWrapState::__get_lineOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_textInfo(UnityEngine::TextCore::Text::TextInfo value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::TextInfo, 0x70>(this->__instance, std::forward<UnityEngine::TextCore::Text::TextInfo>(value));
}
constexpr UnityEngine::TextCore::Text::TextInfo UnityEngine::TextCore::Text::WordWrapState::__get_textInfo() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::TextInfo, 0x70>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_lineInfo(UnityEngine::TextCore::Text::LineInfo value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::LineInfo, 0x78>(this->__instance, std::forward<UnityEngine::TextCore::Text::LineInfo>(value));
}
constexpr UnityEngine::TextCore::Text::LineInfo UnityEngine::TextCore::Text::WordWrapState::__get_lineInfo() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::LineInfo, 0x78>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_vertexColor(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0xd8>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 UnityEngine::TextCore::Text::WordWrapState::__get_vertexColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0xd8>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_underlineColor(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0xdc>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 UnityEngine::TextCore::Text::WordWrapState::__get_underlineColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0xdc>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_strikethroughColor(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0xe0>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 UnityEngine::TextCore::Text::WordWrapState::__get_strikethroughColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0xe0>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_highlightColor(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0xe4>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 UnityEngine::TextCore::Text::WordWrapState::__get_highlightColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0xe4>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_basicStyleStack(UnityEngine::TextCore::Text::FontStyleStack value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::FontStyleStack, 0xe8>(this->__instance, std::forward<UnityEngine::TextCore::Text::FontStyleStack>(value));
}
constexpr UnityEngine::TextCore::Text::FontStyleStack UnityEngine::TextCore::Text::WordWrapState::__get_basicStyleStack() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::FontStyleStack, 0xe8>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_colorStack(UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32> value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32>, 0xf8>(this->__instance, std::forward<UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32>>(value));
}
constexpr UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32> UnityEngine::TextCore::Text::WordWrapState::__get_colorStack() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32>, 0xf8>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_underlineColorStack(UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32> value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32>, 0x118>(this->__instance, std::forward<UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32>>(value));
}
constexpr UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32> UnityEngine::TextCore::Text::WordWrapState::__get_underlineColorStack() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32>, 0x118>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_strikethroughColorStack(UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32> value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32>, 0x138>(this->__instance, std::forward<UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32>>(value));
}
constexpr UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32> UnityEngine::TextCore::Text::WordWrapState::__get_strikethroughColorStack() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32>, 0x138>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_highlightColorStack(UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32> value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32>, 0x158>(this->__instance, std::forward<UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32>>(value));
}
constexpr UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32> UnityEngine::TextCore::Text::WordWrapState::__get_highlightColorStack() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::Color32>, 0x158>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_colorGradientStack(UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::TextColorGradient> value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::TextColorGradient>, 0x178>(this->__instance, std::forward<UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::TextColorGradient>>(value));
}
constexpr UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::TextColorGradient> UnityEngine::TextCore::Text::WordWrapState::__get_colorGradientStack() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::TextColorGradient>, 0x178>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_sizeStack(UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>, 0x1a0>(this->__instance, std::forward<UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>>(value));
}
constexpr UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> UnityEngine::TextCore::Text::WordWrapState::__get_sizeStack() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>, 0x1a0>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_indentStack(UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>, 0x1c0>(this->__instance, std::forward<UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>>(value));
}
constexpr UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> UnityEngine::TextCore::Text::WordWrapState::__get_indentStack() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>, 0x1c0>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_fontWeightStack(UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::TextFontWeight> value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::TextFontWeight>, 0x1e0>(this->__instance, std::forward<UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::TextFontWeight>>(value));
}
constexpr UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::TextFontWeight> UnityEngine::TextCore::Text::WordWrapState::__get_fontWeightStack() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::TextFontWeight>, 0x1e0>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_styleStack(UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, 0x200>(this->__instance, std::forward<UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>(value));
}
constexpr UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> UnityEngine::TextCore::Text::WordWrapState::__get_styleStack() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, 0x200>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_baselineStack(UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>, 0x220>(this->__instance, std::forward<UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>>(value));
}
constexpr UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> UnityEngine::TextCore::Text::WordWrapState::__get_baselineStack() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>, 0x220>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_actionStack(UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, 0x240>(this->__instance, std::forward<UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>(value));
}
constexpr UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> UnityEngine::TextCore::Text::WordWrapState::__get_actionStack() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>, 0x240>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_materialReferenceStack(UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::MaterialReference> value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::MaterialReference>, 0x260>(this->__instance, std::forward<UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::MaterialReference>>(value));
}
constexpr UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::MaterialReference> UnityEngine::TextCore::Text::WordWrapState::__get_materialReferenceStack() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::MaterialReference>, 0x260>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_lineJustificationStack(UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::TextAlignment> value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::TextAlignment>, 0x2b8>(this->__instance, std::forward<UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::TextAlignment>>(value));
}
constexpr UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::TextAlignment> UnityEngine::TextCore::Text::WordWrapState::__get_lineJustificationStack() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::TextProcessingStack_1<UnityEngine::TextCore::Text::TextAlignment>, 0x2b8>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_spriteAnimationId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2d8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::WordWrapState::__get_spriteAnimationId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2d8>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_currentFontAsset(UnityEngine::TextCore::Text::FontAsset value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::FontAsset, 0x2e0>(this->__instance, std::forward<UnityEngine::TextCore::Text::FontAsset>(value));
}
constexpr UnityEngine::TextCore::Text::FontAsset UnityEngine::TextCore::Text::WordWrapState::__get_currentFontAsset() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::FontAsset, 0x2e0>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_currentSpriteAsset(UnityEngine::TextCore::Text::SpriteAsset value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::SpriteAsset, 0x2e8>(this->__instance, std::forward<UnityEngine::TextCore::Text::SpriteAsset>(value));
}
constexpr UnityEngine::TextCore::Text::SpriteAsset UnityEngine::TextCore::Text::WordWrapState::__get_currentSpriteAsset() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::SpriteAsset, 0x2e8>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_currentMaterial(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x2f0>(this->__instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material UnityEngine::TextCore::Text::WordWrapState::__get_currentMaterial() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x2f0>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_currentMaterialIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x2f8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::TextCore::Text::WordWrapState::__get_currentMaterialIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x2f8>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_meshExtents(UnityEngine::TextCore::Text::Extents value)  {
::cordl_internals::setInstanceField<UnityEngine::TextCore::Text::Extents, 0x2fc>(this->__instance, std::forward<UnityEngine::TextCore::Text::Extents>(value));
}
constexpr UnityEngine::TextCore::Text::Extents UnityEngine::TextCore::Text::WordWrapState::__get_meshExtents() const {
return ::cordl_internals::getInstanceField<UnityEngine::TextCore::Text::Extents, 0x2fc>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_tagNoParsing(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30c>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::TextCore::Text::WordWrapState::__get_tagNoParsing() const {
return ::cordl_internals::getInstanceField<bool, 0x30c>(this->__instance);
}
constexpr void UnityEngine::TextCore::Text::WordWrapState::__set_isNonBreakingSpace(bool value)  {
::cordl_internals::setInstanceField<bool, 0x30d>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::TextCore::Text::WordWrapState::__get_isNonBreakingSpace() const {
return ::cordl_internals::getInstanceField<bool, 0x30d>(this->__instance);
}
