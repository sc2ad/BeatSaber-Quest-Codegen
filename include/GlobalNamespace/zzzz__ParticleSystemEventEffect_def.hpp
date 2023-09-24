#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace UnityEngine {
class ParticleSystem;
}
namespace GlobalNamespace {
class ColorSO;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct UnityEngine__ParticleSystem__MainModule;
}
namespace UnityEngine {
struct UnityEngine__ParticleSystem__Particle;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleSystemEventEffect;
}
// Type: ::ParticleSystemEventEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5067))
// CS Name: ParticleSystemEventEffect
class CORDL_TYPE ParticleSystemEventEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~ParticleSystemEventEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEventEffect", modifiers: " const&", def_value: None }]
constexpr ParticleSystemEventEffect(ParticleSystemEventEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEventEffect", modifiers: "&&", def_value: None }]
constexpr ParticleSystemEventEffect(ParticleSystemEventEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParticleSystemEventEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ParticleSystemEventEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParticleSystemEventEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParticleSystemEventEffect& operator=(ParticleSystemEventEffect&& o) noexcept = default;
  constexpr ParticleSystemEventEffect& operator=(ParticleSystemEventEffect const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ColorSO __declspec(property(get=__get__lightColor0, put=__set__lightColor0))  _lightColor0;

constexpr void __set__lightColor0(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get__lightColor0() const;

 GlobalNamespace::ColorSO __declspec(property(get=__get__lightColor1, put=__set__lightColor1))  _lightColor1;

constexpr void __set__lightColor1(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get__lightColor1() const;

 GlobalNamespace::ColorSO __declspec(property(get=__get__highlightColor0, put=__set__highlightColor0))  _highlightColor0;

constexpr void __set__highlightColor0(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get__highlightColor0() const;

 GlobalNamespace::ColorSO __declspec(property(get=__get__highlightColor1, put=__set__highlightColor1))  _highlightColor1;

constexpr void __set__highlightColor1(GlobalNamespace::ColorSO value) ;

constexpr GlobalNamespace::ColorSO __get__highlightColor1() const;

 bool __declspec(property(get=__get__lightOnStart, put=__set__lightOnStart))  _lightOnStart;

constexpr void __set__lightOnStart(bool value) ;

constexpr bool __get__lightOnStart() const;

 GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get__colorEvent, put=__set__colorEvent))  _colorEvent;

constexpr void __set__colorEvent(GlobalNamespace::BasicBeatmapEventType value) ;

constexpr GlobalNamespace::BasicBeatmapEventType __get__colorEvent() const;

 UnityEngine::ParticleSystem __declspec(property(get=__get__particleSystem, put=__set__particleSystem))  _particleSystem;

constexpr void __set__particleSystem(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__particleSystem() const;

 GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value) ;

constexpr GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 bool __declspec(property(get=__get__lightIsOn, put=__set__lightIsOn))  _lightIsOn;

constexpr void __set__lightIsOn(bool value) ;

constexpr bool __get__lightIsOn() const;

 UnityEngine::Color __declspec(property(get=__get__offColor, put=__set__offColor))  _offColor;

constexpr void __set__offColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__offColor() const;

 float_t __declspec(property(get=__get__highlightValue, put=__set__highlightValue))  _highlightValue;

constexpr void __set__highlightValue(float_t value) ;

constexpr float_t __get__highlightValue() const;

 UnityEngine::Color __declspec(property(get=__get__afterHighlightColor, put=__set__afterHighlightColor))  _afterHighlightColor;

constexpr void __set__afterHighlightColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__afterHighlightColor() const;

 UnityEngine::Color __declspec(property(get=__get__highlightColor, put=__set__highlightColor))  _highlightColor;

constexpr void __set__highlightColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__highlightColor() const;

 float_t __declspec(property(get=__get_kFadeSpeed, put=__set_kFadeSpeed))  kFadeSpeed;

constexpr void __set_kFadeSpeed(float_t value) ;

constexpr float_t __get_kFadeSpeed() const;

 UnityEngine::UnityEngine__ParticleSystem__MainModule __declspec(property(get=__get__mainModule, put=__set__mainModule))  _mainModule;

constexpr void __set__mainModule(UnityEngine::UnityEngine__ParticleSystem__MainModule value) ;

constexpr UnityEngine::UnityEngine__ParticleSystem__MainModule __get__mainModule() const;

 ::ArrayW<UnityEngine::UnityEngine__ParticleSystem__Particle> __declspec(property(get=__get__particles, put=__set__particles))  _particles;

constexpr void __set__particles(::ArrayW<UnityEngine::UnityEngine__ParticleSystem__Particle> value) ;

constexpr ::ArrayW<UnityEngine::UnityEngine__ParticleSystem__Particle> __get__particles() const;

 UnityEngine::Color __declspec(property(get=__get__particleColor, put=__set__particleColor))  _particleColor;

constexpr void __set__particleColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__particleColor() const;

 GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper))  _beatmapDataCallbackWrapper;

constexpr void __set__beatmapDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr GlobalNamespace::BeatmapDataCallbackWrapper __get__beatmapDataCallbackWrapper() const;


// Methods

/// @brief Method Start addr 0x2266348 size 0x1d8 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x22668e0 size 0x1c virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x22668fc size 0xcc virtual false final false
 void Update() ;

/// @brief Method HandleBeatmapEvent addr 0x22669c8 size 0x1cc virtual false final false
 void HandleBeatmapEvent(GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData) ;

/// @brief Method RefreshParticles addr 0x2266520 size 0x3c0 virtual false final false
 void RefreshParticles() ;

static GlobalNamespace::ParticleSystemEventEffect New_ctor() ;

/// @brief Method .ctor addr 0x2266b94 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ParticleSystemEventEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ParticleSystemEventEffect, "", "ParticleSystemEventEffect");
