#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__FlyingObjectEffect_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class CutScoreBuffer;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class IReadonlyCutScoreBuffer;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace GlobalNamespace {
class ICutScoreBufferDidChangeReceiver;
}
namespace TMPro {
class TextMeshPro;
}
namespace GlobalNamespace {
class ICutScoreBufferDidFinishReceiver;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class FlyingScoreEffect;
}
namespace GlobalNamespace {
class GlobalNamespace__FlyingScoreEffect__Pool;
}
// Type: ::FlyingScoreEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4967))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4969))
// CS Name: FlyingScoreEffect
class CORDL_TYPE FlyingScoreEffect : public GlobalNamespace::FlyingObjectEffect {
public:
// Declarations
using Pool = GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool;

/// @brief Convert operator to GlobalNamespace::ICutScoreBufferDidChangeReceiver
constexpr operator  GlobalNamespace::ICutScoreBufferDidChangeReceiver() const noexcept;

/// @brief Convert operator to GlobalNamespace::ICutScoreBufferDidFinishReceiver
constexpr operator  GlobalNamespace::ICutScoreBufferDidFinishReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~FlyingScoreEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "FlyingScoreEffect", modifiers: " const&", def_value: None }]
constexpr FlyingScoreEffect(FlyingScoreEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FlyingScoreEffect", modifiers: "&&", def_value: None }]
constexpr FlyingScoreEffect(FlyingScoreEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FlyingScoreEffect(void* ptr) noexcept : GlobalNamespace::FlyingObjectEffect(ptr) {
}


  constexpr FlyingScoreEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FlyingScoreEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FlyingScoreEffect& operator=(FlyingScoreEffect&& o) noexcept = default;
  constexpr FlyingScoreEffect& operator=(FlyingScoreEffect const& o) noexcept = default;
                


// Fields

 UnityEngine::AnimationCurve __declspec(property(get=__get__fadeAnimationCurve, put=__set__fadeAnimationCurve))  _fadeAnimationCurve;

constexpr void __set__fadeAnimationCurve(UnityEngine::AnimationCurve value) ;

constexpr UnityEngine::AnimationCurve __get__fadeAnimationCurve() const;

 UnityEngine::SpriteRenderer __declspec(property(get=__get__maxCutDistanceScoreIndicator, put=__set__maxCutDistanceScoreIndicator))  _maxCutDistanceScoreIndicator;

constexpr void __set__maxCutDistanceScoreIndicator(UnityEngine::SpriteRenderer value) ;

constexpr UnityEngine::SpriteRenderer __get__maxCutDistanceScoreIndicator() const;

 TMPro::TextMeshPro __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(TMPro::TextMeshPro value) ;

constexpr TMPro::TextMeshPro __get__text() const;

 UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color() const;

 float_t __declspec(property(get=__get__colorAMultiplier, put=__set__colorAMultiplier))  _colorAMultiplier;

constexpr void __set__colorAMultiplier(float_t value) ;

constexpr float_t __get__colorAMultiplier() const;

 bool __declspec(property(get=__get__registeredToCallbacks, put=__set__registeredToCallbacks))  _registeredToCallbacks;

constexpr void __set__registeredToCallbacks(bool value) ;

constexpr bool __get__registeredToCallbacks() const;

 GlobalNamespace::IReadonlyCutScoreBuffer __declspec(property(get=__get__cutScoreBuffer, put=__set__cutScoreBuffer))  _cutScoreBuffer;

constexpr void __set__cutScoreBuffer(GlobalNamespace::IReadonlyCutScoreBuffer value) ;

constexpr GlobalNamespace::IReadonlyCutScoreBuffer __get__cutScoreBuffer() const;


// Methods

/// @brief Method InitAndPresent addr 0x2250b08 size 0x4e4 virtual false final false
 void InitAndPresent(GlobalNamespace::IReadonlyCutScoreBuffer cutScoreBuffer, float_t duration, UnityEngine::Vector3 targetPos, UnityEngine::Color color) ;

/// @brief Method ManualUpdate addr 0x2251074 size 0x88 virtual true final false
 void ManualUpdate(float_t t) ;

/// @brief Method HandleCutScoreBufferDidChange addr 0x22510fc size 0x4c virtual true final true
 void HandleCutScoreBufferDidChange(GlobalNamespace::CutScoreBuffer cutScoreBuffer) ;

/// @brief Method RefreshScore addr 0x2250fec size 0x88 virtual false final false
 void RefreshScore(int32_t score, int32_t maxPossibleCutScore) ;

/// @brief Method HandleCutScoreBufferDidFinish addr 0x2251148 size 0x4 virtual true final true
 void HandleCutScoreBufferDidFinish(GlobalNamespace::CutScoreBuffer cutScoreBuffer) ;

/// @brief Method UnregisterCallbacksIfNeeded addr 0x225114c size 0x128 virtual false final false
 void UnregisterCallbacksIfNeeded() ;

// Ctor Parameters []
explicit FlyingScoreEffect() ;

/// @brief Method .ctor addr 0x2251274 size 0x30 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4969)), TypeDefinitionIndex(TypeDefinitionIndex(10992)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 2707 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4968))
// CS Name: FlyingScoreEffect::Pool
class CORDL_TYPE GlobalNamespace__FlyingScoreEffect__Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::FlyingScoreEffect> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__FlyingScoreEffect__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FlyingScoreEffect__Pool", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__FlyingScoreEffect__Pool(GlobalNamespace__FlyingScoreEffect__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__FlyingScoreEffect__Pool", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__FlyingScoreEffect__Pool(GlobalNamespace__FlyingScoreEffect__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__FlyingScoreEffect__Pool(void* ptr) noexcept : Zenject::MonoMemoryPool_1<GlobalNamespace::FlyingScoreEffect>(ptr) {
}


  constexpr GlobalNamespace__FlyingScoreEffect__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__FlyingScoreEffect__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__FlyingScoreEffect__Pool& operator=(GlobalNamespace__FlyingScoreEffect__Pool&& o) noexcept = default;
  constexpr GlobalNamespace__FlyingScoreEffect__Pool& operator=(GlobalNamespace__FlyingScoreEffect__Pool const& o) noexcept = default;
                


// Methods

/// @brief Method OnDespawned addr 0x22512a4 size 0x60 virtual true final false
 void OnDespawned(GlobalNamespace::FlyingScoreEffect item) ;

// Ctor Parameters []
explicit GlobalNamespace__FlyingScoreEffect__Pool() ;

/// @brief Method .ctor addr 0x2251304 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FlyingScoreEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingScoreEffect, "", "FlyingScoreEffect");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__FlyingScoreEffect__Pool, "", "FlyingScoreEffect/Pool");
