#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class MultiplayerLocalPlayerDisconnectHelper;
}
namespace GlobalNamespace {
class LocalPlayerInGameMenuInitData;
}
namespace GlobalNamespace {
class LevelBar;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class DisconnectPromptView;
}
namespace HMUI {
class ToggleBinder;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace UnityEngine::UI {
class Button;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace Polyglot {
class LocalizedTextMeshProUGUI;
}
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerController__State;
}
namespace HMUI {
class ButtonBinder;
}
namespace Tweening {
class Tween;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerInGameMenuViewController;
}
// Type: ::MultiplayerLocalInactivePlayerInGameMenuViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5159))
// CS Name: MultiplayerLocalInactivePlayerInGameMenuViewController
class CORDL_TYPE MultiplayerLocalInactivePlayerInGameMenuViewController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~MultiplayerLocalInactivePlayerInGameMenuViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerInGameMenuViewController", modifiers: " const&", def_value: None }]
constexpr MultiplayerLocalInactivePlayerInGameMenuViewController(MultiplayerLocalInactivePlayerInGameMenuViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerInGameMenuViewController", modifiers: "&&", def_value: None }]
constexpr MultiplayerLocalInactivePlayerInGameMenuViewController(MultiplayerLocalInactivePlayerInGameMenuViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLocalInactivePlayerInGameMenuViewController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLocalInactivePlayerInGameMenuViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLocalInactivePlayerInGameMenuViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLocalInactivePlayerInGameMenuViewController& operator=(MultiplayerLocalInactivePlayerInGameMenuViewController&& o) noexcept = default;
  constexpr MultiplayerLocalInactivePlayerInGameMenuViewController& operator=(MultiplayerLocalInactivePlayerInGameMenuViewController const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Button __declspec(property(get=__get__disconnectButton, put=__set__disconnectButton))  _disconnectButton;

constexpr void __set__disconnectButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__disconnectButton() const;

 Polyglot::LocalizedTextMeshProUGUI __declspec(property(get=__get__disconnectButtonLocalizedText, put=__set__disconnectButtonLocalizedText))  _disconnectButtonLocalizedText;

constexpr void __set__disconnectButtonLocalizedText(Polyglot::LocalizedTextMeshProUGUI value) ;

constexpr Polyglot::LocalizedTextMeshProUGUI __get__disconnectButtonLocalizedText() const;

 UnityEngine::UI::Toggle __declspec(property(get=__get__detailsToggle, put=__set__detailsToggle))  _detailsToggle;

constexpr void __set__detailsToggle(UnityEngine::UI::Toggle value) ;

constexpr UnityEngine::UI::Toggle __get__detailsToggle() const;

 UnityEngine::CanvasGroup __declspec(property(get=__get__globalCanvasGroup, put=__set__globalCanvasGroup))  _globalCanvasGroup;

constexpr void __set__globalCanvasGroup(UnityEngine::CanvasGroup value) ;

constexpr UnityEngine::CanvasGroup __get__globalCanvasGroup() const;

 UnityEngine::GameObject __declspec(property(get=__get__mainBar, put=__set__mainBar))  _mainBar;

constexpr void __set__mainBar(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__mainBar() const;

 GlobalNamespace::DisconnectPromptView __declspec(property(get=__get__disconnectPromptView, put=__set__disconnectPromptView))  _disconnectPromptView;

constexpr void __set__disconnectPromptView(GlobalNamespace::DisconnectPromptView value) ;

constexpr GlobalNamespace::DisconnectPromptView __get__disconnectPromptView() const;

 GlobalNamespace::LevelBar __declspec(property(get=__get__levelBar, put=__set__levelBar))  _levelBar;

constexpr void __set__levelBar(GlobalNamespace::LevelBar value) ;

constexpr GlobalNamespace::LevelBar __get__levelBar() const;

 UnityEngine::GameObject __declspec(property(get=__get__dontOwnSongGameObject, put=__set__dontOwnSongGameObject))  _dontOwnSongGameObject;

constexpr void __set__dontOwnSongGameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__dontOwnSongGameObject() const;

 UnityEngine::GameObject __declspec(property(get=__get__detailsGameObject, put=__set__detailsGameObject))  _detailsGameObject;

constexpr void __set__detailsGameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__detailsGameObject() const;

 GlobalNamespace::LocalPlayerInGameMenuInitData __declspec(property(get=__get__localPlayerInGameMenuInitData, put=__set__localPlayerInGameMenuInitData))  _localPlayerInGameMenuInitData;

constexpr void __set__localPlayerInGameMenuInitData(GlobalNamespace::LocalPlayerInGameMenuInitData value) ;

constexpr GlobalNamespace::LocalPlayerInGameMenuInitData __get__localPlayerInGameMenuInitData() const;

 GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper __declspec(property(get=__get__disconnectHelper, put=__set__disconnectHelper))  _disconnectHelper;

constexpr void __set__disconnectHelper(GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper value) ;

constexpr GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper __get__disconnectHelper() const;

 GlobalNamespace::MultiplayerController __declspec(property(get=__get__multiplayerController, put=__set__multiplayerController))  _multiplayerController;

constexpr void __set__multiplayerController(GlobalNamespace::MultiplayerController value) ;

constexpr GlobalNamespace::MultiplayerController __get__multiplayerController() const;

 Tweening::TimeTweeningManager __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager))  _tweeningManager;

constexpr void __set__tweeningManager(Tweening::TimeTweeningManager value) ;

constexpr Tweening::TimeTweeningManager __get__tweeningManager() const;

 HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder))  _buttonBinder;

constexpr void __set__buttonBinder(HMUI::ButtonBinder value) ;

constexpr HMUI::ButtonBinder __get__buttonBinder() const;

