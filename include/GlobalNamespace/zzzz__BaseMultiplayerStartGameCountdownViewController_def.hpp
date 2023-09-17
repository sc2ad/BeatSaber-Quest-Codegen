#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
namespace {
namespace GlobalNamespace {
class BeatmapSelectionView;
}
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class ILobbyPlayerData;
}
namespace HMUI {
class ToggleBinder;
}
namespace GlobalNamespace {
class ModifiersSelectionView;
}
// Forward declare root types
namespace GlobalNamespace {
class BaseMultiplayerStartGameCountdownViewController;
}
// Type: ::BaseMultiplayerStartGameCountdownViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5803))
// CS Name: BaseMultiplayerStartGameCountdownViewController
class CORDL_TYPE BaseMultiplayerStartGameCountdownViewController : public ::HMUI::ViewController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~BaseMultiplayerStartGameCountdownViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseMultiplayerStartGameCountdownViewController", modifiers: " const&", def_value: None }]
constexpr BaseMultiplayerStartGameCountdownViewController(BaseMultiplayerStartGameCountdownViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseMultiplayerStartGameCountdownViewController", modifiers: "&&", def_value: None }]
constexpr BaseMultiplayerStartGameCountdownViewController(BaseMultiplayerStartGameCountdownViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseMultiplayerStartGameCountdownViewController(void* ptr) noexcept : ::HMUI::ViewController(ptr) {
}


  constexpr BaseMultiplayerStartGameCountdownViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseMultiplayerStartGameCountdownViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseMultiplayerStartGameCountdownViewController& operator=(BaseMultiplayerStartGameCountdownViewController&& o) noexcept = default;
  constexpr BaseMultiplayerStartGameCountdownViewController& operator=(BaseMultiplayerStartGameCountdownViewController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::BeatmapSelectionView __declspec(property(get=__get__beatmapSelectionView, put=__set__beatmapSelectionView))  _beatmapSelectionView;

constexpr void __set__beatmapSelectionView(::GlobalNamespace::BeatmapSelectionView value) ;

constexpr ::GlobalNamespace::BeatmapSelectionView __get__beatmapSelectionView() const;

 ::GlobalNamespace::ModifiersSelectionView __declspec(property(get=__get__modifiersSelectionView, put=__set__modifiersSelectionView))  _modifiersSelectionView;

constexpr void __set__modifiersSelectionView(::GlobalNamespace::ModifiersSelectionView value) ;

constexpr ::GlobalNamespace::ModifiersSelectionView __get__modifiersSelectionView() const;

 ::UnityEngine::UI::Toggle __declspec(property(get=__get__spectateToggle, put=__set__spectateToggle))  _spectateToggle;

constexpr void __set__spectateToggle(::UnityEngine::UI::Toggle value) ;

constexpr ::UnityEngine::UI::Toggle __get__spectateToggle() const;

 ::System::Action_1<bool> __declspec(property(get=__get_playerActiveStateChangedEvent, put=__set_playerActiveStateChangedEvent))  playerActiveStateChangedEvent;

constexpr void __set_playerActiveStateChangedEvent(::System::Action_1<bool> value) ;

constexpr ::System::Action_1<bool> __get_playerActiveStateChangedEvent() const;

 ::HMUI::ToggleBinder __declspec(property(get=__get__toggleBinder, put=__set__toggleBinder))  _toggleBinder;

constexpr void __set__toggleBinder(::HMUI::ToggleBinder value) ;

constexpr ::HMUI::ToggleBinder __get__toggleBinder() const;


// Methods

/// @brief Method add_playerActiveStateChangedEvent addr 0x2175630 size 0xb0 virtual false final false
 void add_playerActiveStateChangedEvent(::System::Action_1<bool> value) ;

/// @brief Method remove_playerActiveStateChangedEvent addr 0x21756e0 size 0xb0 virtual false final false
 void remove_playerActiveStateChangedEvent(::System::Action_1<bool> value) ;

/// @brief Method SetLevelGameplaySetupData addr 0x2175790 size 0x13c virtual false final false
 void SetLevelGameplaySetupData(::GlobalNamespace::ILevelGameplaySetupData levelGameplaySetupData) ;

/// @brief Method SetLobbyPlayerData addr 0x21758cc size 0xc0 virtual true final false
 void SetLobbyPlayerData(::GlobalNamespace::ILobbyPlayerData lobbyPlayerData) ;

/// @brief Method DidActivate addr 0x217598c size 0x9c virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x2175a28 size 0x1c virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method OnDestroy addr 0x2175a44 size 0x1c virtual true final false
 void OnDestroy() ;

// Ctor Parameters []
explicit BaseMultiplayerStartGameCountdownViewController() ;

/// @brief Method .ctor addr 0x2175a60 size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__9_0 addr 0x2175ac8 size 0x24 virtual false final false
 void _DidActivate_b__9_0(bool value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController, "", "BaseMultiplayerStartGameCountdownViewController");
