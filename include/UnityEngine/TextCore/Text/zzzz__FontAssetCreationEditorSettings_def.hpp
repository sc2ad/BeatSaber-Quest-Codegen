#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct FontAssetCreationEditorSettings;
}
// Type: UnityEngine.TextCore.Text::FontAssetCreationEditorSettings
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13492))
// CS Name: UnityEngine.TextCore.Text.FontAssetCreationEditorSettings
struct CORDL_TYPE FontAssetCreationEditorSettings : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "sourceFontFileGUID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "faceIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pointSizeSamplingMode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pointSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "padding", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "packingMode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "atlasWidth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "atlasHeight", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "characterSetSelectionMode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "characterSequence", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "referencedFontAssetGUID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "referencedTextAssetGUID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fontStyle", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fontStyleModifier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "renderMode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "includeFontFeatures", ty: "bool", modifiers: "", def_value: None }]
constexpr FontAssetCreationEditorSettings(::StringW sourceFontFileGUID, int32_t faceIndex, int32_t pointSizeSamplingMode, int32_t pointSize, int32_t padding, int32_t packingMode, int32_t atlasWidth, int32_t atlasHeight, int32_t characterSetSelectionMode, ::StringW characterSequence, ::StringW referencedFontAssetGUID, ::StringW referencedTextAssetGUID, int32_t fontStyle, float_t fontStyleModifier, int32_t renderMode, bool includeFontFeatures) noexcept;


                    constexpr FontAssetCreationEditorSettings(FontAssetCreationEditorSettings const&) = default;
                    constexpr FontAssetCreationEditorSettings(FontAssetCreationEditorSettings&&) = default;
                    constexpr FontAssetCreationEditorSettings& operator=(FontAssetCreationEditorSettings const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FontAssetCreationEditorSettings& operator=(FontAssetCreationEditorSettings&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FontAssetCreationEditorSettings(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_sourceFontFileGUID, put=__set_sourceFontFileGUID))  sourceFontFileGUID;

constexpr void __set_sourceFontFileGUID(::StringW value) ;

constexpr ::StringW __get_sourceFontFileGUID() const;

 int32_t __declspec(property(get=__get_faceIndex, put=__set_faceIndex))  faceIndex;

constexpr void __set_faceIndex(int32_t value) ;

constexpr int32_t __get_faceIndex() const;

 int32_t __declspec(property(get=__get_pointSizeSamplingMode, put=__set_pointSizeSamplingMode))  pointSizeSamplingMode;

constexpr void __set_pointSizeSamplingMode(int32_t value) ;

constexpr int32_t __get_pointSizeSamplingMode() const;

 int32_t __declspec(property(get=__get_pointSize, put=__set_pointSize))  pointSize;

constexpr void __set_pointSize(int32_t value) ;

constexpr int32_t __get_pointSize() const;

 int32_t __declspec(property(get=__get_padding, put=__set_padding))  padding;

constexpr void __set_padding(int32_t value) ;

constexpr int32_t __get_padding() const;

 int32_t __declspec(property(get=__get_packingMode, put=__set_packingMode))  packingMode;

constexpr void __set_packingMode(int32_t value) ;

constexpr int32_t __get_packingMode() const;

 int32_t __declspec(property(get=__get_atlasWidth, put=__set_atlasWidth))  atlasWidth;

constexpr void __set_atlasWidth(int32_t value) ;

constexpr int32_t __get_atlasWidth() const;

 int32_t __declspec(property(get=__get_atlasHeight, put=__set_atlasHeight))  atlasHeight;

constexpr void __set_atlasHeight(int32_t value) ;

constexpr int32_t __get_atlasHeight() const;

 int32_t __declspec(property(get=__get_characterSetSelectionMode, put=__set_characterSetSelectionMode))  characterSetSelectionMode;

constexpr void __set_characterSetSelectionMode(int32_t value) ;

constexpr int32_t __get_characterSetSelectionMode() const;

 ::StringW __declspec(property(get=__get_characterSequence, put=__set_characterSequence))  characterSequence;

constexpr void __set_characterSequence(::StringW value) ;

constexpr ::StringW __get_characterSequence() const;

 ::StringW __declspec(property(get=__get_referencedFontAssetGUID, put=__set_referencedFontAssetGUID))  referencedFontAssetGUID;

constexpr void __set_referencedFontAssetGUID(::StringW value) ;

constexpr ::StringW __get_referencedFontAssetGUID() const;

 ::StringW __declspec(property(get=__get_referencedTextAssetGUID, put=__set_referencedTextAssetGUID))  referencedTextAssetGUID;

constexpr void __set_referencedTextAssetGUID(::StringW value) ;

constexpr ::StringW __get_referencedTextAssetGUID() const;

 int32_t __declspec(property(get=__get_fontStyle, put=__set_fontStyle))  fontStyle;

constexpr void __set_fontStyle(int32_t value) ;

constexpr int32_t __get_fontStyle() const;

 float_t __declspec(property(get=__get_fontStyleModifier, put=__set_fontStyleModifier))  fontStyleModifier;

constexpr void __set_fontStyleModifier(float_t value) ;

constexpr float_t __get_fontStyleModifier() const;

 int32_t __declspec(property(get=__get_renderMode, put=__set_renderMode))  renderMode;

constexpr void __set_renderMode(int32_t value) ;

constexpr int32_t __get_renderMode() const;

 bool __declspec(property(get=__get_includeFontFeatures, put=__set_includeFontFeatures))  includeFontFeatures;

constexpr void __set_includeFontFeatures(bool value) ;

constexpr bool __get_includeFontFeatures() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings, "UnityEngine.TextCore.Text", "FontAssetCreationEditorSettings");
