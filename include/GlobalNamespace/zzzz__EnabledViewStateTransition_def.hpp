#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace GlobalNamespace {
class EnabledTransitionSO;
}
// Forward declare root types
namespace GlobalNamespace {
class EnabledViewStateTransition;
}
// Type: ::EnabledViewStateTransition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10129)), TypeDefinitionIndex(TypeDefinitionIndex(5544)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5544), inst: 891 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5552))
// CS Name: EnabledViewStateTransition
class CORDL_TYPE EnabledViewStateTransition : public GlobalNamespace::BaseStateTransition_1<UnityEngine::Behaviour> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~EnabledViewStateTransition() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnabledViewStateTransition", modifiers: " const&", def_value: None }]
constexpr EnabledViewStateTransition(EnabledViewStateTransition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnabledViewStateTransition", modifiers: "&&", def_value: None }]
constexpr EnabledViewStateTransition(EnabledViewStateTransition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnabledViewStateTransition(void* ptr) noexcept : GlobalNamespace::BaseStateTransition_1<UnityEngine::Behaviour>(ptr) {
}


  constexpr EnabledViewStateTransition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnabledViewStateTransition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnabledViewStateTransition& operator=(EnabledViewStateTransition&& o) noexcept = default;
  constexpr EnabledViewStateTransition& operator=(EnabledViewStateTransition const& o) noexcept = default;
                


// Fields

 GlobalNamespace::EnabledTransitionSO __declspec(property(get=__get__transition, put=__set__transition))  _transition;

constexpr void __set__transition(GlobalNamespace::EnabledTransitionSO value) ;

constexpr GlobalNamespace::EnabledTransitionSO __get__transition() const;


// Properties

 GlobalNamespace::BaseTransitionSO __declspec(property(get=get_transition))  transition;


// Methods

/// @brief Method get_transition addr 0x2128f20 size 0x8 virtual true final false
 GlobalNamespace::BaseTransitionSO get_transition() ;

/// @brief Method TransitionToNormalState addr 0x2128f28 size 0xc virtual true final false
 void TransitionToNormalState() ;

/// @brief Method TransitionToHighlightedState addr 0x2128f34 size 0xc virtual true final false
 void TransitionToHighlightedState() ;

/// @brief Method TransitionToPressedState addr 0x2128f40 size 0x10 virtual true final false
 void TransitionToPressedState() ;

/// @brief Method TransitionToDisabledState addr 0x2128f50 size 0x10 virtual true final false
 void TransitionToDisabledState() ;

/// @brief Method TransitionToSelectedState addr 0x2128f60 size 0x10 virtual true final false
 void TransitionToSelectedState() ;

/// @brief Method TransitionToSelectedAndHighlightedState addr 0x2128f70 size 0x10 virtual true final false
 void TransitionToSelectedAndHighlightedState() ;

/// @brief Method SetNormalState addr 0x2128f80 size 0x28 virtual true final false
 void SetNormalState() ;

/// @brief Method SetHighlightedState addr 0x2128fa8 size 0x28 virtual true final false
 void SetHighlightedState() ;

/// @brief Method SetPressedState addr 0x2128fd0 size 0x28 virtual true final false
 void SetPressedState() ;

/// @brief Method SetDisabledState addr 0x2128ff8 size 0x28 virtual true final false
 void SetDisabledState() ;

/// @brief Method SetSelectedState addr 0x2129020 size 0x28 virtual true final false
 void SetSelectedState() ;

/// @brief Method SetSelectedAndHighlightedState addr 0x2129048 size 0x28 virtual true final false
 void SetSelectedAndHighlightedState() ;

// Ctor Parameters []
explicit EnabledViewStateTransition() ;

/// @brief Method .ctor addr 0x2129070 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EnabledViewStateTransition);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnabledViewStateTransition, "", "EnabledViewStateTransition");
