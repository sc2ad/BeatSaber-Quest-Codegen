#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
namespace GlobalNamespace {
class PlayerSettingsPanelController;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace HMUI {
class ViewController;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerOptionsViewController;
}
// Type: ::PlayerOptionsViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5735))
// CS Name: PlayerOptionsViewController
class CORDL_TYPE PlayerOptionsViewController : public HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PlayerOptionsViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerOptionsViewController", modifiers: " const&", def_value: None }]
constexpr PlayerOptionsViewController(PlayerOptionsViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerOptionsViewController", modifiers: "&&", def_value: None }]
constexpr PlayerOptionsViewController(PlayerOptionsViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerOptionsViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr PlayerOptionsViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerOptionsViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerOptionsViewController& operator=(PlayerOptionsViewController&& o) noexcept = default;
  constexpr PlayerOptionsViewController& operator=(PlayerOptionsViewController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PlayerSettingsPanelController __declspec(property(get=__get__playerSettingsPanelController, put=__set__playerSettingsPanelController))  _playerSettingsPanelController;

constexpr void __set__playerSettingsPanelController(GlobalNamespace::PlayerSettingsPanelController value) ;

constexpr GlobalNamespace::PlayerSettingsPanelController __get__playerSettingsPanelController() const;

 UnityEngine::UI::Button __declspec(property(get=__get__okButton, put=__set__okButton))  _okButton;

constexpr void __set__okButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__okButton() const;

 GlobalNamespace::PlayerDataModel __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel))  _playerDataModel;

constexpr void __set__playerDataModel(GlobalNamespace::PlayerDataModel value) ;

constexpr GlobalNamespace::PlayerDataModel __get__playerDataModel() const;

 System::Action_1<HMUI::ViewController> __declspec(property(get=__get_didFinishEvent, put=__set_didFinishEvent))  didFinishEvent;

constexpr void __set_didFinishEvent(System::Action_1<HMUI::ViewController> value) ;

constexpr System::Action_1<HMUI::ViewController> __get_didFinishEvent() const;


// Methods

/// @brief Method add_didFinishEvent addr 0x215da88 size 0xb0 virtual false final false
 void add_didFinishEvent(System::Action_1<HMUI::ViewController> value) ;

/// @brief Method remove_didFinishEvent addr 0x215db38 size 0xb0 virtual false final false
 void remove_didFinishEvent(System::Action_1<HMUI::ViewController> value) ;

/// @brief Method DidActivate addr 0x215dbe8 size 0xfc virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x215dfdc size 0xb0 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

// Ctor Parameters []
explicit PlayerOptionsViewController() ;

/// @brief Method .ctor addr 0x215e08c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__6_0 addr 0x215e094 size 0x20 virtual false final false
 void _DidActivate_b__6_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PlayerOptionsViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerOptionsViewController, "", "PlayerOptionsViewController");
