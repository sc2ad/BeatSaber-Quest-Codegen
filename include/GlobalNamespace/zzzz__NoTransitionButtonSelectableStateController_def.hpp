#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_1_def.hpp"
#include "HMUI/zzzz__NoTransitionsButton_def.hpp"
namespace HMUI {
struct HMUI__NoTransitionsButton__SelectionState;
}
// Forward declare root types
namespace GlobalNamespace {
class NoTransitionButtonSelectableStateController;
}
// Type: ::NoTransitionButtonSelectableStateController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5559)), TypeDefinitionIndex(TypeDefinitionIndex(13674)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5559), inst: 4808 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5560))
// CS Name: NoTransitionButtonSelectableStateController
class CORDL_TYPE NoTransitionButtonSelectableStateController : public GlobalNamespace::SelectableStateController_1<HMUI::NoTransitionsButton> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~NoTransitionButtonSelectableStateController() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoTransitionButtonSelectableStateController", modifiers: " const&", def_value: None }]
constexpr NoTransitionButtonSelectableStateController(NoTransitionButtonSelectableStateController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoTransitionButtonSelectableStateController", modifiers: "&&", def_value: None }]
constexpr NoTransitionButtonSelectableStateController(NoTransitionButtonSelectableStateController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoTransitionButtonSelectableStateController(void* ptr) noexcept : GlobalNamespace::SelectableStateController_1<HMUI::NoTransitionsButton>(ptr) {
}


  constexpr NoTransitionButtonSelectableStateController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoTransitionButtonSelectableStateController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoTransitionButtonSelectableStateController& operator=(NoTransitionButtonSelectableStateController&& o) noexcept = default;
  constexpr NoTransitionButtonSelectableStateController& operator=(NoTransitionButtonSelectableStateController const& o) noexcept = default;
                


// Methods

/// @brief Method OnEnable addr 0x212b824 size 0xa4 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x212b980 size 0x8c virtual false final false
 void OnDisable() ;

/// @brief Method HandleNoTransitionButtonSelectionStateDidChange addr 0x212ba0c size 0x8 virtual false final false
 void HandleNoTransitionButtonSelectionStateDidChange(HMUI::HMUI__NoTransitionsButton__SelectionState state) ;

/// @brief Method ResolveSelectionState addr 0x212b8c8 size 0xb8 virtual false final false
 void ResolveSelectionState(HMUI::HMUI__NoTransitionsButton__SelectionState state, bool animated) ;

static GlobalNamespace::NoTransitionButtonSelectableStateController New_ctor() ;

/// @brief Method .ctor addr 0x212ba14 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoTransitionButtonSelectableStateController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoTransitionButtonSelectableStateController, "", "NoTransitionButtonSelectableStateController");
