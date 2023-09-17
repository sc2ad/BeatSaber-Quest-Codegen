#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
struct Extents;
}
namespace UnityEngine {
class Material;
}
namespace TMPro {
struct TMP_FontStyleStack;
}
namespace TMPro {
struct HighlightState;
}
namespace TMPro {
struct MaterialReference;
}
namespace TMPro {
class TMP_TextInfo;
}
namespace TMPro {
struct TMP_LineInfo;
}
namespace TMPro {
class TMP_ColorGradient;
}
namespace TMPro {
struct FontStyles;
}
namespace TMPro {
struct HorizontalAlignmentOptions;
}
namespace UnityEngine {
struct Color32;
}
namespace TMPro {
template<typename T>
struct TMP_TextProcessingStack_1;
}
namespace TMPro {
class TMP_SpriteAsset;
}
namespace TMPro {
struct FontWeight;
}
// Forward declare root types
namespace TMPro {
struct WordWrapState;
}
// Type: TMPro::WordWrapState
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12266))
// CS Name: TMPro.WordWrapState
struct CORDL_TYPE WordWrapState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "previous_WordBreak", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "total_CharacterCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visible_CharacterCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visible_SpriteCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visible_LinkCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstVisibleCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastVisibleCharIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxCapHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxAscender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxDescender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "startOfLineAscender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxLineAscender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxLineDescender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "pageAscender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "horizontalAlignment", ty: "::TMPro::HorizontalAlignmentOptions", modifiers: "", def_value: None }, CppParam { name: "marginLeft", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "marginRight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "xAdvance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "preferredWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "preferredHeight", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "previousLineScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "wordCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fontStyle", ty: "::TMPro::FontStyles", modifiers: "", def_value: None }, CppParam { name: "italicAngle", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fontScaleMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "currentFontSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "baselineOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lineOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "isDrivenLineSpacing", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "glyphHorizontalAdvanceAdjustment", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "cSpace", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "mSpace", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "textInfo", ty: "::TMPro::TMP_TextInfo", modifiers: "", def_value: None }, CppParam { name: "lineInfo", ty: "::TMPro::TMP_LineInfo", modifiers: "", def_value: None }, CppParam { name: "vertexColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "underlineColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "strikethroughColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "highlightColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "basicStyleStack", ty: "::TMPro::TMP_FontStyleStack", modifiers: "", def_value: None }, CppParam { name: "italicAngleStack", ty: "::TMPro::TMP_TextProcessingStack_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "colorStack", ty: "::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "underlineColorStack", ty: "::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "strikethroughColorStack", ty: "::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "highlightColorStack", ty: "::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32>", modifiers: "", def_value: None }, CppParam { name: "highlightStateStack", ty: "::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState>", modifiers: "", def_value: None }, CppParam { name: "colorGradientStack", ty: "::TMPro::TMP_TextProcessingStack_1<::TMPro::TMP_ColorGradient>", modifiers: "", def_value: None }, CppParam { name: "sizeStack", ty: "::TMPro::TMP_TextProcessingStack_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "indentStack", ty: "::TMPro::TMP_TextProcessingStack_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "fontWeightStack", ty: "::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight>", modifiers: "", def_value: None }, CppParam { name: "styleStack", ty: "::TMPro::TMP_TextProcessingStack_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "baselineStack", ty: "::TMPro::TMP_TextProcessingStack_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "actionStack", ty: "::TMPro::TMP_TextProcessingStack_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "materialReferenceStack", ty: "::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference>", modifiers: "", def_value: None }, CppParam { name: "lineJustificationStack", ty: "::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions>", modifiers: "", def_value: None }, CppParam { name: "spriteAnimationID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currentFontAsset", ty: "::TMPro::TMP_FontAsset", modifiers: "", def_value: None }, CppParam { name: "currentSpriteAsset", ty: "::TMPro::TMP_SpriteAsset", modifiers: "", def_value: None }, CppParam { name: "currentMaterial", ty: "::UnityEngine::Material", modifiers: "", def_value: None }, CppParam { name: "currentMaterialIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "meshExtents", ty: "::TMPro::Extents", modifiers: "", def_value: None }, CppParam { name: "tagNoParsing", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isNonBreakingSpace", ty: "bool", modifiers: "", def_value: None }]
constexpr WordWrapState(int32_t previous_WordBreak, int32_t total_CharacterCount, int32_t visible_CharacterCount, int32_t visible_SpriteCount, int32_t visible_LinkCount, int32_t firstCharacterIndex, int32_t firstVisibleCharacterIndex, int32_t lastCharacterIndex, int32_t lastVisibleCharIndex, int32_t lineNumber, float_t maxCapHeight, float_t maxAscender, float_t maxDescender, float_t startOfLineAscender, float_t maxLineAscender, float_t maxLineDescender, float_t pageAscender, ::TMPro::HorizontalAlignmentOptions horizontalAlignment, float_t marginLeft, float_t marginRight, float_t xAdvance, float_t preferredWidth, float_t preferredHeight, float_t previousLineScale, int32_t wordCount, ::TMPro::FontStyles fontStyle, int32_t italicAngle, float_t fontScaleMultiplier, float_t currentFontSize, float_t baselineOffset, float_t lineOffset, bool isDrivenLineSpacing, float_t glyphHorizontalAdvanceAdjustment, float_t cSpace, float_t mSpace, ::TMPro::TMP_TextInfo textInfo, ::TMPro::TMP_LineInfo lineInfo, ::UnityEngine::Color32 vertexColor, ::UnityEngine::Color32 underlineColor, ::UnityEngine::Color32 strikethroughColor, ::UnityEngine::Color32 highlightColor, ::TMPro::TMP_FontStyleStack basicStyleStack, ::TMPro::TMP_TextProcessingStack_1<int32_t> italicAngleStack, ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> colorStack, ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> underlineColorStack, ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> strikethroughColorStack, ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> highlightColorStack, ::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState> highlightStateStack, ::TMPro::TMP_TextProcessingStack_1<::TMPro::TMP_ColorGradient> colorGradientStack, ::TMPro::TMP_TextProcessingStack_1<float_t> sizeStack, ::TMPro::TMP_TextProcessingStack_1<float_t> indentStack, ::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight> fontWeightStack, ::TMPro::TMP_TextProcessingStack_1<int32_t> styleStack, ::TMPro::TMP_TextProcessingStack_1<float_t> baselineStack, ::TMPro::TMP_TextProcessingStack_1<int32_t> actionStack, ::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference> materialReferenceStack, ::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions> lineJustificationStack, int32_t spriteAnimationID, ::TMPro::TMP_FontAsset currentFontAsset, ::TMPro::TMP_SpriteAsset currentSpriteAsset, ::UnityEngine::Material currentMaterial, int32_t currentMaterialIndex, ::TMPro::Extents meshExtents, bool tagNoParsing, bool isNonBreakingSpace) noexcept;


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
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x378};

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

 int32_t __declspec(property(get=__get_previous_WordBreak, put=__set_previous_WordBreak))  previous_WordBreak;

