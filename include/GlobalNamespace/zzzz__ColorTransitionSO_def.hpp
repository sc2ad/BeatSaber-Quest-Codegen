#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BaseTransitionSO_def.hpp"
namespace GlobalNamespace {
class ColorSO;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorTransitionSO;
}
// Type: ::ColorTransitionSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5545))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5550))
// CS Name: ColorTransitionSO
class CORDL_TYPE ColorTransitionSO : public GlobalNamespace::BaseTransitionSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~ColorTransitionSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorTransitionSO", modifiers: " const&", def_value: None }]
constexpr ColorTransitionSO(ColorTransitionSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorTransitionSO", modifiers: "&&", def_value: None }]
constexpr ColorTransitionSO(ColorTransitionSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorTransitionSO(void* ptr) noexcept : GlobalNamespace::BaseTransitionSO(ptr) {
}


  constexpr ColorTransitionSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorTransitionSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorTransitionSO& operator=(ColorTransitionSO&& o) noexcept = default;
  constexpr ColorTransitionSO& operator=(ColorTransitionSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ColorSO __declspec(property(get=__get__normalColor, put=__set__normalColor))  _normalColor;

constexpr void __set__normalColor(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get__normalColor() const;

 GlobalNamespace::ColorSO __declspec(property(get=__get__highlightedColor, put=__set__highlightedColor))  _highlightedColor;

constexpr void __set__highlightedColor(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get__highlightedColor() const;

 GlobalNamespace::ColorSO __declspec(property(get=__get__pressedColor, put=__set__pressedColor))  _pressedColor;

constexpr void __set__pressedColor(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get__pressedColor() const;

 GlobalNamespace::ColorSO __declspec(property(get=__get__disabledColor, put=__set__disabledColor))  _disabledColor;

constexpr void __set__disabledColor(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get__disabledColor() const;

 GlobalNamespace::ColorSO __declspec(property(get=__get__selectedColor, put=__set__selectedColor))  _selectedColor;

constexpr void __set__selectedColor(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get__selectedColor() const;

 GlobalNamespace::ColorSO __declspec(property(get=__get__selectedAndHighlightedColor, put=__set__selectedAndHighlightedColor))  _selectedAndHighlightedColor;

constexpr void __set__selectedAndHighlightedColor(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get__selectedAndHighlightedColor() const;


// Properties

 UnityEngine::Color __declspec(property(get=get_normalColor))  normalColor;

 UnityEngine::Color __declspec(property(get=get_highlightedColor))  highlightedColor;

 UnityEngine::Color __declspec(property(get=get_pressedColor))  pressedColor;

 UnityEngine::Color __declspec(property(get=get_disabledColor))  disabledColor;

 UnityEngine::Color __declspec(property(get=get_selectedColor))  selectedColor;

 UnityEngine::Color __declspec(property(get=get_selectedAndHighlightedColor))  selectedAndHighlightedColor;


// Methods

/// @brief Method get_normalColor addr 0x2128384 size 0xc virtual false final false
 UnityEngine::Color get_normalColor() ;

/// @brief Method get_highlightedColor addr 0x21285f4 size 0xc virtual false final false
 UnityEngine::Color get_highlightedColor() ;

/// @brief Method get_pressedColor addr 0x212862c size 0xc virtual false final false
 UnityEngine::Color get_pressedColor() ;

/// @brief Method get_disabledColor addr 0x2128664 size 0xc virtual false final false
 UnityEngine::Color get_disabledColor() ;

/// @brief Method get_selectedColor addr 0x212869c size 0xc virtual false final false
 UnityEngine::Color get_selectedColor() ;

/// @brief Method get_selectedAndHighlightedColor addr 0x21286d4 size 0xc virtual false final false
 UnityEngine::Color get_selectedAndHighlightedColor() ;

// Ctor Parameters []
explicit ColorTransitionSO() ;

/// @brief Method .ctor addr 0x2128ee0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ColorTransitionSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorTransitionSO, "", "ColorTransitionSO");
