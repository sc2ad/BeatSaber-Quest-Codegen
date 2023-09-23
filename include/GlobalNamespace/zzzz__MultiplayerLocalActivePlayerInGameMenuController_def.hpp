#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class Action;
}
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerController__State;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class IGamePause;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerInGameMenuViewController;
}
namespace GlobalNamespace {
class IMenuButtonTrigger;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0;
}
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerInGameMenuController;
}
// Type: ::<>c__DisplayClass19_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5156))
// CS Name: MultiplayerLocalActivePlayerInGameMenuController::<>c__DisplayClass19_0
class CORDL_TYPE GlobalNamespace__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0(GlobalNamespace__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0(GlobalNamespace__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0& operator=(GlobalNamespace__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0& operator=(GlobalNamespace__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0 const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(bool value) ;

constexpr bool __get_value() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0() ;

/// @brief Method .ctor addr 0x20cf238 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <get_canShowInGameMenu>b__0 addr 0x20d0148 size 0x10 virtual false final false
 void _get_canShowInGameMenu_b__0(bool newValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerLocalActivePlayerInGameMenuController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5157))
// CS Name: MultiplayerLocalActivePlayerInGameMenuController
class CORDL_TYPE MultiplayerLocalActivePlayerInGameMenuController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass19_0 = GlobalNamespace::GlobalNamespace__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~MultiplayerLocalActivePlayerInGameMenuController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerInGameMenuController", modifiers: " const&", def_value: None }]
constexpr MultiplayerLocalActivePlayerInGameMenuController(MultiplayerLocalActivePlayerInGameMenuController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerInGameMenuController", modifiers: "&&", def_value: None }]
constexpr MultiplayerLocalActivePlayerInGameMenuController(MultiplayerLocalActivePlayerInGameMenuController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLocalActivePlayerInGameMenuController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLocalActivePlayerInGameMenuController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLocalActivePlayerInGameMenuController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLocalActivePlayerInGameMenuController& operator=(MultiplayerLocalActivePlayerInGameMenuController&& o) noexcept = default;
  constexpr MultiplayerLocalActivePlayerInGameMenuController& operator=(MultiplayerLocalActivePlayerInGameMenuController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController __declspec(property(get=__get__inGameMenuViewController, put=__set__inGameMenuViewController))  _inGameMenuViewController;

constexpr void __set__inGameMenuViewController(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController value) ;

constexpr GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController __get__inGameMenuViewController() const;

 GlobalNamespace::IMenuButtonTrigger __declspec(property(get=__get__menuButtonTrigger, put=__set__menuButtonTrigger))  _menuButtonTrigger;

constexpr void __set__menuButtonTrigger(GlobalNamespace::IMenuButtonTrigger value) ;

constexpr GlobalNamespace::IMenuButtonTrigger __get__menuButtonTrigger() const;

 GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value) ;

constexpr GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;

 GlobalNamespace::IGamePause __declspec(property(get=__get__gamePause, put=__set__gamePause))  _gamePause;

constexpr void __set__gamePause(GlobalNamespace::IGamePause value) ;

constexpr GlobalNamespace::IGamePause __get__gamePause() const;

 GlobalNamespace::MultiplayerController __declspec(property(get=__get__multiplayerController, put=__set__multiplayerController))  _multiplayerController;

constexpr void __set__multiplayerController(GlobalNamespace::MultiplayerController value) ;

constexpr GlobalNamespace::MultiplayerController __get__multiplayerController() const;

 GlobalNamespace::SaberManager __declspec(property(get=__get__saberManager, put=__set__saberManager))  _saberManager;

constexpr void __set__saberManager(GlobalNamespace::SaberManager value) ;

constexpr GlobalNamespace::SaberManager __get__saberManager() const;

 GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value) ;

constexpr GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 System::Action __declspec(property(get=__get_didGiveUpEvent, put=__set_didGiveUpEvent))  didGiveUpEvent;

constexpr void __set_didGiveUpEvent(System::Action value) ;

constexpr System::Action __get_didGiveUpEvent() const;

 System::Action_1<System::Action_1<bool>> __declspec(property(get=__get_canShowInGameMenuEvent, put=__set_canShowInGameMenuEvent))  canShowInGameMenuEvent;

constexpr void __set_canShowInGameMenuEvent(System::Action_1<System::Action_1<bool>> value) ;

constexpr System::Action_1<System::Action_1<bool>> __get_canShowInGameMenuEvent() const;

 System::Action __declspec(property(get=__get_requestsDisconnectEvent, put=__set_requestsDisconnectEvent))  requestsDisconnectEvent;

constexpr void __set_requestsDisconnectEvent(System::Action value) ;

constexpr System::Action __get_requestsDisconnectEvent() const;

 bool __declspec(property(get=__get__gameMenuIsShown, put=__set__gameMenuIsShown))  _gameMenuIsShown;

constexpr void __set__gameMenuIsShown(bool value) ;

constexpr bool __get__gameMenuIsShown() const;


// Properties

 bool __declspec(property(get=get_gameMenuIsShown))  gameMenuIsShown;

 bool __declspec(property(get=get_canShowInGameMenu))  canShowInGameMenu;


// Methods

/// @brief Method add_didGiveUpEvent addr 0x20ced74 size 0x9c virtual false final false
 void add_didGiveUpEvent(System::Action value) ;

/// @brief Method remove_didGiveUpEvent addr 0x20cee10 size 0x9c virtual false final false
 void remove_didGiveUpEvent(System::Action value) ;

/// @brief Method add_canShowInGameMenuEvent addr 0x20ceeac size 0xb0 virtual false final false
 void add_canShowInGameMenuEvent(System::Action_1<System::Action_1<bool>> value) ;

/// @brief Method remove_canShowInGameMenuEvent addr 0x20cef5c size 0xb0 virtual false final false
 void remove_canShowInGameMenuEvent(System::Action_1<System::Action_1<bool>> value) ;

/// @brief Method add_requestsDisconnectEvent addr 0x20cf00c size 0x9c virtual false final false
 void add_requestsDisconnectEvent(System::Action value) ;

/// @brief Method remove_requestsDisconnectEvent addr 0x20cf0a8 size 0x9c virtual false final false
 void remove_requestsDisconnectEvent(System::Action value) ;

/// @brief Method get_gameMenuIsShown addr 0x20cf144 size 0x8 virtual false final false
 bool get_gameMenuIsShown() ;

/// @brief Method get_canShowInGameMenu addr 0x20cf14c size 0xec virtual false final false
 bool get_canShowInGameMenu() ;

/// @brief Method Start addr 0x20cf240 size 0x2e0 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20cf844 size 0x354 virtual false final false
 void OnDestroy() ;

/// @brief Method OnApplicationPause addr 0x20cfd6c size 0xc virtual false final false
 void OnApplicationPause(bool pauseStatus) ;

/// @brief Method ShowInGameMenu addr 0x20cfd78 size 0x100 virtual false final false
 void ShowInGameMenu() ;

/// @brief Method HideInGameMenu addr 0x20cf520 size 0x150 virtual false final false
 void HideInGameMenu() ;

/// @brief Method HandleMenuButtonTriggered addr 0x20cff0c size 0x4 virtual false final false
 void HandleMenuButtonTriggered() ;

/// @brief Method HandleInputFocusWasCaptured addr 0x20cff10 size 0x4 virtual false final false
 void HandleInputFocusWasCaptured() ;

/// @brief Method HandleInGameMenuViewControllerDidPressResumeButton addr 0x20cff14 size 0x4 virtual false final false
 void HandleInGameMenuViewControllerDidPressResumeButton() ;

/// @brief Method HandleInGameMenuViewControllerDidPressGiveUpButton addr 0x20cff18 size 0x3c virtual false final false
 void HandleInGameMenuViewControllerDidPressGiveUpButton() ;

/// @brief Method HandleInGameMenuViewControllerDidPressDisconnectButton addr 0x20cff54 size 0x1c virtual false final false
 void HandleInGameMenuViewControllerDidPressDisconnectButton() ;

/// @brief Method HandleStateChanged addr 0x20cff70 size 0x1d0 virtual false final false
 void HandleStateChanged(GlobalNamespace::GlobalNamespace__MultiplayerController__State state) ;

// Ctor Parameters []
explicit MultiplayerLocalActivePlayerInGameMenuController() ;

/// @brief Method .ctor addr 0x20d0140 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerLocalActivePlayerInGameMenuController____c__DisplayClass19_0, "", "MultiplayerLocalActivePlayerInGameMenuController/<>c__DisplayClass19_0");
NEED_NO_BOX(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController, "", "MultiplayerLocalActivePlayerInGameMenuController");
