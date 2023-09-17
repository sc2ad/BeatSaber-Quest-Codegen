#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::UIElements {
struct TextNativeSettings;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct CursorPositionStylePainterParameters;
}
// Type: UnityEngine.UIElements::CursorPositionStylePainterParameters
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6854))
// CS Name: UnityEngine.UIElements.CursorPositionStylePainterParameters
struct CORDL_TYPE CursorPositionStylePainterParameters : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "font", ty: "::UnityEngine::Font", modifiers: "", def_value: None }, CppParam { name: "fontSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "fontStyle", ty: "::UnityEngine::FontStyle", modifiers: "", def_value: None }, CppParam { name: "anchor", ty: "::UnityEngine::TextAnchor", modifiers: "", def_value: None }, CppParam { name: "wordWrapWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "richText", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "cursorIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CursorPositionStylePainterParameters(::UnityEngine::Rect rect, ::StringW text, ::UnityEngine::Font font, int32_t fontSize, ::UnityEngine::FontStyle fontStyle, ::UnityEngine::TextAnchor anchor, float_t wordWrapWidth, bool richText, int32_t cursorIndex) noexcept;


                    constexpr CursorPositionStylePainterParameters(CursorPositionStylePainterParameters const&) = default;
                    constexpr CursorPositionStylePainterParameters(CursorPositionStylePainterParameters&&) = default;
                    constexpr CursorPositionStylePainterParameters& operator=(CursorPositionStylePainterParameters const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CursorPositionStylePainterParameters& operator=(CursorPositionStylePainterParameters&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CursorPositionStylePainterParameters(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Rect __declspec(property(get=__get_rect, put=__set_rect))  rect;

constexpr void __set_rect(::UnityEngine::Rect value) ;

constexpr ::UnityEngine::Rect __get_rect() const;

 ::StringW __declspec(property(get=__get_text, put=__set_text))  text;

constexpr void __set_text(::StringW value) ;

constexpr ::StringW __get_text() const;

 ::UnityEngine::Font __declspec(property(get=__get_font, put=__set_font))  font;

constexpr void __set_font(::UnityEngine::Font value) ;

constexpr ::UnityEngine::Font __get_font() const;

 int32_t __declspec(property(get=__get_fontSize, put=__set_fontSize))  fontSize;

constexpr void __set_fontSize(int32_t value) ;

constexpr int32_t __get_fontSize() const;

 ::UnityEngine::FontStyle __declspec(property(get=__get_fontStyle, put=__set_fontStyle))  fontStyle;

constexpr void __set_fontStyle(::UnityEngine::FontStyle value) ;

constexpr ::UnityEngine::FontStyle __get_fontStyle() const;

 ::UnityEngine::TextAnchor __declspec(property(get=__get_anchor, put=__set_anchor))  anchor;

constexpr void __set_anchor(::UnityEngine::TextAnchor value) ;

constexpr ::UnityEngine::TextAnchor __get_anchor() const;

 float_t __declspec(property(get=__get_wordWrapWidth, put=__set_wordWrapWidth))  wordWrapWidth;

constexpr void __set_wordWrapWidth(float_t value) ;

constexpr float_t __get_wordWrapWidth() const;

 bool __declspec(property(get=__get_richText, put=__set_richText))  richText;

constexpr void __set_richText(bool value) ;

constexpr bool __get_richText() const;

 int32_t __declspec(property(get=__get_cursorIndex, put=__set_cursorIndex))  cursorIndex;

constexpr void __set_cursorIndex(int32_t value) ;

constexpr int32_t __get_cursorIndex() const;


// Methods

/// @brief Method GetDefault addr 0x2c3df18 size 0x148 virtual false final false
static ::UnityEngine::UIElements::CursorPositionStylePainterParameters GetDefault(::UnityEngine::UIElements::VisualElement ve, ::StringW text) ;

/// @brief Method GetTextNativeSettings addr 0x2c3e060 size 0x50 virtual false final false
 ::UnityEngine::UIElements::TextNativeSettings GetTextNativeSettings(float_t scaling) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CursorPositionStylePainterParameters, "UnityEngine.UIElements", "CursorPositionStylePainterParameters");
