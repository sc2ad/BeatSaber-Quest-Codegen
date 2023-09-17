#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
template<typename T>
class LazyCopyHashSet_1;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
template<typename T>
class ILazyCopyHashSet_1;
}
namespace GlobalNamespace {
class IBeatEffectDidFinishEvent;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatEffect;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatEffect__Pool;
}
// Type: ::BeatEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4952))
// CS Name: BeatEffect
class CORDL_TYPE BeatEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Pool = ::GlobalNamespace::____GlobalNamespace__BeatEffect__Pool;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~BeatEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatEffect", modifiers: " const&", def_value: None }]
constexpr BeatEffect(BeatEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatEffect", modifiers: "&&", def_value: None }]
constexpr BeatEffect(BeatEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatEffect(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BeatEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatEffect& operator=(BeatEffect&& o) noexcept = default;
  constexpr BeatEffect& operator=(BeatEffect const& o) noexcept = default;
                


// Fields

 ::UnityEngine::SpriteRenderer __declspec(property(get=__get__spriteRenderer, put=__set__spriteRenderer))  _spriteRenderer;

constexpr void __set__spriteRenderer(::UnityEngine::SpriteRenderer value) ;

constexpr ::UnityEngine::SpriteRenderer __get__spriteRenderer() const;

 ::UnityEngine::Transform __declspec(property(get=__get__spriteTransform, put=__set__spriteTransform))  _spriteTransform;

constexpr void __set__spriteTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__spriteTransform() const;

 ::GlobalNamespace::TubeBloomPrePassLight __declspec(property(get=__get__tubeBloomPrePassLight, put=__set__tubeBloomPrePassLight))  _tubeBloomPrePassLight;

constexpr void __set__tubeBloomPrePassLight(::GlobalNamespace::TubeBloomPrePassLight value) ;

constexpr ::GlobalNamespace::TubeBloomPrePassLight __get__tubeBloomPrePassLight() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get__lightIntensityCurve, put=__set__lightIntensityCurve))  _lightIntensityCurve;

constexpr void __set__lightIntensityCurve(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get__lightIntensityCurve() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get__spriteXScaleCurve, put=__set__spriteXScaleCurve))  _spriteXScaleCurve;

constexpr void __set__spriteXScaleCurve(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get__spriteXScaleCurve() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get__spriteYScaleCurve, put=__set__spriteYScaleCurve))  _spriteYScaleCurve;

constexpr void __set__spriteYScaleCurve(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get__spriteYScaleCurve() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get__transparencyCurve, put=__set__transparencyCurve))  _transparencyCurve;

constexpr void __set__transparencyCurve(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get__transparencyCurve() const;

 ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent> __declspec(property(get=__get__didFinishEvent, put=__set__didFinishEvent))  _didFinishEvent;

constexpr void __set__didFinishEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent> value) ;

constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent> __get__didFinishEvent() const;

 float_t __declspec(property(get=__get__animationDuration, put=__set__animationDuration))  _animationDuration;

constexpr void __set__animationDuration(float_t value) ;

constexpr float_t __get__animationDuration() const;

 float_t __declspec(property(get=__get__elapsedTime, put=__set__elapsedTime))  _elapsedTime;

constexpr void __set__elapsedTime(float_t value) ;

constexpr float_t __get__elapsedTime() const;

 ::UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__color() const;


// Properties

 ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent> __declspec(property(get=get_didFinishEvent))  didFinishEvent;


// Methods

/// @brief Method get_didFinishEvent addr 0x224d638 size 0x8 virtual false final false
 ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IBeatEffectDidFinishEvent> get_didFinishEvent() ;

/// @brief Method Init addr 0x224d640 size 0xb8 virtual false final false
 void Init(::UnityEngine::Color color, float_t animationDuration, ::UnityEngine::Quaternion rotation) ;

/// @brief Method ManualUpdate addr 0x224d6f8 size 0x2dc virtual false final false
 void ManualUpdate(float_t deltaTime) ;

// Ctor Parameters []
explicit BeatEffect() ;

/// @brief Method .ctor addr 0x224d9d4 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4952)), TypeDefinitionIndex(TypeDefinitionIndex(10992)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 2704 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4951))
// CS Name: BeatEffect::Pool
class CORDL_TYPE ____GlobalNamespace__BeatEffect__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::BeatEffect> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~____GlobalNamespace__BeatEffect__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatEffect__Pool", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatEffect__Pool(____GlobalNamespace__BeatEffect__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatEffect__Pool", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatEffect__Pool(____GlobalNamespace__BeatEffect__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatEffect__Pool(void* ptr) noexcept : ::Zenject::MonoMemoryPool_1<::GlobalNamespace::BeatEffect>(ptr) {
}


  constexpr ____GlobalNamespace__BeatEffect__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatEffect__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatEffect__Pool& operator=(____GlobalNamespace__BeatEffect__Pool&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatEffect__Pool& operator=(____GlobalNamespace__BeatEffect__Pool const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__BeatEffect__Pool() ;

/// @brief Method .ctor addr 0x224da50 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatEffect, "", "BeatEffect");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatEffect__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatEffect__Pool, "", "BeatEffect/Pool");