constexpr void __set_previous_WordBreak(int32_t value) ;

constexpr int32_t __get_previous_WordBreak() const;

 int32_t __declspec(property(get=__get_total_CharacterCount, put=__set_total_CharacterCount))  total_CharacterCount;

constexpr void __set_total_CharacterCount(int32_t value) ;

constexpr int32_t __get_total_CharacterCount() const;

 int32_t __declspec(property(get=__get_visible_CharacterCount, put=__set_visible_CharacterCount))  visible_CharacterCount;

constexpr void __set_visible_CharacterCount(int32_t value) ;

constexpr int32_t __get_visible_CharacterCount() const;

 int32_t __declspec(property(get=__get_visible_SpriteCount, put=__set_visible_SpriteCount))  visible_SpriteCount;

constexpr void __set_visible_SpriteCount(int32_t value) ;

constexpr int32_t __get_visible_SpriteCount() const;

 int32_t __declspec(property(get=__get_visible_LinkCount, put=__set_visible_LinkCount))  visible_LinkCount;

constexpr void __set_visible_LinkCount(int32_t value) ;

constexpr int32_t __get_visible_LinkCount() const;

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

 float_t __declspec(property(get=__get_startOfLineAscender, put=__set_startOfLineAscender))  startOfLineAscender;

constexpr void __set_startOfLineAscender(float_t value) ;

constexpr float_t __get_startOfLineAscender() const;

 float_t __declspec(property(get=__get_maxLineAscender, put=__set_maxLineAscender))  maxLineAscender;

constexpr void __set_maxLineAscender(float_t value) ;

constexpr float_t __get_maxLineAscender() const;

 float_t __declspec(property(get=__get_maxLineDescender, put=__set_maxLineDescender))  maxLineDescender;

constexpr void __set_maxLineDescender(float_t value) ;

constexpr float_t __get_maxLineDescender() const;

 float_t __declspec(property(get=__get_pageAscender, put=__set_pageAscender))  pageAscender;

constexpr void __set_pageAscender(float_t value) ;

constexpr float_t __get_pageAscender() const;

 ::TMPro::HorizontalAlignmentOptions __declspec(property(get=__get_horizontalAlignment, put=__set_horizontalAlignment))  horizontalAlignment;

