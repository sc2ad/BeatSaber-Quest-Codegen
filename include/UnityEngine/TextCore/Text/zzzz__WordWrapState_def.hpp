#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::TextCore::Text {
struct MaterialReference;
}
namespace UnityEngine::TextCore::Text {
struct LineInfo;
}
namespace UnityEngine::TextCore::Text {
struct TextFontWeight;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
struct TextAlignment;
}
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
namespace UnityEngine::TextCore::Text {
struct FontStyleStack;
}
namespace UnityEngine::TextCore::Text {
struct Extents;
}
namespace UnityEngine::TextCore::Text {
class TextColorGradient;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
namespace UnityEngine::TextCore::Text {
template<typename T>
struct TextProcessingStack_1;
}
namespace UnityEngine::TextCore::Text {
struct FontStyles;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct WordWrapState;
}
// Type: UnityEngine.TextCore.Text::WordWrapState
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13522))
// CS Name: UnityEngine.TextCore.Text.WordWrapState
struct CORDL_TYPE WordWrapState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "previousWordBreak", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalCharacterCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visibleCharacterCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visibleSpriteCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visibleLinkCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstVisibleCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastVisibleCharIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxCapHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxAscender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxDescender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxLineAscender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxLineDescender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "previousLineAscender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "xAdvance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "preferredWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "preferredHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "previousLineScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "wordCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fontStyle", ty: "::UnityEngine::TextCore::Text::FontStyles", modifiers: "", def_value: None }, CppParam { name: "fontScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fontScaleMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "currentFontSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "baselineOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lineOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "textInfo", ty: "::UnityEngine::TextCore::Text::TextInfo", modifiers: "", def_value: None }, CppParam { name: "lineInfo", ty: "::UnityEngine::TextCore::Text::LineInfo", modifiers: "", def_value: None }, CppParam { name: "vertexColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "underlineColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "strikethroughColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "highlightColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "basicStyleStack", ty: "::UnityEngine::TextCore::Text::FontStyleStack", modifiers: "", def_value: None }, CppParam { name: "colorStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "underlineColorStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "strikethroughColorStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "highlightColorStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "colorGradientStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient>", modifiers: "", def_value: None }, CppParam { name: "sizeStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "indentStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "fontWeightStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight>", modifiers: "", def_value: None }, CppParam { name: "styleStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "baselineStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "actionStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "materialReferenceStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference>", modifiers: "", def_value: None }, CppParam { name: "lineJustificationStack", ty: "::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment>", modifiers: "", def_value: None }, CppParam { name: "spriteAnimationId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currentFontAsset", ty: "::UnityEngine::TextCore::Text::FontAsset", modifiers: "", def_value: None }, CppParam { name: "currentSpriteAsset", ty: "::UnityEngine::TextCore::Text::SpriteAsset", modifiers: "", def_value: None }, CppParam { name: "currentMaterial", ty: "::UnityEngine::Material", modifiers: "", def_value: None }, CppParam { name: "currentMaterialIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "meshExtents", ty: "::UnityEngine::TextCore::Text::Extents", modifiers: "", def_value: None }, CppParam { name: "tagNoParsing", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isNonBreakingSpace", ty: "bool", modifiers: "", def_value: None }]
constexpr WordWrapState(int32_t previousWordBreak, int32_t totalCharacterCount, int32_t visibleCharacterCount, int32_t visibleSpriteCount, int32_t visibleLinkCount, int32_t firstCharacterIndex, int32_t firstVisibleCharacterIndex, int32_t lastCharacterIndex, int32_t lastVisibleCharIndex, int32_t lineNumber, float_t maxCapHeight, float_t maxAscender, float_t maxDescender, float_t maxLineAscender, float_t maxLineDescender, float_t previousLineAscender, float_t xAdvance, float_t preferredWidth, float_t preferredHeight, float_t previousLineScale, int32_t wordCount, ::UnityEngine::TextCore::Text::FontStyles fontStyle, float_t fontScale, float_t fontScaleMultiplier, float_t currentFontSize, float_t baselineOffset, float_t lineOffset, ::UnityEngine::TextCore::Text::TextInfo textInfo, ::UnityEngine::TextCore::Text::LineInfo lineInfo, ::UnityEngine::Color32 vertexColor, ::UnityEngine::Color32 underlineColor, ::UnityEngine::Color32 strikethroughColor, ::UnityEngine::Color32 highlightColor, ::UnityEngine::TextCore::Text::FontStyleStack basicStyleStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> colorStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> underlineColorStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> strikethroughColorStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> highlightColorStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient> colorGradientStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> sizeStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> indentStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight> fontWeightStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> styleStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> baselineStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> actionStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference> materialReferenceStack, ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment> lineJustificationStack, int32_t spriteAnimationId, ::UnityEngine::TextCore::Text::FontAsset currentFontAsset, ::UnityEngine::TextCore::Text::SpriteAsset currentSpriteAsset, ::UnityEngine::Material currentMaterial, int32_t currentMaterialIndex, ::UnityEngine::TextCore::Text::Extents meshExtents, bool tagNoParsing, bool isNonBreakingSpace) noexcept;


