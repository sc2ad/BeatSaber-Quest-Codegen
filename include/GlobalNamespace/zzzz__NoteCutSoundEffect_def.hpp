#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace GlobalNamespace {
class Saber;
}
namespace GlobalNamespace {
template<typename T>
class LazyCopyHashSet_1;
}
namespace GlobalNamespace {
class INoteCutSoundEffectDidFinishEvent;
}
namespace GlobalNamespace {
template<typename T>
class ILazyCopyHashSet_1;
}
namespace GlobalNamespace {
class NoteController;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
template<typename T>
class RandomObjectPicker_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__NoteCutSoundEffect__Pool;
}
namespace GlobalNamespace {
class NoteCutSoundEffect;
}
// Type: ::NoteCutSoundEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4055))
// CS Name: NoteCutSoundEffect
class CORDL_TYPE NoteCutSoundEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
using Pool = GlobalNamespace::GlobalNamespace__NoteCutSoundEffect__Pool;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~NoteCutSoundEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutSoundEffect", modifiers: " const&", def_value: None }]
constexpr NoteCutSoundEffect(NoteCutSoundEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutSoundEffect", modifiers: "&&", def_value: None }]
constexpr NoteCutSoundEffect(NoteCutSoundEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteCutSoundEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NoteCutSoundEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteCutSoundEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteCutSoundEffect& operator=(NoteCutSoundEffect&& o) noexcept = default;
  constexpr NoteCutSoundEffect& operator=(NoteCutSoundEffect const& o) noexcept = default;
                


// Fields

 UnityEngine::AudioSource __declspec(property(get=__get__audioSource, put=__set__audioSource))  _audioSource;

constexpr void __set__audioSource(UnityEngine::AudioSource value) ;

constexpr UnityEngine::AudioSource __get__audioSource() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get__speedToVolumeCurve, put=__set__speedToVolumeCurve))  _speedToVolumeCurve;

constexpr void __set__speedToVolumeCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get__speedToVolumeCurve() const;

 ::ArrayW<UnityEngine::AudioClip> __declspec(property(get=__get__badCutSoundEffectAudioClips, put=__set__badCutSoundEffectAudioClips))  _badCutSoundEffectAudioClips;

constexpr void __set__badCutSoundEffectAudioClips(::ArrayW<UnityEngine::AudioClip> value) ;

constexpr ::ArrayW<UnityEngine::AudioClip> __get__badCutSoundEffectAudioClips() const;

 float_t __declspec(property(get=__get__badCutVolume, put=__set__badCutVolume))  _badCutVolume;

constexpr void __set__badCutVolume(float_t value) ;

constexpr float_t __get__badCutVolume() const;

 float_t __declspec(property(get=__get__goodCutVolume, put=__set__goodCutVolume))  _goodCutVolume;

constexpr void __set__goodCutVolume(float_t value) ;

constexpr float_t __get__goodCutVolume() const;

 GlobalNamespace::Saber __declspec(property(get=__get__saber, put=__set__saber))  _saber;

constexpr void __set__saber(GlobalNamespace::Saber value) ;

constexpr GlobalNamespace::Saber __get__saber() const;

 GlobalNamespace::NoteController __declspec(property(get=__get__noteController, put=__set__noteController))  _noteController;

constexpr void __set__noteController(GlobalNamespace::NoteController value) ;

constexpr GlobalNamespace::NoteController __get__noteController() const;

 bool __declspec(property(get=__get__isPlaying, put=__set__isPlaying))  _isPlaying;

constexpr void __set__isPlaying(bool value) ;

constexpr bool __get__isPlaying() const;

 float_t __declspec(property(get=__get__volumeMultiplier, put=__set__volumeMultiplier))  _volumeMultiplier;

constexpr void __set__volumeMultiplier(float_t value) ;

constexpr float_t __get__volumeMultiplier() const;

 bool __declspec(property(get=__get__noteWasCut, put=__set__noteWasCut))  _noteWasCut;

constexpr void __set__noteWasCut(bool value) ;