constexpr void __set_horizontalAlignment(::TMPro::HorizontalAlignmentOptions value) ;

constexpr ::TMPro::HorizontalAlignmentOptions __get_horizontalAlignment() const;

 float_t __declspec(property(get=__get_marginLeft, put=__set_marginLeft))  marginLeft;

constexpr void __set_marginLeft(float_t value) ;

constexpr float_t __get_marginLeft() const;

 float_t __declspec(property(get=__get_marginRight, put=__set_marginRight))  marginRight;

constexpr void __set_marginRight(float_t value) ;

constexpr float_t __get_marginRight() const;

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

 ::TMPro::FontStyles __declspec(property(get=__get_fontStyle, put=__set_fontStyle))  fontStyle;

constexpr void __set_fontStyle(::TMPro::FontStyles value) ;

constexpr ::TMPro::FontStyles __get_fontStyle() const;

 int32_t __declspec(property(get=__get_italicAngle, put=__set_italicAngle))  italicAngle;

constexpr void __set_italicAngle(int32_t value) ;

constexpr int32_t __get_italicAngle() const;

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

 bool __declspec(property(get=__get_isDrivenLineSpacing, put=__set_isDrivenLineSpacing))  isDrivenLineSpacing;

constexpr void __set_isDrivenLineSpacing(bool value) ;

constexpr bool __get_isDrivenLineSpacing() const;

 float_t __declspec(property(get=__get_glyphHorizontalAdvanceAdjustment, put=__set_glyphHorizontalAdvanceAdjustment))  glyphHorizontalAdvanceAdjustment;

constexpr void __set_glyphHorizontalAdvanceAdjustment(float_t value) ;

constexpr float_t __get_glyphHorizontalAdvanceAdjustment() const;

 float_t __declspec(property(get=__get_cSpace, put=__set_cSpace))  cSpace;

constexpr void __set_cSpace(float_t value) ;

constexpr float_t __get_cSpace() const;

 float_t __declspec(property(get=__get_mSpace, put=__set_mSpace))  mSpace;

constexpr void __set_mSpace(float_t value) ;

constexpr float_t __get_mSpace() const;

 ::TMPro::TMP_TextInfo __declspec(property(get=__get_textInfo, put=__set_textInfo))  textInfo;

constexpr void __set_textInfo(::TMPro::TMP_TextInfo value) ;

constexpr ::TMPro::TMP_TextInfo __get_textInfo() const;

 ::TMPro::TMP_LineInfo __declspec(property(get=__get_lineInfo, put=__set_lineInfo))  lineInfo;

constexpr void __set_lineInfo(::TMPro::TMP_LineInfo value) ;

constexpr ::TMPro::TMP_LineInfo __get_lineInfo() const;

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

 ::TMPro::TMP_FontStyleStack __declspec(property(get=__get_basicStyleStack, put=__set_basicStyleStack))  basicStyleStack;

constexpr void __set_basicStyleStack(::TMPro::TMP_FontStyleStack value) ;

constexpr ::TMPro::TMP_FontStyleStack __get_basicStyleStack() const;

 ::TMPro::TMP_TextProcessingStack_1<int32_t> __declspec(property(get=__get_italicAngleStack, put=__set_italicAngleStack))  italicAngleStack;

