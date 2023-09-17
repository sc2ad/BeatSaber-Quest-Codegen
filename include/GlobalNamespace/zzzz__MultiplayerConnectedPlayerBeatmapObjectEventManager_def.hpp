#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
namespace {
namespace GlobalNamespace {
class IConnectedPlayerBeatmapObjectEventManager;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerSongTimeSyncController;
}
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class NoteCutInfoNetSerializable;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace GlobalNamespace {
class IPoolableSerializable;
}
namespace GlobalNamespace {
class ObstacleSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class NoteMissInfoNetSerializable;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class NoteSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerBeatmapObjectEventManager;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData;
}
// Type: ::TimestampedBeatmapObjectEventData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5216))
// CS Name: MultiplayerConnectedPlayerBeatmapObjectEventManager::TimestampedBeatmapObjectEventData
struct CORDL_TYPE ____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "beatmapObjectEventData", ty: "::GlobalNamespace::IPoolableSerializable", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData(float_t time, ::GlobalNamespace::IPoolableSerializable beatmapObjectEventData) noexcept;


                    constexpr ____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData(____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData const&) = default;
                    constexpr ____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData(____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData&&) = default;
                    constexpr ____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData& operator=(____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData& operator=(____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(float_t value) ;

constexpr float_t __get_time() const;

 ::GlobalNamespace::IPoolableSerializable __declspec(property(get=__get_beatmapObjectEventData, put=__set_beatmapObjectEventData))  beatmapObjectEventData;

constexpr void __set_beatmapObjectEventData(::GlobalNamespace::IPoolableSerializable value) ;

constexpr ::GlobalNamespace::IPoolableSerializable __get_beatmapObjectEventData() const;


// Methods

/// @brief Method .ctor addr 0x20dd588 size 0xc virtual false final false
 void _ctor(float_t time, ::GlobalNamespace::IPoolableSerializable beatmapObjectEventData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerConnectedPlayerBeatmapObjectEventManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5217))
// CS Name: MultiplayerConnectedPlayerBeatmapObjectEventManager
class CORDL_TYPE MultiplayerConnectedPlayerBeatmapObjectEventManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TimestampedBeatmapObjectEventData = ::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData;

/// @brief Convert operator to ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager
constexpr operator  ::GlobalNamespace::IConnectedPlayerBeatmapObjectEventManager() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~MultiplayerConnectedPlayerBeatmapObjectEventManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerBeatmapObjectEventManager", modifiers: " const&", def_value: None }]
constexpr MultiplayerConnectedPlayerBeatmapObjectEventManager(MultiplayerConnectedPlayerBeatmapObjectEventManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerBeatmapObjectEventManager", modifiers: "&&", def_value: None }]
constexpr MultiplayerConnectedPlayerBeatmapObjectEventManager(MultiplayerConnectedPlayerBeatmapObjectEventManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerConnectedPlayerBeatmapObjectEventManager(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerConnectedPlayerBeatmapObjectEventManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerBeatmapObjectEventManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerBeatmapObjectEventManager& operator=(MultiplayerConnectedPlayerBeatmapObjectEventManager&& o) noexcept = default;
  constexpr MultiplayerConnectedPlayerBeatmapObjectEventManager& operator=(MultiplayerConnectedPlayerBeatmapObjectEventManager const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer))  _connectedPlayer;

constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer value) ;

constexpr ::GlobalNamespace::IConnectedPlayer __get__connectedPlayer() const;

 ::GlobalNamespace::IGameplayRpcManager __declspec(property(get=__get__gameplayRpcManager, put=__set__gameplayRpcManager))  _gameplayRpcManager;

constexpr void __set__gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager value) ;

constexpr ::GlobalNamespace::IGameplayRpcManager __get__gameplayRpcManager() const;

 ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController __declspec(property(get=__get__songTimeController, put=__set__songTimeController))  _songTimeController;

constexpr void __set__songTimeController(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController value) ;

constexpr ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController __get__songTimeController() const;

 ::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable> __declspec(property(get=__get_connectedPlayerNoteWasSpawnedEvent, put=__set_connectedPlayerNoteWasSpawnedEvent))  connectedPlayerNoteWasSpawnedEvent;

constexpr void __set_connectedPlayerNoteWasSpawnedEvent(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable> value) ;

constexpr ::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable> __get_connectedPlayerNoteWasSpawnedEvent() const;

 ::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable> __declspec(property(get=__get_connectedPlayerObstacleWasSpawnedEvent, put=__set_connectedPlayerObstacleWasSpawnedEvent))  connectedPlayerObstacleWasSpawnedEvent;

constexpr void __set_connectedPlayerObstacleWasSpawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable> value) ;

constexpr ::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable> __get_connectedPlayerObstacleWasSpawnedEvent() const;

 ::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable> __declspec(property(get=__get_connectedPlayerSliderWasSpawnedEvent, put=__set_connectedPlayerSliderWasSpawnedEvent))  connectedPlayerSliderWasSpawnedEvent;

constexpr void __set_connectedPlayerSliderWasSpawnedEvent(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable> value) ;

constexpr ::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable> __get_connectedPlayerSliderWasSpawnedEvent() const;

