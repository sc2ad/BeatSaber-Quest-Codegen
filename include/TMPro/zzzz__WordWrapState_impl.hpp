#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "TMPro/zzzz__WordWrapState_def.hpp"
#include "TMPro/zzzz__TMP_TextInfo_def.hpp"
#include "TMPro/zzzz__TMP_TextProcessingStack_1_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "TMPro/zzzz__Extents_def.hpp"
#include "TMPro/zzzz__FontWeight_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "TMPro/zzzz__TMP_ColorGradient_def.hpp"
#include "TMPro/zzzz__FontStyles_def.hpp"
#include "TMPro/zzzz__HighlightState_def.hpp"
#include "TMPro/zzzz__HorizontalAlignmentOptions_def.hpp"
#include "TMPro/zzzz__MaterialReference_def.hpp"
#include "TMPro/zzzz__TMP_SpriteAsset_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "TMPro/zzzz__TMP_LineInfo_def.hpp"
#include "TMPro/zzzz__TMP_FontStyleStack_def.hpp"
// Ctor Parameters [CppParam { name: "previous_WordBreak", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "total_CharacterCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visible_CharacterCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visible_SpriteCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "visible_LinkCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "firstVisibleCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastVisibleCharIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxCapHeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxAscender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxDescender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "startOfLineAscender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxLineAscender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxLineDescender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pageAscender", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "horizontalAlignment", ty: "TMPro::HorizontalAlignmentOptions", modifiers: "", def_value: Some("{}") }, CppParam { name: "marginLeft", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "marginRight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "xAdvance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "preferredWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "preferredHeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "previousLineScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "wordCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontStyle", ty: "TMPro::FontStyles", modifiers: "", def_value: Some("{}") }, CppParam { name: "italicAngle", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontScaleMultiplier", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "currentFontSize", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "baselineOffset", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lineOffset", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isDrivenLineSpacing", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "glyphHorizontalAdvanceAdjustment", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cSpace", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "mSpace", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "textInfo", ty: "TMPro::TMP_TextInfo", modifiers: "", def_value: Some("csnull") }, CppParam { name: "lineInfo", ty: "TMPro::TMP_LineInfo", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertexColor", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "underlineColor", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "strikethroughColor", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "highlightColor", ty: "UnityEngine::Color32", modifiers: "", def_value: Some("{}") }, CppParam { name: "basicStyleStack", ty: "TMPro::TMP_FontStyleStack", modifiers: "", def_value: Some("{}") }, CppParam { name: "italicAngleStack", ty: "TMPro::TMP_TextProcessingStack_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorStack", ty: "TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32>", modifiers: "", def_value: Some("{}") }, CppParam { name: "underlineColorStack", ty: "TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32>", modifiers: "", def_value: Some("{}") }, CppParam { name: "strikethroughColorStack", ty: "TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32>", modifiers: "", def_value: Some("{}") }, CppParam { name: "highlightColorStack", ty: "TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32>", modifiers: "", def_value: Some("{}") }, CppParam { name: "highlightStateStack", ty: "TMPro::TMP_TextProcessingStack_1<TMPro::HighlightState>", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorGradientStack", ty: "TMPro::TMP_TextProcessingStack_1<TMPro::TMP_ColorGradient>", modifiers: "", def_value: Some("{}") }, CppParam { name: "sizeStack", ty: "TMPro::TMP_TextProcessingStack_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "indentStack", ty: "TMPro::TMP_TextProcessingStack_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontWeightStack", ty: "TMPro::TMP_TextProcessingStack_1<TMPro::FontWeight>", modifiers: "", def_value: Some("{}") }, CppParam { name: "styleStack", ty: "TMPro::TMP_TextProcessingStack_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "baselineStack", ty: "TMPro::TMP_TextProcessingStack_1<float_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "actionStack", ty: "TMPro::TMP_TextProcessingStack_1<int32_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "materialReferenceStack", ty: "TMPro::TMP_TextProcessingStack_1<TMPro::MaterialReference>", modifiers: "", def_value: Some("{}") }, CppParam { name: "lineJustificationStack", ty: "TMPro::TMP_TextProcessingStack_1<TMPro::HorizontalAlignmentOptions>", modifiers: "", def_value: Some("{}") }, CppParam { name: "spriteAnimationID", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "currentFontAsset", ty: "TMPro::TMP_FontAsset", modifiers: "", def_value: Some("csnull") }, CppParam { name: "currentSpriteAsset", ty: "TMPro::TMP_SpriteAsset", modifiers: "", def_value: Some("csnull") }, CppParam { name: "currentMaterial", ty: "UnityEngine::Material", modifiers: "", def_value: Some("csnull") }, CppParam { name: "currentMaterialIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "meshExtents", ty: "TMPro::Extents", modifiers: "", def_value: Some("{}") }, CppParam { name: "tagNoParsing", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "isNonBreakingSpace", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr TMPro::WordWrapState::WordWrapState(int32_t previous_WordBreak, int32_t total_CharacterCount, int32_t visible_CharacterCount, int32_t visible_SpriteCount, int32_t visible_LinkCount, int32_t firstCharacterIndex, int32_t firstVisibleCharacterIndex, int32_t lastCharacterIndex, int32_t lastVisibleCharIndex, int32_t lineNumber, float_t maxCapHeight, float_t maxAscender, float_t maxDescender, float_t startOfLineAscender, float_t maxLineAscender, float_t maxLineDescender, float_t pageAscender, TMPro::HorizontalAlignmentOptions horizontalAlignment, float_t marginLeft, float_t marginRight, float_t xAdvance, float_t preferredWidth, float_t preferredHeight, float_t previousLineScale, int32_t wordCount, TMPro::FontStyles fontStyle, int32_t italicAngle, float_t fontScaleMultiplier, float_t currentFontSize, float_t baselineOffset, float_t lineOffset, bool isDrivenLineSpacing, float_t glyphHorizontalAdvanceAdjustment, float_t cSpace, float_t mSpace, TMPro::TMP_TextInfo textInfo, TMPro::TMP_LineInfo lineInfo, UnityEngine::Color32 vertexColor, UnityEngine::Color32 underlineColor, UnityEngine::Color32 strikethroughColor, UnityEngine::Color32 highlightColor, TMPro::TMP_FontStyleStack basicStyleStack, TMPro::TMP_TextProcessingStack_1<int32_t> italicAngleStack, TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32> colorStack, TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32> underlineColorStack, TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32> strikethroughColorStack, TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32> highlightColorStack, TMPro::TMP_TextProcessingStack_1<TMPro::HighlightState> highlightStateStack, TMPro::TMP_TextProcessingStack_1<TMPro::TMP_ColorGradient> colorGradientStack, TMPro::TMP_TextProcessingStack_1<float_t> sizeStack, TMPro::TMP_TextProcessingStack_1<float_t> indentStack, TMPro::TMP_TextProcessingStack_1<TMPro::FontWeight> fontWeightStack, TMPro::TMP_TextProcessingStack_1<int32_t> styleStack, TMPro::TMP_TextProcessingStack_1<float_t> baselineStack, TMPro::TMP_TextProcessingStack_1<int32_t> actionStack, TMPro::TMP_TextProcessingStack_1<TMPro::MaterialReference> materialReferenceStack, TMPro::TMP_TextProcessingStack_1<TMPro::HorizontalAlignmentOptions> lineJustificationStack, int32_t spriteAnimationID, TMPro::TMP_FontAsset currentFontAsset, TMPro::TMP_SpriteAsset currentSpriteAsset, UnityEngine::Material currentMaterial, int32_t currentMaterialIndex, TMPro::Extents meshExtents, bool tagNoParsing, bool isNonBreakingSpace) noexcept : ::bs_hook::ValueTypeWrapper() {this->previous_WordBreak = previous_WordBreak;
this->total_CharacterCount = total_CharacterCount;
this->visible_CharacterCount = visible_CharacterCount;
this->visible_SpriteCount = visible_SpriteCount;
this->visible_LinkCount = visible_LinkCount;
this->firstCharacterIndex = firstCharacterIndex;
this->firstVisibleCharacterIndex = firstVisibleCharacterIndex;
this->lastCharacterIndex = lastCharacterIndex;
this->lastVisibleCharIndex = lastVisibleCharIndex;
this->lineNumber = lineNumber;
this->maxCapHeight = maxCapHeight;
this->maxAscender = maxAscender;
this->maxDescender = maxDescender;
this->startOfLineAscender = startOfLineAscender;
this->maxLineAscender = maxLineAscender;
this->maxLineDescender = maxLineDescender;
this->pageAscender = pageAscender;
this->horizontalAlignment = horizontalAlignment;
this->marginLeft = marginLeft;
this->marginRight = marginRight;
this->xAdvance = xAdvance;
this->preferredWidth = preferredWidth;
this->preferredHeight = preferredHeight;
this->previousLineScale = previousLineScale;
this->wordCount = wordCount;
this->fontStyle = fontStyle;
this->italicAngle = italicAngle;
this->fontScaleMultiplier = fontScaleMultiplier;
this->currentFontSize = currentFontSize;
this->baselineOffset = baselineOffset;
this->lineOffset = lineOffset;
this->isDrivenLineSpacing = isDrivenLineSpacing;
this->glyphHorizontalAdvanceAdjustment = glyphHorizontalAdvanceAdjustment;
this->cSpace = cSpace;
this->mSpace = mSpace;
this->textInfo = textInfo;
this->lineInfo = lineInfo;
this->vertexColor = vertexColor;
this->underlineColor = underlineColor;
this->strikethroughColor = strikethroughColor;
this->highlightColor = highlightColor;
this->basicStyleStack = basicStyleStack;
this->italicAngleStack = italicAngleStack;
this->colorStack = colorStack;
this->underlineColorStack = underlineColorStack;
this->strikethroughColorStack = strikethroughColorStack;
this->highlightColorStack = highlightColorStack;
this->highlightStateStack = highlightStateStack;
this->colorGradientStack = colorGradientStack;
this->sizeStack = sizeStack;
this->indentStack = indentStack;
this->fontWeightStack = fontWeightStack;
this->styleStack = styleStack;
this->baselineStack = baselineStack;
this->actionStack = actionStack;
this->materialReferenceStack = materialReferenceStack;
this->lineJustificationStack = lineJustificationStack;
this->spriteAnimationID = spriteAnimationID;
this->currentFontAsset = currentFontAsset;
this->currentSpriteAsset = currentSpriteAsset;
this->currentMaterial = currentMaterial;
this->currentMaterialIndex = currentMaterialIndex;
this->meshExtents = meshExtents;
this->tagNoParsing = tagNoParsing;
this->isNonBreakingSpace = isNonBreakingSpace;
}
constexpr void TMPro::WordWrapState::__set_previous_WordBreak(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::WordWrapState::__get_previous_WordBreak() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_total_CharacterCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::WordWrapState::__get_total_CharacterCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_visible_CharacterCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::WordWrapState::__get_visible_CharacterCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_visible_SpriteCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::WordWrapState::__get_visible_SpriteCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_visible_LinkCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::WordWrapState::__get_visible_LinkCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_firstCharacterIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::WordWrapState::__get_firstCharacterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_firstVisibleCharacterIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::WordWrapState::__get_firstVisibleCharacterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_lastCharacterIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::WordWrapState::__get_lastCharacterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_lastVisibleCharIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::WordWrapState::__get_lastVisibleCharIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_lineNumber(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::WordWrapState::__get_lineNumber() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_maxCapHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::WordWrapState::__get_maxCapHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_maxAscender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::WordWrapState::__get_maxAscender() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_maxDescender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::WordWrapState::__get_maxDescender() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_startOfLineAscender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::WordWrapState::__get_startOfLineAscender() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_maxLineAscender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::WordWrapState::__get_maxLineAscender() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_maxLineDescender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::WordWrapState::__get_maxLineDescender() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_pageAscender(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::WordWrapState::__get_pageAscender() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_horizontalAlignment(TMPro::HorizontalAlignmentOptions value)  {
::cordl_internals::setInstanceField<TMPro::HorizontalAlignmentOptions, 0x44>(this->__instance, std::forward<TMPro::HorizontalAlignmentOptions>(value));
}
constexpr TMPro::HorizontalAlignmentOptions TMPro::WordWrapState::__get_horizontalAlignment() const {
return ::cordl_internals::getInstanceField<TMPro::HorizontalAlignmentOptions, 0x44>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_marginLeft(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::WordWrapState::__get_marginLeft() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_marginRight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::WordWrapState::__get_marginRight() const {
return ::cordl_internals::getInstanceField<float_t, 0x4c>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_xAdvance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::WordWrapState::__get_xAdvance() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_preferredWidth(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::WordWrapState::__get_preferredWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_preferredHeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::WordWrapState::__get_preferredHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_previousLineScale(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::WordWrapState::__get_previousLineScale() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_wordCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::WordWrapState::__get_wordCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_fontStyle(TMPro::FontStyles value)  {
::cordl_internals::setInstanceField<TMPro::FontStyles, 0x64>(this->__instance, std::forward<TMPro::FontStyles>(value));
}
constexpr TMPro::FontStyles TMPro::WordWrapState::__get_fontStyle() const {
return ::cordl_internals::getInstanceField<TMPro::FontStyles, 0x64>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_italicAngle(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::WordWrapState::__get_italicAngle() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_fontScaleMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x6c>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::WordWrapState::__get_fontScaleMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_currentFontSize(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::WordWrapState::__get_currentFontSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_baselineOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x74>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::WordWrapState::__get_baselineOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x74>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_lineOffset(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x78>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::WordWrapState::__get_lineOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x78>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_isDrivenLineSpacing(bool value)  {
::cordl_internals::setInstanceField<bool, 0x7c>(this->__instance, std::forward<bool>(value));
}
constexpr bool TMPro::WordWrapState::__get_isDrivenLineSpacing() const {
return ::cordl_internals::getInstanceField<bool, 0x7c>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_glyphHorizontalAdvanceAdjustment(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x80>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::WordWrapState::__get_glyphHorizontalAdvanceAdjustment() const {
return ::cordl_internals::getInstanceField<float_t, 0x80>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_cSpace(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x84>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::WordWrapState::__get_cSpace() const {
return ::cordl_internals::getInstanceField<float_t, 0x84>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_mSpace(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x88>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t TMPro::WordWrapState::__get_mSpace() const {
return ::cordl_internals::getInstanceField<float_t, 0x88>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_textInfo(TMPro::TMP_TextInfo value)  {
::cordl_internals::setInstanceField<TMPro::TMP_TextInfo, 0x90>(this->__instance, std::forward<TMPro::TMP_TextInfo>(value));
}
constexpr TMPro::TMP_TextInfo TMPro::WordWrapState::__get_textInfo() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_TextInfo, 0x90>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_lineInfo(TMPro::TMP_LineInfo value)  {
::cordl_internals::setInstanceField<TMPro::TMP_LineInfo, 0x98>(this->__instance, std::forward<TMPro::TMP_LineInfo>(value));
}
constexpr TMPro::TMP_LineInfo TMPro::WordWrapState::__get_lineInfo() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_LineInfo, 0x98>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_vertexColor(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0xf4>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 TMPro::WordWrapState::__get_vertexColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0xf4>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_underlineColor(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0xf8>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 TMPro::WordWrapState::__get_underlineColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0xf8>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_strikethroughColor(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0xfc>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 TMPro::WordWrapState::__get_strikethroughColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0xfc>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_highlightColor(UnityEngine::Color32 value)  {
::cordl_internals::setInstanceField<UnityEngine::Color32, 0x100>(this->__instance, std::forward<UnityEngine::Color32>(value));
}
constexpr UnityEngine::Color32 TMPro::WordWrapState::__get_highlightColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color32, 0x100>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_basicStyleStack(TMPro::TMP_FontStyleStack value)  {
::cordl_internals::setInstanceField<TMPro::TMP_FontStyleStack, 0x104>(this->__instance, std::forward<TMPro::TMP_FontStyleStack>(value));
}
constexpr TMPro::TMP_FontStyleStack TMPro::WordWrapState::__get_basicStyleStack() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_FontStyleStack, 0x104>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_italicAngleStack(TMPro::TMP_TextProcessingStack_1<int32_t> value)  {
::cordl_internals::setInstanceField<TMPro::TMP_TextProcessingStack_1<int32_t>, 0x110>(this->__instance, std::forward<TMPro::TMP_TextProcessingStack_1<int32_t>>(value));
}
constexpr TMPro::TMP_TextProcessingStack_1<int32_t> TMPro::WordWrapState::__get_italicAngleStack() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_TextProcessingStack_1<int32_t>, 0x110>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_colorStack(TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32> value)  {
::cordl_internals::setInstanceField<TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32>, 0x130>(this->__instance, std::forward<TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32>>(value));
}
constexpr TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32> TMPro::WordWrapState::__get_colorStack() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32>, 0x130>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_underlineColorStack(TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32> value)  {
::cordl_internals::setInstanceField<TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32>, 0x150>(this->__instance, std::forward<TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32>>(value));
}
constexpr TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32> TMPro::WordWrapState::__get_underlineColorStack() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32>, 0x150>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_strikethroughColorStack(TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32> value)  {
::cordl_internals::setInstanceField<TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32>, 0x170>(this->__instance, std::forward<TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32>>(value));
}
constexpr TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32> TMPro::WordWrapState::__get_strikethroughColorStack() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32>, 0x170>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_highlightColorStack(TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32> value)  {
::cordl_internals::setInstanceField<TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32>, 0x190>(this->__instance, std::forward<TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32>>(value));
}
constexpr TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32> TMPro::WordWrapState::__get_highlightColorStack() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_TextProcessingStack_1<UnityEngine::Color32>, 0x190>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_highlightStateStack(TMPro::TMP_TextProcessingStack_1<TMPro::HighlightState> value)  {
::cordl_internals::setInstanceField<TMPro::TMP_TextProcessingStack_1<TMPro::HighlightState>, 0x1b0>(this->__instance, std::forward<TMPro::TMP_TextProcessingStack_1<TMPro::HighlightState>>(value));
}
constexpr TMPro::TMP_TextProcessingStack_1<TMPro::HighlightState> TMPro::WordWrapState::__get_highlightStateStack() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_TextProcessingStack_1<TMPro::HighlightState>, 0x1b0>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_colorGradientStack(TMPro::TMP_TextProcessingStack_1<TMPro::TMP_ColorGradient> value)  {
::cordl_internals::setInstanceField<TMPro::TMP_TextProcessingStack_1<TMPro::TMP_ColorGradient>, 0x1e0>(this->__instance, std::forward<TMPro::TMP_TextProcessingStack_1<TMPro::TMP_ColorGradient>>(value));
}
constexpr TMPro::TMP_TextProcessingStack_1<TMPro::TMP_ColorGradient> TMPro::WordWrapState::__get_colorGradientStack() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_TextProcessingStack_1<TMPro::TMP_ColorGradient>, 0x1e0>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_sizeStack(TMPro::TMP_TextProcessingStack_1<float_t> value)  {
::cordl_internals::setInstanceField<TMPro::TMP_TextProcessingStack_1<float_t>, 0x208>(this->__instance, std::forward<TMPro::TMP_TextProcessingStack_1<float_t>>(value));
}
constexpr TMPro::TMP_TextProcessingStack_1<float_t> TMPro::WordWrapState::__get_sizeStack() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_TextProcessingStack_1<float_t>, 0x208>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_indentStack(TMPro::TMP_TextProcessingStack_1<float_t> value)  {
::cordl_internals::setInstanceField<TMPro::TMP_TextProcessingStack_1<float_t>, 0x228>(this->__instance, std::forward<TMPro::TMP_TextProcessingStack_1<float_t>>(value));
}
constexpr TMPro::TMP_TextProcessingStack_1<float_t> TMPro::WordWrapState::__get_indentStack() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_TextProcessingStack_1<float_t>, 0x228>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_fontWeightStack(TMPro::TMP_TextProcessingStack_1<TMPro::FontWeight> value)  {
::cordl_internals::setInstanceField<TMPro::TMP_TextProcessingStack_1<TMPro::FontWeight>, 0x248>(this->__instance, std::forward<TMPro::TMP_TextProcessingStack_1<TMPro::FontWeight>>(value));
}
constexpr TMPro::TMP_TextProcessingStack_1<TMPro::FontWeight> TMPro::WordWrapState::__get_fontWeightStack() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_TextProcessingStack_1<TMPro::FontWeight>, 0x248>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_styleStack(TMPro::TMP_TextProcessingStack_1<int32_t> value)  {
::cordl_internals::setInstanceField<TMPro::TMP_TextProcessingStack_1<int32_t>, 0x268>(this->__instance, std::forward<TMPro::TMP_TextProcessingStack_1<int32_t>>(value));
}
constexpr TMPro::TMP_TextProcessingStack_1<int32_t> TMPro::WordWrapState::__get_styleStack() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_TextProcessingStack_1<int32_t>, 0x268>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_baselineStack(TMPro::TMP_TextProcessingStack_1<float_t> value)  {
::cordl_internals::setInstanceField<TMPro::TMP_TextProcessingStack_1<float_t>, 0x288>(this->__instance, std::forward<TMPro::TMP_TextProcessingStack_1<float_t>>(value));
}
constexpr TMPro::TMP_TextProcessingStack_1<float_t> TMPro::WordWrapState::__get_baselineStack() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_TextProcessingStack_1<float_t>, 0x288>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_actionStack(TMPro::TMP_TextProcessingStack_1<int32_t> value)  {
::cordl_internals::setInstanceField<TMPro::TMP_TextProcessingStack_1<int32_t>, 0x2a8>(this->__instance, std::forward<TMPro::TMP_TextProcessingStack_1<int32_t>>(value));
}
constexpr TMPro::TMP_TextProcessingStack_1<int32_t> TMPro::WordWrapState::__get_actionStack() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_TextProcessingStack_1<int32_t>, 0x2a8>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_materialReferenceStack(TMPro::TMP_TextProcessingStack_1<TMPro::MaterialReference> value)  {
::cordl_internals::setInstanceField<TMPro::TMP_TextProcessingStack_1<TMPro::MaterialReference>, 0x2c8>(this->__instance, std::forward<TMPro::TMP_TextProcessingStack_1<TMPro::MaterialReference>>(value));
}
constexpr TMPro::TMP_TextProcessingStack_1<TMPro::MaterialReference> TMPro::WordWrapState::__get_materialReferenceStack() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_TextProcessingStack_1<TMPro::MaterialReference>, 0x2c8>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_lineJustificationStack(TMPro::TMP_TextProcessingStack_1<TMPro::HorizontalAlignmentOptions> value)  {
::cordl_internals::setInstanceField<TMPro::TMP_TextProcessingStack_1<TMPro::HorizontalAlignmentOptions>, 0x320>(this->__instance, std::forward<TMPro::TMP_TextProcessingStack_1<TMPro::HorizontalAlignmentOptions>>(value));
}
constexpr TMPro::TMP_TextProcessingStack_1<TMPro::HorizontalAlignmentOptions> TMPro::WordWrapState::__get_lineJustificationStack() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_TextProcessingStack_1<TMPro::HorizontalAlignmentOptions>, 0x320>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_spriteAnimationID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x340>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::WordWrapState::__get_spriteAnimationID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x340>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_currentFontAsset(TMPro::TMP_FontAsset value)  {
::cordl_internals::setInstanceField<TMPro::TMP_FontAsset, 0x348>(this->__instance, std::forward<TMPro::TMP_FontAsset>(value));
}
constexpr TMPro::TMP_FontAsset TMPro::WordWrapState::__get_currentFontAsset() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_FontAsset, 0x348>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_currentSpriteAsset(TMPro::TMP_SpriteAsset value)  {
::cordl_internals::setInstanceField<TMPro::TMP_SpriteAsset, 0x350>(this->__instance, std::forward<TMPro::TMP_SpriteAsset>(value));
}
constexpr TMPro::TMP_SpriteAsset TMPro::WordWrapState::__get_currentSpriteAsset() const {
return ::cordl_internals::getInstanceField<TMPro::TMP_SpriteAsset, 0x350>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_currentMaterial(UnityEngine::Material value)  {
::cordl_internals::setInstanceField<UnityEngine::Material, 0x358>(this->__instance, std::forward<UnityEngine::Material>(value));
}
constexpr UnityEngine::Material TMPro::WordWrapState::__get_currentMaterial() const {
return ::cordl_internals::getInstanceField<UnityEngine::Material, 0x358>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_currentMaterialIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x360>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t TMPro::WordWrapState::__get_currentMaterialIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x360>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_meshExtents(TMPro::Extents value)  {
::cordl_internals::setInstanceField<TMPro::Extents, 0x364>(this->__instance, std::forward<TMPro::Extents>(value));
}
constexpr TMPro::Extents TMPro::WordWrapState::__get_meshExtents() const {
return ::cordl_internals::getInstanceField<TMPro::Extents, 0x364>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_tagNoParsing(bool value)  {
::cordl_internals::setInstanceField<bool, 0x374>(this->__instance, std::forward<bool>(value));
}
constexpr bool TMPro::WordWrapState::__get_tagNoParsing() const {
return ::cordl_internals::getInstanceField<bool, 0x374>(this->__instance);
}
constexpr void TMPro::WordWrapState::__set_isNonBreakingSpace(bool value)  {
::cordl_internals::setInstanceField<bool, 0x375>(this->__instance, std::forward<bool>(value));
}
constexpr bool TMPro::WordWrapState::__get_isNonBreakingSpace() const {
return ::cordl_internals::getInstanceField<bool, 0x375>(this->__instance);
}