                    constexpr WordWrapState(WordWrapState const&) = default;
                    constexpr WordWrapState(WordWrapState&&) = default;
                    constexpr WordWrapState& operator=(WordWrapState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr WordWrapState& operator=(WordWrapState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x310};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit WordWrapState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_previousWordBreak, put=__set_previousWordBreak))  previousWordBreak;

constexpr void __set_previousWordBreak(int32_t value) ;

constexpr int32_t __get_previousWordBreak() const;

 int32_t __declspec(property(get=__get_totalCharacterCount, put=__set_totalCharacterCount))  totalCharacterCount;

constexpr void __set_totalCharacterCount(int32_t value) ;

constexpr int32_t __get_totalCharacterCount() const;

 int32_t __declspec(property(get=__get_visibleCharacterCount, put=__set_visibleCharacterCount))  visibleCharacterCount;

constexpr void __set_visibleCharacterCount(int32_t value) ;

constexpr int32_t __get_visibleCharacterCount() const;

 int32_t __declspec(property(get=__get_visibleSpriteCount, put=__set_visibleSpriteCount))  visibleSpriteCount;

constexpr void __set_visibleSpriteCount(int32_t value) ;

constexpr int32_t __get_visibleSpriteCount() const;

 int32_t __declspec(property(get=__get_visibleLinkCount, put=__set_visibleLinkCount))  visibleLinkCount;

constexpr void __set_visibleLinkCount(int32_t value) ;

constexpr int32_t __get_visibleLinkCount() const;

 int32_t __declspec(property(get=__get_firstCharacterIndex, put=__set_firstCharacterIndex))  firstCharacterIndex;

constexpr void __set_firstCharacterIndex(int32_t value) ;

constexpr int32_t __get_firstCharacterIndex() const;

 int32_t __declspec(property(get=__get_firstVisibleCharacterIndex, put=__set_firstVisibleCharacterIndex))  firstVisibleCharacterIndex;

constexpr void __set_firstVisibleCharacterIndex(int32_t value) ;

constexpr int32_t __get_firstVisibleCharacterIndex() const;

 int32_t __declspec(property(get=__get_lastCharacterIndex, put=__set_lastCharacterIndex))  lastCharacterIndex;

constexpr void __set_lastCharacterIndex(int32_t value) ;

constexpr int32_t __get_lastCharacterIndex() const;

 int32_t __declspec(property(get=__get_lastVisibleCharIndex, put=__set_lastVisibleCharIndex))  lastVisibleCharIndex;

constexpr void __set_lastVisibleCharIndex(int32_t value) ;

constexpr int32_t __get_lastVisibleCharIndex() const;

 int32_t __declspec(property(get=__get_lineNumber, put=__set_lineNumber))  lineNumber;

constexpr void __set_lineNumber(int32_t value) ;

constexpr int32_t __get_lineNumber() const;

 float_t __declspec(property(get=__get_maxCapHeight, put=__set_maxCapHeight))  maxCapHeight;

constexpr void __set_maxCapHeight(float_t value) ;

constexpr float_t __get_maxCapHeight() const;

 float_t __declspec(property(get=__get_maxAscender, put=__set_maxAscender))  maxAscender;

constexpr void __set_maxAscender(float_t value) ;

constexpr float_t __get_maxAscender() const;

 float_t __declspec(property(get=__get_maxDescender, put=__set_maxDescender))  maxDescender;

constexpr void __set_maxDescender(float_t value) ;

constexpr float_t __get_maxDescender() const;

 float_t __declspec(property(get=__get_maxLineAscender, put=__set_maxLineAscender))  maxLineAscender;

constexpr void __set_maxLineAscender(float_t value) ;

constexpr float_t __get_maxLineAscender() const;

 float_t __declspec(property(get=__get_maxLineDescender, put=__set_maxLineDescender))  maxLineDescender;

constexpr void __set_maxLineDescender(float_t value) ;

