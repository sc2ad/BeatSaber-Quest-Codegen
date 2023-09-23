#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_1_def.hpp"
#include "HMUI/zzzz__NoTransitionsToggle_def.hpp"
namespace HMUI {
struct UISelectionState;
}
// Forward declare root types
namespace GlobalNamespace {
class NoTransitionToggleSelectableStateController;
}
// Type: ::NoTransitionToggleSelectableStateController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5559)), TypeDefinitionIndex(TypeDefinitionIndex(13688)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5559), inst: 4809 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5561))
// CS Name: NoTransitionToggleSelectableStateController
class CORDL_TYPE NoTransitionToggleSelectableStateController : public GlobalNamespace::SelectableStateController_1<HMUI::NoTransitionsToggle> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~NoTransitionToggleSelectableStateController() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoTransitionToggleSelectableStateController", modifiers: " const&", def_value: None }]
constexpr NoTransitionToggleSelectableStateController(NoTransitionToggleSelectableStateController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoTransitionToggleSelectableStateController", modifiers: "&&", def_value: None }]
constexpr NoTransitionToggleSelectableStateController(NoTransitionToggleSelectableStateController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoTransitionToggleSelectableStateController(void* ptr) noexcept : GlobalNamespace::SelectableStateController_1<HMUI::NoTransitionsToggle>(ptr) {
}


  constexpr NoTransitionToggleSelectableStateController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoTransitionToggleSelectableStateController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoTransitionToggleSelectableStateController& operator=(NoTransitionToggleSelectableStateController&& o) noexcept = default;
  constexpr NoTransitionToggleSelectableStateController& operator=(NoTransitionToggleSelectableStateController const& o) noexcept = default;
                


// Methods

/// @brief Method OnEnable addr 0x212ba5c size 0xa4 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x212bbec size 0x8c virtual false final false
 void OnDisable() ;

/// @brief Method HandleNoTransitionToggleSelectionStateDidChange addr 0x212bc78 size 0x8 virtual false final false
 void HandleNoTransitionToggleSelectionStateDidChange(HMUI::UISelectionState state) ;

/// @brief Method ResolveSelectionState addr 0x212bb00 size 0xec virtual false final false
 void ResolveSelectionState(HMUI::UISelectionState state, bool animated) ;

// Ctor Parameters []
explicit NoTransitionToggleSelectableStateController() ;

/// @brief Method .ctor addr 0x212bc80 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoTransitionToggleSelectableStateController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoTransitionToggleSelectableStateController, "", "NoTransitionToggleSelectableStateController");
