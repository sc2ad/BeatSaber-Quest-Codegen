#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class LevelBar;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class LocalPlayerInGameMenuInitData;
}
namespace Polyglot {
class LocalizedTextMeshProUGUI;
}
namespace GlobalNamespace {
class MultiplayerLocalPlayerDisconnectHelper;
}
namespace GlobalNamespace {
class DisconnectPromptView;
}
namespace HMUI {
class ButtonBinder;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActivePlayerInGameMenuViewController;
}
// Type: ::MultiplayerLocalActivePlayerInGameMenuViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5158))
// CS Name: MultiplayerLocalActivePlayerInGameMenuViewController
class CORDL_TYPE MultiplayerLocalActivePlayerInGameMenuViewController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~MultiplayerLocalActivePlayerInGameMenuViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerInGameMenuViewController", modifiers: " const&", def_value: None }]
constexpr MultiplayerLocalActivePlayerInGameMenuViewController(MultiplayerLocalActivePlayerInGameMenuViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActivePlayerInGameMenuViewController", modifiers: "&&", def_value: None }]
constexpr MultiplayerLocalActivePlayerInGameMenuViewController(MultiplayerLocalActivePlayerInGameMenuViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLocalActivePlayerInGameMenuViewController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLocalActivePlayerInGameMenuViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLocalActivePlayerInGameMenuViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLocalActivePlayerInGameMenuViewController& operator=(MultiplayerLocalActivePlayerInGameMenuViewController&& o) noexcept = default;
  constexpr MultiplayerLocalActivePlayerInGameMenuViewController& operator=(MultiplayerLocalActivePlayerInGameMenuViewController const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Button __declspec(property(get=__get__disconnectButton, put=__set__disconnectButton))  _disconnectButton;

constexpr void __set__disconnectButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__disconnectButton() const;

 Polyglot::LocalizedTextMeshProUGUI __declspec(property(get=__get__disconnectButtonLocalizedText, put=__set__disconnectButtonLocalizedText))  _disconnectButtonLocalizedText;

constexpr void __set__disconnectButtonLocalizedText(Polyglot::LocalizedTextMeshProUGUI value) ;

constexpr Polyglot::LocalizedTextMeshProUGUI __get__disconnectButtonLocalizedText() const;

 UnityEngine::UI::Button __declspec(property(get=__get__giveUpButton, put=__set__giveUpButton))  _giveUpButton;

constexpr void __set__giveUpButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__giveUpButton() const;

 UnityEngine::UI::Button __declspec(property(get=__get__resumeButton, put=__set__resumeButton))  _resumeButton;

constexpr void __set__resumeButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__resumeButton() const;

 UnityEngine::GameObject __declspec(property(get=__get__mainBar, put=__set__mainBar))  _mainBar;

constexpr void __set__mainBar(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__mainBar() const;

 GlobalNamespace::DisconnectPromptView __declspec(property(get=__get__disconnectPromptView, put=__set__disconnectPromptView))  _disconnectPromptView;

constexpr void __set__disconnectPromptView(GlobalNamespace::DisconnectPromptView value) ;

constexpr GlobalNamespace::DisconnectPromptView __get__disconnectPromptView() const;

 GlobalNamespace::LevelBar __declspec(property(get=__get__levelBar, put=__set__levelBar))  _levelBar;

constexpr void __set__levelBar(GlobalNamespace::LevelBar value) ;

constexpr GlobalNamespace::LevelBar __get__levelBar() const;

 UnityEngine::GameObject __declspec(property(get=__get__menuWrapperGameObject, put=__set__menuWrapperGameObject))  _menuWrapperGameObject;

constexpr void __set__menuWrapperGameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__menuWrapperGameObject() const;

 UnityEngine::GameObject __declspec(property(get=__get__menuControllersGameObject, put=__set__menuControllersGameObject))  _menuControllersGameObject;

constexpr void __set__menuControllersGameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__menuControllersGameObject() const;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer))  _connectedPlayer;

constexpr void __set__connectedPlayer(GlobalNamespace::IConnectedPlayer value) ;

constexpr GlobalNamespace::IConnectedPlayer __get__connectedPlayer() const;

 GlobalNamespace::LocalPlayerInGameMenuInitData __declspec(property(get=__get__localPlayerInGameMenuInitData, put=__set__localPlayerInGameMenuInitData))  _localPlayerInGameMenuInitData;

constexpr void __set__localPlayerInGameMenuInitData(GlobalNamespace::LocalPlayerInGameMenuInitData value) ;

constexpr GlobalNamespace::LocalPlayerInGameMenuInitData __get__localPlayerInGameMenuInitData() const;

 GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value) ;

constexpr GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;

 GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper __declspec(property(get=__get__disconnectHelper, put=__set__disconnectHelper))  _disconnectHelper;

constexpr void __set__disconnectHelper(GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper value) ;

constexpr GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper __get__disconnectHelper() const;

 System::Action __declspec(property(get=__get_didPressDisconnectButtonEvent, put=__set_didPressDisconnectButtonEvent))  didPressDisconnectButtonEvent;

constexpr void __set_didPressDisconnectButtonEvent(System::Action value) ;

constexpr System::Action __get_didPressDisconnectButtonEvent() const;

 System::Action __declspec(property(get=__get_didPressGiveUpButtonEvent, put=__set_didPressGiveUpButtonEvent))  didPressGiveUpButtonEvent;

constexpr void __set_didPressGiveUpButtonEvent(System::Action value) ;

constexpr System::Action __get_didPressGiveUpButtonEvent() const;

 System::Action __declspec(property(get=__get_didPressResumeButtonEvent, put=__set_didPressResumeButtonEvent))  didPressResumeButtonEvent;

constexpr void __set_didPressResumeButtonEvent(System::Action value) ;

constexpr System::Action __get_didPressResumeButtonEvent() const;

 HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder))  _buttonBinder;

