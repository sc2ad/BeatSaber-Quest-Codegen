#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Color32;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
class TMP_TextElement;
}
namespace TMPro {
class TMP_SpriteAsset;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Material;
}
namespace TMPro {
struct TMP_Vertex;
}
namespace TMPro {
struct HighlightState;
}
namespace TMPro {
struct FontStyles;
}
namespace TMPro {
struct TMP_TextElementType;
}
// Forward declare root types
namespace TMPro {
struct TMP_CharacterInfo;
}
// Type: TMPro::TMP_CharacterInfo
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12274))
// CS Name: TMPro.TMP_CharacterInfo
struct CORDL_TYPE TMP_CharacterInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "character", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "stringLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "elementType", ty: "TMPro::TMP_TextElementType", modifiers: "", def_value: None }, CppParam { name: "textElement", ty: "TMPro::TMP_TextElement", modifiers: "", def_value: None }, CppParam { name: "fontAsset", ty: "TMPro::TMP_FontAsset", modifiers: "", def_value: None }, CppParam { name: "spriteAsset", ty: "TMPro::TMP_SpriteAsset", modifiers: "", def_value: None }, CppParam { name: "spriteIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "material", ty: "UnityEngine::Material", modifiers: "", def_value: None }, CppParam { name: "materialReferenceIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isUsingAlternateTypeface", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "pointSize", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "lineNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pageNumber", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertexIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertex_BL", ty: "TMPro::TMP_Vertex", modifiers: "", def_value: None }, CppParam { name: "vertex_TL", ty: "TMPro::TMP_Vertex", modifiers: "", def_value: None }, CppParam { name: "vertex_TR", ty: "TMPro::TMP_Vertex", modifiers: "", def_value: None }, CppParam { name: "vertex_BR", ty: "TMPro::TMP_Vertex", modifiers: "", def_value: None }, CppParam { name: "topLeft", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "bottomLeft", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "topRight", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "bottomRight", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "origin", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "xAdvance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ascender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "baseLine", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "descender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "adjustedAscender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "adjustedDescender", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "aspectRatio", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "color", ty: "UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "underlineColor", ty: "UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "underlineVertexIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "strikethroughColor", ty: "UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "strikethroughVertexIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "highlightColor", ty: "UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "highlightState", ty: "TMPro::HighlightState", modifiers: "", def_value: None }, CppParam { name: "style", ty: "TMPro::FontStyles", modifiers: "", def_value: None }, CppParam { name: "isVisible", ty: "bool", modifiers: "", def_value: None }]
constexpr TMP_CharacterInfo(char16_t character, int32_t index, int32_t stringLength, TMPro::TMP_TextElementType elementType, TMPro::TMP_TextElement textElement, TMPro::TMP_FontAsset fontAsset, TMPro::TMP_SpriteAsset spriteAsset, int32_t spriteIndex, UnityEngine::Material material, int32_t materialReferenceIndex, bool isUsingAlternateTypeface, float_t pointSize, int32_t lineNumber, int32_t pageNumber, int32_t vertexIndex, TMPro::TMP_Vertex vertex_BL, TMPro::TMP_Vertex vertex_TL, TMPro::TMP_Vertex vertex_TR, TMPro::TMP_Vertex vertex_BR, UnityEngine::Vector3 topLeft, UnityEngine::Vector3 bottomLeft, UnityEngine::Vector3 topRight, UnityEngine::Vector3 bottomRight, float_t origin, float_t xAdvance, float_t ascender, float_t baseLine, float_t descender, float_t adjustedAscender, float_t adjustedDescender, float_t aspectRatio, float_t scale, UnityEngine::Color32 color, UnityEngine::Color32 underlineColor, int32_t underlineVertexIndex, UnityEngine::Color32 strikethroughColor, int32_t strikethroughVertexIndex, UnityEngine::Color32 highlightColor, TMPro::HighlightState highlightState, TMPro::FontStyles style, bool isVisible) noexcept;


                    constexpr TMP_CharacterInfo(TMP_CharacterInfo const&) = default;
                    constexpr TMP_CharacterInfo(TMP_CharacterInfo&&) = default;
                    constexpr TMP_CharacterInfo& operator=(TMP_CharacterInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TMP_CharacterInfo& operator=(TMP_CharacterInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x178};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TMP_CharacterInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 int32_t __declspec(property(get=__get_stringLength, put=__set_stringLength))  stringLength;

constexpr void __set_stringLength(int32_t value) ;

constexpr int32_t __get_stringLength() const;

 TMPro::TMP_TextElementType __declspec(property(get=__get_elementType, put=__set_elementType))  elementType;

constexpr void __set_elementType(TMPro::TMP_TextElementType value) ;

constexpr TMPro::TMP_TextElementType __get_elementType() const;

 TMPro::TMP_TextElement __declspec(property(get=__get_textElement, put=__set_textElement))  textElement;

constexpr void __set_textElement(TMPro::TMP_TextElement value) ;

constexpr TMPro::TMP_TextElement __get_textElement() const;

 TMPro::TMP_FontAsset __declspec(property(get=__get_fontAsset, put=__set_fontAsset))  fontAsset;

constexpr void __set_fontAsset(TMPro::TMP_FontAsset value) ;

constexpr TMPro::TMP_FontAsset __get_fontAsset() const;

 TMPro::TMP_SpriteAsset __declspec(property(get=__get_spriteAsset, put=__set_spriteAsset))  spriteAsset;

constexpr void __set_spriteAsset(TMPro::TMP_SpriteAsset value) ;

constexpr TMPro::TMP_SpriteAsset __get_spriteAsset() const;

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

 TMPro::TMP_Vertex __declspec(property(get=__get_vertex_BL, put=__set_vertex_BL))  vertex_BL;

constexpr void __set_vertex_BL(TMPro::TMP_Vertex value) ;

constexpr TMPro::TMP_Vertex __get_vertex_BL() const;

 TMPro::TMP_Vertex __declspec(property(get=__get_vertex_TL, put=__set_vertex_TL))  vertex_TL;

constexpr void __set_vertex_TL(TMPro::TMP_Vertex value) ;

constexpr TMPro::TMP_Vertex __get_vertex_TL() const;

 TMPro::TMP_Vertex __declspec(property(get=__get_vertex_TR, put=__set_vertex_TR))  vertex_TR;

constexpr void __set_vertex_TR(TMPro::TMP_Vertex value) ;

constexpr TMPro::TMP_Vertex __get_vertex_TR() const;

 TMPro::TMP_Vertex __declspec(property(get=__get_vertex_BR, put=__set_vertex_BR))  vertex_BR;

constexpr void __set_vertex_BR(TMPro::TMP_Vertex value) ;

constexpr TMPro::TMP_Vertex __get_vertex_BR() const;

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

 float_t __declspec(property(get=__get_xAdvance, put=__set_xAdvance))  xAdvance;

constexpr void __set_xAdvance(float_t value) ;

constexpr float_t __get_xAdvance() const;

 float_t __declspec(property(get=__get_ascender, put=__set_ascender))  ascender;

constexpr void __set_ascender(float_t value) ;

constexpr float_t __get_ascender() const;

 float_t __declspec(property(get=__get_baseLine, put=__set_baseLine))  baseLine;

constexpr void __set_baseLine(float_t value) ;

constexpr float_t __get_baseLine() const;

 float_t __declspec(property(get=__get_descender, put=__set_descender))  descender;

constexpr void __set_descender(float_t value) ;

constexpr float_t __get_descender() const;

 float_t __declspec(property(get=__get_adjustedAscender, put=__set_adjustedAscender))  adjustedAscender;

constexpr void __set_adjustedAscender(float_t value) ;

constexpr float_t __get_adjustedAscender() const;

 float_t __declspec(property(get=__get_adjustedDescender, put=__set_adjustedDescender))  adjustedDescender;

constexpr void __set_adjustedDescender(float_t value) ;

constexpr float_t __get_adjustedDescender() const;

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

 int32_t __declspec(property(get=__get_underlineVertexIndex, put=__set_underlineVertexIndex))  underlineVertexIndex;

constexpr void __set_underlineVertexIndex(int32_t value) ;

constexpr int32_t __get_underlineVertexIndex() const;

 UnityEngine::Color32 __declspec(property(get=__get_strikethroughColor, put=__set_strikethroughColor))  strikethroughColor;

constexpr void __set_strikethroughColor(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_strikethroughColor() const;

 int32_t __declspec(property(get=__get_strikethroughVertexIndex, put=__set_strikethroughVertexIndex))  strikethroughVertexIndex;

constexpr void __set_strikethroughVertexIndex(int32_t value) ;

constexpr int32_t __get_strikethroughVertexIndex() const;

 UnityEngine::Color32 __declspec(property(get=__get_highlightColor, put=__set_highlightColor))  highlightColor;

constexpr void __set_highlightColor(UnityEngine::Color32 value) ;

constexpr UnityEngine::Color32 __get_highlightColor() const;

 TMPro::HighlightState __declspec(property(get=__get_highlightState, put=__set_highlightState))  highlightState;

constexpr void __set_highlightState(TMPro::HighlightState value) ;

constexpr TMPro::HighlightState __get_highlightState() const;

 TMPro::FontStyles __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(TMPro::FontStyles value) ;

constexpr TMPro::FontStyles __get_style() const;

 bool __declspec(property(get=__get_isVisible, put=__set_isVisible))  isVisible;

constexpr void __set_isVisible(bool value) ;

constexpr bool __get_isVisible() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_CharacterInfo, "TMPro", "TMP_CharacterInfo");
