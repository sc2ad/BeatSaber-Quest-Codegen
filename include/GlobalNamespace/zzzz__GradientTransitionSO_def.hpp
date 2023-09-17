#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BaseTransitionSO_def.hpp"
namespace {
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class ColorSO;
}
// Forward declare root types
namespace GlobalNamespace {
class GradientTransitionSO;
}
// Type: ::GradientTransitionSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5545))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5554))
// CS Name: GradientTransitionSO
class CORDL_TYPE GradientTransitionSO : public ::GlobalNamespace::BaseTransitionSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GradientTransitionSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "GradientTransitionSO", modifiers: " const&", def_value: None }]
constexpr GradientTransitionSO(GradientTransitionSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GradientTransitionSO", modifiers: "&&", def_value: None }]
constexpr GradientTransitionSO(GradientTransitionSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GradientTransitionSO(void* ptr) noexcept : ::GlobalNamespace::BaseTransitionSO(ptr) {
}


  constexpr GradientTransitionSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GradientTransitionSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GradientTransitionSO& operator=(GradientTransitionSO&& o) noexcept = default;
  constexpr GradientTransitionSO& operator=(GradientTransitionSO const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::ColorSO __declspec(property(get=__get__normalColor1, put=__set__normalColor1))  _normalColor1;

constexpr void __set__normalColor1(::GlobalNamespace::ColorSO value) ;

constexpr ::GlobalNamespace::ColorSO __get__normalColor1() const;

 ::GlobalNamespace::ColorSO __declspec(property(get=__get__normalColor2, put=__set__normalColor2))  _normalColor2;

constexpr void __set__normalColor2(::GlobalNamespace::ColorSO value) ;

constexpr ::GlobalNamespace::ColorSO __get__normalColor2() const;

 ::GlobalNamespace::ColorSO __declspec(property(get=__get__highlightColor1, put=__set__highlightColor1))  _highlightColor1;

constexpr void __set__highlightColor1(::GlobalNamespace::ColorSO value) ;

constexpr ::GlobalNamespace::ColorSO __get__highlightColor1() const;

 ::GlobalNamespace::ColorSO __declspec(property(get=__get__highlightColor2, put=__set__highlightColor2))  _highlightColor2;

constexpr void __set__highlightColor2(::GlobalNamespace::ColorSO value) ;

constexpr ::GlobalNamespace::ColorSO __get__highlightColor2() const;

 ::GlobalNamespace::ColorSO __declspec(property(get=__get__pressedColor1, put=__set__pressedColor1))  _pressedColor1;

constexpr void __set__pressedColor1(::GlobalNamespace::ColorSO value) ;

constexpr ::GlobalNamespace::ColorSO __get__pressedColor1() const;

 ::GlobalNamespace::ColorSO __declspec(property(get=__get__pressedColor2, put=__set__pressedColor2))  _pressedColor2;

constexpr void __set__pressedColor2(::GlobalNamespace::ColorSO value) ;

constexpr ::GlobalNamespace::ColorSO __get__pressedColor2() const;

 ::GlobalNamespace::ColorSO __declspec(property(get=__get__disabledColor1, put=__set__disabledColor1))  _disabledColor1;

constexpr void __set__disabledColor1(::GlobalNamespace::ColorSO value) ;

constexpr ::GlobalNamespace::ColorSO __get__disabledColor1() const;

 ::GlobalNamespace::ColorSO __declspec(property(get=__get__disabledColor2, put=__set__disabledColor2))  _disabledColor2;

constexpr void __set__disabledColor2(::GlobalNamespace::ColorSO value) ;

constexpr ::GlobalNamespace::ColorSO __get__disabledColor2() const;

 ::GlobalNamespace::ColorSO __declspec(property(get=__get__selectedColor1, put=__set__selectedColor1))  _selectedColor1;

constexpr void __set__selectedColor1(::GlobalNamespace::ColorSO value) ;

constexpr ::GlobalNamespace::ColorSO __get__selectedColor1() const;

 ::GlobalNamespace::ColorSO __declspec(property(get=__get__selectedColor2, put=__set__selectedColor2))  _selectedColor2;

constexpr void __set__selectedColor2(::GlobalNamespace::ColorSO value) ;

constexpr ::GlobalNamespace::ColorSO __get__selectedColor2() const;

 ::GlobalNamespace::ColorSO __declspec(property(get=__get__selectedAndHighlightedColor1, put=__set__selectedAndHighlightedColor1))  _selectedAndHighlightedColor1;

constexpr void __set__selectedAndHighlightedColor1(::GlobalNamespace::ColorSO value) ;

constexpr ::GlobalNamespace::ColorSO __get__selectedAndHighlightedColor1() const;

 ::GlobalNamespace::ColorSO __declspec(property(get=__get__selectedAndHighlightedColor2, put=__set__selectedAndHighlightedColor2))  _selectedAndHighlightedColor2;

constexpr void __set__selectedAndHighlightedColor2(::GlobalNamespace::ColorSO value) ;

constexpr ::GlobalNamespace::ColorSO __get__selectedAndHighlightedColor2() const;


// Properties

 ::UnityEngine::Color __declspec(property(get=get_normalColor1))  normalColor1;

 ::UnityEngine::Color __declspec(property(get=get_normalColor2))  normalColor2;

 ::UnityEngine::Color __declspec(property(get=get_highlightColor1))  highlightColor1;

 ::UnityEngine::Color __declspec(property(get=get_highlightColor2))  highlightColor2;

 ::UnityEngine::Color __declspec(property(get=get_pressedColor1))  pressedColor1;

 ::UnityEngine::Color __declspec(property(get=get_pressedColor2))  pressedColor2;

 ::UnityEngine::Color __declspec(property(get=get_disabledColor1))  disabledColor1;

 ::UnityEngine::Color __declspec(property(get=get_disabledColor2))  disabledColor2;

 ::UnityEngine::Color __declspec(property(get=get_selectedColor1))  selectedColor1;

 ::UnityEngine::Color __declspec(property(get=get_selectedColor2))  selectedColor2;

 ::UnityEngine::Color __declspec(property(get=get_selectedAndHighlightedColor1))  selectedAndHighlightedColor1;

 ::UnityEngine::Color __declspec(property(get=get_selectedAndHighlightedColor2))  selectedAndHighlightedColor2;


// Methods

/// @brief Method get_normalColor1 addr 0x2129140 size 0xc virtual false final false
 ::UnityEngine::Color get_normalColor1() ;

/// @brief Method get_normalColor2 addr 0x212914c size 0xc virtual false final false
 ::UnityEngine::Color get_normalColor2() ;

/// @brief Method get_highlightColor1 addr 0x21293e4 size 0xc virtual false final false
 ::UnityEngine::Color get_highlightColor1() ;

/// @brief Method get_highlightColor2 addr 0x21293f0 size 0xc virtual false final false
 ::UnityEngine::Color get_highlightColor2() ;

/// @brief Method get_pressedColor1 addr 0x212947c size 0xc virtual false final false
 ::UnityEngine::Color get_pressedColor1() ;

/// @brief Method get_pressedColor2 addr 0x2129488 size 0xc virtual false final false
 ::UnityEngine::Color get_pressedColor2() ;

/// @brief Method get_disabledColor1 addr 0x2129514 size 0xc virtual false final false
 ::UnityEngine::Color get_disabledColor1() ;

/// @brief Method get_disabledColor2 addr 0x2129520 size 0xc virtual false final false
 ::UnityEngine::Color get_disabledColor2() ;

/// @brief Method get_selectedColor1 addr 0x21295ac size 0xc virtual false final false
 ::UnityEngine::Color get_selectedColor1() ;

/// @brief Method get_selectedColor2 addr 0x21295b8 size 0xc virtual false final false
 ::UnityEngine::Color get_selectedColor2() ;

/// @brief Method get_selectedAndHighlightedColor1 addr 0x2129644 size 0xc virtual false final false
 ::UnityEngine::Color get_selectedAndHighlightedColor1() ;

/// @brief Method get_selectedAndHighlightedColor2 addr 0x2129650 size 0xc virtual false final false
 ::UnityEngine::Color get_selectedAndHighlightedColor2() ;

// Ctor Parameters []
explicit GradientTransitionSO() ;

/// @brief Method .ctor addr 0x2129ce0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::GradientTransitionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GradientTransitionSO, "", "GradientTransitionSO");
