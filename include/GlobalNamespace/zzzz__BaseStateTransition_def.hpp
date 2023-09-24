#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace Tweening {
class TimeTweeningManager;
}
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace GlobalNamespace {
struct GlobalNamespace__SelectableStateController__ViewState;
}
namespace GlobalNamespace {
class SelectableStateController;
}
// Forward declare root types
namespace GlobalNamespace {
class BaseStateTransition;
}
// Type: ::BaseStateTransition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5543))
// CS Name: BaseStateTransition
class CORDL_TYPE BaseStateTransition : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BaseStateTransition() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseStateTransition", modifiers: " const&", def_value: None }]
constexpr BaseStateTransition(BaseStateTransition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseStateTransition", modifiers: "&&", def_value: None }]
constexpr BaseStateTransition(BaseStateTransition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseStateTransition(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BaseStateTransition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseStateTransition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseStateTransition& operator=(BaseStateTransition&& o) noexcept = default;
  constexpr BaseStateTransition& operator=(BaseStateTransition const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SelectableStateController __declspec(property(get=__get__selectableStateController, put=__set__selectableStateController))  _selectableStateController;

constexpr void __set__selectableStateController(GlobalNamespace::SelectableStateController value) ;

constexpr GlobalNamespace::SelectableStateController __get__selectableStateController() const;


// Properties

 Tweening::TimeTweeningManager __declspec(property(get=get_tweeningManager))  tweeningManager;

 GlobalNamespace::BaseTransitionSO __declspec(property(get=get_transition))  transition;


// Methods

/// @brief Method get_tweeningManager addr 0x2127b68 size 0x1c virtual false final false
 Tweening::TimeTweeningManager get_tweeningManager() ;

/// @brief Method get_transition addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::BaseTransitionSO get_transition() ;

/// @brief Method SetState addr 0x2127b84 size 0x7c virtual false final false
 void SetState(GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState viewState) ;

/// @brief Method OnEnable addr 0x2127c00 size 0xa8 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2127ca8 size 0x8c virtual false final false
 void OnDisable() ;

/// @brief Method OnDestroy addr 0x2127d34 size 0x98 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleSelectableStateControllerStateDidChange addr 0x2127dcc size 0x6c virtual false final false
 void HandleSelectableStateControllerStateDidChange(GlobalNamespace::GlobalNamespace__SelectableStateController__ViewState state, bool animated) ;

/// @brief Method TransitionToNormalState addr 0x2127e38 size 0x4 virtual true final false
 void TransitionToNormalState() ;

/// @brief Method TransitionToHighlightedState addr 0x2127e3c size 0x4 virtual true final false
 void TransitionToHighlightedState() ;

/// @brief Method TransitionToPressedState addr 0x2127e40 size 0x4 virtual true final false
 void TransitionToPressedState() ;

/// @brief Method TransitionToDisabledState addr 0x2127e44 size 0x4 virtual true final false
 void TransitionToDisabledState() ;

/// @brief Method TransitionToSelectedState addr 0x2127e48 size 0x4 virtual true final false
 void TransitionToSelectedState() ;

/// @brief Method TransitionToSelectedAndHighlightedState addr 0x2127e4c size 0x4 virtual true final false
 void TransitionToSelectedAndHighlightedState() ;

/// @brief Method SetNormalState addr 0x2127e50 size 0x4 virtual true final false
 void SetNormalState() ;

/// @brief Method SetHighlightedState addr 0x2127e54 size 0x4 virtual true final false
 void SetHighlightedState() ;

/// @brief Method SetPressedState addr 0x2127e58 size 0x4 virtual true final false
 void SetPressedState() ;

/// @brief Method SetDisabledState addr 0x2127e5c size 0x4 virtual true final false
 void SetDisabledState() ;

/// @brief Method SetSelectedState addr 0x2127e60 size 0x4 virtual true final false
 void SetSelectedState() ;

/// @brief Method SetSelectedAndHighlightedState addr 0x2127e64 size 0x4 virtual true final false
 void SetSelectedAndHighlightedState() ;

static GlobalNamespace::BaseStateTransition New_ctor() ;

/// @brief Method .ctor addr 0x2127e68 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BaseStateTransition);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseStateTransition, "", "BaseStateTransition");
