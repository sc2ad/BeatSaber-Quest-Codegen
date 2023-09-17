#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace Tweening {
template<typename T>
class Tween_1;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace GlobalNamespace {
class AudioPitchGainEffect;
}
// Forward declare root types
namespace GlobalNamespace {
class CrossFadeAudioSource;
}
// Type: ::CrossFadeAudioSource
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4045))
// CS Name: CrossFadeAudioSource
class CORDL_TYPE CrossFadeAudioSource : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~CrossFadeAudioSource() = default;

// Ctor Parameters [CppParam { name: "", ty: "CrossFadeAudioSource", modifiers: " const&", def_value: None }]
constexpr CrossFadeAudioSource(CrossFadeAudioSource const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CrossFadeAudioSource", modifiers: "&&", def_value: None }]
constexpr CrossFadeAudioSource(CrossFadeAudioSource&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CrossFadeAudioSource(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr CrossFadeAudioSource& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CrossFadeAudioSource& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CrossFadeAudioSource& operator=(CrossFadeAudioSource&& o) noexcept = default;
  constexpr CrossFadeAudioSource& operator=(CrossFadeAudioSource const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__duration, put=__set__duration))  _duration;

constexpr void __set__duration(float_t value) ;

constexpr float_t __get__duration() const;

 ::UnityEngine::AudioSource __declspec(property(get=__get__audioSource1, put=__set__audioSource1))  _audioSource1;

constexpr void __set__audioSource1(::UnityEngine::AudioSource value) ;

constexpr ::UnityEngine::AudioSource __get__audioSource1() const;

 ::UnityEngine::AudioSource __declspec(property(get=__get__audioSource2, put=__set__audioSource2))  _audioSource2;

constexpr void __set__audioSource2(::UnityEngine::AudioSource value) ;

constexpr ::UnityEngine::AudioSource __get__audioSource2() const;

 ::GlobalNamespace::AudioPitchGainEffect __declspec(property(get=__get__audioPitchGainEffect1, put=__set__audioPitchGainEffect1))  _audioPitchGainEffect1;

constexpr void __set__audioPitchGainEffect1(::GlobalNamespace::AudioPitchGainEffect value) ;

constexpr ::GlobalNamespace::AudioPitchGainEffect __get__audioPitchGainEffect1() const;

 ::GlobalNamespace::AudioPitchGainEffect __declspec(property(get=__get__audioPitchGainEffect2, put=__set__audioPitchGainEffect2))  _audioPitchGainEffect2;

constexpr void __set__audioPitchGainEffect2(::GlobalNamespace::AudioPitchGainEffect value) ;

constexpr ::GlobalNamespace::AudioPitchGainEffect __get__audioPitchGainEffect2() const;

 ::Tweening::TimeTweeningManager __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager))  _tweeningManager;

constexpr void __set__tweeningManager(::Tweening::TimeTweeningManager value) ;

constexpr ::Tweening::TimeTweeningManager __get__tweeningManager() const;

 ::UnityEngine::AudioSource __declspec(property(get=__get__activeAudioSource, put=__set__activeAudioSource))  _activeAudioSource;

constexpr void __set__activeAudioSource(::UnityEngine::AudioSource value) ;

constexpr ::UnityEngine::AudioSource __get__activeAudioSource() const;

 ::UnityEngine::AudioSource __declspec(property(get=__get__inactiveAudioSource, put=__set__inactiveAudioSource))  _inactiveAudioSource;

constexpr void __set__inactiveAudioSource(::UnityEngine::AudioSource value) ;

constexpr ::UnityEngine::AudioSource __get__inactiveAudioSource() const;

 ::Tweening::Tween_1<float_t> __declspec(property(get=__get__volumeDownTween, put=__set__volumeDownTween))  _volumeDownTween;

constexpr void __set__volumeDownTween(::Tweening::Tween_1<float_t> value) ;

constexpr ::Tweening::Tween_1<float_t> __get__volumeDownTween() const;

 ::Tweening::Tween_1<float_t> __declspec(property(get=__get__volumeUpTween, put=__set__volumeUpTween))  _volumeUpTween;