constexpr void __set__buttonBinder(HMUI::ButtonBinder value) ;

constexpr HMUI::ButtonBinder __get__buttonBinder() const;

 float_t __declspec(property(get=__get__disabledInteractionRemainingTime, put=__set__disabledInteractionRemainingTime))  _disabledInteractionRemainingTime;

constexpr void __set__disabledInteractionRemainingTime(float_t value) ;

constexpr float_t __get__disabledInteractionRemainingTime() const;

/// @brief Field kDisabledInteractionDuration offset 0
static constexpr float_t  kDisabledInteractionDuration{0.2};


// Methods

/// @brief Method add_didPressDisconnectButtonEvent addr 0x20cf670 size 0x9c virtual false final false
 void add_didPressDisconnectButtonEvent(System::Action value) ;

/// @brief Method remove_didPressDisconnectButtonEvent addr 0x20cfb98 size 0x9c virtual false final false
 void remove_didPressDisconnectButtonEvent(System::Action value) ;

/// @brief Method add_didPressGiveUpButtonEvent addr 0x20cf7a8 size 0x9c virtual false final false
 void add_didPressGiveUpButtonEvent(System::Action value) ;

/// @brief Method remove_didPressGiveUpButtonEvent addr 0x20cfcd0 size 0x9c virtual false final false
 void remove_didPressGiveUpButtonEvent(System::Action value) ;

/// @brief Method add_didPressResumeButtonEvent addr 0x20cf70c size 0x9c virtual false final false
 void add_didPressResumeButtonEvent(System::Action value) ;

/// @brief Method remove_didPressResumeButtonEvent addr 0x20cfc34 size 0x9c virtual false final false
 void remove_didPressResumeButtonEvent(System::Action value) ;

/// @brief Method Awake addr 0x20d0158 size 0x1cc virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x20d0324 size 0x8c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20d03b0 size 0x9c virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x20d044c size 0xe8 virtual false final false
 void Update() ;

/// @brief Method ShowMenu addr 0x20cfe78 size 0x50 virtual false final false
 void ShowMenu() ;

/// @brief Method HideMenu addr 0x20cfec8 size 0x44 virtual false final false
 void HideMenu() ;

/// @brief Method DisconnectButtonPressed addr 0x20d056c size 0x34 virtual false final false
 void DisconnectButtonPressed() ;

/// @brief Method HandleDisconnectPromptViewDidViewFinish addr 0x20d05a0 size 0xd0 virtual false final false
 void HandleDisconnectPromptViewDidViewFinish(bool disconnect) ;

/// @brief Method GiveUpButtonPressed addr 0x20d0670 size 0x4c virtual false final false
 void GiveUpButtonPressed() ;

/// @brief Method ResumeButtonPressed addr 0x20d0534 size 0x38 virtual false final false
 void ResumeButtonPressed() ;

static GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController New_ctor() ;

/// @brief Method .ctor addr 0x20d06bc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <HandleDisconnectPromptViewDidViewFinish>b__32_0 addr 0x20d06c4 size 0x20 virtual false final false
 void _HandleDisconnectPromptViewDidViewFinish_b__32_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuViewController, "", "MultiplayerLocalActivePlayerInGameMenuViewController");
