#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class AudioSource;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class FloatSO;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
struct GlobalNamespace__AudioTimeSyncController__State;
}
namespace UnityEngine {
class WaitUntil;
}
namespace GlobalNamespace {
class GlobalNamespace__AudioTimeSyncController__InitData;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__AudioTimeSyncController__State;
}
namespace GlobalNamespace {
class AudioTimeSyncController;
}
namespace GlobalNamespace {
class GlobalNamespace__AudioTimeSyncController__InitData;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4036))
// CS Name: AudioTimeSyncController::InitData
class CORDL_TYPE GlobalNamespace__AudioTimeSyncController__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__AudioTimeSyncController__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AudioTimeSyncController__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__AudioTimeSyncController__InitData(GlobalNamespace__AudioTimeSyncController__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AudioTimeSyncController__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__AudioTimeSyncController__InitData(GlobalNamespace__AudioTimeSyncController__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AudioTimeSyncController__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__AudioTimeSyncController__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__AudioTimeSyncController__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__AudioTimeSyncController__InitData& operator=(GlobalNamespace__AudioTimeSyncController__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__AudioTimeSyncController__InitData& operator=(GlobalNamespace__AudioTimeSyncController__InitData const& o) noexcept = default;
                


// Fields

 UnityEngine::AudioClip __declspec(property(get=__get_audioClip, put=__set_audioClip))  audioClip;

constexpr void __set_audioClip(UnityEngine::AudioClip value) ;

constexpr UnityEngine::AudioClip __get_audioClip() const;

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

static GlobalNamespace::GlobalNamespace__AudioTimeSyncController__InitData New_ctor(UnityEngine::AudioClip audioClip, float_t startSongTime, float_t songTimeOffset, float_t timeScale) ;

/// @brief Method .ctor addr 0x20b9c28 size 0x4c virtual false final false
 void _ctor(UnityEngine::AudioClip audioClip, float_t startSongTime, float_t songTimeOffset, float_t timeScale) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::State
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4037))
// CS Name: AudioTimeSyncController::State
struct CORDL_TYPE GlobalNamespace__AudioTimeSyncController__State : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__AudioTimeSyncController__State(int32_t value__) noexcept;


                    constexpr GlobalNamespace__AudioTimeSyncController__State(GlobalNamespace__AudioTimeSyncController__State const&) = default;
                    constexpr GlobalNamespace__AudioTimeSyncController__State(GlobalNamespace__AudioTimeSyncController__State&&) = default;
                    constexpr GlobalNamespace__AudioTimeSyncController__State& operator=(GlobalNamespace__AudioTimeSyncController__State const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__AudioTimeSyncController__State& operator=(GlobalNamespace__AudioTimeSyncController__State&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AudioTimeSyncController__State(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__AudioTimeSyncController__State_Unwrapped : int32_t {
__Playing = 0,
__Paused = 1,
__Stopped = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__AudioTimeSyncController__State_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__AudioTimeSyncController__State_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Playing offset 0
static GlobalNamespace::GlobalNamespace__AudioTimeSyncController__State const Playing;

/// @brief Field Paused offset 0
static GlobalNamespace::GlobalNamespace__AudioTimeSyncController__State const Paused;

/// @brief Field Stopped offset 0
static GlobalNamespace::GlobalNamespace__AudioTimeSyncController__State const Stopped;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AudioTimeSyncController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4038))
// CS Name: AudioTimeSyncController
class CORDL_TYPE AudioTimeSyncController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using State = GlobalNamespace::GlobalNamespace__AudioTimeSyncController__State;

using InitData = GlobalNamespace::GlobalNamespace__AudioTimeSyncController__InitData;

/// @brief Convert operator to GlobalNamespace::IAudioTimeSource
constexpr operator  GlobalNamespace::IAudioTimeSource() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~AudioTimeSyncController() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioTimeSyncController", modifiers: " const&", def_value: None }]
constexpr AudioTimeSyncController(AudioTimeSyncController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioTimeSyncController", modifiers: "&&", def_value: None }]
constexpr AudioTimeSyncController(AudioTimeSyncController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioTimeSyncController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AudioTimeSyncController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioTimeSyncController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioTimeSyncController& operator=(AudioTimeSyncController&& o) noexcept = default;
  constexpr AudioTimeSyncController& operator=(AudioTimeSyncController const& o) noexcept = default;
                


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

 UnityEngine::AudioSource __declspec(property(get=__get__audioSource, put=__set__audioSource))  _audioSource;

constexpr void __set__audioSource(UnityEngine::AudioSource value) ;

constexpr UnityEngine::AudioSource __get__audioSource() const;

 GlobalNamespace::FloatSO __declspec(property(get=__get__audioLatency, put=__set__audioLatency))  _audioLatency;

constexpr void __set__audioLatency(GlobalNamespace::FloatSO value) ;

constexpr GlobalNamespace::FloatSO __get__audioLatency() const;

 GlobalNamespace::GlobalNamespace__AudioTimeSyncController__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__AudioTimeSyncController__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__AudioTimeSyncController__InitData __get__initData() const;

 bool __declspec(property(get=__get_forcedNoAudioSync, put=__set_forcedNoAudioSync))  forcedNoAudioSync;

constexpr void __set_forcedNoAudioSync(bool value) ;

constexpr bool __get_forcedNoAudioSync() const;

 System::Action __declspec(property(get=__get_stateChangedEvent, put=__set_stateChangedEvent))  stateChangedEvent;

constexpr void __set_stateChangedEvent(System::Action value) ;

constexpr System::Action __get_stateChangedEvent() const;

 bool __declspec(property(get=__get__fixingAudioSyncError, put=__set__fixingAudioSyncError))  _fixingAudioSyncError;

constexpr void __set__fixingAudioSyncError(bool value) ;

constexpr bool __get__fixingAudioSyncError() const;

 float_t __declspec(property(get=__get__audioStartTimeOffsetSinceStart, put=__set__audioStartTimeOffsetSinceStart))  _audioStartTimeOffsetSinceStart;

constexpr void __set__audioStartTimeOffsetSinceStart(float_t value) ;

constexpr float_t __get__audioStartTimeOffsetSinceStart() const;

 int32_t __declspec(property(get=__get__playbackLoopIndex, put=__set__playbackLoopIndex))  _playbackLoopIndex;

constexpr void __set__playbackLoopIndex(int32_t value) ;

constexpr int32_t __get__playbackLoopIndex() const;

 int32_t __declspec(property(get=__get__prevAudioSamplePos, put=__set__prevAudioSamplePos))  _prevAudioSamplePos;

constexpr void __set__prevAudioSamplePos(int32_t value) ;

constexpr int32_t __get__prevAudioSamplePos() const;

 float_t __declspec(property(get=__get__startSongTime, put=__set__startSongTime))  _startSongTime;

constexpr void __set__startSongTime(float_t value) ;

constexpr float_t __get__startSongTime() const;

 float_t __declspec(property(get=__get__songTimeOffset, put=__set__songTimeOffset))  _songTimeOffset;

constexpr void __set__songTimeOffset(float_t value) ;

constexpr float_t __get__songTimeOffset() const;

 bool __declspec(property(get=__get__audioStarted, put=__set__audioStarted))  _audioStarted;

constexpr void __set__audioStarted(bool value) ;

constexpr bool __get__audioStarted() const;

 float_t __declspec(property(get=__get__timeScale, put=__set__timeScale))  _timeScale;

constexpr void __set__timeScale(float_t value) ;

constexpr float_t __get__timeScale() const;

 float_t __declspec(property(get=__get__songTime, put=__set__songTime))  _songTime;

constexpr void __set__songTime(float_t value) ;

constexpr float_t __get__songTime() const;

 double_t __declspec(property(get=__get__dspTimeOffset, put=__set__dspTimeOffset))  _dspTimeOffset;

constexpr void __set__dspTimeOffset(double_t value) ;

constexpr double_t __get__dspTimeOffset() const;

 GlobalNamespace::GlobalNamespace__AudioTimeSyncController__State __declspec(property(get=__get__state, put=__set__state))  _state;

constexpr void __set__state(GlobalNamespace::GlobalNamespace__AudioTimeSyncController__State value) ;

constexpr GlobalNamespace::GlobalNamespace__AudioTimeSyncController__State __get__state() const;

 bool __declspec(property(get=__get__canStartSong, put=__set__canStartSong))  _canStartSong;

constexpr void __set__canStartSong(bool value) ;

constexpr bool __get__canStartSong() const;

 bool __declspec(property(get=__get__isReady, put=__set__isReady))  _isReady;

constexpr void __set__isReady(bool value) ;

constexpr bool __get__isReady() const;

 float_t __declspec(property(get=__get__lastFrameDeltaSongTime, put=__set__lastFrameDeltaSongTime))  _lastFrameDeltaSongTime;

constexpr void __set__lastFrameDeltaSongTime(float_t value) ;

constexpr float_t __get__lastFrameDeltaSongTime() const;

 bool __declspec(property(get=__get__forceNoAudioSyncOrAudioSyncErrorFixing, put=__set__forceNoAudioSyncOrAudioSyncErrorFixing))  _forceNoAudioSyncOrAudioSyncErrorFixing;

constexpr void __set__forceNoAudioSyncOrAudioSyncErrorFixing(bool value) ;

constexpr bool __get__forceNoAudioSyncOrAudioSyncErrorFixing() const;


// Properties

 GlobalNamespace::GlobalNamespace__AudioTimeSyncController__State __declspec(property(get=get_state))  state;

 float_t __declspec(property(get=get_songTime))  songTime;

 float_t __declspec(property(get=get_lastFrameDeltaSongTime))  lastFrameDeltaSongTime;

 float_t __declspec(property(get=get_songLength))  songLength;

 bool __declspec(property(get=get_isAudioLoaded))  isAudioLoaded;

 float_t __declspec(property(get=get_songEndTime))  songEndTime;

 float_t __declspec(property(get=get_timeScale))  timeScale;

 double_t __declspec(property(get=get_dspTimeOffset))  dspTimeOffset;

 UnityEngine::WaitUntil __declspec(property(get=get_waitUntilAudioIsLoaded))  waitUntilAudioIsLoaded;

 bool __declspec(property(get=get_isReady))  isReady;

 float_t __declspec(property(get=get_songTimeOffset))  songTimeOffset;

 bool __declspec(property(get=get_forceNoAudioSyncOrAudioSyncErrorFixing, put=set_forceNoAudioSyncOrAudioSyncErrorFixing))  forceNoAudioSyncOrAudioSyncErrorFixing;

 float_t __declspec(property(get=get_timeSinceStart))  timeSinceStart;


// Methods

/// @brief Method get_state addr 0x20b9080 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__AudioTimeSyncController__State get_state() ;

/// @brief Method get_songTime addr 0x20b9088 size 0x8 virtual true final true
 float_t get_songTime() ;

/// @brief Method get_lastFrameDeltaSongTime addr 0x20b9090 size 0x8 virtual true final true
 float_t get_lastFrameDeltaSongTime() ;

/// @brief Method get_songLength addr 0x20b9098 size 0x98 virtual true final true
 float_t get_songLength() ;

/// @brief Method get_isAudioLoaded addr 0x20b9130 size 0x30 virtual false final false
 bool get_isAudioLoaded() ;

/// @brief Method get_songEndTime addr 0x20b9160 size 0x6c virtual true final true
 float_t get_songEndTime() ;

/// @brief Method get_timeScale addr 0x20b91cc size 0x8 virtual false final false
 float_t get_timeScale() ;

/// @brief Method get_dspTimeOffset addr 0x20b91d4 size 0x8 virtual false final false
 double_t get_dspTimeOffset() ;

/// @brief Method get_waitUntilAudioIsLoaded addr 0x20b91dc size 0xac virtual false final false
 UnityEngine::WaitUntil get_waitUntilAudioIsLoaded() ;

/// @brief Method get_isReady addr 0x20b9288 size 0x8 virtual true final true
 bool get_isReady() ;

/// @brief Method get_songTimeOffset addr 0x20b9290 size 0x8 virtual false final false
 float_t get_songTimeOffset() ;

/// @brief Method get_forceNoAudioSyncOrAudioSyncErrorFixing addr 0x20b9298 size 0x8 virtual false final false
 bool get_forceNoAudioSyncOrAudioSyncErrorFixing() ;

/// @brief Method set_forceNoAudioSyncOrAudioSyncErrorFixing addr 0x20b92a0 size 0xc virtual false final false
 void set_forceNoAudioSyncOrAudioSyncErrorFixing(bool value) ;

/// @brief Method add_stateChangedEvent addr 0x20b92ac size 0x9c virtual false final false
 void add_stateChangedEvent(System::Action value) ;

/// @brief Method remove_stateChangedEvent addr 0x20b9348 size 0x9c virtual false final false
 void remove_stateChangedEvent(System::Action value) ;

/// @brief Method get_timeSinceStart addr 0x20b93e4 size 0x20 virtual false final false
 float_t get_timeSinceStart() ;

/// @brief Method Awake addr 0x20b9404 size 0x48 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x20b944c size 0xd8 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x20b9524 size 0x358 virtual false final false
 void Update() ;

/// @brief Method StartSong addr 0x20b987c size 0x44 virtual false final false
 void StartSong(float_t startTimeOffset) ;

/// @brief Method SeekTo addr 0x20b98c0 size 0x180 virtual false final false
 void SeekTo(float_t startTimeOffset) ;

/// @brief Method StopSong addr 0x20b9a40 size 0x48 virtual false final false
 void StopSong() ;

/// @brief Method Pause addr 0x20b9a88 size 0x58 virtual false final false
 void Pause() ;

/// @brief Method Resume addr 0x20b9ae0 size 0x50 virtual false final false
 void Resume() ;

/// @brief Method SetSongTimeIntoAudioTime addr 0x20b9b30 size 0xe0 virtual false final false
 void SetSongTimeIntoAudioTime() ;

static GlobalNamespace::AudioTimeSyncController New_ctor() ;

/// @brief Method .ctor addr 0x20b9c10 size 0x14 virtual false final false
 void _ctor() ;

/// @brief Method <get_waitUntilAudioIsLoaded>b__27_0 addr 0x20b9c24 size 0x4 virtual false final false
 bool _get_waitUntilAudioIsLoaded_b__27_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__AudioTimeSyncController__State, "", "AudioTimeSyncController/State");
NEED_NO_BOX(GlobalNamespace::AudioTimeSyncController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioTimeSyncController, "", "AudioTimeSyncController");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__AudioTimeSyncController__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__AudioTimeSyncController__InitData, "", "AudioTimeSyncController/InitData");
