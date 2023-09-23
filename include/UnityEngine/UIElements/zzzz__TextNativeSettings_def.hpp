#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
struct FontStyle;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TextNativeSettings;
}
// Type: UnityEngine.UIElements::TextNativeSettings
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15398))
// CS Name: UnityEngine.UIElements.TextNativeSettings
struct CORDL_TYPE TextNativeSettings : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "font", ty: "UnityEngine::Font", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "scaling", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "style", ty: "UnityEngine::FontStyle", modifiers: "", def_value: None }, CppParam { name: "color", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "anchor", ty: "UnityEngine::TextAnchor", modifiers: "", def_value: None }, CppParam { name: "wordWrap", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "wordWrapWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "richText", ty: "bool", modifiers: "", def_value: None }]
constexpr TextNativeSettings(::StringW text, UnityEngine::Font font, int32_t size, float_t scaling, UnityEngine::FontStyle style, UnityEngine::Color color, UnityEngine::TextAnchor anchor, bool wordWrap, float_t wordWrapWidth, bool richText) noexcept;


                    constexpr TextNativeSettings(TextNativeSettings const&) = default;
                    constexpr TextNativeSettings(TextNativeSettings&&) = default;
                    constexpr TextNativeSettings& operator=(TextNativeSettings const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TextNativeSettings& operator=(TextNativeSettings&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TextNativeSettings(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_text, put=__set_text))  text;

constexpr void __set_text(::StringW value) ;

constexpr ::StringW __get_text() const;

 UnityEngine::Font __declspec(property(get=__get_font, put=__set_font))  font;

constexpr void __set_font(UnityEngine::Font value) ;

constexpr UnityEngine::Font __get_font() const;

 int32_t __declspec(property(get=__get_size, put=__set_size))  size;

constexpr void __set_size(int32_t value) ;

constexpr int32_t __get_size() const;

 float_t __declspec(property(get=__get_scaling, put=__set_scaling))  scaling;

constexpr void __set_scaling(float_t value) ;

constexpr float_t __get_scaling() const;

 UnityEngine::FontStyle __declspec(property(get=__get_style, put=__set_style))  style;

constexpr void __set_style(UnityEngine::FontStyle value) ;

constexpr UnityEngine::FontStyle __get_style() const;

 UnityEngine::Color __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_color() const;

 UnityEngine::TextAnchor __declspec(property(get=__get_anchor, put=__set_anchor))  anchor;

constexpr void __set_anchor(UnityEngine::TextAnchor value) ;

constexpr UnityEngine::TextAnchor __get_anchor() const;

 bool __declspec(property(get=__get_wordWrap, put=__set_wordWrap))  wordWrap;

constexpr void __set_wordWrap(bool value) ;

constexpr bool __get_wordWrap() const;

 float_t __declspec(property(get=__get_wordWrapWidth, put=__set_wordWrapWidth))  wordWrapWidth;

constexpr void __set_wordWrapWidth(float_t value) ;

constexpr float_t __get_wordWrapWidth() const;

 bool __declspec(property(get=__get_richText, put=__set_richText))  richText;

constexpr void __set_richText(bool value) ;

constexpr bool __get_richText() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::TextNativeSettings, "UnityEngine.UIElements", "TextNativeSettings");