 ::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable> __declspec(property(get=__get_connectedPlayerNoteWasCutEvent, put=__set_connectedPlayerNoteWasCutEvent))  connectedPlayerNoteWasCutEvent;

constexpr void __set_connectedPlayerNoteWasCutEvent(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable> value) ;

constexpr ::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable> __get_connectedPlayerNoteWasCutEvent() const;

 ::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable> __declspec(property(get=__get_connectedPlayerNoteWasMissedEvent, put=__set_connectedPlayerNoteWasMissedEvent))  connectedPlayerNoteWasMissedEvent;

constexpr void __set_connectedPlayerNoteWasMissedEvent(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable> value) ;

constexpr ::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable> __get_connectedPlayerNoteWasMissedEvent() const;

 ::System::Collections::Generic::Queue_1<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData> __declspec(property(get=__get__beatmapObjectEventQueue, put=__set__beatmapObjectEventQueue))  _beatmapObjectEventQueue;

constexpr void __set__beatmapObjectEventQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData> value) ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData> __get__beatmapObjectEventQueue() const;

 bool __declspec(property(get=__get__paused, put=__set__paused))  _paused;

constexpr void __set__paused(bool value) ;

constexpr bool __get__paused() const;


// Methods

/// @brief Method add_connectedPlayerNoteWasSpawnedEvent addr 0x20dc3c8 size 0xb0 virtual true final true
 void add_connectedPlayerNoteWasSpawnedEvent(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable> value) ;

/// @brief Method remove_connectedPlayerNoteWasSpawnedEvent addr 0x20dc478 size 0xb0 virtual true final true
 void remove_connectedPlayerNoteWasSpawnedEvent(::System::Action_1<::GlobalNamespace::NoteSpawnInfoNetSerializable> value) ;

/// @brief Method add_connectedPlayerObstacleWasSpawnedEvent addr 0x20dc528 size 0xb0 virtual true final true
 void add_connectedPlayerObstacleWasSpawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable> value) ;

/// @brief Method remove_connectedPlayerObstacleWasSpawnedEvent addr 0x20dc5d8 size 0xb0 virtual true final true
 void remove_connectedPlayerObstacleWasSpawnedEvent(::System::Action_1<::GlobalNamespace::ObstacleSpawnInfoNetSerializable> value) ;

/// @brief Method add_connectedPlayerSliderWasSpawnedEvent addr 0x20dc688 size 0xb0 virtual true final true
 void add_connectedPlayerSliderWasSpawnedEvent(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable> value) ;

/// @brief Method remove_connectedPlayerSliderWasSpawnedEvent addr 0x20dc738 size 0xb0 virtual true final true
 void remove_connectedPlayerSliderWasSpawnedEvent(::System::Action_1<::GlobalNamespace::SliderSpawnInfoNetSerializable> value) ;

/// @brief Method add_connectedPlayerNoteWasCutEvent addr 0x20dc7e8 size 0xb0 virtual true final true
 void add_connectedPlayerNoteWasCutEvent(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable> value) ;

/// @brief Method remove_connectedPlayerNoteWasCutEvent addr 0x20dc898 size 0xb0 virtual true final true
 void remove_connectedPlayerNoteWasCutEvent(::System::Action_1<::GlobalNamespace::NoteCutInfoNetSerializable> value) ;

/// @brief Method add_connectedPlayerNoteWasMissedEvent addr 0x20dc948 size 0xb0 virtual true final true
 void add_connectedPlayerNoteWasMissedEvent(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable> value) ;

/// @brief Method remove_connectedPlayerNoteWasMissedEvent addr 0x20dc9f8 size 0xb0 virtual true final true
 void remove_connectedPlayerNoteWasMissedEvent(::System::Action_1<::GlobalNamespace::NoteMissInfoNetSerializable> value) ;

/// @brief Method Start addr 0x20dcaa8 size 0x3b8 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20dce60 size 0x3c8 virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x20dd228 size 0xc0 virtual false final false
 void Update() ;

/// @brief Method Pause addr 0x20dd4f8 size 0xc virtual true final true
 void Pause() ;

/// @brief Method Resume addr 0x20dd504 size 0x8 virtual true final true
 void Resume() ;

/// @brief Method HandleBeatmapObjectEventData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void HandleBeatmapObjectEventData(::StringW userId, float_t syncTime, float_t songTime, T beatmapObjectEventData) ;

/// @brief Method InvokeCallback addr 0x20dd2e8 size 0x210 virtual false final false
 void InvokeCallback(::GlobalNamespace::IPoolableSerializable noteEventData) ;

// Ctor Parameters []
explicit MultiplayerConnectedPlayerBeatmapObjectEventManager() ;

/// @brief Method .ctor addr 0x20dd50c size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager, "", "MultiplayerConnectedPlayerBeatmapObjectEventManager");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData, "", "MultiplayerConnectedPlayerBeatmapObjectEventManager/TimestampedBeatmapObjectEventData");
