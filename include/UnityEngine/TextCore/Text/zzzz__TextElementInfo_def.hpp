#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::TextCore::Text {
struct FontStyles;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine::TextCore::Text {
struct TextElementType;
}
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::TextCore::Text {
struct TextVertex;
}
namespace UnityEngine::TextCore::Text {
class TextElement;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TextElementInfo;
}
// Type: UnityEngine.TextCore.Text::TextElementInfo
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13512))
// CS Name: UnityEngine.TextCore.Text.TextElementInfo
struct CORDL_TYPE TextElementInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "character", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "elementType", ty: "UnityEngine::TextCore::Text::TextElementType", modifiers: "", def_value: None }, CppParam { name: "textElement", ty: "UnityEngine::TextCore::Text::TextElement", modifiers: "", def_value: None }, CppParam { name: "fontAsset", ty: "UnityEngine::TextCore::Text::FontAsset", modifiers: "", def_value: None }, CppParam { name: "spriteAsset", ty: "UnityEngine::TextCore::Text::SpriteAsset", modifiers: "", def_value: None }, CppParam { name: "spriteIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "material", ty: "UnityEngine::Material", modifiers: "", def_value: None }, CppParam { name: "materialReferenceIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isUsingAlternateTypeface", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "pointSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pageNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertexIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertexTopLeft", ty: "UnityEngine::TextCore::Text::TextVertex", modifiers: "", def_value: None }, CppParam { name: "vertexBottomLeft", ty: "UnityEngine::TextCore::Text::TextVertex", modifiers: "", def_value: None }, CppParam { name: "vertexTopRight", ty: "UnityEngine::TextCore::Text::TextVertex", modifiers: "", def_value: None }, CppParam { name: "vertexBottomRight", ty: "UnityEngine::TextCore::Text::TextVertex", modifiers: "", def_value: None }, CppParam { name: "topLeft", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "bottomLeft", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "topRight", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "bottomRight", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "origin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ascender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "baseLine", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "descender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "xAdvance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "aspectRatio", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "color", ty: "UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "underlineColor", ty: "UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "strikethroughColor", ty: "UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "highlightColor", ty: "UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "style", ty: "UnityEngine::TextCore::Text::FontStyles", modifiers: "", def_value: None }, CppParam { name: "isVisible", ty: "bool", modifiers: "", def_value: None }]
constexpr TextElementInfo(char16_t character, int32_t index, UnityEngine::TextCore::Text::TextElementType elementType, UnityEngine::TextCore::Text::TextElement textElement, UnityEngine::TextCore::Text::FontAsset fontAsset, UnityEngine::TextCore::Text::SpriteAsset spriteAsset, int32_t spriteIndex, UnityEngine::Material material, int32_t materialReferenceIndex, bool isUsingAlternateTypeface, float_t pointSize, int32_t lineNumber, int32_t pageNumber, int32_t vertexIndex, UnityEngine::TextCore::Text::TextVertex vertexTopLeft, UnityEngine::TextCore::Text::TextVertex vertexBottomLeft, UnityEngine::TextCore::Text::TextVertex vertexTopRight, UnityEngine::TextCore::Text::TextVertex vertexBottomRight, UnityEngine::Vector3 topLeft, UnityEngine::Vector3 bottomLeft, UnityEngine::Vector3 topRight, UnityEngine::Vector3 bottomRight, float_t origin, float_t ascender, float_t baseLine, float_t descender, float_t xAdvance, float_t aspectRatio, float_t scale, UnityEngine::Color32 color, UnityEngine::Color32 underlineColor, UnityEngine::Color32 strikethroughColor, UnityEngine::Color32 highlightColor, UnityEngine::TextCore::Text::FontStyles style, bool isVisible) noexcept;


                    constexpr TextElementInfo(TextElementInfo const&) = default;
                    constexpr TextElementInfo(TextElementInfo&&) = default;
                    constexpr TextElementInfo& operator=(TextElementInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextElementInfo& operator=(TextElementInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x158};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextElementInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 char16_t __declspec(property(get=__get_character, put=__set_character))  character;

constexpr void __set_character(char16_t value) ;

constexpr char16_t __get_character() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;

 UnityEngine::TextCore::Text::TextElementType __declspec(property(get=__get_elementType, put=__set_elementType))  elementType;

constexpr void __set_elementType(UnityEngine::TextCore::Text::TextElementType value) ;

constexpr UnityEngine::TextCore::Text::TextElementType __get_elementType() const;

 UnityEngine::TextCore::Text::TextElement __declspec(property(get=__get_textElement, put=__set_textElement))  textElement;

constexpr void __set_textElement(UnityEngine::TextCore::Text::TextElement value) ;

constexpr UnityEngine::TextCore::Text::TextElement __get_textElement() const;

 UnityEngine::TextCore::Text::FontAsset __declspec(property(get=__get_fontAsset, put=__set_fontAsset))  fontAsset;

constexpr void __set_fontAsset(UnityEngine::TextCore::Text::FontAsset value) ;

constexpr UnityEngine::TextCore::Text::FontAsset __get_fontAsset() const;

 UnityEngine::TextCore::Text::SpriteAsset __declspec(property(get=__get_spriteAsset, put=__set_spriteAsset))  spriteAsset;

constexpr void __set_spriteAsset(UnityEngine::TextCore::Text::SpriteAsset value) ;

constexpr UnityEngine::TextCore::Text::SpriteAsset __get_spriteAsset() const;

 int32_t __declspec(property(get=__get_spriteIndex, put=__set_spriteIndex))  spriteIndex;

constexpr void __set_spriteIndex(int32_t value) ;

constexpr int32_t __get_spriteIndex() const;

 UnityEngine::Material __declspec(property(get=__get_material, put=__set_material))  material;

constexpr void __set_material(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_material() const;

 int32_t __declspec(property(get=__get_materialReferenceIndex, put=__set_materialReferenceIndex))  materialReferenceIndex;

constexpr void __set_materialReferenceIndex(int32_t value) ;

constexpr int32_t __get_materialReferenceIndex() const;

 bool __declspec(property(get=__get_isUsingAlternateTypeface, put=__set_isUsingAlternateTypeface))  isUsingAlternateTypeface;

constexpr void __set_isUsingAlternateTypeface(bool value) ;

constexpr bool __get_isUsingAlternateTypeface() const;

 float_t __declspec(property(get=__get_pointSize, put=__set_pointSize))  pointSize;

constexpr void __set_pointSize(float_t value) ;

constexpr float_t __get_pointSize() const;

 int32_t __declspec(property(get=__get_lineNumber, put=__set_lineNumber))  lineNumber;

constexpr void __set_lineNumber(int32_t value) ;

constexpr int32_t __get_lineNumber() const;

 int32_t __declspec(property(get=__get_pageNumber, put=__set_pageNumber))  pageNumber;

constexpr void __set_pageNumber(int32_t value) ;

constexpr int32_t __get_pageNumber() const;

 int32_t __declspec(property(get=__get_vertexIndex, put=__set_vertexIndex))  vertexIndex;

constexpr void __set_vertexIndex(int32_t value) ;

constexpr int32_t __get_vertexIndex() const;

 UnityEngine::TextCore::Text::TextVertex __declspec(property(get=__get_vertexTopLeft, put=__set_vertexTopLeft))  vertexTopLeft;

constexpr void __set_vertexTopLeft(UnityEngine::TextCore::Text::TextVertex value) ;

constexpr UnityEngine::TextCore::Text::TextVertex __get_vertexTopLeft() const;

 UnityEngine::TextCore::Text::TextVertex __declspec(property(get=__get_vertexBottomLeft, put=__set_vertexBottomLeft))  vertexBottomLeft;

constexpr void __set_vertexBottomLeft(UnityEngine::TextCore::Text::TextVertex value) ;

constexpr UnityEngine::TextCore::Text::TextVertex __get_vertexBottomLeft() const;

 UnityEngine::TextCore::Text::TextVertex __declspec(property(get=__get_vertexTopRight, put=__set_vertexTopRight))  vertexTopRight;

constexpr void __set_vertexTopRight(UnityEngine::TextCore::Text::TextVertex value) ;

constexpr UnityEngine::TextCore::Text::TextVertex __get_vertexTopRight() const;

 UnityEngine::TextCore::Text::TextVertex __declspec(property(get=__get_vertexBottomRight, put=__set_vertexBottomRight))  vertexBottomRight;

constexpr void __set_vertexBottomRight(UnityEngine::TextCore::Text::TextVertex value) ;

constexpr UnityEngine::TextCore::Text::TextVertex __get_vertexBottomRight() const;

 UnityEngine::Vector3 __declspec(property(get=__get_topLeft, put=__set_topLeft))  topLeft;

constexpr void __set_topLeft(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_topLeft() const;

 UnityEngine::Vector3 __declspec(property(get=__get_bottomLeft, put=__set_bottomLeft))  bottomLeft;

constexpr void __set_bottomLeft(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_bottomLeft() const;

 UnityEngine::Vector3 __declspec(property(get=__get_topRight, put=__set_topRight))  topRight;

constexpr void __set_topRight(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_topRight() const;

 UnityEngine::Vector3 __declspec(property(get=__get_bottomRight, put=__set_bottomRight))  bottomRight;

constexpr void __set_bottomRight(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_bottomRight() const;

 float_t __declspec(property(get=__get_origin, put=__set_origin))  origin;

constexpr void __set_origin(float_t value) ;

constexpr float_t __get_origin() const;

 float_t __declspec(property(get=__get_ascender, put=__set_ascender))  ascender;

constexpr void __set_ascender(float_t value) ;

constexpr float_t __get_ascender() const;

 float_t __declspec(property(get=__get_baseLine, put=__set_baseLine))  baseLine;

constexpr void __set_baseLine(float_t value) ;

constexpr float_t __get_baseLine() const;

 float_t __declspec(property(get=__get_descender, put=__set_descender))  descender;

constexpr void __set_descender(float_t value) ;

constexpr float_t __get_descender() const;

 float_t __declspec(property(get=__get_xAdvance, put=__set_xAdvance))  xAdvance;

constexpr void __set_xAdvance(float_t value) ;

constexpr float_t __get_xAdvance() const;

 float_t __declspec(property(get=__get_aspectRatio, put=__set_aspectRatio))  aspectRatio;

constexpr void __set_aspectRatio(float_t value) ;

constexpr float_t __get_aspectRatio() const;

 float_t __declspec(property(get=__get_scale, put=__set_scale))  scale;

constexpr void __set_scale(float_t value) ;

constexpr float_t __get_scale() const;

 UnityEngine::Color32 __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_color() const;

 UnityEngine::Color32 __declspec(property(get=__get_underlineColor, put=__set_underlineColor))  underlineColor;

constexpr void __set_underlineColor(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_underlineColor() const;

 UnityEngine::Color32 __declspec(property(get=__get_strikethroughColor, put=__set_strikethroughColor))  strikethroughColor;

constexpr void __set_strikethroughColor(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_strikethroughColor() const;

 UnityEngine::Color32 __declspec(property(get=__get_highlightColor, put=__set_highlightColor))  highlightColor;

constexpr void __set_highlightColor(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_highlightColor() const;

 UnityEngine::TextCore::Text::FontStyles __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(UnityEngine::TextCore::Text::FontStyles value) ;

constexpr UnityEngine::TextCore::Text::FontStyles __get_style() const;

 bool __declspec(property(get=__get_isVisible, put=__set_isVisible))  isVisible;

constexpr void __set_isVisible(bool value) ;

constexpr bool __get_isVisible() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::TextElementInfo, "UnityEngine.TextCore.Text", "TextElementInfo");
