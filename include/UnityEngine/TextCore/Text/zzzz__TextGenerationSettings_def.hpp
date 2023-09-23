#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::TextCore::Text {
class TextStyleSheet;
}
namespace UnityEngine::TextCore::Text {
class TextColorGradient;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
struct FontStyles;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
namespace UnityEngine::TextCore::Text {
struct TextOverflowMode;
}
namespace UnityEngine::TextCore::Text {
struct TextureMapping;
}
namespace UnityEngine::TextCore::Text {
struct TextAlignment;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::TextCore::Text {
struct TextFontWeight;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::TextCore::Text {
struct VertexSortingOrder;
}
namespace UnityEngine::TextCore::Text {
class TextSettings;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextGenerationSettings;
}
// Type: UnityEngine.TextCore.Text::TextGenerationSettings
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13502))
// CS Name: UnityEngine.TextCore.Text.TextGenerationSettings
class CORDL_TYPE TextGenerationSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x100};

virtual ~TextGenerationSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextGenerationSettings", modifiers: " const&", def_value: None }]
constexpr TextGenerationSettings(TextGenerationSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextGenerationSettings", modifiers: "&&", def_value: None }]
constexpr TextGenerationSettings(TextGenerationSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextGenerationSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TextGenerationSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextGenerationSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextGenerationSettings& operator=(TextGenerationSettings&& o) noexcept = default;
  constexpr TextGenerationSettings& operator=(TextGenerationSettings const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_text, put=__set_text))  text;

constexpr void __set_text(::StringW value) ;

constexpr ::StringW __get_text() const;

 UnityEngine::Rect __declspec(property(get=__get_screenRect, put=__set_screenRect))  screenRect;

constexpr void __set_screenRect(UnityEngine::Rect value) ;

constexpr UnityEngine::Rect __get_screenRect() const;

 UnityEngine::Vector4 __declspec(property(get=__get_margins, put=__set_margins))  margins;

constexpr void __set_margins(UnityEngine::Vector4 value) ;

constexpr UnityEngine::Vector4 __get_margins() const;

 float_t __declspec(property(get=__get_scale, put=__set_scale))  scale;

constexpr void __set_scale(float_t value) ;

constexpr float_t __get_scale() const;

 UnityEngine::TextCore::Text::FontAsset __declspec(property(get=__get_fontAsset, put=__set_fontAsset))  fontAsset;

constexpr void __set_fontAsset(UnityEngine::TextCore::Text::FontAsset value) ;

constexpr UnityEngine::TextCore::Text::FontAsset __get_fontAsset() const;

 UnityEngine::Material __declspec(property(get=__get_material, put=__set_material))  material;

constexpr void __set_material(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_material() const;

 UnityEngine::TextCore::Text::SpriteAsset __declspec(property(get=__get_spriteAsset, put=__set_spriteAsset))  spriteAsset;

constexpr void __set_spriteAsset(UnityEngine::TextCore::Text::SpriteAsset value) ;

constexpr UnityEngine::TextCore::Text::SpriteAsset __get_spriteAsset() const;

 UnityEngine::TextCore::Text::TextStyleSheet __declspec(property(get=__get_styleSheet, put=__set_styleSheet))  styleSheet;

constexpr void __set_styleSheet(UnityEngine::TextCore::Text::TextStyleSheet value) ;

constexpr UnityEngine::TextCore::Text::TextStyleSheet __get_styleSheet() const;

 UnityEngine::TextCore::Text::FontStyles __declspec(property(get=__get_fontStyle, put=__set_fontStyle))  fontStyle;

constexpr void __set_fontStyle(UnityEngine::TextCore::Text::FontStyles value) ;

constexpr UnityEngine::TextCore::Text::FontStyles __get_fontStyle() const;

 UnityEngine::TextCore::Text::TextSettings __declspec(property(get=__get_textSettings, put=__set_textSettings))  textSettings;

constexpr void __set_textSettings(UnityEngine::TextCore::Text::TextSettings value) ;

constexpr UnityEngine::TextCore::Text::TextSettings __get_textSettings() const;

 UnityEngine::TextCore::Text::TextAlignment __declspec(property(get=__get_textAlignment, put=__set_textAlignment))  textAlignment;

constexpr void __set_textAlignment(UnityEngine::TextCore::Text::TextAlignment value) ;

constexpr UnityEngine::TextCore::Text::TextAlignment __get_textAlignment() const;

 UnityEngine::TextCore::Text::TextOverflowMode __declspec(property(get=__get_overflowMode, put=__set_overflowMode))  overflowMode;

constexpr void __set_overflowMode(UnityEngine::TextCore::Text::TextOverflowMode value) ;

constexpr UnityEngine::TextCore::Text::TextOverflowMode __get_overflowMode() const;

 bool __declspec(property(get=__get_wordWrap, put=__set_wordWrap))  wordWrap;

constexpr void __set_wordWrap(bool value) ;

constexpr bool __get_wordWrap() const;

 float_t __declspec(property(get=__get_wordWrappingRatio, put=__set_wordWrappingRatio))  wordWrappingRatio;

constexpr void __set_wordWrappingRatio(float_t value) ;

constexpr float_t __get_wordWrappingRatio() const;

 UnityEngine::Color __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_color() const;

 UnityEngine::TextCore::Text::TextColorGradient __declspec(property(get=__get_fontColorGradient, put=__set_fontColorGradient))  fontColorGradient;

constexpr void __set_fontColorGradient(UnityEngine::TextCore::Text::TextColorGradient value) ;

constexpr UnityEngine::TextCore::Text::TextColorGradient __get_fontColorGradient() const;

 bool __declspec(property(get=__get_tintSprites, put=__set_tintSprites))  tintSprites;

constexpr void __set_tintSprites(bool value) ;

constexpr bool __get_tintSprites() const;

 bool __declspec(property(get=__get_overrideRichTextColors, put=__set_overrideRichTextColors))  overrideRichTextColors;

constexpr void __set_overrideRichTextColors(bool value) ;

constexpr bool __get_overrideRichTextColors() const;

 float_t __declspec(property(get=__get_fontSize, put=__set_fontSize))  fontSize;

constexpr void __set_fontSize(float_t value) ;

constexpr float_t __get_fontSize() const;

 bool __declspec(property(get=__get_autoSize, put=__set_autoSize))  autoSize;

constexpr void __set_autoSize(bool value) ;

constexpr bool __get_autoSize() const;

 float_t __declspec(property(get=__get_fontSizeMin, put=__set_fontSizeMin))  fontSizeMin;

constexpr void __set_fontSizeMin(float_t value) ;

constexpr float_t __get_fontSizeMin() const;

 float_t __declspec(property(get=__get_fontSizeMax, put=__set_fontSizeMax))  fontSizeMax;

constexpr void __set_fontSizeMax(float_t value) ;

constexpr float_t __get_fontSizeMax() const;

 bool __declspec(property(get=__get_enableKerning, put=__set_enableKerning))  enableKerning;

constexpr void __set_enableKerning(bool value) ;

constexpr bool __get_enableKerning() const;

 bool __declspec(property(get=__get_richText, put=__set_richText))  richText;

constexpr void __set_richText(bool value) ;

constexpr bool __get_richText() const;

 bool __declspec(property(get=__get_isRightToLeft, put=__set_isRightToLeft))  isRightToLeft;

constexpr void __set_isRightToLeft(bool value) ;

constexpr bool __get_isRightToLeft() const;

 bool __declspec(property(get=__get_extraPadding, put=__set_extraPadding))  extraPadding;

constexpr void __set_extraPadding(bool value) ;

constexpr bool __get_extraPadding() const;

 bool __declspec(property(get=__get_parseControlCharacters, put=__set_parseControlCharacters))  parseControlCharacters;

constexpr void __set_parseControlCharacters(bool value) ;

constexpr bool __get_parseControlCharacters() const;

 float_t __declspec(property(get=__get_characterSpacing, put=__set_characterSpacing))  characterSpacing;

constexpr void __set_characterSpacing(float_t value) ;

constexpr float_t __get_characterSpacing() const;

 float_t __declspec(property(get=__get_wordSpacing, put=__set_wordSpacing))  wordSpacing;

constexpr void __set_wordSpacing(float_t value) ;

constexpr float_t __get_wordSpacing() const;

 float_t __declspec(property(get=__get_lineSpacing, put=__set_lineSpacing))  lineSpacing;

constexpr void __set_lineSpacing(float_t value) ;

constexpr float_t __get_lineSpacing() const;

 float_t __declspec(property(get=__get_paragraphSpacing, put=__set_paragraphSpacing))  paragraphSpacing;

constexpr void __set_paragraphSpacing(float_t value) ;

constexpr float_t __get_paragraphSpacing() const;

 float_t __declspec(property(get=__get_lineSpacingMax, put=__set_lineSpacingMax))  lineSpacingMax;

constexpr void __set_lineSpacingMax(float_t value) ;

constexpr float_t __get_lineSpacingMax() const;

 int32_t __declspec(property(get=__get_maxVisibleCharacters, put=__set_maxVisibleCharacters))  maxVisibleCharacters;

constexpr void __set_maxVisibleCharacters(int32_t value) ;

constexpr int32_t __get_maxVisibleCharacters() const;

 int32_t __declspec(property(get=__get_maxVisibleWords, put=__set_maxVisibleWords))  maxVisibleWords;

constexpr void __set_maxVisibleWords(int32_t value) ;

constexpr int32_t __get_maxVisibleWords() const;

 int32_t __declspec(property(get=__get_maxVisibleLines, put=__set_maxVisibleLines))  maxVisibleLines;

constexpr void __set_maxVisibleLines(int32_t value) ;

constexpr int32_t __get_maxVisibleLines() const;

 int32_t __declspec(property(get=__get_firstVisibleCharacter, put=__set_firstVisibleCharacter))  firstVisibleCharacter;

constexpr void __set_firstVisibleCharacter(int32_t value) ;

constexpr int32_t __get_firstVisibleCharacter() const;

 bool __declspec(property(get=__get_useMaxVisibleDescender, put=__set_useMaxVisibleDescender))  useMaxVisibleDescender;

constexpr void __set_useMaxVisibleDescender(bool value) ;

constexpr bool __get_useMaxVisibleDescender() const;

 UnityEngine::TextCore::Text::TextFontWeight __declspec(property(get=__get_fontWeight, put=__set_fontWeight))  fontWeight;

constexpr void __set_fontWeight(UnityEngine::TextCore::Text::TextFontWeight value) ;

constexpr UnityEngine::TextCore::Text::TextFontWeight __get_fontWeight() const;

 int32_t __declspec(property(get=__get_pageToDisplay, put=__set_pageToDisplay))  pageToDisplay;

constexpr void __set_pageToDisplay(int32_t value) ;

constexpr int32_t __get_pageToDisplay() const;

 UnityEngine::TextCore::Text::TextureMapping __declspec(property(get=__get_horizontalMapping, put=__set_horizontalMapping))  horizontalMapping;

constexpr void __set_horizontalMapping(UnityEngine::TextCore::Text::TextureMapping value) ;

constexpr UnityEngine::TextCore::Text::TextureMapping __get_horizontalMapping() const;

 UnityEngine::TextCore::Text::TextureMapping __declspec(property(get=__get_verticalMapping, put=__set_verticalMapping))  verticalMapping;

constexpr void __set_verticalMapping(UnityEngine::TextCore::Text::TextureMapping value) ;

constexpr UnityEngine::TextCore::Text::TextureMapping __get_verticalMapping() const;

 float_t __declspec(property(get=__get_uvLineOffset, put=__set_uvLineOffset))  uvLineOffset;

constexpr void __set_uvLineOffset(float_t value) ;

constexpr float_t __get_uvLineOffset() const;

 UnityEngine::TextCore::Text::VertexSortingOrder __declspec(property(get=__get_geometrySortingOrder, put=__set_geometrySortingOrder))  geometrySortingOrder;

constexpr void __set_geometrySortingOrder(UnityEngine::TextCore::Text::VertexSortingOrder value) ;

constexpr UnityEngine::TextCore::Text::VertexSortingOrder __get_geometrySortingOrder() const;

 bool __declspec(property(get=__get_inverseYAxis, put=__set_inverseYAxis))  inverseYAxis;

constexpr void __set_inverseYAxis(bool value) ;

constexpr bool __get_inverseYAxis() const;

 float_t __declspec(property(get=__get_charWidthMaxAdj, put=__set_charWidthMaxAdj))  charWidthMaxAdj;

constexpr void __set_charWidthMaxAdj(float_t value) ;

constexpr float_t __get_charWidthMaxAdj() const;


// Methods

/// @brief Method Equals addr 0x2bc96b4 size 0x3b4 virtual false final false
 bool Equals(UnityEngine::TextCore::Text::TextGenerationSettings other) ;

/// @brief Method Equals addr 0x2bc9a68 size 0xc8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2bc9b30 size 0x56c virtual true final false
 int32_t GetHashCode() ;

// Ctor Parameters []
explicit TextGenerationSettings() ;

/// @brief Method .ctor addr 0x2bca09c size 0x5c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(UnityEngine::TextCore::Text::TextGenerationSettings);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::TextGenerationSettings, "UnityEngine.TextCore.Text", "TextGenerationSettings");
