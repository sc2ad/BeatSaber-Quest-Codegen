#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerController__State;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerScoreRingItem__Pool;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class MultiplayerScoreRingItem;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
namespace GlobalNamespace {
class BeatmapObjectSpawnCenter;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class MultiplayerController;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerScoreRingManager;
}
// Type: ::MultiplayerScoreRingManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5344))
// CS Name: MultiplayerScoreRingManager
class CORDL_TYPE MultiplayerScoreRingManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~MultiplayerScoreRingManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreRingManager", modifiers: " const&", def_value: None }]
constexpr MultiplayerScoreRingManager(MultiplayerScoreRingManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreRingManager", modifiers: "&&", def_value: None }]
constexpr MultiplayerScoreRingManager(MultiplayerScoreRingManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerScoreRingManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerScoreRingManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerScoreRingManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerScoreRingManager& operator=(MultiplayerScoreRingManager&& o) noexcept = default;
  constexpr MultiplayerScoreRingManager& operator=(MultiplayerScoreRingManager const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__delayBetweenScoreUpdates, put=__set__delayBetweenScoreUpdates))  _delayBetweenScoreUpdates;

constexpr void __set__delayBetweenScoreUpdates(float_t value) ;

constexpr float_t __get__delayBetweenScoreUpdates() const;

 float_t __declspec(property(get=__get__centerDistanceOffset, put=__set__centerDistanceOffset))  _centerDistanceOffset;

constexpr void __set__centerDistanceOffset(float_t value) ;

constexpr float_t __get__centerDistanceOffset() const;

 GlobalNamespace::MultiplayerController __declspec(property(get=__get__multiplayerController, put=__set__multiplayerController))  _multiplayerController;

constexpr void __set__multiplayerController(GlobalNamespace::MultiplayerController value) ;

constexpr GlobalNamespace::MultiplayerController __get__multiplayerController() const;

 GlobalNamespace::MultiplayerPlayersManager __declspec(property(get=__get__multiplayerPlayersManager, put=__set__multiplayerPlayersManager))  _multiplayerPlayersManager;

constexpr void __set__multiplayerPlayersManager(GlobalNamespace::MultiplayerPlayersManager value) ;

constexpr GlobalNamespace::MultiplayerPlayersManager __get__multiplayerPlayersManager() const;

 GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 GlobalNamespace::BeatmapObjectSpawnCenter __declspec(property(get=__get__spawnCenter, put=__set__spawnCenter))  _spawnCenter;

constexpr void __set__spawnCenter(GlobalNamespace::BeatmapObjectSpawnCenter value) ;

constexpr GlobalNamespace::BeatmapObjectSpawnCenter __get__spawnCenter() const;

 GlobalNamespace::MultiplayerLayoutProvider __declspec(property(get=__get__layoutProvider, put=__set__layoutProvider))  _layoutProvider;

constexpr void __set__layoutProvider(GlobalNamespace::MultiplayerLayoutProvider value) ;

constexpr GlobalNamespace::MultiplayerLayoutProvider __get__layoutProvider() const;

 GlobalNamespace::MultiplayerScoreProvider __declspec(property(get=__get__scoreProvider, put=__set__scoreProvider))  _scoreProvider;

constexpr void __set__scoreProvider(GlobalNamespace::MultiplayerScoreProvider value) ;

constexpr GlobalNamespace::MultiplayerScoreProvider __get__scoreProvider() const;

 GlobalNamespace::GlobalNamespace__MultiplayerScoreRingItem__Pool __declspec(property(get=__get__scoreRingItemPool, put=__set__scoreRingItemPool))  _scoreRingItemPool;

constexpr void __set__scoreRingItemPool(GlobalNamespace::GlobalNamespace__MultiplayerScoreRingItem__Pool value) ;

constexpr GlobalNamespace::GlobalNamespace__MultiplayerScoreRingItem__Pool __get__scoreRingItemPool() const;

 System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerScoreRingItem> __declspec(property(get=__get__scoreRingItems, put=__set__scoreRingItems))  _scoreRingItems;

constexpr void __set__scoreRingItems(System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerScoreRingItem> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,GlobalNamespace::MultiplayerScoreRingItem> __get__scoreRingItems() const;

 System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get__allActivePlayers, put=__set__allActivePlayers))  _allActivePlayers;

