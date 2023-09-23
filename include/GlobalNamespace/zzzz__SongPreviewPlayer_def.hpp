#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__AudioPlayerBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class AudioSource;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class AudioManagerSO;
}
namespace System {
class Action;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__SongPreviewPlayer__AudioSourceParams;
}
namespace GlobalNamespace {
class GlobalNamespace__SongPreviewPlayer__AudioSourceVolumeController;
}
namespace GlobalNamespace {
class GlobalNamespace__SongPreviewPlayer__InitData;
}
namespace GlobalNamespace {
class GlobalNamespace__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4063))
// CS Name: SongPreviewPlayer::InitData
class CORDL_TYPE GlobalNamespace__SongPreviewPlayer__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__SongPreviewPlayer__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SongPreviewPlayer__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SongPreviewPlayer__InitData(GlobalNamespace__SongPreviewPlayer__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SongPreviewPlayer__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SongPreviewPlayer__InitData(GlobalNamespace__SongPreviewPlayer__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SongPreviewPlayer__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SongPreviewPlayer__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SongPreviewPlayer__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SongPreviewPlayer__InitData& operator=(GlobalNamespace__SongPreviewPlayer__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__SongPreviewPlayer__InitData& operator=(GlobalNamespace__SongPreviewPlayer__InitData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_ambientVolumeScale, put=__set_ambientVolumeScale))  ambientVolumeScale;

constexpr void __set_ambientVolumeScale(float_t value) ;

constexpr float_t __get_ambientVolumeScale() const;


// Methods

// Ctor Parameters [CppParam { name: "ambientVolumeScale", ty: "float_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__SongPreviewPlayer__InitData(float_t ambientVolumeScale) ;

/// @brief Method .ctor addr 0x20beb1c size 0x28 virtual false final false
 void _ctor(float_t ambientVolumeScale) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AudioSourceParams
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4064))
// CS Name: SongPreviewPlayer::AudioSourceParams
class CORDL_TYPE GlobalNamespace__SongPreviewPlayer__AudioSourceParams : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__SongPreviewPlayer__AudioSourceParams() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SongPreviewPlayer__AudioSourceParams", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SongPreviewPlayer__AudioSourceParams(GlobalNamespace__SongPreviewPlayer__AudioSourceParams const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SongPreviewPlayer__AudioSourceParams", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SongPreviewPlayer__AudioSourceParams(GlobalNamespace__SongPreviewPlayer__AudioSourceParams&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SongPreviewPlayer__AudioSourceParams(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SongPreviewPlayer__AudioSourceParams& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SongPreviewPlayer__AudioSourceParams& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SongPreviewPlayer__AudioSourceParams& operator=(GlobalNamespace__SongPreviewPlayer__AudioSourceParams&& o) noexcept = default;
  constexpr GlobalNamespace__SongPreviewPlayer__AudioSourceParams& operator=(GlobalNamespace__SongPreviewPlayer__AudioSourceParams const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get__position, put=__set__position))  _position;

constexpr void __set__position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__position() const;

 float_t __declspec(property(get=__get__reverbZoneMix, put=__set__reverbZoneMix))  _reverbZoneMix;

constexpr void __set__reverbZoneMix(float_t value) ;

constexpr float_t __get__reverbZoneMix() const;

 float_t __declspec(property(get=__get__spatialBlend, put=__set__spatialBlend))  _spatialBlend;

constexpr void __set__spatialBlend(float_t value) ;

constexpr float_t __get__spatialBlend() const;

 float_t __declspec(property(get=__get__spread, put=__set__spread))  _spread;

constexpr void __set__spread(float_t value) ;

constexpr float_t __get__spread() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_position))  position;

 float_t __declspec(property(get=get_reverbZoneMix))  reverbZoneMix;

 float_t __declspec(property(get=get_spatialBlend))  spatialBlend;

 float_t __declspec(property(get=get_spread))  spread;


