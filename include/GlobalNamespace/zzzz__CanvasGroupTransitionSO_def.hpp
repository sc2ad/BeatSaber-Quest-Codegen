#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BaseTransitionSO_def.hpp"
#include <cmath>
// Forward declare root types
namespace GlobalNamespace {
class CanvasGroupTransitionSO;
}
// Type: ::CanvasGroupTransitionSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5545))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5547))
// CS Name: CanvasGroupTransitionSO
class CORDL_TYPE CanvasGroupTransitionSO : public GlobalNamespace::BaseTransitionSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~CanvasGroupTransitionSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "CanvasGroupTransitionSO", modifiers: " const&", def_value: None }]
constexpr CanvasGroupTransitionSO(CanvasGroupTransitionSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CanvasGroupTransitionSO", modifiers: "&&", def_value: None }]
constexpr CanvasGroupTransitionSO(CanvasGroupTransitionSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CanvasGroupTransitionSO(void* ptr) noexcept : GlobalNamespace::BaseTransitionSO(ptr) {
}


  constexpr CanvasGroupTransitionSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CanvasGroupTransitionSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CanvasGroupTransitionSO& operator=(CanvasGroupTransitionSO&& o) noexcept = default;
  constexpr CanvasGroupTransitionSO& operator=(CanvasGroupTransitionSO const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__normalAlpha, put=__set__normalAlpha))  _normalAlpha;

constexpr void __set__normalAlpha(float_t value) ;

constexpr float_t __get__normalAlpha() const;

 float_t __declspec(property(get=__get__highlightedAlpha, put=__set__highlightedAlpha))  _highlightedAlpha;

constexpr void __set__highlightedAlpha(float_t value) ;

constexpr float_t __get__highlightedAlpha() const;

 float_t __declspec(property(get=__get__pressedAlpha, put=__set__pressedAlpha))  _pressedAlpha;

constexpr void __set__pressedAlpha(float_t value) ;

constexpr float_t __get__pressedAlpha() const;

 float_t __declspec(property(get=__get__disabledAlpha, put=__set__disabledAlpha))  _disabledAlpha;

constexpr void __set__disabledAlpha(float_t value) ;

constexpr float_t __get__disabledAlpha() const;

 float_t __declspec(property(get=__get__selectedAlpha, put=__set__selectedAlpha))  _selectedAlpha;

constexpr void __set__selectedAlpha(float_t value) ;

constexpr float_t __get__selectedAlpha() const;

 float_t __declspec(property(get=__get__selectedAndHighlightedAlpha, put=__set__selectedAndHighlightedAlpha))  _selectedAndHighlightedAlpha;

constexpr void __set__selectedAndHighlightedAlpha(float_t value) ;

constexpr float_t __get__selectedAndHighlightedAlpha() const;


// Properties

 float_t __declspec(property(get=get_normalAlpha))  normalAlpha;

 float_t __declspec(property(get=get_highlightedAlpha))  highlightedAlpha;

 float_t __declspec(property(get=get_pressedAlpha))  pressedAlpha;

 float_t __declspec(property(get=get_disabledAlpha))  disabledAlpha;

 float_t __declspec(property(get=get_selectedAlpha))  selectedAlpha;

 float_t __declspec(property(get=get_selectedAndHighlightedAlpha))  selectedAndHighlightedAlpha;


// Methods

/// @brief Method get_normalAlpha addr 0x2128318 size 0x8 virtual false final false
 float_t get_normalAlpha() ;

/// @brief Method get_highlightedAlpha addr 0x2128320 size 0x8 virtual false final false
 float_t get_highlightedAlpha() ;

/// @brief Method get_pressedAlpha addr 0x2128328 size 0x8 virtual false final false
 float_t get_pressedAlpha() ;

/// @brief Method get_disabledAlpha addr 0x2128330 size 0x8 virtual false final false
 float_t get_disabledAlpha() ;

/// @brief Method get_selectedAlpha addr 0x2128338 size 0x8 virtual false final false
 float_t get_selectedAlpha() ;

/// @brief Method get_selectedAndHighlightedAlpha addr 0x2128340 size 0x8 virtual false final false
 float_t get_selectedAndHighlightedAlpha() ;

// Ctor Parameters []
explicit CanvasGroupTransitionSO() ;

/// @brief Method .ctor addr 0x2128348 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CanvasGroupTransitionSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CanvasGroupTransitionSO, "", "CanvasGroupTransitionSO");