constexpr void __set__volumeUpTween(::Tweening::Tween_1<float_t> value) ;

constexpr ::Tweening::Tween_1<float_t> __get__volumeUpTween() const;

 ::GlobalNamespace::AudioPitchGainEffect __declspec(property(get=__get__activePitchGainEffect, put=__set__activePitchGainEffect))  _activePitchGainEffect;

constexpr void __set__activePitchGainEffect(::GlobalNamespace::AudioPitchGainEffect value) ;

constexpr ::GlobalNamespace::AudioPitchGainEffect __get__activePitchGainEffect() const;

 ::GlobalNamespace::AudioPitchGainEffect __declspec(property(get=__get__inactivePitchGainEffect, put=__set__inactivePitchGainEffect))  _inactivePitchGainEffect;

constexpr void __set__inactivePitchGainEffect(::GlobalNamespace::AudioPitchGainEffect value) ;

constexpr ::GlobalNamespace::AudioPitchGainEffect __get__inactivePitchGainEffect() const;


// Properties

 ::UnityEngine::AudioClip __declspec(property(get=get_clip, put=set_clip))  clip;

 float_t __declspec(property(put=set_pitch))  pitch;

 float_t __declspec(property(put=set_time))  time;

 bool __declspec(property(get=get_isPlaying))  isPlaying;


// Methods

/// @brief Method get_clip addr 0x20ba73c size 0x1c virtual false final false
 ::UnityEngine::AudioClip get_clip() ;

/// @brief Method set_clip addr 0x20ba758 size 0x40 virtual false final false
 void set_clip(::UnityEngine::AudioClip value) ;

/// @brief Method set_pitch addr 0x20ba798 size 0x40 virtual false final false
 void set_pitch(float_t value) ;

/// @brief Method set_time addr 0x20ba7d8 size 0x40 virtual false final false
 void set_time(float_t value) ;

/// @brief Method get_isPlaying addr 0x20ba818 size 0x1c virtual false final false
 bool get_isPlaying() ;

/// @brief Method Awake addr 0x20ba834 size 0x15c virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x20ba990 size 0x88 virtual false final false
 void OnDestroy() ;

/// @brief Method PlayPitchGainEffect addr 0x20baa18 size 0x20 virtual false final false
 void PlayPitchGainEffect(float_t volumeScale) ;

/// @brief Method InterruptLastPitchGainEffect addr 0x20baa38 size 0x1c virtual false final false
 void InterruptLastPitchGainEffect() ;

/// @brief Method CrossFade addr 0x20baa54 size 0x1c8 virtual false final false
 void CrossFade(float_t toSongTime, float_t toVolume) ;

/// @brief Method Play addr 0x20bac1c size 0x1c virtual false final false
 void Play() ;

/// @brief Method Stop addr 0x20bac38 size 0x50 virtual false final false
 void Stop() ;

// Ctor Parameters []
explicit CrossFadeAudioSource() ;

/// @brief Method .ctor addr 0x20bac88 size 0x14 virtual false final false
 void _ctor() ;

/// @brief Method <Awake>b__21_0 addr 0x20bac9c size 0x1c virtual false final false
 void _Awake_b__21_0(float_t val) ;

/// @brief Method <Awake>b__21_1 addr 0x20bacb8 size 0x1c virtual false final false
 void _Awake_b__21_1(float_t val) ;

/// @brief Method <CrossFade>b__25_0 addr 0x20bacd4 size 0x1c virtual false final false
 void _CrossFade_b__25_0(float_t val) ;

/// @brief Method <CrossFade>b__25_1 addr 0x20bacf0 size 0x1c virtual false final false
 void _CrossFade_b__25_1(float_t val) ;

/// @brief Method <CrossFade>b__25_2 addr 0x20bad0c size 0x30 virtual false final false
 void _CrossFade_b__25_2() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::CrossFadeAudioSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CrossFadeAudioSource, "", "CrossFadeAudioSource");