constexpr void __set__allActivePlayers(System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> __get__allActivePlayers() const;

 int32_t __declspec(property(get=__get__currentlyScoreUpdateIndex, put=__set__currentlyScoreUpdateIndex))  _currentlyScoreUpdateIndex;

constexpr void __set__currentlyScoreUpdateIndex(int32_t value) ;

constexpr int32_t __get__currentlyScoreUpdateIndex() const;

 float_t __declspec(property(get=__get__timeSinceLastScoreUpdate, put=__set__timeSinceLastScoreUpdate))  _timeSinceLastScoreUpdate;

constexpr void __set__timeSinceLastScoreUpdate(float_t value) ;

constexpr float_t __get__timeSinceLastScoreUpdate() const;

 GlobalNamespace::MultiplayerScoreRingItem __declspec(property(get=__get__firstPlayerItem, put=__set__firstPlayerItem))  _firstPlayerItem;

constexpr void __set__firstPlayerItem(GlobalNamespace::MultiplayerScoreRingItem value) ;

constexpr GlobalNamespace::MultiplayerScoreRingItem __get__firstPlayerItem() const;

 bool __declspec(property(get=__get__spawnCenterDistanceFound, put=__set__spawnCenterDistanceFound))  _spawnCenterDistanceFound;

constexpr void __set__spawnCenterDistanceFound(bool value) ;

constexpr bool __get__spawnCenterDistanceFound() const;

 bool __declspec(property(get=__get__playersSpawned, put=__set__playersSpawned))  _playersSpawned;

constexpr void __set__playersSpawned(bool value) ;

constexpr bool __get__playersSpawned() const;


// Methods

/// @brief Method Start addr 0x21029d8 size 0x1b8 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x21030b4 size 0x35c virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x2103410 size 0xd4 virtual false final false
 void Update() ;

/// @brief Method UpdateScore addr 0x21034e4 size 0x1f4 virtual false final false
 void UpdateScore(GlobalNamespace::IConnectedPlayer playerToUpdate) ;

/// @brief Method AnimateColorsForPlayer addr 0x21036d8 size 0x180 virtual false final false
 void AnimateColorsForPlayer(::StringW userId, UnityEngine::Color nameColor, UnityEngine::Color scoreColor, float_t duration, GlobalNamespace::EaseType easeType) ;

/// @brief Method GetScoreRingItem addr 0x2103858 size 0x104 virtual false final false
 GlobalNamespace::MultiplayerScoreRingItem GetScoreRingItem(::StringW userId) ;

/// @brief Method GetScoreRingItems addr 0x210395c size 0x220 virtual false final false
 ::ArrayW<UnityEngine::GameObject> GetScoreRingItems() ;

/// @brief Method AnimateColorsForAllPlayers addr 0x2103b7c size 0x1c8 virtual false final false
 void AnimateColorsForAllPlayers(UnityEngine::Color nameColor, UnityEngine::Color scoreColor, float_t duration, GlobalNamespace::EaseType easeType) ;

/// @brief Method SetPlayerToFailedState addr 0x2103d44 size 0x120 virtual false final false
 void SetPlayerToFailedState(GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method TrySpawnTexts addr 0x2103e64 size 0x18 virtual false final false
 void TrySpawnTexts() ;

/// @brief Method SpawnTexts addr 0x2103e7c size 0x5e0 virtual false final false
 void SpawnTexts() ;

/// @brief Method HandleStateChanged addr 0x2102bc0 size 0x4f4 virtual false final false
 void HandleStateChanged(GlobalNamespace::GlobalNamespace__MultiplayerController__State state) ;

/// @brief Method HandleSpawnCenterDistanceWasFound addr 0x2102b90 size 0x18 virtual false final false
 void HandleSpawnCenterDistanceWasFound(float_t spawnCenterDistance) ;

/// @brief Method HandlePlayerSpawningDidFinish addr 0x2102ba8 size 0x18 virtual false final false
 void HandlePlayerSpawningDidFinish() ;

/// @brief Method HandlePlayerStateChanged addr 0x210445c size 0x40 virtual false final false
 void HandlePlayerStateChanged(GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method HandlePlayerDisconnected addr 0x210449c size 0x4 virtual false final false
 void HandlePlayerDisconnected(GlobalNamespace::IConnectedPlayer player) ;

// Ctor Parameters []
explicit MultiplayerScoreRingManager() ;

/// @brief Method .ctor addr 0x21044a0 size 0x88 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerScoreRingManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerScoreRingManager, "", "MultiplayerScoreRingManager");