constexpr float_t __get_maxLineDescender() const;

 float_t __declspec(property(get=__get_previousLineAscender, put=__set_previousLineAscender))  previousLineAscender;

constexpr void __set_previousLineAscender(float_t value) ;

constexpr float_t __get_previousLineAscender() const;

 float_t __declspec(property(get=__get_xAdvance, put=__set_xAdvance))  xAdvance;

constexpr void __set_xAdvance(float_t value) ;

constexpr float_t __get_xAdvance() const;

 float_t __declspec(property(get=__get_preferredWidth, put=__set_preferredWidth))  preferredWidth;

constexpr void __set_preferredWidth(float_t value) ;

constexpr float_t __get_preferredWidth() const;

 float_t __declspec(property(get=__get_preferredHeight, put=__set_preferredHeight))  preferredHeight;

constexpr void __set_preferredHeight(float_t value) ;

constexpr float_t __get_preferredHeight() const;

 float_t __declspec(property(get=__get_previousLineScale, put=__set_previousLineScale))  previousLineScale;

constexpr void __set_previousLineScale(float_t value) ;

constexpr float_t __get_previousLineScale() const;

 int32_t __declspec(property(get=__get_wordCount, put=__set_wordCount))  wordCount;

constexpr void __set_wordCount(int32_t value) ;

constexpr int32_t __get_wordCount() const;

 ::UnityEngine::TextCore::Text::FontStyles __declspec(property(get=__get_fontStyle, put=__set_fontStyle))  fontStyle;

constexpr void __set_fontStyle(::UnityEngine::TextCore::Text::FontStyles value) ;

constexpr ::UnityEngine::TextCore::Text::FontStyles __get_fontStyle() const;

 float_t __declspec(property(get=__get_fontScale, put=__set_fontScale))  fontScale;

constexpr void __set_fontScale(float_t value) ;

constexpr float_t __get_fontScale() const;

 float_t __declspec(property(get=__get_fontScaleMultiplier, put=__set_fontScaleMultiplier))  fontScaleMultiplier;

constexpr void __set_fontScaleMultiplier(float_t value) ;

constexpr float_t __get_fontScaleMultiplier() const;

 float_t __declspec(property(get=__get_currentFontSize, put=__set_currentFontSize))  currentFontSize;

constexpr void __set_currentFontSize(float_t value) ;

constexpr float_t __get_currentFontSize() const;

 float_t __declspec(property(get=__get_baselineOffset, put=__set_baselineOffset))  baselineOffset;

constexpr void __set_baselineOffset(float_t value) ;

constexpr float_t __get_baselineOffset() const;

 float_t __declspec(property(get=__get_lineOffset, put=__set_lineOffset))  lineOffset;

constexpr void __set_lineOffset(float_t value) ;

constexpr float_t __get_lineOffset() const;

 ::UnityEngine::TextCore::Text::TextInfo __declspec(property(get=__get_textInfo, put=__set_textInfo))  textInfo;

constexpr void __set_textInfo(::UnityEngine::TextCore::Text::TextInfo value) ;

constexpr ::UnityEngine::TextCore::Text::TextInfo __get_textInfo() const;

 ::UnityEngine::TextCore::Text::LineInfo __declspec(property(get=__get_lineInfo, put=__set_lineInfo))  lineInfo;

constexpr void __set_lineInfo(::UnityEngine::TextCore::Text::LineInfo value) ;

constexpr ::UnityEngine::TextCore::Text::LineInfo __get_lineInfo() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_vertexColor, put=__set_vertexColor))  vertexColor;

constexpr void __set_vertexColor(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_vertexColor() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_underlineColor, put=__set_underlineColor))  underlineColor;

constexpr void __set_underlineColor(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_underlineColor() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_strikethroughColor, put=__set_strikethroughColor))  strikethroughColor;

constexpr void __set_strikethroughColor(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_strikethroughColor() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_highlightColor, put=__set_highlightColor))  highlightColor;