constexpr bool __get__noteWasCut() const;

 float_t __declspec(property(get=__get__aheadTime, put=__set__aheadTime))  _aheadTime;

constexpr void __set__aheadTime(float_t value) ;

constexpr float_t __get__aheadTime() const;

 float_t __declspec(property(get=__get__timeToNextNote, put=__set__timeToNextNote))  _timeToNextNote;

constexpr void __set__timeToNextNote(float_t value) ;

constexpr float_t __get__timeToNextNote() const;

 float_t __declspec(property(get=__get__timeToPrevNote, put=__set__timeToPrevNote))  _timeToPrevNote;

constexpr void __set__timeToPrevNote(float_t value) ;

constexpr float_t __get__timeToPrevNote() const;

 double_t __declspec(property(get=__get__startDSPTime, put=__set__startDSPTime))  _startDSPTime;

constexpr void __set__startDSPTime(double_t value) ;

constexpr double_t __get__startDSPTime() const;

 double_t __declspec(property(get=__get__endDSPtime, put=__set__endDSPtime))  _endDSPtime;

constexpr void __set__endDSPtime(double_t value) ;

constexpr double_t __get__endDSPtime() const;

 double_t __declspec(property(get=__get__fadeOutStartDSPtime, put=__set__fadeOutStartDSPtime))  _fadeOutStartDSPtime;

constexpr void __set__fadeOutStartDSPtime(double_t value) ;

constexpr double_t __get__fadeOutStartDSPtime() const;

 float_t __declspec(property(get=__get__noteMissedTimeOffset, put=__set__noteMissedTimeOffset))  _noteMissedTimeOffset;

constexpr void __set__noteMissedTimeOffset(float_t value) ;

constexpr float_t __get__noteMissedTimeOffset() const;

 float_t __declspec(property(get=__get__beforeCutVolume, put=__set__beforeCutVolume))  _beforeCutVolume;

constexpr void __set__beforeCutVolume(float_t value) ;

constexpr float_t __get__beforeCutVolume() const;

 bool __declspec(property(get=__get__goodCut, put=__set__goodCut))  _goodCut;

constexpr void __set__goodCut(bool value) ;

constexpr bool __get__goodCut() const;

 float_t __declspec(property(get=__get__pitch, put=__set__pitch))  _pitch;

constexpr void __set__pitch(float_t value) ;

constexpr float_t __get__pitch() const;

 GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip> __declspec(property(get=__get__badCutRandomSoundPicker, put=__set__badCutRandomSoundPicker))  _badCutRandomSoundPicker;

constexpr void __set__badCutRandomSoundPicker(GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip> value) ;

constexpr GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip> __get__badCutRandomSoundPicker() const;

 bool __declspec(property(get=__get__handleWrongSaberTypeAsGood, put=__set__handleWrongSaberTypeAsGood))  _handleWrongSaberTypeAsGood;

constexpr void __set__handleWrongSaberTypeAsGood(bool value) ;

constexpr bool __get__handleWrongSaberTypeAsGood() const;

 bool __declspec(property(get=__get__ignoreSaberSpeed, put=__set__ignoreSaberSpeed))  _ignoreSaberSpeed;

constexpr void __set__ignoreSaberSpeed(bool value) ;

constexpr bool __get__ignoreSaberSpeed() const;

 bool __declspec(property(get=__get__ignoreBadCuts, put=__set__ignoreBadCuts))  _ignoreBadCuts;

constexpr void __set__ignoreBadCuts(bool value) ;

constexpr bool __get__ignoreBadCuts() const;

 GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteCutSoundEffectDidFinishEvent> __declspec(property(get=__get__didFinishEvent, put=__set__didFinishEvent))  _didFinishEvent;

constexpr void __set__didFinishEvent(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteCutSoundEffectDidFinishEvent> value) ;

constexpr GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteCutSoundEffectDidFinishEvent> __get__didFinishEvent() const;

/// @brief Field kEndOverlap offset 0
static constexpr float_t  kEndOverlap{100.01};

/// @brief Field kEndFadeLength offset 0
static constexpr float_t  kEndFadeLength{0.01};


