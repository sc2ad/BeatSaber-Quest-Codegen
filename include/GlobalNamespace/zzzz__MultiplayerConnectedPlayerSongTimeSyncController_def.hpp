#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace GlobalNamespace {
class FloatSO;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerSongTimeSyncController;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5227))
// CS Name: MultiplayerConnectedPlayerSongTimeSyncController::InitData
class CORDL_TYPE GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData(GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData(GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData& operator=(GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData& operator=(GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_startSongTime, put=__set_startSongTime))  startSongTime;

constexpr void __set_startSongTime(float_t value) ;

constexpr float_t __get_startSongTime() const;

 float_t __declspec(property(get=__get_songTimeOffset, put=__set_songTimeOffset))  songTimeOffset;

constexpr void __set_songTimeOffset(float_t value) ;

constexpr float_t __get_songTimeOffset() const;

 float_t __declspec(property(get=__get_timeScale, put=__set_timeScale))  timeScale;

constexpr void __set_timeScale(float_t value) ;

constexpr float_t __get_timeScale() const;


// Methods

// Ctor Parameters [CppParam { name: "startSongTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "songTimeOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "timeScale", ty: "float_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData(float_t startSongTime, float_t songTimeOffset, float_t timeScale) ;

/// @brief Method .ctor addr 0x20e0e40 size 0x3c virtual false final false
 void _ctor(float_t startSongTime, float_t songTimeOffset, float_t timeScale) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerConnectedPlayerSongTimeSyncController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5228))
// CS Name: MultiplayerConnectedPlayerSongTimeSyncController
class CORDL_TYPE MultiplayerConnectedPlayerSongTimeSyncController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData;

/// @brief Convert operator to GlobalNamespace::IAudioTimeSource
constexpr operator  GlobalNamespace::IAudioTimeSource() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~MultiplayerConnectedPlayerSongTimeSyncController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerSongTimeSyncController", modifiers: " const&", def_value: None }]
constexpr MultiplayerConnectedPlayerSongTimeSyncController(MultiplayerConnectedPlayerSongTimeSyncController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerSongTimeSyncController", modifiers: "&&", def_value: None }]
constexpr MultiplayerConnectedPlayerSongTimeSyncController(MultiplayerConnectedPlayerSongTimeSyncController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerConnectedPlayerSongTimeSyncController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerConnectedPlayerSongTimeSyncController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerSongTimeSyncController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerSongTimeSyncController& operator=(MultiplayerConnectedPlayerSongTimeSyncController&& o) noexcept = default;
  constexpr MultiplayerConnectedPlayerSongTimeSyncController& operator=(MultiplayerConnectedPlayerSongTimeSyncController const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__audioSyncLerpSpeed, put=__set__audioSyncLerpSpeed))  _audioSyncLerpSpeed;

constexpr void __set__audioSyncLerpSpeed(float_t value) ;

constexpr float_t __get__audioSyncLerpSpeed() const;

 float_t __declspec(property(get=__get__forcedSyncDeltaTime, put=__set__forcedSyncDeltaTime))  _forcedSyncDeltaTime;

constexpr void __set__forcedSyncDeltaTime(float_t value) ;

constexpr float_t __get__forcedSyncDeltaTime() const;

 float_t __declspec(property(get=__get__startSyncDeltaTime, put=__set__startSyncDeltaTime))  _startSyncDeltaTime;

constexpr void __set__startSyncDeltaTime(float_t value) ;

constexpr float_t __get__startSyncDeltaTime() const;

 float_t __declspec(property(get=__get__stopSyncDeltaTime, put=__set__stopSyncDeltaTime))  _stopSyncDeltaTime;

constexpr void __set__stopSyncDeltaTime(float_t value) ;

constexpr float_t __get__stopSyncDeltaTime() const;

 GlobalNamespace::FloatSO __declspec(property(get=__get__audioLatency, put=__set__audioLatency))  _audioLatency;

constexpr void __set__audioLatency(GlobalNamespace::FloatSO value) ;

constexpr GlobalNamespace::FloatSO __get__audioLatency() const;

 GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData __get__initData() const;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer))  _connectedPlayer;