constexpr void __set_highlightColor(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_highlightColor() const;

 ::UnityEngine::TextCore::Text::FontStyleStack __declspec(property(get=__get_basicStyleStack, put=__set_basicStyleStack))  basicStyleStack;

constexpr void __set_basicStyleStack(::UnityEngine::TextCore::Text::FontStyleStack value) ;

constexpr ::UnityEngine::TextCore::Text::FontStyleStack __get_basicStyleStack() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> __declspec(property(get=__get_colorStack, put=__set_colorStack))  colorStack;

constexpr void __set_colorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> __get_colorStack() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> __declspec(property(get=__get_underlineColorStack, put=__set_underlineColorStack))  underlineColorStack;

constexpr void __set_underlineColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> __get_underlineColorStack() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> __declspec(property(get=__get_strikethroughColorStack, put=__set_strikethroughColorStack))  strikethroughColorStack;

constexpr void __set_strikethroughColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> __get_strikethroughColorStack() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> __declspec(property(get=__get_highlightColorStack, put=__set_highlightColorStack))  highlightColorStack;

constexpr void __set_highlightColorStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::Color32> __get_highlightColorStack() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient> __declspec(property(get=__get_colorGradientStack, put=__set_colorGradientStack))  colorGradientStack;

constexpr void __set_colorGradientStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextColorGradient> __get_colorGradientStack() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> __declspec(property(get=__get_sizeStack, put=__set_sizeStack))  sizeStack;

constexpr void __set_sizeStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> __get_sizeStack() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> __declspec(property(get=__get_indentStack, put=__set_indentStack))  indentStack;

constexpr void __set_indentStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> __get_indentStack() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight> __declspec(property(get=__get_fontWeightStack, put=__set_fontWeightStack))  fontWeightStack;

constexpr void __set_fontWeightStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextFontWeight> __get_fontWeightStack() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> __declspec(property(get=__get_styleStack, put=__set_styleStack))  styleStack;

constexpr void __set_styleStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> __get_styleStack() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> __declspec(property(get=__get_baselineStack, put=__set_baselineStack))  baselineStack;

constexpr void __set_baselineStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<float_t> __get_baselineStack() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> __declspec(property(get=__get_actionStack, put=__set_actionStack))  actionStack;

constexpr void __set_actionStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t> __get_actionStack() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference> __declspec(property(get=__get_materialReferenceStack, put=__set_materialReferenceStack))  materialReferenceStack;

constexpr void __set_materialReferenceStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::MaterialReference> __get_materialReferenceStack() const;

 ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment> __declspec(property(get=__get_lineJustificationStack, put=__set_lineJustificationStack))  lineJustificationStack;

constexpr void __set_lineJustificationStack(::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment> value) ;

constexpr ::UnityEngine::TextCore::Text::TextProcessingStack_1<::UnityEngine::TextCore::Text::TextAlignment> __get_lineJustificationStack() const;

 int32_t __declspec(property(get=__get_spriteAnimationId, put=__set_spriteAnimationId))  spriteAnimationId;

constexpr void __set_spriteAnimationId(int32_t value) ;

constexpr int32_t __get_spriteAnimationId() const;

 ::UnityEngine::TextCore::Text::FontAsset __declspec(property(get=__get_currentFontAsset, put=__set_currentFontAsset))  currentFontAsset;

constexpr void __set_currentFontAsset(::UnityEngine::TextCore::Text::FontAsset value) ;

constexpr ::UnityEngine::TextCore::Text::FontAsset __get_currentFontAsset() const;

 ::UnityEngine::TextCore::Text::SpriteAsset __declspec(property(get=__get_currentSpriteAsset, put=__set_currentSpriteAsset))  currentSpriteAsset;

constexpr void __set_currentSpriteAsset(::UnityEngine::TextCore::Text::SpriteAsset value) ;

constexpr ::UnityEngine::TextCore::Text::SpriteAsset __get_currentSpriteAsset() const;

 ::UnityEngine::Material __declspec(property(get=__get_currentMaterial, put=__set_currentMaterial))  currentMaterial;

constexpr void __set_currentMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get_currentMaterial() const;

 int32_t __declspec(property(get=__get_currentMaterialIndex, put=__set_currentMaterialIndex))  currentMaterialIndex;

constexpr void __set_currentMaterialIndex(int32_t value) ;

constexpr int32_t __get_currentMaterialIndex() const;

 ::UnityEngine::TextCore::Text::Extents __declspec(property(get=__get_meshExtents, put=__set_meshExtents))  meshExtents;

constexpr void __set_meshExtents(::UnityEngine::TextCore::Text::Extents value) ;

constexpr ::UnityEngine::TextCore::Text::Extents __get_meshExtents() const;

 bool __declspec(property(get=__get_tagNoParsing, put=__set_tagNoParsing))  tagNoParsing;

constexpr void __set_tagNoParsing(bool value) ;

constexpr bool __get_tagNoParsing() const;

 bool __declspec(property(get=__get_isNonBreakingSpace, put=__set_isNonBreakingSpace))  isNonBreakingSpace;

constexpr void __set_isNonBreakingSpace(bool value) ;

constexpr bool __get_isNonBreakingSpace() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::WordWrapState, "UnityEngine.TextCore.Text", "WordWrapState");
