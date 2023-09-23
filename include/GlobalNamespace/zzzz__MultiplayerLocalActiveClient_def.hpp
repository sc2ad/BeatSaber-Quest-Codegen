#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace GlobalNamespace {
class IScoreController;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class ComboController;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
class INodePoseSyncStateManager;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
class IScoreSyncStateManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLocalActiveClient;
}
// Type: ::MultiplayerLocalActiveClient
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5247))
// CS Name: MultiplayerLocalActiveClient
class CORDL_TYPE MultiplayerLocalActiveClient : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~MultiplayerLocalActiveClient() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActiveClient", modifiers: " const&", def_value: None }]
constexpr MultiplayerLocalActiveClient(MultiplayerLocalActiveClient const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalActiveClient", modifiers: "&&", def_value: None }]
constexpr MultiplayerLocalActiveClient(MultiplayerLocalActiveClient&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLocalActiveClient(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLocalActiveClient& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLocalActiveClient& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLocalActiveClient& operator=(MultiplayerLocalActiveClient&& o) noexcept = default;
  constexpr MultiplayerLocalActiveClient& operator=(MultiplayerLocalActiveClient const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PlayerTransforms __declspec(property(get=__get__playerTransforms, put=__set__playerTransforms))  _playerTransforms;

constexpr void __set__playerTransforms(GlobalNamespace::PlayerTransforms value) ;

constexpr GlobalNamespace::PlayerTransforms __get__playerTransforms() const;

 GlobalNamespace::AudioTimeSyncController __declspec(property(get=__get__audioTimeSyncController, put=__set__audioTimeSyncController))  _audioTimeSyncController;

constexpr void __set__audioTimeSyncController(GlobalNamespace::AudioTimeSyncController value) ;

constexpr GlobalNamespace::AudioTimeSyncController __get__audioTimeSyncController() const;

 GlobalNamespace::IScoreSyncStateManager __declspec(property(get=__get__scoreSyncStateManager, put=__set__scoreSyncStateManager))  _scoreSyncStateManager;

constexpr void __set__scoreSyncStateManager(GlobalNamespace::IScoreSyncStateManager value) ;

constexpr GlobalNamespace::IScoreSyncStateManager __get__scoreSyncStateManager() const;

 GlobalNamespace::INodePoseSyncStateManager __declspec(property(get=__get__nodePoseSyncStateManager, put=__set__nodePoseSyncStateManager))  _nodePoseSyncStateManager;

constexpr void __set__nodePoseSyncStateManager(GlobalNamespace::INodePoseSyncStateManager value) ;

constexpr GlobalNamespace::INodePoseSyncStateManager __get__nodePoseSyncStateManager() const;

 GlobalNamespace::IGameplayRpcManager __declspec(property(get=__get__rpcManager, put=__set__rpcManager))  _rpcManager;

constexpr void __set__rpcManager(GlobalNamespace::IGameplayRpcManager value) ;

constexpr GlobalNamespace::IGameplayRpcManager __get__rpcManager() const;

 GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value) ;

constexpr GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 GlobalNamespace::IScoreController __declspec(property(get=__get__scoreController, put=__set__scoreController))  _scoreController;

constexpr void __set__scoreController(GlobalNamespace::IScoreController value) ;

constexpr GlobalNamespace::IScoreController __get__scoreController() const;

 GlobalNamespace::ComboController __declspec(property(get=__get__comboController, put=__set__comboController))  _comboController;

constexpr void __set__comboController(GlobalNamespace::ComboController value) ;

constexpr GlobalNamespace::ComboController __get__comboController() const;


// Methods

/// @brief Method Start addr 0x20e32b8 size 0x6e0 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20e3998 size 0x434 virtual false final false
 void OnDestroy() ;

/// @brief Method LateUpdate addr 0x20e3dcc size 0x348 virtual false final false
 void LateUpdate() ;

/// @brief Method HandleNoteWasAdded addr 0x20e4114 size 0x160 virtual false final false
 void HandleNoteWasAdded(GlobalNamespace::NoteData noteData, GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData noteSpawnData, float_t rotation) ;

/// @brief Method HandleObstacleWasAdded addr 0x20e4274 size 0x140 virtual false final false
 void HandleObstacleWasAdded(GlobalNamespace::ObstacleData obstacleData, GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData obstacleSpawnData, float_t rotation) ;

/// @brief Method HandleSliderWasAdded addr 0x20e43b4 size 0x1d4 virtual false final false
 void HandleSliderWasAdded(GlobalNamespace::SliderData sliderData, GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData sliderSpawnData, float_t rotation) ;

/// @brief Method HandleNoteWasMissed addr 0x20e4588 size 0xfc virtual false final false
 void HandleNoteWasMissed(GlobalNamespace::NoteController noteController) ;

/// @brief Method HandleNoteWasCut addr 0x20e4684 size 0x1c4 virtual false final false
 void HandleNoteWasCut(GlobalNamespace::NoteController noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo) ;

/// @brief Method HandleComboDidChange addr 0x20e4848 size 0xcc virtual false final false
 void HandleComboDidChange(int32_t combo) ;

/// @brief Method HandleMultiplierDidChange addr 0x20e4914 size 0xcc virtual false final false
 void HandleMultiplierDidChange(int32_t multiplier, float_t multiplierProgress) ;

/// @brief Method HandleScoreDidChange addr 0x20e49e0 size 0x254 virtual false final false
 void HandleScoreDidChange(int32_t multipliedScore, int32_t modifiedScore) ;

// Ctor Parameters []
explicit MultiplayerLocalActiveClient() ;

/// @brief Method .ctor addr 0x20e4c34 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerLocalActiveClient);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalActiveClient, "", "MultiplayerLocalActiveClient");
