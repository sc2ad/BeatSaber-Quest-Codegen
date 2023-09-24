#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MockPlayerGamePoseGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class NodePoseSyncStateManager;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class StandardScoreSyncStateNetSerializable;
}
namespace GlobalNamespace {
class ObstacleSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class NoteCutInfoNetSerializable;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class NoteSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class NoteMissInfoNetSerializable;
}
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class MockBeatmapData;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerGamePoseGeneratorMirror;
}
// Type: ::MockPlayerGamePoseGeneratorMirror
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15491))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5280))
// CS Name: MockPlayerGamePoseGeneratorMirror
class CORDL_TYPE MockPlayerGamePoseGeneratorMirror : public GlobalNamespace::MockPlayerGamePoseGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MockPlayerGamePoseGeneratorMirror() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerGamePoseGeneratorMirror", modifiers: " const&", def_value: None }]
constexpr MockPlayerGamePoseGeneratorMirror(MockPlayerGamePoseGeneratorMirror const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerGamePoseGeneratorMirror", modifiers: "&&", def_value: None }]
constexpr MockPlayerGamePoseGeneratorMirror(MockPlayerGamePoseGeneratorMirror&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockPlayerGamePoseGeneratorMirror(void* ptr) noexcept : GlobalNamespace::MockPlayerGamePoseGenerator(ptr) {
}


  constexpr MockPlayerGamePoseGeneratorMirror& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockPlayerGamePoseGeneratorMirror& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockPlayerGamePoseGeneratorMirror& operator=(MockPlayerGamePoseGeneratorMirror&& o) noexcept = default;
  constexpr MockPlayerGamePoseGeneratorMirror& operator=(MockPlayerGamePoseGeneratorMirror const& o) noexcept = default;
                


// Fields

 GlobalNamespace::NodePoseSyncStateManager __declspec(property(get=__get__nodePoseSyncStateManager, put=__set__nodePoseSyncStateManager))  _nodePoseSyncStateManager;

constexpr void __set__nodePoseSyncStateManager(GlobalNamespace::NodePoseSyncStateManager value) ;

constexpr GlobalNamespace::NodePoseSyncStateManager __get__nodePoseSyncStateManager() const;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__mirroredPlayer, put=__set__mirroredPlayer))  _mirroredPlayer;

constexpr void __set__mirroredPlayer(GlobalNamespace::IConnectedPlayer value) ;

constexpr GlobalNamespace::IConnectedPlayer __get__mirroredPlayer() const;

 System::Action __declspec(property(get=__get__onSongFinished, put=__set__onSongFinished))  _onSongFinished;

constexpr void __set__onSongFinished(System::Action value) ;

constexpr System::Action __get__onSongFinished() const;


// Methods

static GlobalNamespace::MockPlayerGamePoseGeneratorMirror New_ctor(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, GlobalNamespace::IGameplayRpcManager gameplayRpcManager, bool leftHanded, GlobalNamespace::NodePoseSyncStateManager nodePoseSyncStateManager) ;

/// @brief Method .ctor addr 0x20ed980 size 0x5a4 virtual false final false
 void _ctor(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, GlobalNamespace::IGameplayRpcManager gameplayRpcManager, bool leftHanded, GlobalNamespace::NodePoseSyncStateManager nodePoseSyncStateManager) ;

/// @brief Method Dispose addr 0x20ee278 size 0x460 virtual true final false
 void Dispose() ;

/// @brief Method Init addr 0x20ee6d8 size 0x8 virtual true final false
 void Init(float_t introStartTime, GlobalNamespace::MockBeatmapData beatmapData, GlobalNamespace::GameplayModifiers gameplayModifiers, System::Action onSongFinished) ;

/// @brief Method Tick addr 0x20ee6e0 size 0x168 virtual true final false
 void Tick() ;

/// @brief Method FindPlayerToMirror addr 0x20ee848 size 0x3a4 virtual false final false
 void FindPlayerToMirror() ;

/// @brief Method HandleNoteWasSpawned addr 0x20eebec size 0x184 virtual false final false
 void HandleNoteWasSpawned(::StringW userId, float_t syncTime, float_t songTime, GlobalNamespace::NoteSpawnInfoNetSerializable noteSpawnInfoNetSerializable) ;

/// @brief Method HandleObstacleWasSpawned addr 0x20eed70 size 0x184 virtual false final false
 void HandleObstacleWasSpawned(::StringW userId, float_t syncTime, float_t songTime, GlobalNamespace::ObstacleSpawnInfoNetSerializable obstacleSpawnInfoNetSerializable) ;

/// @brief Method HandleSliderWasSpawned addr 0x20eeef4 size 0x184 virtual false final false
 void HandleSliderWasSpawned(::StringW userId, float_t syncTime, float_t songTime, GlobalNamespace::SliderSpawnInfoNetSerializable sliderSpawnInfoNetSerializable) ;

/// @brief Method HandleNoteWasMissed addr 0x20ef078 size 0x184 virtual false final false
 void HandleNoteWasMissed(::StringW userId, float_t syncTime, float_t songTime, GlobalNamespace::NoteMissInfoNetSerializable noteMissInfo) ;

/// @brief Method HandleNoteWasCut addr 0x20ef1fc size 0x184 virtual false final false
 void HandleNoteWasCut(::StringW userId, float_t syncTime, float_t songTime, GlobalNamespace::NoteCutInfoNetSerializable noteCutInfo) ;

/// @brief Method HandleScoreSyncStateUpdate addr 0x20ef380 size 0x1d8 virtual false final false
 void HandleScoreSyncStateUpdate(GlobalNamespace::StandardScoreSyncStateNetSerializable nodePose, GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method HandleLevelFinished addr 0x20ef558 size 0x174 virtual false final false
 void HandleLevelFinished(::StringW userId, GlobalNamespace::MultiplayerLevelCompletionResults results) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MockPlayerGamePoseGeneratorMirror);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPlayerGamePoseGeneratorMirror, "", "MockPlayerGamePoseGeneratorMirror");
