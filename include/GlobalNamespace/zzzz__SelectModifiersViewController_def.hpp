#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
namespace GlobalNamespace {
class GameplayModifiersPanelController;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
// Forward declare root types
namespace GlobalNamespace {
class SelectModifiersViewController;
}
// Type: ::SelectModifiersViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5816))
// CS Name: SelectModifiersViewController
class CORDL_TYPE SelectModifiersViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~SelectModifiersViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectModifiersViewController", modifiers: " const&", def_value: None }]
constexpr SelectModifiersViewController(SelectModifiersViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectModifiersViewController", modifiers: "&&", def_value: None }]
constexpr SelectModifiersViewController(SelectModifiersViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SelectModifiersViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr SelectModifiersViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SelectModifiersViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SelectModifiersViewController& operator=(SelectModifiersViewController&& o) noexcept = default;
  constexpr SelectModifiersViewController& operator=(SelectModifiersViewController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameplayModifiersPanelController __declspec(property(get=__get__gameplayModifiersPanelController, put=__set__gameplayModifiersPanelController))  _gameplayModifiersPanelController;

constexpr void __set__gameplayModifiersPanelController(GlobalNamespace::GameplayModifiersPanelController value) ;

constexpr GlobalNamespace::GameplayModifiersPanelController __get__gameplayModifiersPanelController() const;


// Properties

 GlobalNamespace::GameplayModifiers __declspec(property(get=get_gameplayModifiers))  gameplayModifiers;


// Methods

/// @brief Method get_gameplayModifiers addr 0x2179124 size 0x1c virtual false final false
 GlobalNamespace::GameplayModifiers get_gameplayModifiers() ;

/// @brief Method Setup addr 0x2179140 size 0x1c virtual false final false
 void Setup(GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method DidActivate addr 0x217915c size 0xa0 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

// Ctor Parameters []
explicit SelectModifiersViewController() ;

/// @brief Method .ctor addr 0x21791fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SelectModifiersViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SelectModifiersViewController, "", "SelectModifiersViewController");
