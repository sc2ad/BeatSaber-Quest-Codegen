#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BaseTransitionSO_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class EnabledTransitionSO;
}
// Type: ::EnabledTransitionSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5545))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5551))
// CS Name: EnabledTransitionSO
class CORDL_TYPE EnabledTransitionSO : public GlobalNamespace::BaseTransitionSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~EnabledTransitionSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnabledTransitionSO", modifiers: " const&", def_value: None }]
constexpr EnabledTransitionSO(EnabledTransitionSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnabledTransitionSO", modifiers: "&&", def_value: None }]
constexpr EnabledTransitionSO(EnabledTransitionSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnabledTransitionSO(void* ptr) noexcept : GlobalNamespace::BaseTransitionSO(ptr) {
}


  constexpr EnabledTransitionSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnabledTransitionSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnabledTransitionSO& operator=(EnabledTransitionSO&& o) noexcept = default;
  constexpr EnabledTransitionSO& operator=(EnabledTransitionSO const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__normalState, put=__set__normalState))  _normalState;

constexpr void __set__normalState(bool value) ;

constexpr bool __get__normalState() const;

 bool __declspec(property(get=__get__highlightedState, put=__set__highlightedState))  _highlightedState;

constexpr void __set__highlightedState(bool value) ;

constexpr bool __get__highlightedState() const;

 bool __declspec(property(get=__get__pressedState, put=__set__pressedState))  _pressedState;

constexpr void __set__pressedState(bool value) ;

constexpr bool __get__pressedState() const;

 bool __declspec(property(get=__get__disabledState, put=__set__disabledState))  _disabledState;

constexpr void __set__disabledState(bool value) ;

constexpr bool __get__disabledState() const;

 bool __declspec(property(get=__get__selectedState, put=__set__selectedState))  _selectedState;

constexpr void __set__selectedState(bool value) ;

constexpr bool __get__selectedState() const;

 bool __declspec(property(get=__get__selectedAndHighlightedState, put=__set__selectedAndHighlightedState))  _selectedAndHighlightedState;

constexpr void __set__selectedAndHighlightedState(bool value) ;

constexpr bool __get__selectedAndHighlightedState() const;


// Properties

 bool __declspec(property(get=get_normalState))  normalState;

 bool __declspec(property(get=get_highlightedState))  highlightedState;

 bool __declspec(property(get=get_pressedState))  pressedState;

 bool __declspec(property(get=get_disabledState))  disabledState;

 bool __declspec(property(get=get_selectedState))  selectedState;

 bool __declspec(property(get=get_selectedAndHighlightedState))  selectedAndHighlightedState;


// Methods

/// @brief Method get_normalState addr 0x2128ee8 size 0x8 virtual false final false
 bool get_normalState() ;

/// @brief Method get_highlightedState addr 0x2128ef0 size 0x8 virtual false final false
 bool get_highlightedState() ;

/// @brief Method get_pressedState addr 0x2128ef8 size 0x8 virtual false final false
 bool get_pressedState() ;

/// @brief Method get_disabledState addr 0x2128f00 size 0x8 virtual false final false
 bool get_disabledState() ;

/// @brief Method get_selectedState addr 0x2128f08 size 0x8 virtual false final false
 bool get_selectedState() ;

/// @brief Method get_selectedAndHighlightedState addr 0x2128f10 size 0x8 virtual false final false
 bool get_selectedAndHighlightedState() ;

static GlobalNamespace::EnabledTransitionSO New_ctor() ;

/// @brief Method .ctor addr 0x2128f18 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EnabledTransitionSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnabledTransitionSO, "", "EnabledTransitionSO");