// Methods

/// @brief Method get_position addr 0x20beb44 size 0xc virtual false final false
 UnityEngine::Vector3 get_position() ;

/// @brief Method get_reverbZoneMix addr 0x20beb50 size 0x8 virtual false final false
 float_t get_reverbZoneMix() ;

/// @brief Method get_spatialBlend addr 0x20beb58 size 0x8 virtual false final false
 float_t get_spatialBlend() ;

/// @brief Method get_spread addr 0x20beb60 size 0x8 virtual false final false
 float_t get_spread() ;

// Ctor Parameters []
explicit GlobalNamespace__SongPreviewPlayer__AudioSourceParams() ;

/// @brief Method .ctor addr 0x20beb68 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AudioSourceVolumeController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4065))
// CS Name: SongPreviewPlayer::AudioSourceVolumeController
class CORDL_TYPE GlobalNamespace__SongPreviewPlayer__AudioSourceVolumeController : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__SongPreviewPlayer__AudioSourceVolumeController() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SongPreviewPlayer__AudioSourceVolumeController", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SongPreviewPlayer__AudioSourceVolumeController(GlobalNamespace__SongPreviewPlayer__AudioSourceVolumeController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SongPreviewPlayer__AudioSourceVolumeController", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SongPreviewPlayer__AudioSourceVolumeController(GlobalNamespace__SongPreviewPlayer__AudioSourceVolumeController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SongPreviewPlayer__AudioSourceVolumeController(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SongPreviewPlayer__AudioSourceVolumeController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SongPreviewPlayer__AudioSourceVolumeController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SongPreviewPlayer__AudioSourceVolumeController& operator=(GlobalNamespace__SongPreviewPlayer__AudioSourceVolumeController&& o) noexcept = default;
  constexpr GlobalNamespace__SongPreviewPlayer__AudioSourceVolumeController& operator=(GlobalNamespace__SongPreviewPlayer__AudioSourceVolumeController const& o) noexcept = default;
                


// Fields

 UnityEngine::AudioSource __declspec(property(get=__get_audioSource, put=__set_audioSource))  audioSource;

constexpr void __set_audioSource(UnityEngine::AudioSource value) ;

constexpr UnityEngine::AudioSource __get_audioSource() const;

 float_t __declspec(property(get=__get__maxVolume_k__BackingField, put=__set__maxVolume_k__BackingField))  _maxVolume_k__BackingField;

constexpr void __set__maxVolume_k__BackingField(float_t value) ;

constexpr float_t __get__maxVolume_k__BackingField() const;

 float_t __declspec(property(get=__get__volume, put=__set__volume))  _volume;

constexpr void __set__volume(float_t value) ;

constexpr float_t __get__volume() const;


// Properties

 float_t __declspec(property(get=get_volume, put=set_volume))  volume;

 float_t __declspec(property(get=get_maxVolume, put=set_maxVolume))  maxVolume;


// Methods

/// @brief Method set_volume addr 0x20be3c4 size 0x34 virtual false final false
 void set_volume(float_t value) ;

/// @brief Method get_volume addr 0x20beb70 size 0x8 virtual false final false
 float_t get_volume() ;

/// @brief Method get_maxVolume addr 0x20beb78 size 0x8 virtual false final false
 float_t get_maxVolume() ;

/// @brief Method set_maxVolume addr 0x20beb80 size 0x8 virtual false final false
 void set_maxVolume(float_t value) ;

// Ctor Parameters [CppParam { name: "audioSource", ty: "UnityEngine::AudioSource", modifiers: "", def_value: None }]
explicit GlobalNamespace__SongPreviewPlayer__AudioSourceVolumeController(UnityEngine::AudioSource audioSource) ;

/// @brief Method .ctor addr 0x20bdf9c size 0x30 virtual false final false
 void _ctor(UnityEngine::AudioSource audioSource) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<CrossFadeAfterDelayCoroutine>d__28
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4066))
// CS Name: SongPreviewPlayer::<CrossFadeAfterDelayCoroutine>d__28
class CORDL_TYPE GlobalNamespace__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28(GlobalNamespace__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28(GlobalNamespace__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28& operator=(GlobalNamespace__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28&& o) noexcept = default;
  constexpr GlobalNamespace__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28& operator=(GlobalNamespace__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 float_t __declspec(property(get=__get_delay, put=__set_delay))  delay;

constexpr void __set_delay(float_t value) ;

constexpr float_t __get_delay() const;

 GlobalNamespace::SongPreviewPlayer __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::SongPreviewPlayer value) ;

constexpr GlobalNamespace::SongPreviewPlayer __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20be158 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20beb88 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20beb8c size 0xac virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20bec38 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20bec40 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20bec80 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SongPreviewPlayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4035))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4067))
// CS Name: SongPreviewPlayer
class CORDL_TYPE SongPreviewPlayer : public GlobalNamespace::AudioPlayerBase {
public:
// Declarations
using _CrossFadeAfterDelayCoroutine_d__28 = GlobalNamespace::GlobalNamespace__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28;

using AudioSourceVolumeController = GlobalNamespace::GlobalNamespace__SongPreviewPlayer__AudioSourceVolumeController;

using AudioSourceParams = GlobalNamespace::GlobalNamespace__SongPreviewPlayer__AudioSourceParams;

using InitData = GlobalNamespace::GlobalNamespace__SongPreviewPlayer__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~SongPreviewPlayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "SongPreviewPlayer", modifiers: " const&", def_value: None }]
constexpr SongPreviewPlayer(SongPreviewPlayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SongPreviewPlayer", modifiers: "&&", def_value: None }]
constexpr SongPreviewPlayer(SongPreviewPlayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SongPreviewPlayer(void* ptr) noexcept : GlobalNamespace::AudioPlayerBase(ptr) {
}


  constexpr SongPreviewPlayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SongPreviewPlayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SongPreviewPlayer& operator=(SongPreviewPlayer&& o) noexcept = default;
  constexpr SongPreviewPlayer& operator=(SongPreviewPlayer const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__channelsCount, put=__set__channelsCount))  _channelsCount;

constexpr void __set__channelsCount(int32_t value) ;

constexpr int32_t __get__channelsCount() const;

 UnityEngine::AudioSource __declspec(property(get=__get__audioSourcePrefab, put=__set__audioSourcePrefab))  _audioSourcePrefab;

constexpr void __set__audioSourcePrefab(UnityEngine::AudioSource value) ;

constexpr UnityEngine::AudioSource __get__audioSourcePrefab() const;

 UnityEngine::AudioClip __declspec(property(get=__get__defaultAudioClip, put=__set__defaultAudioClip))  _defaultAudioClip;

constexpr void __set__defaultAudioClip(UnityEngine::AudioClip value) ;

constexpr UnityEngine::AudioClip __get__defaultAudioClip() const;

 float_t __declspec(property(get=__get__volume, put=__set__volume))  _volume;

constexpr void __set__volume(float_t value) ;

constexpr float_t __get__volume() const;

 float_t __declspec(property(get=__get__crossFadeToAnotherSongSpeed, put=__set__crossFadeToAnotherSongSpeed))  _crossFadeToAnotherSongSpeed;

constexpr void __set__crossFadeToAnotherSongSpeed(float_t value) ;

constexpr float_t __get__crossFadeToAnotherSongSpeed() const;

 float_t __declspec(property(get=__get__crossFadeToDefaultSpeed, put=__set__crossFadeToDefaultSpeed))  _crossFadeToDefaultSpeed;

constexpr void __set__crossFadeToDefaultSpeed(float_t value) ;

constexpr float_t __get__crossFadeToDefaultSpeed() const;

 float_t __declspec(property(get=__get__fadeInSpeed, put=__set__fadeInSpeed))  _fadeInSpeed;

constexpr void __set__fadeInSpeed(float_t value) ;

constexpr float_t __get__fadeInSpeed() const;

 GlobalNamespace::GlobalNamespace__SongPreviewPlayer__AudioSourceParams __declspec(property(get=__get__defaultAudioSourceParams, put=__set__defaultAudioSourceParams))  _defaultAudioSourceParams;

constexpr void __set__defaultAudioSourceParams(GlobalNamespace::GlobalNamespace__SongPreviewPlayer__AudioSourceParams value) ;

constexpr GlobalNamespace::GlobalNamespace__SongPreviewPlayer__AudioSourceParams __get__defaultAudioSourceParams() const;

 GlobalNamespace::GlobalNamespace__SongPreviewPlayer__AudioSourceParams __declspec(property(get=__get__othersAudioSourceParams, put=__set__othersAudioSourceParams))  _othersAudioSourceParams;

constexpr void __set__othersAudioSourceParams(GlobalNamespace::GlobalNamespace__SongPreviewPlayer__AudioSourceParams value) ;

constexpr GlobalNamespace::GlobalNamespace__SongPreviewPlayer__AudioSourceParams __get__othersAudioSourceParams() const;

 GlobalNamespace::GlobalNamespace__SongPreviewPlayer__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__SongPreviewPlayer__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__SongPreviewPlayer__InitData __get__initData() const;

 GlobalNamespace::AudioManagerSO __declspec(property(get=__get__audioManager, put=__set__audioManager))  _audioManager;

constexpr void __set__audioManager(GlobalNamespace::AudioManagerSO value) ;

constexpr GlobalNamespace::AudioManagerSO __get__audioManager() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__SongPreviewPlayer__AudioSourceVolumeController> __declspec(property(get=__get__audioSourceControllers, put=__set__audioSourceControllers))  _audioSourceControllers;

constexpr void __set__audioSourceControllers(::ArrayW<GlobalNamespace::GlobalNamespace__SongPreviewPlayer__AudioSourceVolumeController> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__SongPreviewPlayer__AudioSourceVolumeController> __get__audioSourceControllers() const;

 int32_t __declspec(property(get=__get__activeChannel, put=__set__activeChannel))  _activeChannel;

constexpr void __set__activeChannel(int32_t value) ;

constexpr int32_t __get__activeChannel() const;

 float_t __declspec(property(get=__get__timeToDefaultAudioTransition, put=__set__timeToDefaultAudioTransition))  _timeToDefaultAudioTransition;

constexpr void __set__timeToDefaultAudioTransition(float_t value) ;

constexpr float_t __get__timeToDefaultAudioTransition() const;

 bool __declspec(property(get=__get__transitionAfterDelay, put=__set__transitionAfterDelay))  _transitionAfterDelay;

constexpr void __set__transitionAfterDelay(bool value) ;

constexpr bool __get__transitionAfterDelay() const;

 float_t __declspec(property(get=__get__volumeScale, put=__set__volumeScale))  _volumeScale;

constexpr void __set__volumeScale(float_t value) ;

constexpr float_t __get__volumeScale() const;

 float_t __declspec(property(get=__get__fadeSpeed, put=__set__fadeSpeed))  _fadeSpeed;

constexpr void __set__fadeSpeed(float_t value) ;

constexpr float_t __get__fadeSpeed() const;

 float_t __declspec(property(get=__get__ambientVolumeScale, put=__set__ambientVolumeScale))  _ambientVolumeScale;

constexpr void __set__ambientVolumeScale(float_t value) ;

constexpr float_t __get__ambientVolumeScale() const;

 bool __declspec(property(get=__get__isActiveChannelPaused, put=__set__isActiveChannelPaused))  _isActiveChannelPaused;

constexpr void __set__isActiveChannelPaused(bool value) ;

constexpr bool __get__isActiveChannelPaused() const;

 System::Collections::Generic::Dictionary_2<int32_t,System::Action> __declspec(property(get=__get__channelToFadeOutCallbackDictionary, put=__set__channelToFadeOutCallbackDictionary))  _channelToFadeOutCallbackDictionary;

constexpr void __set__channelToFadeOutCallbackDictionary(System::Collections::Generic::Dictionary_2<int32_t,System::Action> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,System::Action> __get__channelToFadeOutCallbackDictionary() const;


// Properties

 UnityEngine::AudioClip __declspec(property(get=get_activeAudioClip))  activeAudioClip;


// Methods

/// @brief Method get_activeAudioClip addr 0x20bdd74 size 0x54 virtual true final false
 UnityEngine::AudioClip get_activeAudioClip() ;

/// @brief Method Awake addr 0x20bddc8 size 0x1d4 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x20bdfcc size 0x20 virtual false final false
 void Start() ;

/// @brief Method OnEnable addr 0x20bdfec size 0xf4 virtual false final false
 void OnEnable() ;

/// @brief Method CrossFadeAfterDelayCoroutine addr 0x20be0e0 size 0x78 virtual false final false
 System::Collections::IEnumerator CrossFadeAfterDelayCoroutine(float_t delay) ;

/// @brief Method OnDisable addr 0x20be180 size 0xd4 virtual false final false
 void OnDisable() ;

/// @brief Method Update addr 0x20be254 size 0x170 virtual false final false
 void Update() ;

/// @brief Method CrossfadeToDefault addr 0x20be728 size 0x170 virtual false final false
 void CrossfadeToDefault() ;

/// @brief Method CrossfadeToNewDefault addr 0x20be898 size 0xe0 virtual false final false
 void CrossfadeToNewDefault(UnityEngine::AudioClip audioClip) ;

/// @brief Method CrossfadeTo addr 0x20be978 size 0xc virtual false final false
 void CrossfadeTo(UnityEngine::AudioClip audioClip, float_t musicVolume, float_t startTime, float_t duration, System::Action onFadeOutCallback) ;

/// @brief Method CrossfadeTo addr 0x20be4a8 size 0x280 virtual false final false
 void CrossfadeTo(UnityEngine::AudioClip audioClip, float_t musicVolume, float_t startTime, float_t duration, bool isDefault, System::Action onFadeOutCallback) ;

/// @brief Method PauseCurrentChannel addr 0x20be984 size 0x74 virtual true final false
 void PauseCurrentChannel() ;

/// @brief Method UnPauseCurrentChannel addr 0x20be9f8 size 0x70 virtual true final false
 void UnPauseCurrentChannel() ;

/// @brief Method FadeOut addr 0x20bea68 size 0x1c virtual true final false
 void FadeOut(float_t duration) ;

/// @brief Method ReportChannelDidFadeOut addr 0x20be3f8 size 0xb0 virtual false final false
 void ReportChannelDidFadeOut(int32_t channel) ;

// Ctor Parameters []
explicit SongPreviewPlayer() ;

/// @brief Method .ctor addr 0x20bea84 size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SongPreviewPlayer__AudioSourceParams);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SongPreviewPlayer__AudioSourceParams, "", "SongPreviewPlayer/AudioSourceParams");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SongPreviewPlayer__AudioSourceVolumeController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SongPreviewPlayer__AudioSourceVolumeController, "", "SongPreviewPlayer/AudioSourceVolumeController");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SongPreviewPlayer__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SongPreviewPlayer__InitData, "", "SongPreviewPlayer/InitData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SongPreviewPlayer___CrossFadeAfterDelayCoroutine_d__28, "", "SongPreviewPlayer/<CrossFadeAfterDelayCoroutine>d__28");
NEED_NO_BOX(GlobalNamespace::SongPreviewPlayer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongPreviewPlayer, "", "SongPreviewPlayer");