constexpr void __set_italicAngleStack(::TMPro::TMP_TextProcessingStack_1<int32_t> value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<int32_t> __get_italicAngleStack() const;

 ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> __declspec(property(get=__get_colorStack, put=__set_colorStack))  colorStack;

constexpr void __set_colorStack(::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> __get_colorStack() const;

 ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> __declspec(property(get=__get_underlineColorStack, put=__set_underlineColorStack))  underlineColorStack;

constexpr void __set_underlineColorStack(::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> __get_underlineColorStack() const;

 ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> __declspec(property(get=__get_strikethroughColorStack, put=__set_strikethroughColorStack))  strikethroughColorStack;

constexpr void __set_strikethroughColorStack(::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> __get_strikethroughColorStack() const;

 ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> __declspec(property(get=__get_highlightColorStack, put=__set_highlightColorStack))  highlightColorStack;

constexpr void __set_highlightColorStack(::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::UnityEngine::Color32> __get_highlightColorStack() const;

 ::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState> __declspec(property(get=__get_highlightStateStack, put=__set_highlightStateStack))  highlightStateStack;

constexpr void __set_highlightStateStack(::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState> value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::HighlightState> __get_highlightStateStack() const;

 ::TMPro::TMP_TextProcessingStack_1<::TMPro::TMP_ColorGradient> __declspec(property(get=__get_colorGradientStack, put=__set_colorGradientStack))  colorGradientStack;

constexpr void __set_colorGradientStack(::TMPro::TMP_TextProcessingStack_1<::TMPro::TMP_ColorGradient> value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::TMP_ColorGradient> __get_colorGradientStack() const;

 ::TMPro::TMP_TextProcessingStack_1<float_t> __declspec(property(get=__get_sizeStack, put=__set_sizeStack))  sizeStack;

constexpr void __set_sizeStack(::TMPro::TMP_TextProcessingStack_1<float_t> value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<float_t> __get_sizeStack() const;

 ::TMPro::TMP_TextProcessingStack_1<float_t> __declspec(property(get=__get_indentStack, put=__set_indentStack))  indentStack;

constexpr void __set_indentStack(::TMPro::TMP_TextProcessingStack_1<float_t> value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<float_t> __get_indentStack() const;

 ::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight> __declspec(property(get=__get_fontWeightStack, put=__set_fontWeightStack))  fontWeightStack;

constexpr void __set_fontWeightStack(::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight> value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::FontWeight> __get_fontWeightStack() const;

 ::TMPro::TMP_TextProcessingStack_1<int32_t> __declspec(property(get=__get_styleStack, put=__set_styleStack))  styleStack;

constexpr void __set_styleStack(::TMPro::TMP_TextProcessingStack_1<int32_t> value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<int32_t> __get_styleStack() const;

 ::TMPro::TMP_TextProcessingStack_1<float_t> __declspec(property(get=__get_baselineStack, put=__set_baselineStack))  baselineStack;

constexpr void __set_baselineStack(::TMPro::TMP_TextProcessingStack_1<float_t> value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<float_t> __get_baselineStack() const;

 ::TMPro::TMP_TextProcessingStack_1<int32_t> __declspec(property(get=__get_actionStack, put=__set_actionStack))  actionStack;

constexpr void __set_actionStack(::TMPro::TMP_TextProcessingStack_1<int32_t> value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<int32_t> __get_actionStack() const;

 ::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference> __declspec(property(get=__get_materialReferenceStack, put=__set_materialReferenceStack))  materialReferenceStack;

constexpr void __set_materialReferenceStack(::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference> value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::MaterialReference> __get_materialReferenceStack() const;

 ::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions> __declspec(property(get=__get_lineJustificationStack, put=__set_lineJustificationStack))  lineJustificationStack;

constexpr void __set_lineJustificationStack(::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions> value) ;

constexpr ::TMPro::TMP_TextProcessingStack_1<::TMPro::HorizontalAlignmentOptions> __get_lineJustificationStack() const;

 int32_t __declspec(property(get=__get_spriteAnimationID, put=__set_spriteAnimationID))  spriteAnimationID;

constexpr void __set_spriteAnimationID(int32_t value) ;

constexpr int32_t __get_spriteAnimationID() const;

 ::TMPro::TMP_FontAsset __declspec(property(get=__get_currentFontAsset, put=__set_currentFontAsset))  currentFontAsset;

constexpr void __set_currentFontAsset(::TMPro::TMP_FontAsset value) ;

constexpr ::TMPro::TMP_FontAsset __get_currentFontAsset() const;

 ::TMPro::TMP_SpriteAsset __declspec(property(get=__get_currentSpriteAsset, put=__set_currentSpriteAsset))  currentSpriteAsset;

constexpr void __set_currentSpriteAsset(::TMPro::TMP_SpriteAsset value) ;

constexpr ::TMPro::TMP_SpriteAsset __get_currentSpriteAsset() const;

 ::UnityEngine::Material __declspec(property(get=__get_currentMaterial, put=__set_currentMaterial))  currentMaterial;

constexpr void __set_currentMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get_currentMaterial() const;

 int32_t __declspec(property(get=__get_currentMaterialIndex, put=__set_currentMaterialIndex))  currentMaterialIndex;

constexpr void __set_currentMaterialIndex(int32_t value) ;

constexpr int32_t __get_currentMaterialIndex() const;

 ::TMPro::Extents __declspec(property(get=__get_meshExtents, put=__set_meshExtents))  meshExtents;

constexpr void __set_meshExtents(::TMPro::Extents value) ;

constexpr ::TMPro::Extents __get_meshExtents() const;

 bool __declspec(property(get=__get_tagNoParsing, put=__set_tagNoParsing))  tagNoParsing;

constexpr void __set_tagNoParsing(bool value) ;

constexpr bool __get_tagNoParsing() const;

 bool __declspec(property(get=__get_isNonBreakingSpace, put=__set_isNonBreakingSpace))  isNonBreakingSpace;

constexpr void __set_isNonBreakingSpace(bool value) ;

constexpr bool __get_isNonBreakingSpace() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::TMPro::WordWrapState, "TMPro", "WordWrapState");
