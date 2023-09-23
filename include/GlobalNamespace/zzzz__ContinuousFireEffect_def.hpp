#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__FireEffect_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class LightColorBeatmapEventData;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class ContinuousFireEffect;
}
// Type: ::ContinuousFireEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3989))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3988))
// CS Name: ContinuousFireEffect
class CORDL_TYPE ContinuousFireEffect : public GlobalNamespace::FireEffect {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc0};

virtual ~ContinuousFireEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuousFireEffect", modifiers: " const&", def_value: None }]
constexpr ContinuousFireEffect(ContinuousFireEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContinuousFireEffect", modifiers: "&&", def_value: None }]
constexpr ContinuousFireEffect(ContinuousFireEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContinuousFireEffect(void* ptr) noexcept : GlobalNamespace::FireEffect(ptr) {
}


  constexpr ContinuousFireEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContinuousFireEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContinuousFireEffect& operator=(ContinuousFireEffect&& o) noexcept = default;
  constexpr ContinuousFireEffect& operator=(ContinuousFireEffect const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__fadeInDuration, put=__set__fadeInDuration))  _fadeInDuration;

constexpr void __set__fadeInDuration(float_t value) ;

constexpr float_t __get__fadeInDuration() const;

 float_t __declspec(property(get=__get__fadeOutDuration, put=__set__fadeOutDuration))  _fadeOutDuration;

constexpr void __set__fadeOutDuration(float_t value) ;

constexpr float_t __get__fadeOutDuration() const;

 float_t __declspec(property(get=__get__sustainDuration, put=__set__sustainDuration))  _sustainDuration;

constexpr void __set__sustainDuration(float_t value) ;

constexpr float_t __get__sustainDuration() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get__flipbookSustainCurve, put=__set__flipbookSustainCurve))  _flipbookSustainCurve;

constexpr void __set__flipbookSustainCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get__flipbookSustainCurve() const;

 UnityEngine::AnimationCurve __declspec(property(get=__get__bloomSustainCurve, put=__set__bloomSustainCurve))  _bloomSustainCurve;

constexpr void __set__bloomSustainCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get__bloomSustainCurve() const;

 GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource))  _audioTimeSource;

constexpr void __set__audioTimeSource(GlobalNamespace::IAudioTimeSource value) ;

constexpr GlobalNamespace::IAudioTimeSource __get__audioTimeSource() const;

 float_t __declspec(property(get=__get__fadeInEndTime, put=__set__fadeInEndTime))  _fadeInEndTime;

constexpr void __set__fadeInEndTime(float_t value) ;

constexpr float_t __get__fadeInEndTime() const;

 float_t __declspec(property(get=__get__fadeOutStartTime, put=__set__fadeOutStartTime))  _fadeOutStartTime;

constexpr void __set__fadeOutStartTime(float_t value) ;

constexpr float_t __get__fadeOutStartTime() const;

 float_t __declspec(property(get=__get__effectStartTime, put=__set__effectStartTime))  _effectStartTime;

constexpr void __set__effectStartTime(float_t value) ;

constexpr float_t __get__effectStartTime() const;

 float_t __declspec(property(get=__get__effectEndTime, put=__set__effectEndTime))  _effectEndTime;

constexpr void __set__effectEndTime(float_t value) ;

constexpr float_t __get__effectEndTime() const;

 float_t __declspec(property(get=__get__lastSustainProgress, put=__set__lastSustainProgress))  _lastSustainProgress;

constexpr void __set__lastSustainProgress(float_t value) ;

constexpr float_t __get__lastSustainProgress() const;

 float_t __declspec(property(get=__get__lastFadeOutProgress, put=__set__lastFadeOutProgress))  _lastFadeOutProgress;

constexpr void __set__lastFadeOutProgress(float_t value) ;

constexpr float_t __get__lastFadeOutProgress() const;


// Methods

/// @brief Method Start addr 0x20aea00 size 0x28 virtual true final false
 void Start() ;

/// @brief Method Update addr 0x20aead0 size 0x4 virtual false final false
 void Update() ;

/// @brief Method HandleColorChangeBeatmapEvent addr 0x20aec7c size 0x13c virtual true final false
 void HandleColorChangeBeatmapEvent(GlobalNamespace::LightColorBeatmapEventData e) ;

/// @brief Method SetInitialValues addr 0x20aea28 size 0xa8 virtual false final false
 void SetInitialValues() ;

/// @brief Method StartEffect addr 0x20aeddc size 0xe0 virtual false final false
 void StartEffect(float_t startTime, float_t endTime) ;

/// @brief Method EndEffect addr 0x20aedb8 size 0x24 virtual false final false
 void EndEffect() ;

/// @brief Method UpdateEffect addr 0x20aead4 size 0x1a8 virtual false final false
 void UpdateEffect() ;

/// @brief Method UpdateRenderers addr 0x20aeebc size 0x15c virtual false final false
 void UpdateRenderers(float_t flipBookAlpha, float_t bloomAlpha) ;

// Ctor Parameters []
explicit ContinuousFireEffect() ;

/// @brief Method .ctor addr 0x20af018 size 0x8c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ContinuousFireEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ContinuousFireEffect, "", "ContinuousFireEffect");
