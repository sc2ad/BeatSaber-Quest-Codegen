#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace GlobalNamespace {
class NoteSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class ObstacleSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class NoteCutInfoNetSerializable;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsNetSerializable;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsAtStartNetSerializable;
}
namespace GlobalNamespace {
class NoteMissInfoNetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class IGameplayRpcManager;
}
// Type: ::IGameplayRpcManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12728))
// CS Name: IGameplayRpcManager
class CORDL_TYPE IGameplayRpcManager : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

~IGameplayRpcManager() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IGameplayRpcManager(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_enabled, put=set_enabled))  enabled;


// Methods

/// @brief Method get_enabled addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_enabled() ;

/// @brief Method set_enabled addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_enabled(bool value) ;

/// @brief Method add_setGameplaySceneSyncFinishedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_setGameplaySceneSyncFinishedEvent(System::Action_3<::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> value) ;

/// @brief Method remove_setGameplaySceneSyncFinishedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_setGameplaySceneSyncFinishedEvent(System::Action_3<::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> value) ;

/// @brief Method add_setGameplaySceneReadyEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_setGameplaySceneReadyEvent(System::Action_2<::StringW,GlobalNamespace::PlayerSpecificSettingsNetSerializable> value) ;

/// @brief Method remove_setGameplaySceneReadyEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_setGameplaySceneReadyEvent(System::Action_2<::StringW,GlobalNamespace::PlayerSpecificSettingsNetSerializable> value) ;

/// @brief Method add_getGameplaySceneReadyEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_getGameplaySceneReadyEvent(System::Action_1<::StringW> value) ;

/// @brief Method remove_getGameplaySceneReadyEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_getGameplaySceneReadyEvent(System::Action_1<::StringW> value) ;

/// @brief Method add_setPlayerDidConnectLateEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_setPlayerDidConnectLateEvent(System::Action_4<::StringW,::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> value) ;

/// @brief Method remove_setPlayerDidConnectLateEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_setPlayerDidConnectLateEvent(System::Action_4<::StringW,::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> value) ;

/// @brief Method add_setGameplaySongReadyEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_setGameplaySongReadyEvent(System::Action_1<::StringW> value) ;

/// @brief Method remove_setGameplaySongReadyEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_setGameplaySongReadyEvent(System::Action_1<::StringW> value) ;

/// @brief Method add_getGameplaySongReadyEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_getGameplaySongReadyEvent(System::Action_1<::StringW> value) ;

/// @brief Method remove_getGameplaySongReadyEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_getGameplaySongReadyEvent(System::Action_1<::StringW> value) ;

/// @brief Method add_setSongStartTimeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_setSongStartTimeEvent(System::Action_2<::StringW,float_t> value) ;

/// @brief Method remove_setSongStartTimeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_setSongStartTimeEvent(System::Action_2<::StringW,float_t> value) ;

/// @brief Method add_requestReturnToMenuEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_requestReturnToMenuEvent(System::Action_1<::StringW> value) ;

/// @brief Method remove_requestReturnToMenuEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_requestReturnToMenuEvent(System::Action_1<::StringW> value) ;

/// @brief Method add_returnToMenuEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_returnToMenuEvent(System::Action_1<::StringW> value) ;

/// @brief Method remove_returnToMenuEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_returnToMenuEvent(System::Action_1<::StringW> value) ;

/// @brief Method add_levelFinishedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_levelFinishedEvent(System::Action_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

/// @brief Method remove_levelFinishedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_levelFinishedEvent(System::Action_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

/// @brief Method add_noteWasSpawnedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_noteWasSpawnedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteSpawnInfoNetSerializable> value) ;

/// @brief Method remove_noteWasSpawnedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_noteWasSpawnedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteSpawnInfoNetSerializable> value) ;

/// @brief Method add_obstacleWasSpawnedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_obstacleWasSpawnedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::ObstacleSpawnInfoNetSerializable> value) ;

/// @brief Method remove_obstacleWasSpawnedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_obstacleWasSpawnedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::ObstacleSpawnInfoNetSerializable> value) ;

/// @brief Method add_sliderWasSpawnedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_sliderWasSpawnedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::SliderSpawnInfoNetSerializable> value) ;

/// @brief Method remove_sliderWasSpawnedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_sliderWasSpawnedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::SliderSpawnInfoNetSerializable> value) ;

/// @brief Method add_noteWasCutEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_noteWasCutEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteCutInfoNetSerializable> value) ;

/// @brief Method remove_noteWasCutEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_noteWasCutEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteCutInfoNetSerializable> value) ;

/// @brief Method add_noteWasMissedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_noteWasMissedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteMissInfoNetSerializable> value) ;

/// @brief Method remove_noteWasMissedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_noteWasMissedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteMissInfoNetSerializable> value) ;

/// @brief Method NoteSpawned addr 0x0 size 0xffffffffffffffff virtual true final false
 void NoteSpawned(float_t songTime, GlobalNamespace::NoteSpawnInfoNetSerializable noteSpawnInfoNetSerializable) ;

/// @brief Method ObstacleSpawned addr 0x0 size 0xffffffffffffffff virtual true final false
 void ObstacleSpawned(float_t songTime, GlobalNamespace::ObstacleSpawnInfoNetSerializable obstacleSpawnInfoNetSerializable) ;

/// @brief Method SliderSpawned addr 0x0 size 0xffffffffffffffff virtual true final false
 void SliderSpawned(float_t songTime, GlobalNamespace::SliderSpawnInfoNetSerializable sliderSpawnInfoNetSerializable) ;

/// @brief Method NoteMissed addr 0x0 size 0xffffffffffffffff virtual true final false
 void NoteMissed(float_t songTime, GlobalNamespace::NoteMissInfoNetSerializable noteMissInfoNetSerializable) ;

/// @brief Method NoteCut addr 0x0 size 0xffffffffffffffff virtual true final false
 void NoteCut(float_t songTime, GlobalNamespace::NoteCutInfoNetSerializable noteCutInfoNetSerializable) ;

/// @brief Method SetGameplaySceneSyncFinished addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetGameplaySceneSyncFinished(GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable playersAtGameStartNetSerializable, ::StringW sessionGameId) ;

/// @brief Method SetGameplaySceneReady addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetGameplaySceneReady(GlobalNamespace::PlayerSpecificSettingsNetSerializable playerSpecificSettings) ;

/// @brief Method GetGameplaySceneReady addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetGameplaySceneReady() ;

/// @brief Method SetPlayerDidConnectLate addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetPlayerDidConnectLate(::StringW userId, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable playersAtGameStartNetSerializable, ::StringW sessionGameId) ;

/// @brief Method SetSongStartTime addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetSongStartTime(float_t startTime) ;

/// @brief Method SetGameplaySongReady addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetGameplaySongReady() ;

/// @brief Method GetGameplaySongReady addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetGameplaySongReady() ;

/// @brief Method RequestReturnToMenu addr 0x0 size 0xffffffffffffffff virtual true final false
 void RequestReturnToMenu() ;

/// @brief Method ReturnToMenu addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReturnToMenu() ;

/// @brief Method LevelFinished addr 0x0 size 0xffffffffffffffff virtual true final false
 void LevelFinished(GlobalNamespace::MultiplayerLevelCompletionResults results) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IGameplayRpcManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IGameplayRpcManager, "", "IGameplayRpcManager");
