#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
namespace UnityEngine::TextCore::Text {
struct ColorGradientMode;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextColorGradient;
}
// Type: UnityEngine.TextCore.Text::TextColorGradient
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13536))
// CS Name: UnityEngine.TextCore.Text.TextColorGradient
class CORDL_TYPE TextColorGradient : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~TextColorGradient() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextColorGradient", modifiers: " const&", def_value: None }]
constexpr TextColorGradient(TextColorGradient const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextColorGradient", modifiers: "&&", def_value: None }]
constexpr TextColorGradient(TextColorGradient&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextColorGradient(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr TextColorGradient& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextColorGradient& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextColorGradient& operator=(TextColorGradient&& o) noexcept = default;
  constexpr TextColorGradient& operator=(TextColorGradient const& o) noexcept = default;
                


// Fields

 UnityEngine::TextCore::Text::ColorGradientMode __declspec(property(get=__get_colorMode, put=__set_colorMode))  colorMode;

constexpr void __set_colorMode(UnityEngine::TextCore::Text::ColorGradientMode value) ;

constexpr UnityEngine::TextCore::Text::ColorGradientMode __get_colorMode() const;

 UnityEngine::Color __declspec(property(get=__get_topLeft, put=__set_topLeft))  topLeft;

constexpr void __set_topLeft(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_topLeft() const;

 UnityEngine::Color __declspec(property(get=__get_topRight, put=__set_topRight))  topRight;

constexpr void __set_topRight(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_topRight() const;

 UnityEngine::Color __declspec(property(get=__get_bottomLeft, put=__set_bottomLeft))  bottomLeft;

constexpr void __set_bottomLeft(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_bottomLeft() const;

 UnityEngine::Color __declspec(property(get=__get_bottomRight, put=__set_bottomRight))  bottomRight;

constexpr void __set_bottomRight(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_bottomRight() const;

/// @brief Field k_DefaultColorMode offset 0
static UnityEngine::TextCore::Text::ColorGradientMode const k_DefaultColorMode;

static UnityEngine::Color __declspec(property(get=__get_k_DefaultColor, put=__set_k_DefaultColor))  k_DefaultColor;

static void __set_k_DefaultColor(UnityEngine::Color value) ;

static UnityEngine::Color __get_k_DefaultColor() ;


// Methods

// Ctor Parameters []
explicit TextColorGradient() ;

/// @brief Method .ctor addr 0x2bd2370 size 0x9c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "color", ty: "UnityEngine::Color", modifiers: "", def_value: None }]
explicit TextColorGradient(UnityEngine::Color color) ;

/// @brief Method .ctor addr 0x2bd240c size 0x6c virtual false final false
 void _ctor(UnityEngine::Color color) ;

// Ctor Parameters [CppParam { name: "color0", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "color1", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "color2", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "color3", ty: "UnityEngine::Color", modifiers: "", def_value: None }]
explicit TextColorGradient(UnityEngine::Color color0, UnityEngine::Color color1, UnityEngine::Color color2, UnityEngine::Color color3) ;

/// @brief Method .ctor addr 0x2bd2478 size 0xa4 virtual false final false
 void _ctor(UnityEngine::Color color0, UnityEngine::Color color1, UnityEngine::Color color2, UnityEngine::Color color3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(UnityEngine::TextCore::Text::TextColorGradient);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::Text::TextColorGradient, "UnityEngine.TextCore.Text", "TextColorGradient");
