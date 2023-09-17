#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_1_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace HMUI {
class SelectableCell;
}
namespace HMUI {
struct ____HMUI__SelectableCell__TransitionType;
}
namespace HMUI {
class Interactable;
}
// Forward declare root types
namespace GlobalNamespace {
class SelectableCellSelectableStateController;
}
// Type: ::SelectableCellSelectableStateController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5559), inst: 4810 }), TypeDefinitionIndex(TypeDefinitionIndex(13704)), TypeDefinitionIndex(TypeDefinitionIndex(5559))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5562))
// CS Name: SelectableCellSelectableStateController
class CORDL_TYPE SelectableCellSelectableStateController : public ::GlobalNamespace::SelectableStateController_1<::HMUI::SelectableCell> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SelectableCellSelectableStateController() = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectableCellSelectableStateController", modifiers: " const&", def_value: None }]
constexpr SelectableCellSelectableStateController(SelectableCellSelectableStateController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectableCellSelectableStateController", modifiers: "&&", def_value: None }]
constexpr SelectableCellSelectableStateController(SelectableCellSelectableStateController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SelectableCellSelectableStateController(void* ptr) noexcept : ::GlobalNamespace::SelectableStateController_1<::HMUI::SelectableCell>(ptr) {
}


  constexpr SelectableCellSelectableStateController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SelectableCellSelectableStateController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SelectableCellSelectableStateController& operator=(SelectableCellSelectableStateController&& o) noexcept = default;
  constexpr SelectableCellSelectableStateController& operator=(SelectableCellSelectableStateController const& o) noexcept = default;
                


// Methods

/// @brief Method OnEnable addr 0x212bcc8 size 0x164 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x212be98 size 0x154 virtual false final false
 void OnDisable() ;

/// @brief Method HandleSelectableCellInteractableDidChange addr 0x212bfec size 0x88 virtual false final false
 void HandleSelectableCellInteractableDidChange(::HMUI::Interactable interactableCell, bool interactable) ;

/// @brief Method HandleSelectableCellHighlightDidChange addr 0x212c074 size 0x4 virtual false final false
 void HandleSelectableCellHighlightDidChange(::HMUI::SelectableCell selectableCell, ::HMUI::____HMUI__SelectableCell__TransitionType transitionType) ;

/// @brief Method HandleSelectableCellSelectionStateDidChange addr 0x212c078 size 0x4 virtual false final false
 void HandleSelectableCellSelectionStateDidChange(::HMUI::SelectableCell selectableCell, ::HMUI::____HMUI__SelectableCell__TransitionType transitionType, ::bs_hook::Il2CppWrapperType owner) ;

/// @brief Method ResolveState addr 0x212be2c size 0x6c virtual false final false
 void ResolveState(::HMUI::SelectableCell selectableCell, ::HMUI::____HMUI__SelectableCell__TransitionType transitionType) ;

// Ctor Parameters []
explicit SelectableCellSelectableStateController() ;

/// @brief Method .ctor addr 0x212c07c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SelectableCellSelectableStateController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectableCellSelectableStateController, "", "SelectableCellSelectableStateController");
