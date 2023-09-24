#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace UnityEngine {
class WaitUntil;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class FloatSO;
}
namespace GlobalNamespace {
class IStartSeekSongController;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerLocalInactivePlayerSongSyncController__InitData;
}
namespace GlobalNamespace {
class CrossFadeAudioSource;
}
namespace GlobalNamespace {
class IMultiplayerObservable;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerLocalInactivePlayerSongSyncController__InitData;
}
namespace GlobalNamespace {
class MultiplayerLocalInactivePlayerSongSyncController;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5264))
// CS Name: MultiplayerLocalInactivePlayerSongSyncController::InitData
class CORDL_TYPE GlobalNamespace__MultiplayerLocalInactivePlayerSongSyncController__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__MultiplayerLocalInactivePlayerSongSyncController__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerLocalInactivePlayerSongSyncController__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerLocalInactivePlayerSongSyncController__InitData(GlobalNamespace__MultiplayerLocalInactivePlayerSongSyncController__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerLocalInactivePlayerSongSyncController__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerLocalInactivePlayerSongSyncController__InitData(GlobalNamespace__MultiplayerLocalInactivePlayerSongSyncController__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerLocalInactivePlayerSongSyncController__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerLocalInactivePlayerSongSyncController__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerLocalInactivePlayerSongSyncController__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerLocalInactivePlayerSongSyncController__InitData& operator=(GlobalNamespace__MultiplayerLocalInactivePlayerSongSyncController__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerLocalInactivePlayerSongSyncController__InitData& operator=(GlobalNamespace__MultiplayerLocalInactivePlayerSongSyncController__InitData const& o) noexcept = default;
                


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

static GlobalNamespace::GlobalNamespace__MultiplayerLocalInactivePlayerSongSyncController__InitData New_ctor(UnityEngine::AudioClip audioClip, float_t startSongTime, float_t songTimeOffset, float_t timeScale) ;

/// @brief Method .ctor addr 0x20e8e24 size 0x4c virtual false final false
 void _ctor(UnityEngine::AudioClip audioClip, float_t startSongTime, float_t songTimeOffset, float_t timeScale) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerLocalInactivePlayerSongSyncController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5265))
// CS Name: MultiplayerLocalInactivePlayerSongSyncController
class CORDL_TYPE MultiplayerLocalInactivePlayerSongSyncController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = GlobalNamespace::GlobalNamespace__MultiplayerLocalInactivePlayerSongSyncController__InitData;

/// @brief Convert operator to GlobalNamespace::IStartSeekSongController
constexpr operator  GlobalNamespace::IStartSeekSongController() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~MultiplayerLocalInactivePlayerSongSyncController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerSongSyncController", modifiers: " const&", def_value: None }]
constexpr MultiplayerLocalInactivePlayerSongSyncController(MultiplayerLocalInactivePlayerSongSyncController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLocalInactivePlayerSongSyncController", modifiers: "&&", def_value: None }]
constexpr MultiplayerLocalInactivePlayerSongSyncController(MultiplayerLocalInactivePlayerSongSyncController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLocalInactivePlayerSongSyncController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLocalInactivePlayerSongSyncController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLocalInactivePlayerSongSyncController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLocalInactivePlayerSongSyncController& operator=(MultiplayerLocalInactivePlayerSongSyncController&& o) noexcept = default;
  constexpr MultiplayerLocalInactivePlayerSongSyncController& operator=(MultiplayerLocalInactivePlayerSongSyncController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::CrossFadeAudioSource __declspec(property(get=__get__audioSource, put=__set__audioSource))  _audioSource;

constexpr void __set__audioSource(GlobalNamespace::CrossFadeAudioSource value) ;

constexpr GlobalNamespace::CrossFadeAudioSource __get__audioSource() const;

 GlobalNamespace::FloatSO __declspec(property(get=__get__audioLatency, put=__set__audioLatency))  _audioLatency;

constexpr void __set__audioLatency(GlobalNamespace::FloatSO value) ;

constexpr GlobalNamespace::FloatSO __get__audioLatency() const;

 GlobalNamespace::GlobalNamespace__MultiplayerLocalInactivePlayerSongSyncController__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__MultiplayerLocalInactivePlayerSongSyncController__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__MultiplayerLocalInactivePlayerSongSyncController__InitData __get__initData() const;

 GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value) ;

constexpr GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;

 float_t __declspec(property(get=__get__timeScale, put=__set__timeScale))  _timeScale;

constexpr void __set__timeScale(float_t value) ;

constexpr float_t __get__timeScale() const;

 float_t __declspec(property(get=__get__startSongTime, put=__set__startSongTime))  _startSongTime;

constexpr void __set__startSongTime(float_t value) ;

constexpr float_t __get__startSongTime() const;

 float_t __declspec(property(get=__get__songTimeOffset, put=__set__songTimeOffset))  _songTimeOffset;

constexpr void __set__songTimeOffset(float_t value) ;

constexpr float_t __get__songTimeOffset() const;

 float_t __declspec(property(get=__get__songTime, put=__set__songTime))  _songTime;

constexpr void __set__songTime(float_t value) ;

constexpr float_t __get__songTime() const;

 bool __declspec(property(get=__get__audioStarted, put=__set__audioStarted))  _audioStarted;

constexpr void __set__audioStarted(bool value) ;

constexpr bool __get__audioStarted() const;

 bool __declspec(property(get=__get__currentObservableIsFailed, put=__set__currentObservableIsFailed))  _currentObservableIsFailed;

constexpr void __set__currentObservableIsFailed(bool value) ;

constexpr bool __get__currentObservableIsFailed() const;

 GlobalNamespace::IMultiplayerObservable __declspec(property(get=__get__observable, put=__set__observable))  _observable;

constexpr void __set__observable(GlobalNamespace::IMultiplayerObservable value) ;

constexpr GlobalNamespace::IMultiplayerObservable __get__observable() const;

 float_t __declspec(property(get=__get__lastLatencyOffsetTime, put=__set__lastLatencyOffsetTime))  _lastLatencyOffsetTime;

constexpr void __set__lastLatencyOffsetTime(float_t value) ;

constexpr float_t __get__lastLatencyOffsetTime() const;

/// @brief Field kReSyncThreshold offset 0
static constexpr float_t  kReSyncThreshold{0.05};


// Properties

 UnityEngine::WaitUntil __declspec(property(get=get_waitUntilIsReadyToStartTheSong))  waitUntilIsReadyToStartTheSong;

 bool __declspec(property(get=get_isAudioLoaded))  isAudioLoaded;


// Methods

/// @brief Method get_waitUntilIsReadyToStartTheSong addr 0x20e8ebc size 0xac virtual true final true
 UnityEngine::WaitUntil get_waitUntilIsReadyToStartTheSong() ;

/// @brief Method get_isAudioLoaded addr 0x20e8f68 size 0x9c virtual false final false
 bool get_isAudioLoaded() ;

/// @brief Method Awake addr 0x20e9004 size 0x118 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x20e911c size 0xf0 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20e920c size 0x108 virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x20e9314 size 0x278 virtual false final false
 void Update() ;

/// @brief Method StartSong addr 0x20e96b8 size 0xec virtual true final true
 void StartSong(float_t offsetTime) ;

/// @brief Method FollowOffsetSyncTime addr 0x20e9904 size 0x1e0 virtual false final false
 void FollowOffsetSyncTime(GlobalNamespace::IMultiplayerObservable observable, bool crossFade, bool forceUpdate) ;

/// @brief Method UpdateOffsetSyncTime addr 0x20e958c size 0x12c virtual false final false
 void UpdateOffsetSyncTime(float_t offsetSyncTime, bool crossFade, bool forceUpdate) ;

/// @brief Method SeekTo addr 0x20e9ae4 size 0xc virtual true final true
 void SeekTo(float_t offsetTime) ;

/// @brief Method SeekTo addr 0x20e97a4 size 0x160 virtual false final false
 void SeekTo(float_t offsetTime, bool crossFade, float_t toVolume) ;

/// @brief Method HandleVrFocusWasReleased addr 0x20e9af0 size 0x4 virtual false final false
 void HandleVrFocusWasReleased() ;

static GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController New_ctor() ;

/// @brief Method .ctor addr 0x20e9af4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <get_waitUntilIsReadyToStartTheSong>b__7_0 addr 0x20e9afc size 0x4 virtual false final false
 bool _get_waitUntilIsReadyToStartTheSong_b__7_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerLocalInactivePlayerSongSyncController__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerLocalInactivePlayerSongSyncController__InitData, "", "MultiplayerLocalInactivePlayerSongSyncController/InitData");
NEED_NO_BOX(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController, "", "MultiplayerLocalInactivePlayerSongSyncController");
