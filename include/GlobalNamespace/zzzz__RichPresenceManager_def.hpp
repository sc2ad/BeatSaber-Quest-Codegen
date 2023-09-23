#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace GlobalNamespace {
class IUnifiedNetworkPlayerModel;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class PlayingCampaignRichPresenceData;
}
namespace GlobalNamespace {
class InMultiplayerRichPresenceData;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class IRichPresenceData;
}
namespace GlobalNamespace {
struct MultiplayerGameState;
}
namespace GlobalNamespace {
class LobbyGameStateModel;
}
namespace GlobalNamespace {
class IRichPresencePlatformHandler;
}
namespace GlobalNamespace {
class PlayingTutorialPresenceData;
}
namespace GlobalNamespace {
class BrowsingMenusRichPresenceData;
}
namespace GlobalNamespace {
class MenuScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class LobbyPlayerPermissionsModel;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class RichPresenceManager;
}
// Type: ::RichPresenceManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4794))
// CS Name: RichPresenceManager
class CORDL_TYPE RichPresenceManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~RichPresenceManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "RichPresenceManager", modifiers: " const&", def_value: None }]
constexpr RichPresenceManager(RichPresenceManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RichPresenceManager", modifiers: "&&", def_value: None }]
constexpr RichPresenceManager(RichPresenceManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RichPresenceManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr RichPresenceManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RichPresenceManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RichPresenceManager& operator=(RichPresenceManager&& o) noexcept = default;
  constexpr RichPresenceManager& operator=(RichPresenceManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::StandardLevelScenesTransitionSetupDataSO __declspec(property(get=__get__standardLevelScenesTransitionSetupData, put=__set__standardLevelScenesTransitionSetupData))  _standardLevelScenesTransitionSetupData;

constexpr void __set__standardLevelScenesTransitionSetupData(GlobalNamespace::StandardLevelScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::StandardLevelScenesTransitionSetupDataSO __get__standardLevelScenesTransitionSetupData() const;

 GlobalNamespace::ScenesTransitionSetupDataSO __declspec(property(get=__get__tutorialScenesTransitionSetupData, put=__set__tutorialScenesTransitionSetupData))  _tutorialScenesTransitionSetupData;

constexpr void __set__tutorialScenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::ScenesTransitionSetupDataSO __get__tutorialScenesTransitionSetupData() const;

 GlobalNamespace::MissionLevelScenesTransitionSetupDataSO __declspec(property(get=__get__missionLevelScenesTransitionSetupData, put=__set__missionLevelScenesTransitionSetupData))  _missionLevelScenesTransitionSetupData;

constexpr void __set__missionLevelScenesTransitionSetupData(GlobalNamespace::MissionLevelScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::MissionLevelScenesTransitionSetupDataSO __get__missionLevelScenesTransitionSetupData() const;

 GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO __declspec(property(get=__get__multiplayerLevelScenesTransitionSetupData, put=__set__multiplayerLevelScenesTransitionSetupData))  _multiplayerLevelScenesTransitionSetupData;

constexpr void __set__multiplayerLevelScenesTransitionSetupData(GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO __get__multiplayerLevelScenesTransitionSetupData() const;

 GlobalNamespace::MenuScenesTransitionSetupDataSO __declspec(property(get=__get__menuScenesTransitionSetupData, put=__set__menuScenesTransitionSetupData))  _menuScenesTransitionSetupData;

constexpr void __set__menuScenesTransitionSetupData(GlobalNamespace::MenuScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::MenuScenesTransitionSetupDataSO __get__menuScenesTransitionSetupData() const;

 GlobalNamespace::IRichPresencePlatformHandler __declspec(property(get=__get__richPresencePlatformHandler, put=__set__richPresencePlatformHandler))  _richPresencePlatformHandler;

constexpr void __set__richPresencePlatformHandler(GlobalNamespace::IRichPresencePlatformHandler value) ;

constexpr GlobalNamespace::IRichPresencePlatformHandler __get__richPresencePlatformHandler() const;

 GlobalNamespace::GameScenesManager __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager))  _gameScenesManager;

constexpr void __set__gameScenesManager(GlobalNamespace::GameScenesManager value) ;

constexpr GlobalNamespace::GameScenesManager __get__gameScenesManager() const;

 GlobalNamespace::LobbyGameStateModel __declspec(property(get=__get__lobbyGameStateModel, put=__set__lobbyGameStateModel))  _lobbyGameStateModel;

constexpr void __set__lobbyGameStateModel(GlobalNamespace::LobbyGameStateModel value) ;

constexpr GlobalNamespace::LobbyGameStateModel __get__lobbyGameStateModel() const;

 GlobalNamespace::IUnifiedNetworkPlayerModel __declspec(property(get=__get__unifiedNetworkPlayerModel, put=__set__unifiedNetworkPlayerModel))  _unifiedNetworkPlayerModel;

constexpr void __set__unifiedNetworkPlayerModel(GlobalNamespace::IUnifiedNetworkPlayerModel value) ;

constexpr GlobalNamespace::IUnifiedNetworkPlayerModel __get__unifiedNetworkPlayerModel() const;

 GlobalNamespace::LobbyPlayerPermissionsModel __declspec(property(get=__get__lobbyPlayerPermissionsModel, put=__set__lobbyPlayerPermissionsModel))  _lobbyPlayerPermissionsModel;

constexpr void __set__lobbyPlayerPermissionsModel(GlobalNamespace::LobbyPlayerPermissionsModel value) ;

constexpr GlobalNamespace::LobbyPlayerPermissionsModel __get__lobbyPlayerPermissionsModel() const;

 bool __declspec(property(get=__get__menuWasLoaded, put=__set__menuWasLoaded))  _menuWasLoaded;

constexpr void __set__menuWasLoaded(bool value) ;

constexpr bool __get__menuWasLoaded() const;

 bool __declspec(property(get=__get__isInMultiplayerLobby, put=__set__isInMultiplayerLobby))  _isInMultiplayerLobby;

constexpr void __set__isInMultiplayerLobby(bool value) ;

constexpr bool __get__isInMultiplayerLobby() const;

 GlobalNamespace::BrowsingMenusRichPresenceData __declspec(property(get=__get__browsingMenusRichPresenceData, put=__set__browsingMenusRichPresenceData))  _browsingMenusRichPresenceData;

constexpr void __set__browsingMenusRichPresenceData(GlobalNamespace::BrowsingMenusRichPresenceData value) ;

constexpr GlobalNamespace::BrowsingMenusRichPresenceData __get__browsingMenusRichPresenceData() const;

 GlobalNamespace::InMultiplayerRichPresenceData __declspec(property(get=__get__inMultiplayerRichPresenceData, put=__set__inMultiplayerRichPresenceData))  _inMultiplayerRichPresenceData;

constexpr void __set__inMultiplayerRichPresenceData(GlobalNamespace::InMultiplayerRichPresenceData value) ;

constexpr GlobalNamespace::InMultiplayerRichPresenceData __get__inMultiplayerRichPresenceData() const;

 GlobalNamespace::PlayingCampaignRichPresenceData __declspec(property(get=__get__playingCampaignRichPresenceData, put=__set__playingCampaignRichPresenceData))  _playingCampaignRichPresenceData;

constexpr void __set__playingCampaignRichPresenceData(GlobalNamespace::PlayingCampaignRichPresenceData value) ;

constexpr GlobalNamespace::PlayingCampaignRichPresenceData __get__playingCampaignRichPresenceData() const;

 GlobalNamespace::PlayingTutorialPresenceData __declspec(property(get=__get__playingTutorialPresenceData, put=__set__playingTutorialPresenceData))  _playingTutorialPresenceData;

constexpr void __set__playingTutorialPresenceData(GlobalNamespace::PlayingTutorialPresenceData value) ;

constexpr GlobalNamespace::PlayingTutorialPresenceData __get__playingTutorialPresenceData() const;

 GlobalNamespace::IRichPresenceData __declspec(property(get=__get__currentPresenceData, put=__set__currentPresenceData))  _currentPresenceData;

constexpr void __set__currentPresenceData(GlobalNamespace::IRichPresenceData value) ;

constexpr GlobalNamespace::IRichPresenceData __get__currentPresenceData() const;


// Methods

/// @brief Method Awake addr 0x222a9b4 size 0x29c virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x222ac50 size 0x264 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleLobbyGameStateModelDidChange addr 0x222aeb4 size 0x1c virtual false final false
 void HandleLobbyGameStateModelDidChange(GlobalNamespace::MultiplayerGameState newGameState) ;

/// @brief Method SetMenuPresence addr 0x222aed0 size 0x22c virtual false final false
 void SetMenuPresence() ;

/// @brief Method HandleGameScenesManagerTransitionDidFinish addr 0x222b1a8 size 0x324 virtual false final false
 void HandleGameScenesManagerTransitionDidFinish(GlobalNamespace::ScenesTransitionSetupDataSO scenesTransitionSetupData, Zenject::DiContainer diContainer) ;

/// @brief Method HandleMultiplayerPartySizeChanged addr 0x222b574 size 0x1d0 virtual false final false
 void HandleMultiplayerPartySizeChanged(int32_t currentPartySize) ;

/// @brief Method HandleLobbyPlayerPermissionChanged addr 0x222b744 size 0x154 virtual false final false
 void HandleLobbyPlayerPermissionChanged() ;

/// @brief Method SetPresence addr 0x222b0fc size 0xac virtual false final false
 void SetPresence(GlobalNamespace::IRichPresenceData presenceData) ;

/// @brief Method Clear addr 0x222b4cc size 0xa8 virtual false final false
 void Clear() ;

// Ctor Parameters []
explicit RichPresenceManager() ;

/// @brief Method .ctor addr 0x222b898 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::RichPresenceManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RichPresenceManager, "", "RichPresenceManager");