constexpr void __set__connectedPlayer(GlobalNamespace::IConnectedPlayer value) ;

constexpr GlobalNamespace::IConnectedPlayer __get__connectedPlayer() const;

 float_t __declspec(property(get=__get__songTime_k__BackingField, put=__set__songTime_k__BackingField))  _songTime_k__BackingField;

constexpr void __set__songTime_k__BackingField(float_t value) ;

constexpr float_t __get__songTime_k__BackingField() const;

 float_t __declspec(property(get=__get__lastFrameDeltaSongTime_k__BackingField, put=__set__lastFrameDeltaSongTime_k__BackingField))  _lastFrameDeltaSongTime_k__BackingField;

constexpr void __set__lastFrameDeltaSongTime_k__BackingField(float_t value) ;

constexpr float_t __get__lastFrameDeltaSongTime_k__BackingField() const;

 float_t __declspec(property(get=__get__timeScale, put=__set__timeScale))  _timeScale;

constexpr void __set__timeScale(float_t value) ;

constexpr float_t __get__timeScale() const;

 float_t __declspec(property(get=__get__startSongSyncTime, put=__set__startSongSyncTime))  _startSongSyncTime;

constexpr void __set__startSongSyncTime(float_t value) ;

constexpr float_t __get__startSongSyncTime() const;

 bool __declspec(property(get=__get__fixingAudioSyncError, put=__set__fixingAudioSyncError))  _fixingAudioSyncError;

constexpr void __set__fixingAudioSyncError(bool value) ;

constexpr bool __get__fixingAudioSyncError() const;

 bool __declspec(property(get=__get__isReady, put=__set__isReady))  _isReady;

constexpr void __set__isReady(bool value) ;

constexpr bool __get__isReady() const;


// Properties

 float_t __declspec(property(get=get_songTime, put=set_songTime))  songTime;

 float_t __declspec(property(get=get_lastFrameDeltaSongTime, put=set_lastFrameDeltaSongTime))  lastFrameDeltaSongTime;

 float_t __declspec(property(get=get_songEndTime))  songEndTime;

 float_t __declspec(property(get=get_songLength))  songLength;

 bool __declspec(property(get=get_isReady))  isReady;


// Methods

/// @brief Method get_songTime addr 0x20e13f0 size 0x8 virtual true final true
 float_t get_songTime() ;

/// @brief Method set_songTime addr 0x20e13f8 size 0x8 virtual false final false
 void set_songTime(float_t value) ;

/// @brief Method get_lastFrameDeltaSongTime addr 0x20e1400 size 0x8 virtual true final true
 float_t get_lastFrameDeltaSongTime() ;

/// @brief Method set_lastFrameDeltaSongTime addr 0x20e1408 size 0x8 virtual false final false
 void set_lastFrameDeltaSongTime(float_t value) ;

/// @brief Method get_songEndTime addr 0x20e1410 size 0xc virtual true final true
 float_t get_songEndTime() ;

/// @brief Method get_songLength addr 0x20e141c size 0xc virtual true final true
 float_t get_songLength() ;

/// @brief Method get_isReady addr 0x20e1428 size 0x8 virtual true final true
 bool get_isReady() ;

/// @brief Method Start addr 0x20e1430 size 0xc virtual false final false
 void Start() ;

/// @brief Method Update addr 0x20e143c size 0x14c virtual false final false
 void Update() ;

/// @brief Method StartSong addr 0x20df548 size 0x124 virtual false final false
 void StartSong(float_t songStartSyncTime) ;

/// @brief Method SetConnectedPlayerSongTime addr 0x20e1588 size 0x14 virtual false final false
 void SetConnectedPlayerSongTime(float_t syncTime, float_t songTime) ;

/// @brief Method StopSong addr 0x20df7e8 size 0xc virtual false final false
 void StopSong() ;

// Ctor Parameters []
explicit MultiplayerConnectedPlayerSongTimeSyncController() ;

/// @brief Method .ctor addr 0x20e159c size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerSongTimeSyncController__InitData, "", "MultiplayerConnectedPlayerSongTimeSyncController/InitData");
NEED_NO_BOX(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController, "", "MultiplayerConnectedPlayerSongTimeSyncController");
