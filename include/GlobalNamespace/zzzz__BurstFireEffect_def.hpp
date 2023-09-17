#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__FireEffect_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class AnimationCurve;
}
namespace Tweening {
class FloatTween;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class LightColorBeatmapEventData;
}
namespace Tweening {
class SongTimeTweeningManager;
}
// Forward declare root types
namespace GlobalNamespace {
class BurstFireEffect;
}
// Type: ::BurstFireEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3989))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3987))
// CS Name: BurstFireEffect
class CORDL_TYPE BurstFireEffect : public ::GlobalNamespace::FireEffect {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~BurstFireEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "BurstFireEffect", modifiers: " const&", def_value: None }]
constexpr BurstFireEffect(BurstFireEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BurstFireEffect", modifiers: "&&", def_value: None }]
constexpr BurstFireEffect(BurstFireEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BurstFireEffect(void* ptr) noexcept : ::GlobalNamespace::FireEffect(ptr) {
}


  constexpr BurstFireEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BurstFireEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BurstFireEffect& operator=(BurstFireEffect&& o) noexcept = default;
  constexpr BurstFireEffect& operator=(BurstFireEffect const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__fadeOutDuration, put=__set__fadeOutDuration))  _fadeOutDuration;

constexpr void __set__fadeOutDuration(float_t value) ;

constexpr float_t __get__fadeOutDuration() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get__flipbookFadeOutCurve, put=__set__flipbookFadeOutCurve))  _flipbookFadeOutCurve;

constexpr void __set__flipbookFadeOutCurve(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get__flipbookFadeOutCurve() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get__bloomFadeOutCurve, put=__set__bloomFadeOutCurve))  _bloomFadeOutCurve;

constexpr void __set__bloomFadeOutCurve(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get__bloomFadeOutCurve() const;

 ::GlobalNamespace::IAudioTimeSource __declspec(property(get=__get__audioTimeSource, put=__set__audioTimeSource))  _audioTimeSource;

constexpr void __set__audioTimeSource(::GlobalNamespace::IAudioTimeSource value) ;

constexpr ::GlobalNamespace::IAudioTimeSource __get__audioTimeSource() const;

 ::Tweening::SongTimeTweeningManager __declspec(property(get=__get__songTimeTweeningManager, put=__set__songTimeTweeningManager))  _songTimeTweeningManager;

constexpr void __set__songTimeTweeningManager(::Tweening::SongTimeTweeningManager value) ;

constexpr ::Tweening::SongTimeTweeningManager __get__songTimeTweeningManager() const;

 ::Tweening::FloatTween __declspec(property(get=__get__fadeOutTween, put=__set__fadeOutTween))  _fadeOutTween;

constexpr void __set__fadeOutTween(::Tweening::FloatTween value) ;

constexpr ::Tweening::FloatTween __get__fadeOutTween() const;


// Methods

/// @brief Method Awake addr 0x20ae0d0 size 0x124 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x20ae1f4 size 0x18 virtual true final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20ae3dc size 0x9c virtual true final false
 void OnDestroy() ;

/// @brief Method HandleColorChangeBeatmapEvent addr 0x20ae494 size 0x134 virtual true final false
 void HandleColorChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData e) ;

/// @brief Method StartEffect addr 0x20ae5f4 size 0xd4 virtual false final false
 void StartEffect(float_t time) ;

/// @brief Method EndEffect addr 0x20ae5c8 size 0x2c virtual false final false
 void EndEffect() ;

/// @brief Method SetInitialValues addr 0x20ae32c size 0xb0 virtual false final false
 void SetInitialValues() ;

/// @brief Method UpdateFadeOutProgress addr 0x20ae754 size 0x194 virtual false final false
 void UpdateFadeOutProgress(float_t fadeOutProgress) ;

// Ctor Parameters []
explicit BurstFireEffect() ;

/// @brief Method .ctor addr 0x20ae958 size 0x84 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BurstFireEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BurstFireEffect, "", "BurstFireEffect");