 HMUI::ToggleBinder __declspec(property(get=__get__toggleBinder, put=__set__toggleBinder))  _toggleBinder;

constexpr void __set__toggleBinder(HMUI::ToggleBinder value) ;

constexpr HMUI::ToggleBinder __get__toggleBinder() const;

 Tweening::Tween __declspec(property(get=__get__fadeOutTween, put=__set__fadeOutTween))  _fadeOutTween;

constexpr void __set__fadeOutTween(Tweening::Tween value) ;

constexpr Tweening::Tween __get__fadeOutTween() const;


// Methods

/// @brief Method OnEnable addr 0x20d06e4 size 0x150 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x20d0834 size 0xac virtual false final false
 void OnDisable() ;

/// @brief Method Start addr 0x20d08e0 size 0x14c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20d0a2c size 0x12c virtual false final false
 void OnDestroy() ;

/// @brief Method DisconnectButtonPressed addr 0x20d0b58 size 0x34 virtual false final false
 void DisconnectButtonPressed() ;

/// @brief Method DetailsToggleValueChanged addr 0x20d0b8c size 0x20 virtual false final false
 void DetailsToggleValueChanged(bool isOn) ;

/// @brief Method HandleDisconnectPromptViewDidViewFinish addr 0x20d0bac size 0xc4 virtual false final false
 void HandleDisconnectPromptViewDidViewFinish(bool disconnect) ;

/// @brief Method HandleStateChanged addr 0x20d0c70 size 0x1c4 virtual false final false
 void HandleStateChanged(GlobalNamespace::GlobalNamespace__MultiplayerController__State state) ;

static GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController New_ctor() ;

/// @brief Method .ctor addr 0x20d0e34 size 0x98 virtual false final false
 void _ctor() ;

/// @brief Method <HandleDisconnectPromptViewDidViewFinish>b__22_0 addr 0x20d0ecc size 0x20 virtual false final false
 void _HandleDisconnectPromptViewDidViewFinish_b__22_0() ;

/// @brief Method <HandleStateChanged>b__23_0 addr 0x20d0eec size 0x1c virtual false final false
 void _HandleStateChanged_b__23_0(float_t val) ;

/// @brief Method <HandleStateChanged>b__23_1 addr 0x20d0f08 size 0x24 virtual false final false
 void _HandleStateChanged_b__23_1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController, "", "MultiplayerLocalInactivePlayerInGameMenuViewController");
