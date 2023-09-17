#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/TextCore/Text/zzzz__FontAssetCreationEditorSettings_def.hpp"
// Ctor Parameters [CppParam { name: "sourceFontFileGUID", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "faceIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pointSizeSamplingMode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pointSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "padding", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "packingMode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "atlasWidth", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "atlasHeight", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "characterSetSelectionMode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "characterSequence", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "referencedFontAssetGUID", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "referencedTextAssetGUID", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "fontStyle", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontStyleModifier", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderMode", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "includeFontFeatures", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::FontAssetCreationEditorSettings(::StringW sourceFontFileGUID, int32_t faceIndex, int32_t pointSizeSamplingMode, int32_t pointSize, int32_t padding, int32_t packingMode, int32_t atlasWidth, int32_t atlasHeight, int32_t characterSetSelectionMode, ::StringW characterSequence, ::StringW referencedFontAssetGUID, ::StringW referencedTextAssetGUID, int32_t fontStyle, float_t fontStyleModifier, int32_t renderMode, bool includeFontFeatures) noexcept : ::bs_hook::ValueTypeWrapper() {this->sourceFontFileGUID = sourceFontFileGUID;
this->faceIndex = faceIndex;
this->pointSizeSamplingMode = pointSizeSamplingMode;
this->pointSize = pointSize;
this->padding = padding;
this->packingMode = packingMode;
this->atlasWidth = atlasWidth;
this->atlasHeight = atlasHeight;
this->characterSetSelectionMode = characterSetSelectionMode;
this->characterSequence = characterSequence;
this->referencedFontAssetGUID = referencedFontAssetGUID;
this->referencedTextAssetGUID = referencedTextAssetGUID;
this->fontStyle = fontStyle;
this->fontStyleModifier = fontStyleModifier;
this->renderMode = renderMode;
this->includeFontFeatures = includeFontFeatures;
}
constexpr void ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__set_sourceFontFileGUID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__get_sourceFontFileGUID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__set_faceIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__get_faceIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__set_pointSizeSamplingMode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__get_pointSizeSamplingMode() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__set_pointSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__get_pointSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__set_padding(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__get_padding() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__set_packingMode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__get_packingMode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__set_atlasWidth(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__get_atlasWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__set_atlasHeight(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__get_atlasHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__set_characterSetSelectionMode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__get_characterSetSelectionMode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__set_characterSequence(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__get_characterSequence() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__set_referencedFontAssetGUID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__get_referencedFontAssetGUID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__set_referencedTextAssetGUID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__get_referencedTextAssetGUID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__set_fontStyle(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__get_fontStyle() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__set_fontStyleModifier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__get_fontStyleModifier() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__set_renderMode(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x48>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__get_renderMode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x48>(this->__instance);
}
constexpr void ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__set_includeFontFeatures(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4c>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings::__get_includeFontFeatures() const {
return ::cordl_internals::getInstanceField<bool, 0x4c>(this->__instance);
}
} // end anonymous namespace
