#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct HorizontalWrapMode;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
struct VerticalWrapMode;
}
namespace UnityEngine {
struct TextAnchor;
}
// Forward declare root types
namespace UnityEngine {
struct TextGenerationSettings;
}
// Type: UnityEngine::TextGenerationSettings
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15782))
// CS Name: UnityEngine.TextGenerationSettings
struct CORDL_TYPE TextGenerationSettings : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "font", ty: "UnityEngine::Font", modifiers: "", def_value: None }, CppParam { name: "color", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "fontSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineSpacing", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "richText", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "scaleFactor", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fontStyle", ty: "UnityEngine::FontStyle", modifiers: "", def_value: None }, CppParam { name: "textAnchor", ty: "UnityEngine::TextAnchor", modifiers: "", def_value: None }, CppParam { name: "alignByGeometry", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "resizeTextForBestFit", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "resizeTextMinSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "resizeTextMaxSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "updateBounds", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "verticalOverflow", ty: "UnityEngine::VerticalWrapMode", modifiers: "", def_value: None }, CppParam { name: "horizontalOverflow", ty: "UnityEngine::HorizontalWrapMode", modifiers: "", def_value: None }, CppParam { name: "generationExtents", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "pivot", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "generateOutOfBounds", ty: "bool", modifiers: "", def_value: None }]
constexpr TextGenerationSettings(UnityEngine::Font font, UnityEngine::Color color, int32_t fontSize, float_t lineSpacing, bool richText, float_t scaleFactor, UnityEngine::FontStyle fontStyle, UnityEngine::TextAnchor textAnchor, bool alignByGeometry, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, bool updateBounds, UnityEngine::VerticalWrapMode verticalOverflow, UnityEngine::HorizontalWrapMode horizontalOverflow, UnityEngine::Vector2 generationExtents, UnityEngine::Vector2 pivot, bool generateOutOfBounds) noexcept;


                    constexpr TextGenerationSettings(TextGenerationSettings const&) = default;
                    constexpr TextGenerationSettings(TextGenerationSettings&&) = default;
                    constexpr TextGenerationSettings& operator=(TextGenerationSettings const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextGenerationSettings& operator=(TextGenerationSettings&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextGenerationSettings(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Font __declspec(property(get=__get_font, put=__set_font))  font;

constexpr void __set_font(UnityEngine::Font value) ;

constexpr UnityEngine::Font __get_font() const;

 UnityEngine::Color __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_color() const;

 int32_t __declspec(property(get=__get_fontSize, put=__set_fontSize))  fontSize;

constexpr void __set_fontSize(int32_t value) ;

constexpr int32_t __get_fontSize() const;

 float_t __declspec(property(get=__get_lineSpacing, put=__set_lineSpacing))  lineSpacing;

constexpr void __set_lineSpacing(float_t value) ;

constexpr float_t __get_lineSpacing() const;

 bool __declspec(property(get=__get_richText, put=__set_richText))  richText;

constexpr void __set_richText(bool value) ;

constexpr bool __get_richText() const;

 float_t __declspec(property(get=__get_scaleFactor, put=__set_scaleFactor))  scaleFactor;

constexpr void __set_scaleFactor(float_t value) ;

constexpr float_t __get_scaleFactor() const;

 UnityEngine::FontStyle __declspec(property(get=__get_fontStyle, put=__set_fontStyle))  fontStyle;

constexpr void __set_fontStyle(UnityEngine::FontStyle value) ;

constexpr UnityEngine::FontStyle __get_fontStyle() const;

 UnityEngine::TextAnchor __declspec(property(get=__get_textAnchor, put=__set_textAnchor))  textAnchor;

constexpr void __set_textAnchor(UnityEngine::TextAnchor value) ;

constexpr UnityEngine::TextAnchor __get_textAnchor() const;

 bool __declspec(property(get=__get_alignByGeometry, put=__set_alignByGeometry))  alignByGeometry;

constexpr void __set_alignByGeometry(bool value) ;

constexpr bool __get_alignByGeometry() const;

 bool __declspec(property(get=__get_resizeTextForBestFit, put=__set_resizeTextForBestFit))  resizeTextForBestFit;

constexpr void __set_resizeTextForBestFit(bool value) ;

constexpr bool __get_resizeTextForBestFit() const;

 int32_t __declspec(property(get=__get_resizeTextMinSize, put=__set_resizeTextMinSize))  resizeTextMinSize;

constexpr void __set_resizeTextMinSize(int32_t value) ;

constexpr int32_t __get_resizeTextMinSize() const;

 int32_t __declspec(property(get=__get_resizeTextMaxSize, put=__set_resizeTextMaxSize))  resizeTextMaxSize;

constexpr void __set_resizeTextMaxSize(int32_t value) ;

constexpr int32_t __get_resizeTextMaxSize() const;

 bool __declspec(property(get=__get_updateBounds, put=__set_updateBounds))  updateBounds;

constexpr void __set_updateBounds(bool value) ;

constexpr bool __get_updateBounds() const;

 UnityEngine::VerticalWrapMode __declspec(property(get=__get_verticalOverflow, put=__set_verticalOverflow))  verticalOverflow;

constexpr void __set_verticalOverflow(UnityEngine::VerticalWrapMode value) ;

constexpr UnityEngine::VerticalWrapMode __get_verticalOverflow() const;

 UnityEngine::HorizontalWrapMode __declspec(property(get=__get_horizontalOverflow, put=__set_horizontalOverflow))  horizontalOverflow;

constexpr void __set_horizontalOverflow(UnityEngine::HorizontalWrapMode value) ;

constexpr UnityEngine::HorizontalWrapMode __get_horizontalOverflow() const;

 UnityEngine::Vector2 __declspec(property(get=__get_generationExtents, put=__set_generationExtents))  generationExtents;

constexpr void __set_generationExtents(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_generationExtents() const;

 UnityEngine::Vector2 __declspec(property(get=__get_pivot, put=__set_pivot))  pivot;

constexpr void __set_pivot(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_pivot() const;

 bool __declspec(property(get=__get_generateOutOfBounds, put=__set_generateOutOfBounds))  generateOutOfBounds;

constexpr void __set_generateOutOfBounds(bool value) ;

constexpr bool __get_generateOutOfBounds() const;


// Methods

/// @brief Method CompareColors addr 0x2bd48f8 size 0x138 virtual false final false
 bool CompareColors(UnityEngine::Color left, UnityEngine::Color right) ;

/// @brief Method CompareVector2 addr 0x2bd4a30 size 0xc8 virtual false final false
 bool CompareVector2(UnityEngine::Vector2 left, UnityEngine::Vector2 right) ;

/// @brief Method Equals addr 0x2bd4af8 size 0x220 virtual false final false
 bool Equals(UnityEngine::TextGenerationSettings other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextGenerationSettings, "UnityEngine", "TextGenerationSettings");
