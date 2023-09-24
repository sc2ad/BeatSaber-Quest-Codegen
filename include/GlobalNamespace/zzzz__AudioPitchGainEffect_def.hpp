#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Coroutine;
}
namespace System {
class Action;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace GlobalNamespace {
class GlobalNamespace__AudioPitchGainEffect___StartEffectCoroutine_d__8;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioPitchGainEffect;
}
namespace GlobalNamespace {
class GlobalNamespace__AudioPitchGainEffect___StartEffectCoroutine_d__8;
}
// Type: ::<StartEffectCoroutine>d__8
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4033))
// CS Name: AudioPitchGainEffect::<StartEffectCoroutine>d__8
class CORDL_TYPE GlobalNamespace__AudioPitchGainEffect___StartEffectCoroutine_d__8 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__AudioPitchGainEffect___StartEffectCoroutine_d__8() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AudioPitchGainEffect___StartEffectCoroutine_d__8", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__AudioPitchGainEffect___StartEffectCoroutine_d__8(GlobalNamespace__AudioPitchGainEffect___StartEffectCoroutine_d__8 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AudioPitchGainEffect___StartEffectCoroutine_d__8", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__AudioPitchGainEffect___StartEffectCoroutine_d__8(GlobalNamespace__AudioPitchGainEffect___StartEffectCoroutine_d__8&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AudioPitchGainEffect___StartEffectCoroutine_d__8(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__AudioPitchGainEffect___StartEffectCoroutine_d__8& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__AudioPitchGainEffect___StartEffectCoroutine_d__8& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__AudioPitchGainEffect___StartEffectCoroutine_d__8& operator=(GlobalNamespace__AudioPitchGainEffect___StartEffectCoroutine_d__8&& o) noexcept = default;
  constexpr GlobalNamespace__AudioPitchGainEffect___StartEffectCoroutine_d__8& operator=(GlobalNamespace__AudioPitchGainEffect___StartEffectCoroutine_d__8 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::AudioPitchGainEffect __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::AudioPitchGainEffect value) ;

constexpr GlobalNamespace::AudioPitchGainEffect __get___4__this() const;

 float_t __declspec(property(get=__get_volumeScale, put=__set_volumeScale))  volumeScale;

constexpr void __set_volumeScale(float_t value) ;

constexpr float_t __get_volumeScale() const;

 System::Action __declspec(property(get=__get_finishCallback, put=__set_finishCallback))  finishCallback;

constexpr void __set_finishCallback(System::Action value) ;

constexpr System::Action __get_finishCallback() const;

 float_t __declspec(property(get=__get__startPitch_5__2, put=__set__startPitch_5__2))  _startPitch_5__2;

constexpr void __set__startPitch_5__2(float_t value) ;

constexpr float_t __get__startPitch_5__2() const;

 float_t __declspec(property(get=__get__time_5__3, put=__set__time_5__3))  _time_5__3;

constexpr void __set__time_5__3(float_t value) ;

constexpr float_t __get__time_5__3() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__AudioPitchGainEffect___StartEffectCoroutine_d__8 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20b8df4 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20b8ea0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20b8ea4 size 0x184 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20b9028 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20b9030 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20b9070 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AudioPitchGainEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4034))
// CS Name: AudioPitchGainEffect
class CORDL_TYPE AudioPitchGainEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _StartEffectCoroutine_d__8 = GlobalNamespace::GlobalNamespace__AudioPitchGainEffect___StartEffectCoroutine_d__8;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~AudioPitchGainEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioPitchGainEffect", modifiers: " const&", def_value: None }]
constexpr AudioPitchGainEffect(AudioPitchGainEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AudioPitchGainEffect", modifiers: "&&", def_value: None }]
constexpr AudioPitchGainEffect(AudioPitchGainEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AudioPitchGainEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr AudioPitchGainEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AudioPitchGainEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AudioPitchGainEffect& operator=(AudioPitchGainEffect&& o) noexcept = default;
  constexpr AudioPitchGainEffect& operator=(AudioPitchGainEffect const& o) noexcept = default;
                


// Fields

 UnityEngine::AudioSource __declspec(property(get=__get__audioSource, put=__set__audioSource))  _audioSource;

constexpr void __set__audioSource(UnityEngine::AudioSource value) ;

constexpr UnityEngine::AudioSource __get__audioSource() const;

 float_t __declspec(property(get=__get__duration, put=__set__duration))  _duration;

constexpr void __set__duration(float_t value) ;

constexpr float_t __get__duration() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get__pitchCurve, put=__set__pitchCurve))  _pitchCurve;

constexpr void __set__pitchCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get__pitchCurve() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get__gainCurve, put=__set__gainCurve))  _gainCurve;

constexpr void __set__gainCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get__gainCurve() const;

 UnityEngine::Coroutine __declspec(property(get=__get__currentCoroutine, put=__set__currentCoroutine))  _currentCoroutine;

constexpr void __set__currentCoroutine(UnityEngine::Coroutine value) ;

constexpr UnityEngine::Coroutine __get__currentCoroutine() const;

 float_t __declspec(property(get=__get__startPitch, put=__set__startPitch))  _startPitch;

constexpr void __set__startPitch(float_t value) ;

constexpr float_t __get__startPitch() const;

 float_t __declspec(property(get=__get__startVolume, put=__set__startVolume))  _startVolume;

constexpr void __set__startVolume(float_t value) ;

constexpr float_t __get__startVolume() const;


// Methods

/// @brief Method Start addr 0x20b8d44 size 0x28 virtual false final false
 void Start() ;

/// @brief Method StartEffectCoroutine addr 0x20b8d6c size 0x88 virtual false final false
 System::Collections::IEnumerator StartEffectCoroutine(float_t volumeScale, System::Action finishCallback) ;

/// @brief Method StartEffect addr 0x20b8e1c size 0x28 virtual false final false
 void StartEffect(float_t volumeScale, System::Action finishCallback) ;

/// @brief Method InterruptEffect addr 0x20b8e44 size 0x40 virtual false final false
 void InterruptEffect() ;

/// @brief Method SetAudioSource addr 0x20b8e84 size 0x8 virtual false final false
 void SetAudioSource(UnityEngine::AudioSource audioSource) ;

static GlobalNamespace::AudioPitchGainEffect New_ctor() ;

/// @brief Method .ctor addr 0x20b8e8c size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AudioPitchGainEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioPitchGainEffect, "", "AudioPitchGainEffect");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__AudioPitchGainEffect___StartEffectCoroutine_d__8);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__AudioPitchGainEffect___StartEffectCoroutine_d__8, "", "AudioPitchGainEffect/<StartEffectCoroutine>d__8");
