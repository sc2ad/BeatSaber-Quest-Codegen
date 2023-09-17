#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberSound;
}
// Type: ::SaberSound
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5390))
// CS Name: SaberSound
class CORDL_TYPE SaberSound : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~SaberSound() = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberSound", modifiers: " const&", def_value: None }]
constexpr SaberSound(SaberSound const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberSound", modifiers: "&&", def_value: None }]
constexpr SaberSound(SaberSound&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SaberSound(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SaberSound& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SaberSound& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SaberSound& operator=(SaberSound&& o) noexcept = default;
  constexpr SaberSound& operator=(SaberSound const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get__saberTop, put=__set__saberTop))  _saberTop;

constexpr void __set__saberTop(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__saberTop() const;

 ::UnityEngine::AudioSource __declspec(property(get=__get__audioSource, put=__set__audioSource))  _audioSource;

constexpr void __set__audioSource(::UnityEngine::AudioSource value) ;

constexpr ::UnityEngine::AudioSource __get__audioSource() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get__pitchBySpeedCurve, put=__set__pitchBySpeedCurve))  _pitchBySpeedCurve;

constexpr void __set__pitchBySpeedCurve(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get__pitchBySpeedCurve() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get__gainBySpeedCurve, put=__set__gainBySpeedCurve))  _gainBySpeedCurve;

constexpr void __set__gainBySpeedCurve(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get__gainBySpeedCurve() const;

 float_t __declspec(property(get=__get__speedMultiplier, put=__set__speedMultiplier))  _speedMultiplier;

constexpr void __set__speedMultiplier(float_t value) ;

constexpr float_t __get__speedMultiplier() const;

 float_t __declspec(property(get=__get__upSmooth, put=__set__upSmooth))  _upSmooth;

constexpr void __set__upSmooth(float_t value) ;

constexpr float_t __get__upSmooth() const;

 float_t __declspec(property(get=__get__downSmooth, put=__set__downSmooth))  _downSmooth;

constexpr void __set__downSmooth(float_t value) ;

constexpr float_t __get__downSmooth() const;

 float_t __declspec(property(get=__get__noSoundTopThresholdSqr, put=__set__noSoundTopThresholdSqr))  _noSoundTopThresholdSqr;

constexpr void __set__noSoundTopThresholdSqr(float_t value) ;

constexpr float_t __get__noSoundTopThresholdSqr() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__prevPos, put=__set__prevPos))  _prevPos;

constexpr void __set__prevPos(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__prevPos() const;

 float_t __declspec(property(get=__get__speed, put=__set__speed))  _speed;

constexpr void __set__speed(float_t value) ;

constexpr float_t __get__speed() const;


// Methods

/// @brief Method Start addr 0x210c7cc size 0x2c virtual false final false
 void Start() ;

/// @brief Method Update addr 0x210c7f8 size 0x1cc virtual false final false
 void Update() ;

// Ctor Parameters []
explicit SaberSound() ;

/// @brief Method .ctor addr 0x210c9c4 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SaberSound);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberSound, "", "SaberSound");
