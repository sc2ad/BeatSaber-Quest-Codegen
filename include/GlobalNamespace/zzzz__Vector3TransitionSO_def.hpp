#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BaseTransitionSO_def.hpp"
namespace {
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class Vector3TransitionSO;
}
// Type: ::Vector3TransitionSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5545))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5566))
// CS Name: Vector3TransitionSO
class CORDL_TYPE Vector3TransitionSO : public ::GlobalNamespace::BaseTransitionSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~Vector3TransitionSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "Vector3TransitionSO", modifiers: " const&", def_value: None }]
constexpr Vector3TransitionSO(Vector3TransitionSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Vector3TransitionSO", modifiers: "&&", def_value: None }]
constexpr Vector3TransitionSO(Vector3TransitionSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Vector3TransitionSO(void* ptr) noexcept : ::GlobalNamespace::BaseTransitionSO(ptr) {
}


  constexpr Vector3TransitionSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Vector3TransitionSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Vector3TransitionSO& operator=(Vector3TransitionSO&& o) noexcept = default;
  constexpr Vector3TransitionSO& operator=(Vector3TransitionSO const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Vector3 __declspec(property(get=__get__normalState, put=__set__normalState))  _normalState;

constexpr void __set__normalState(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__normalState() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__highlightedState, put=__set__highlightedState))  _highlightedState;

constexpr void __set__highlightedState(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__highlightedState() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__pressedState, put=__set__pressedState))  _pressedState;

constexpr void __set__pressedState(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__pressedState() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__disabledState, put=__set__disabledState))  _disabledState;

constexpr void __set__disabledState(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__disabledState() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__selectedState, put=__set__selectedState))  _selectedState;

constexpr void __set__selectedState(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__selectedState() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__selectedAndHighlightedState, put=__set__selectedAndHighlightedState))  _selectedAndHighlightedState;

constexpr void __set__selectedAndHighlightedState(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__selectedAndHighlightedState() const;


// Properties

 ::UnityEngine::Vector3 __declspec(property(get=get_normalState))  normalState;

 ::UnityEngine::Vector3 __declspec(property(get=get_highlightedState))  highlightedState;

 ::UnityEngine::Vector3 __declspec(property(get=get_pressedState))  pressedState;

 ::UnityEngine::Vector3 __declspec(property(get=get_disabledState))  disabledState;

 ::UnityEngine::Vector3 __declspec(property(get=get_selectedState))  selectedState;

 ::UnityEngine::Vector3 __declspec(property(get=get_selectedAndHighlightedState))  selectedAndHighlightedState;


// Methods

/// @brief Method get_normalState addr 0x212c2ac size 0xc virtual false final false
 ::UnityEngine::Vector3 get_normalState() ;

/// @brief Method get_highlightedState addr 0x212c2b8 size 0xc virtual false final false
 ::UnityEngine::Vector3 get_highlightedState() ;

/// @brief Method get_pressedState addr 0x212c2c4 size 0xc virtual false final false
 ::UnityEngine::Vector3 get_pressedState() ;

/// @brief Method get_disabledState addr 0x212c2d0 size 0xc virtual false final false
 ::UnityEngine::Vector3 get_disabledState() ;

/// @brief Method get_selectedState addr 0x212c2dc size 0xc virtual false final false
 ::UnityEngine::Vector3 get_selectedState() ;

/// @brief Method get_selectedAndHighlightedState addr 0x212c2e8 size 0xc virtual false final false
 ::UnityEngine::Vector3 get_selectedAndHighlightedState() ;

// Ctor Parameters []
explicit Vector3TransitionSO() ;

/// @brief Method .ctor addr 0x212c2f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::Vector3TransitionSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Vector3TransitionSO, "", "Vector3TransitionSO");
