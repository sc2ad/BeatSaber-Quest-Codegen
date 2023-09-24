#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
struct WhiteSpace;
}
namespace UnityEngine::UIElements {
template<typename T>
class IStyleDataGroup_1;
}
namespace UnityEngine::UIElements {
struct TextShadow;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
struct Visibility;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine {
class Font;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct InheritedData;
}
// Type: UnityEngine.UIElements::InheritedData
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7456))
// CS Name: UnityEngine.UIElements.InheritedData
struct CORDL_TYPE InheritedData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to UnityEngine::UIElements::IStyleDataGroup_1<UnityEngine::UIElements::InheritedData>
constexpr operator  UnityEngine::UIElements::IStyleDataGroup_1<UnityEngine::UIElements::InheritedData>() const;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::UIElements::InheritedData>
constexpr operator  System::IEquatable_1<UnityEngine::UIElements::InheritedData>() const;

// Ctor Parameters [CppParam { name: "color", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "fontSize", ty: "UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "letterSpacing", ty: "UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "textShadow", ty: "UnityEngine::UIElements::TextShadow", modifiers: "", def_value: None }, CppParam { name: "unityFont", ty: "UnityEngine::Font", modifiers: "", def_value: None }, CppParam { name: "unityFontDefinition", ty: "UnityEngine::UIElements::FontDefinition", modifiers: "", def_value: None }, CppParam { name: "unityFontStyleAndWeight", ty: "UnityEngine::FontStyle", modifiers: "", def_value: None }, CppParam { name: "unityParagraphSpacing", ty: "UnityEngine::UIElements::Length", modifiers: "", def_value: None }, CppParam { name: "unityTextAlign", ty: "UnityEngine::TextAnchor", modifiers: "", def_value: None }, CppParam { name: "unityTextOutlineColor", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "unityTextOutlineWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "visibility", ty: "UnityEngine::UIElements::Visibility", modifiers: "", def_value: None }, CppParam { name: "whiteSpace", ty: "UnityEngine::UIElements::WhiteSpace", modifiers: "", def_value: None }, CppParam { name: "wordSpacing", ty: "UnityEngine::UIElements::Length", modifiers: "", def_value: None }]
constexpr InheritedData(UnityEngine::Color color, UnityEngine::UIElements::Length fontSize, UnityEngine::UIElements::Length letterSpacing, UnityEngine::UIElements::TextShadow textShadow, UnityEngine::Font unityFont, UnityEngine::UIElements::FontDefinition unityFontDefinition, UnityEngine::FontStyle unityFontStyleAndWeight, UnityEngine::UIElements::Length unityParagraphSpacing, UnityEngine::TextAnchor unityTextAlign, UnityEngine::Color unityTextOutlineColor, float_t unityTextOutlineWidth, UnityEngine::UIElements::Visibility visibility, UnityEngine::UIElements::WhiteSpace whiteSpace, UnityEngine::UIElements::Length wordSpacing) noexcept;


                    constexpr InheritedData(InheritedData const&) = default;
                    constexpr InheritedData(InheritedData&&) = default;
                    constexpr InheritedData& operator=(InheritedData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InheritedData& operator=(InheritedData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x90};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InheritedData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Color __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_color() const;

 UnityEngine::UIElements::Length __declspec(property(get=__get_fontSize, put=__set_fontSize))  fontSize;

constexpr void __set_fontSize(UnityEngine::UIElements::Length value) ;

constexpr UnityEngine::UIElements::Length __get_fontSize() const;

 UnityEngine::UIElements::Length __declspec(property(get=__get_letterSpacing, put=__set_letterSpacing))  letterSpacing;

constexpr void __set_letterSpacing(UnityEngine::UIElements::Length value) ;

constexpr UnityEngine::UIElements::Length __get_letterSpacing() const;

 UnityEngine::UIElements::TextShadow __declspec(property(get=__get_textShadow, put=__set_textShadow))  textShadow;

constexpr void __set_textShadow(UnityEngine::UIElements::TextShadow value) ;

constexpr UnityEngine::UIElements::TextShadow __get_textShadow() const;

 UnityEngine::Font __declspec(property(get=__get_unityFont, put=__set_unityFont))  unityFont;

constexpr void __set_unityFont(UnityEngine::Font value) ;

constexpr UnityEngine::Font __get_unityFont() const;

 UnityEngine::UIElements::FontDefinition __declspec(property(get=__get_unityFontDefinition, put=__set_unityFontDefinition))  unityFontDefinition;

constexpr void __set_unityFontDefinition(UnityEngine::UIElements::FontDefinition value) ;

constexpr UnityEngine::UIElements::FontDefinition __get_unityFontDefinition() const;

 UnityEngine::FontStyle __declspec(property(get=__get_unityFontStyleAndWeight, put=__set_unityFontStyleAndWeight))  unityFontStyleAndWeight;

constexpr void __set_unityFontStyleAndWeight(UnityEngine::FontStyle value) ;

constexpr UnityEngine::FontStyle __get_unityFontStyleAndWeight() const;

 UnityEngine::UIElements::Length __declspec(property(get=__get_unityParagraphSpacing, put=__set_unityParagraphSpacing))  unityParagraphSpacing;

constexpr void __set_unityParagraphSpacing(UnityEngine::UIElements::Length value) ;

constexpr UnityEngine::UIElements::Length __get_unityParagraphSpacing() const;

 UnityEngine::TextAnchor __declspec(property(get=__get_unityTextAlign, put=__set_unityTextAlign))  unityTextAlign;

constexpr void __set_unityTextAlign(UnityEngine::TextAnchor value) ;

constexpr UnityEngine::TextAnchor __get_unityTextAlign() const;

 UnityEngine::Color __declspec(property(get=__get_unityTextOutlineColor, put=__set_unityTextOutlineColor))  unityTextOutlineColor;

constexpr void __set_unityTextOutlineColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_unityTextOutlineColor() const;

 float_t __declspec(property(get=__get_unityTextOutlineWidth, put=__set_unityTextOutlineWidth))  unityTextOutlineWidth;

constexpr void __set_unityTextOutlineWidth(float_t value) ;

constexpr float_t __get_unityTextOutlineWidth() const;

 UnityEngine::UIElements::Visibility __declspec(property(get=__get_visibility, put=__set_visibility))  visibility;

constexpr void __set_visibility(UnityEngine::UIElements::Visibility value) ;

constexpr UnityEngine::UIElements::Visibility __get_visibility() const;

 UnityEngine::UIElements::WhiteSpace __declspec(property(get=__get_whiteSpace, put=__set_whiteSpace))  whiteSpace;

constexpr void __set_whiteSpace(UnityEngine::UIElements::WhiteSpace value) ;

constexpr UnityEngine::UIElements::WhiteSpace __get_whiteSpace() const;

 UnityEngine::UIElements::Length __declspec(property(get=__get_wordSpacing, put=__set_wordSpacing))  wordSpacing;

constexpr void __set_wordSpacing(UnityEngine::UIElements::Length value) ;

constexpr UnityEngine::UIElements::Length __get_wordSpacing() const;


// Methods

/// @brief Method Copy addr 0x2d0d314 size 0x1c virtual true final true
 UnityEngine::UIElements::InheritedData Copy() ;

/// @brief Method CopyFrom addr 0x2d0d330 size 0x14 virtual true final true
 void CopyFrom(ByRef<UnityEngine::UIElements::InheritedData> other) ;

/// @brief Method op_Equality addr 0x2d0d344 size 0x200 virtual false final false
static bool op_Equality(UnityEngine::UIElements::InheritedData lhs, UnityEngine::UIElements::InheritedData rhs) ;

/// @brief Method Equals addr 0x2d0d544 size 0x4c virtual true final true
 bool Equals(UnityEngine::UIElements::InheritedData other) ;

/// @brief Method Equals addr 0x2d0d590 size 0xa8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2d0d638 size 0x24c virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::InheritedData, "UnityEngine.UIElements", "InheritedData");