// Properties

 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::INoteCutSoundEffectDidFinishEvent> __declspec(property(get=get_didFinishEvent))  didFinishEvent;

 float_t __declspec(property(get=get_volumeMultiplier, put=set_volumeMultiplier))  volumeMultiplier;

 float_t __declspec(property(get=get_time))  time;


// Methods

/// @brief Method get_didFinishEvent addr 0x20bbbf8 size 0x8 virtual false final false
 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::INoteCutSoundEffectDidFinishEvent> get_didFinishEvent() ;

/// @brief Method set_volumeMultiplier addr 0x20bbc00 size 0x8 virtual false final false
 void set_volumeMultiplier(float_t value) ;

/// @brief Method get_volumeMultiplier addr 0x20bbc08 size 0x8 virtual false final false
 float_t get_volumeMultiplier() ;

/// @brief Method get_time addr 0x20bbc10 size 0x2c virtual false final false
 float_t get_time() ;

/// @brief Method Awake addr 0x20bbc3c size 0x84 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x20bbcc0 size 0x20 virtual false final false
 void Start() ;

/// @brief Method Init addr 0x20bbce0 size 0x1b0 virtual false final false
 void Init(UnityEngine::AudioClip audioClip, GlobalNamespace::NoteController noteController, double_t noteDSPTime, float_t aheadTime, float_t missedTimeOffset, float_t timeToPrevNote, float_t timeToNextNote, GlobalNamespace::Saber saber, bool handleWrongSaberTypeAsGood, float_t volumeMultiplier, bool ignoreSaberSpeed, bool ignoreBadCuts) ;

/// @brief Method ComputeDSPTimes addr 0x20bbe90 size 0xac virtual false final false
 void ComputeDSPTimes(double_t noteDSPTime, float_t aheadTime, float_t timeToPrevNote, float_t timeToNextNote) ;

/// @brief Method LateUpdate addr 0x20bbf3c size 0x1c0 virtual false final false
 void LateUpdate() ;

/// @brief Method StopPlayingAndFinish addr 0x20bc0fc size 0x1f0 virtual false final false
 void StopPlayingAndFinish() ;

/// @brief Method NoteWasCut addr 0x20bc2ec size 0x20c virtual false final false
 void NoteWasCut(GlobalNamespace::NoteController noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo) ;

// Ctor Parameters []
explicit NoteCutSoundEffect() ;

/// @brief Method .ctor addr 0x20bc4f8 size 0x84 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10992)), TypeDefinitionIndex(TypeDefinitionIndex(4055)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 2719 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4054))
// CS Name: NoteCutSoundEffect::Pool
class CORDL_TYPE GlobalNamespace__NoteCutSoundEffect__Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::NoteCutSoundEffect> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__NoteCutSoundEffect__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__NoteCutSoundEffect__Pool", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__NoteCutSoundEffect__Pool(GlobalNamespace__NoteCutSoundEffect__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__NoteCutSoundEffect__Pool", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__NoteCutSoundEffect__Pool(GlobalNamespace__NoteCutSoundEffect__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__NoteCutSoundEffect__Pool(void* ptr) noexcept : Zenject::MonoMemoryPool_1<GlobalNamespace::NoteCutSoundEffect>(ptr) {
}


  constexpr GlobalNamespace__NoteCutSoundEffect__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__NoteCutSoundEffect__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__NoteCutSoundEffect__Pool& operator=(GlobalNamespace__NoteCutSoundEffect__Pool&& o) noexcept = default;
  constexpr GlobalNamespace__NoteCutSoundEffect__Pool& operator=(GlobalNamespace__NoteCutSoundEffect__Pool const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__NoteCutSoundEffect__Pool() ;

/// @brief Method .ctor addr 0x20bc57c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__NoteCutSoundEffect__Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__NoteCutSoundEffect__Pool, "", "NoteCutSoundEffect/Pool");
NEED_NO_BOX(GlobalNamespace::NoteCutSoundEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutSoundEffect, "", "NoteCutSoundEffect");
