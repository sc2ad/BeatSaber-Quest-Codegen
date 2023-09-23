#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
namespace GlobalNamespace {
struct MultiplayerPlayerStartState;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerObstacleController;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace GlobalNamespace {
class PlayersSpecificSettingsAtGameStartModel;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerBombNoteController;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerGameNoteController;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerBeatmapObjectEventManager;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerSongTimeSyncController;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerInstaller;
}
// Type: ::MultiplayerConnectedPlayerInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5224))
// CS Name: MultiplayerConnectedPlayerInstaller
class CORDL_TYPE MultiplayerConnectedPlayerInstaller : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~MultiplayerConnectedPlayerInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerInstaller", modifiers: " const&", def_value: None }]
constexpr MultiplayerConnectedPlayerInstaller(MultiplayerConnectedPlayerInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerInstaller", modifiers: "&&", def_value: None }]
constexpr MultiplayerConnectedPlayerInstaller(MultiplayerConnectedPlayerInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerConnectedPlayerInstaller(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr MultiplayerConnectedPlayerInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerInstaller& operator=(MultiplayerConnectedPlayerInstaller&& o) noexcept = default;
  constexpr MultiplayerConnectedPlayerInstaller& operator=(MultiplayerConnectedPlayerInstaller const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController __declspec(property(get=__get__connectedPlayerAudioTimeSyncControllerPrefab, put=__set__connectedPlayerAudioTimeSyncControllerPrefab))  _connectedPlayerAudioTimeSyncControllerPrefab;

constexpr void __set__connectedPlayerAudioTimeSyncControllerPrefab(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController value) ;

constexpr GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController __get__connectedPlayerAudioTimeSyncControllerPrefab() const;

 GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager __declspec(property(get=__get__connectedPlayerBeatmapObjectEventManagerPrefab, put=__set__connectedPlayerBeatmapObjectEventManagerPrefab))  _connectedPlayerBeatmapObjectEventManagerPrefab;

constexpr void __set__connectedPlayerBeatmapObjectEventManagerPrefab(GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager value) ;

constexpr GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager __get__connectedPlayerBeatmapObjectEventManagerPrefab() const;

 GlobalNamespace::MultiplayerConnectedPlayerGameNoteController __declspec(property(get=__get__multiplayerGameNoteControllerPrefab, put=__set__multiplayerGameNoteControllerPrefab))  _multiplayerGameNoteControllerPrefab;

constexpr void __set__multiplayerGameNoteControllerPrefab(GlobalNamespace::MultiplayerConnectedPlayerGameNoteController value) ;

constexpr GlobalNamespace::MultiplayerConnectedPlayerGameNoteController __get__multiplayerGameNoteControllerPrefab() const;

 GlobalNamespace::MultiplayerConnectedPlayerGameNoteController __declspec(property(get=__get__multiplayerBurstSliderHeadGameNoteControllerPrefab, put=__set__multiplayerBurstSliderHeadGameNoteControllerPrefab))  _multiplayerBurstSliderHeadGameNoteControllerPrefab;

constexpr void __set__multiplayerBurstSliderHeadGameNoteControllerPrefab(GlobalNamespace::MultiplayerConnectedPlayerGameNoteController value) ;

constexpr GlobalNamespace::MultiplayerConnectedPlayerGameNoteController __get__multiplayerBurstSliderHeadGameNoteControllerPrefab() const;

 GlobalNamespace::MultiplayerConnectedPlayerGameNoteController __declspec(property(get=__get__multiplayerBurstSliderGameNoteControllerPrefab, put=__set__multiplayerBurstSliderGameNoteControllerPrefab))  _multiplayerBurstSliderGameNoteControllerPrefab;

constexpr void __set__multiplayerBurstSliderGameNoteControllerPrefab(GlobalNamespace::MultiplayerConnectedPlayerGameNoteController value) ;

constexpr GlobalNamespace::MultiplayerConnectedPlayerGameNoteController __get__multiplayerBurstSliderGameNoteControllerPrefab() const;

 GlobalNamespace::MultiplayerConnectedPlayerGameNoteController __declspec(property(get=__get__multiplayerBurstSliderFillControllerPrefab, put=__set__multiplayerBurstSliderFillControllerPrefab))  _multiplayerBurstSliderFillControllerPrefab;

constexpr void __set__multiplayerBurstSliderFillControllerPrefab(GlobalNamespace::MultiplayerConnectedPlayerGameNoteController value) ;

constexpr GlobalNamespace::MultiplayerConnectedPlayerGameNoteController __get__multiplayerBurstSliderFillControllerPrefab() const;

 GlobalNamespace::MultiplayerConnectedPlayerBombNoteController __declspec(property(get=__get__multiplayerBombNoteControllerPrefab, put=__set__multiplayerBombNoteControllerPrefab))  _multiplayerBombNoteControllerPrefab;

constexpr void __set__multiplayerBombNoteControllerPrefab(GlobalNamespace::MultiplayerConnectedPlayerBombNoteController value) ;

constexpr GlobalNamespace::MultiplayerConnectedPlayerBombNoteController __get__multiplayerBombNoteControllerPrefab() const;

 GlobalNamespace::MultiplayerConnectedPlayerObstacleController __declspec(property(get=__get__multiplayerObstacleControllerPrefab, put=__set__multiplayerObstacleControllerPrefab))  _multiplayerObstacleControllerPrefab;

constexpr void __set__multiplayerObstacleControllerPrefab(GlobalNamespace::MultiplayerConnectedPlayerObstacleController value) ;

constexpr GlobalNamespace::MultiplayerConnectedPlayerObstacleController __get__multiplayerObstacleControllerPrefab() const;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer))  _connectedPlayer;

constexpr void __set__connectedPlayer(GlobalNamespace::IConnectedPlayer value) ;

constexpr GlobalNamespace::IConnectedPlayer __get__connectedPlayer() const;

 GlobalNamespace::MultiplayerPlayerStartState __declspec(property(get=__get__localPlayerStartState, put=__set__localPlayerStartState))  _localPlayerStartState;

constexpr void __set__localPlayerStartState(GlobalNamespace::MultiplayerPlayerStartState value) ;

constexpr GlobalNamespace::MultiplayerPlayerStartState __get__localPlayerStartState() const;

 GlobalNamespace::GameplayCoreSceneSetupData __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData))  _sceneSetupData;

constexpr void __set__sceneSetupData(GlobalNamespace::GameplayCoreSceneSetupData value) ;

constexpr GlobalNamespace::GameplayCoreSceneSetupData __get__sceneSetupData() const;

 GlobalNamespace::PlayersSpecificSettingsAtGameStartModel __declspec(property(get=__get__playersSpecificSettingsAtGameStartModel, put=__set__playersSpecificSettingsAtGameStartModel))  _playersSpecificSettingsAtGameStartModel;

constexpr void __set__playersSpecificSettingsAtGameStartModel(GlobalNamespace::PlayersSpecificSettingsAtGameStartModel value) ;

constexpr GlobalNamespace::PlayersSpecificSettingsAtGameStartModel __get__playersSpecificSettingsAtGameStartModel() const;


// Methods

/// @brief Method InstallBindings addr 0x20e01bc size 0xc84 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit MultiplayerConnectedPlayerInstaller() ;

/// @brief Method .ctor addr 0x20e0e7c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerConnectedPlayerInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerInstaller, "", "MultiplayerConnectedPlayerInstaller");
