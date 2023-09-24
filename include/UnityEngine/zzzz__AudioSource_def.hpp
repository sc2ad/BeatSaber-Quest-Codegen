#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__AudioBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
struct FFTWindow;
}
// Forward declare root types
namespace UnityEngine {
class AudioSource;
}
// Type: UnityEngine::AudioSource
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15607))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15609))
// CS Name: UnityEngine.AudioSource
class CORDL_TYPE AudioSource : public UnityEngine::AudioBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AudioSource() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioSource", modifiers: " const&", def_value: None }]
constexpr AudioSource(AudioSource const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioSource", modifiers: "&&", def_value: None }]
constexpr AudioSource(AudioSource&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioSource(void* ptr) noexcept : UnityEngine::AudioBehaviour(ptr) {
}


  constexpr AudioSource& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioSource& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioSource& operator=(AudioSource&& o) noexcept = default;
  constexpr AudioSource& operator=(AudioSource const& o) noexcept = default;
                


// Properties

 float_t __declspec(property(get=get_volume, put=set_volume))  volume;

 float_t __declspec(property(get=get_pitch, put=set_pitch))  pitch;

 float_t __declspec(property(get=get_time, put=set_time))  time;

 int32_t __declspec(property(get=get_timeSamples))  timeSamples;

 UnityEngine::AudioClip __declspec(property(get=get_clip, put=set_clip))  clip;

 bool __declspec(property(get=get_isPlaying))  isPlaying;

 bool __declspec(property(put=set_loop))  loop;

 bool __declspec(property(get=get_playOnAwake, put=set_playOnAwake))  playOnAwake;

 bool __declspec(property(put=set_ignoreListenerPause))  ignoreListenerPause;

 float_t __declspec(property(put=set_panStereo))  panStereo;

 float_t __declspec(property(put=set_spatialBlend))  spatialBlend;

 float_t __declspec(property(put=set_reverbZoneMix))  reverbZoneMix;

 bool __declspec(property(put=set_bypassEffects))  bypassEffects;

 bool __declspec(property(put=set_bypassReverbZones))  bypassReverbZones;

 float_t __declspec(property(put=set_dopplerLevel))  dopplerLevel;

 float_t __declspec(property(put=set_spread))  spread;

 int32_t __declspec(property(put=set_priority))  priority;

 float_t __declspec(property(put=set_minDistance))  minDistance;


// Methods

/// @brief Method GetPitch addr 0x2b259c4 size 0x3c virtual false final false
static float_t GetPitch(UnityEngine::AudioSource source) ;

/// @brief Method SetPitch addr 0x2b25a00 size 0x4c virtual false final false
static void SetPitch(UnityEngine::AudioSource source, float_t pitch) ;

/// @brief Method PlayHelper addr 0x2b25a4c size 0x44 virtual false final false
static void PlayHelper(UnityEngine::AudioSource source, uint64_t delay) ;

/// @brief Method Play addr 0x2b25a90 size 0x4c virtual false final false
 void Play(double_t delay) ;

/// @brief Method PlayOneShotHelper addr 0x2b25adc size 0x54 virtual false final false
static void PlayOneShotHelper(UnityEngine::AudioSource source, UnityEngine::AudioClip clip, float_t volumeScale) ;

/// @brief Method Stop addr 0x2b25b30 size 0x44 virtual false final false
 void Stop(bool stopOneShots) ;

/// @brief Method GetSpectrumDataHelper addr 0x2b25b74 size 0x5c virtual false final false
static void GetSpectrumDataHelper(UnityEngine::AudioSource source, ByRef<::ArrayW<float_t>> samples, int32_t channel, UnityEngine::FFTWindow window) ;

/// @brief Method get_volume addr 0x2b25bd0 size 0x3c virtual false final false
 float_t get_volume() ;

/// @brief Method set_volume addr 0x2b25c0c size 0x4c virtual false final false
 void set_volume(float_t value) ;

/// @brief Method get_pitch addr 0x2b25c58 size 0x3c virtual false final false
 float_t get_pitch() ;

/// @brief Method set_pitch addr 0x2b25c94 size 0x4c virtual false final false
 void set_pitch(float_t value) ;

/// @brief Method get_time addr 0x2b25ce0 size 0x3c virtual false final false
 float_t get_time() ;

/// @brief Method set_time addr 0x2b25d1c size 0x4c virtual false final false
 void set_time(float_t value) ;

/// @brief Method get_timeSamples addr 0x2b25d68 size 0x3c virtual false final false
 int32_t get_timeSamples() ;

/// @brief Method get_clip addr 0x2b25da4 size 0x3c virtual false final false
 UnityEngine::AudioClip get_clip() ;

/// @brief Method set_clip addr 0x2b25de0 size 0x44 virtual false final false
 void set_clip(UnityEngine::AudioClip value) ;

/// @brief Method Play addr 0x2b25e24 size 0x40 virtual false final false
 void Play() ;

/// @brief Method PlayScheduled addr 0x2b25e64 size 0x58 virtual false final false
 void PlayScheduled(double_t time) ;

/// @brief Method PlayOneShot addr 0x2b25ebc size 0x8 virtual false final false
 void PlayOneShot(UnityEngine::AudioClip clip) ;

/// @brief Method PlayOneShot addr 0x2b25ec4 size 0xfc virtual false final false
 void PlayOneShot(UnityEngine::AudioClip clip, float_t volumeScale) ;

/// @brief Method Stop addr 0x2b25fc0 size 0x40 virtual false final false
 void Stop() ;

/// @brief Method Pause addr 0x2b26000 size 0x3c virtual false final false
 void Pause() ;

/// @brief Method UnPause addr 0x2b2603c size 0x3c virtual false final false
 void UnPause() ;

/// @brief Method get_isPlaying addr 0x2b26078 size 0x3c virtual false final false
 bool get_isPlaying() ;

/// @brief Method set_loop addr 0x2b260b4 size 0x44 virtual false final false
 void set_loop(bool value) ;

/// @brief Method get_playOnAwake addr 0x2b260f8 size 0x3c virtual false final false
 bool get_playOnAwake() ;

/// @brief Method set_playOnAwake addr 0x2b26134 size 0x44 virtual false final false
 void set_playOnAwake(bool value) ;

/// @brief Method set_ignoreListenerPause addr 0x2b26178 size 0x44 virtual false final false
 void set_ignoreListenerPause(bool value) ;

/// @brief Method set_panStereo addr 0x2b261bc size 0x4c virtual false final false
 void set_panStereo(float_t value) ;

/// @brief Method set_spatialBlend addr 0x2b26208 size 0x4c virtual false final false
 void set_spatialBlend(float_t value) ;

/// @brief Method set_reverbZoneMix addr 0x2b26254 size 0x4c virtual false final false
 void set_reverbZoneMix(float_t value) ;

/// @brief Method set_bypassEffects addr 0x2b262a0 size 0x44 virtual false final false
 void set_bypassEffects(bool value) ;

/// @brief Method set_bypassReverbZones addr 0x2b262e4 size 0x44 virtual false final false
 void set_bypassReverbZones(bool value) ;

/// @brief Method set_dopplerLevel addr 0x2b26328 size 0x4c virtual false final false
 void set_dopplerLevel(float_t value) ;

/// @brief Method set_spread addr 0x2b26374 size 0x4c virtual false final false
 void set_spread(float_t value) ;

/// @brief Method set_priority addr 0x2b263c0 size 0x44 virtual false final false
 void set_priority(int32_t value) ;

/// @brief Method set_minDistance addr 0x2b26404 size 0x4c virtual false final false
 void set_minDistance(float_t value) ;

/// @brief Method GetSpectrumData addr 0x2b26450 size 0x5c virtual false final false
 void GetSpectrumData(::ArrayW<float_t> samples, int32_t channel, UnityEngine::FFTWindow window) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AudioSource);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioSource, "UnityEngine", "AudioSource");
