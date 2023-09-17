#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class IFlyingObjectEffectDidFinishEvent;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
template<typename T>
class LazyCopyHashSet_1;
}
namespace GlobalNamespace {
template<typename T>
class ILazyCopyHashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class FlyingObjectEffect;
}
// Type: ::FlyingObjectEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4967))
// CS Name: FlyingObjectEffect
class CORDL_TYPE FlyingObjectEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~FlyingObjectEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "FlyingObjectEffect", modifiers: " const&", def_value: None }]
constexpr FlyingObjectEffect(FlyingObjectEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FlyingObjectEffect", modifiers: "&&", def_value: None }]
constexpr FlyingObjectEffect(FlyingObjectEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FlyingObjectEffect(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FlyingObjectEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FlyingObjectEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FlyingObjectEffect& operator=(FlyingObjectEffect&& o) noexcept = default;
  constexpr FlyingObjectEffect& operator=(FlyingObjectEffect const& o) noexcept = default;
                


// Fields

 ::UnityEngine::AnimationCurve __declspec(property(get=__get__moveAnimationCurve, put=__set__moveAnimationCurve))  _moveAnimationCurve;

constexpr void __set__moveAnimationCurve(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get__moveAnimationCurve() const;

 float_t __declspec(property(get=__get__shakeFrequency, put=__set__shakeFrequency))  _shakeFrequency;

constexpr void __set__shakeFrequency(float_t value) ;

constexpr float_t __get__shakeFrequency() const;

 float_t __declspec(property(get=__get__shakeStrength, put=__set__shakeStrength))  _shakeStrength;

constexpr void __set__shakeStrength(float_t value) ;

constexpr float_t __get__shakeStrength() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get__shakeStrengthAnimationCurve, put=__set__shakeStrengthAnimationCurve))  _shakeStrengthAnimationCurve;

constexpr void __set__shakeStrengthAnimationCurve(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get__shakeStrengthAnimationCurve() const;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get__shakeRotation, put=__set__shakeRotation))  _shakeRotation;

constexpr void __set__shakeRotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get__shakeRotation() const;

 ::UnityEngine::Quaternion __declspec(property(get=__get__rotation, put=__set__rotation))  _rotation;

constexpr void __set__rotation(::UnityEngine::Quaternion value) ;

constexpr ::UnityEngine::Quaternion __get__rotation() const;

 float_t __declspec(property(get=__get__elapsedTime, put=__set__elapsedTime))  _elapsedTime;

constexpr void __set__elapsedTime(float_t value) ;

constexpr float_t __get__elapsedTime() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__startPos, put=__set__startPos))  _startPos;

constexpr void __set__startPos(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__startPos() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__targetPos, put=__set__targetPos))  _targetPos;

constexpr void __set__targetPos(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__targetPos() const;

 float_t __declspec(property(get=__get__duration, put=__set__duration))  _duration;

constexpr void __set__duration(float_t value) ;

constexpr float_t __get__duration() const;

 bool __declspec(property(get=__get__shake, put=__set__shake))  _shake;

constexpr void __set__shake(bool value) ;

constexpr bool __get__shake() const;

 ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent> __declspec(property(get=__get__didFinishEvent, put=__set__didFinishEvent))  _didFinishEvent;

constexpr void __set__didFinishEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent> value) ;

constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent> __get__didFinishEvent() const;


// Properties

 ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent> __declspec(property(get=get_didFinishEvent))  didFinishEvent;


// Methods

/// @brief Method get_didFinishEvent addr 0x2250594 size 0x8 virtual false final false
 ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent> get_didFinishEvent() ;

/// @brief Method InitAndPresent addr 0x225059c size 0xe8 virtual false final false
 void InitAndPresent(float_t duration, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Quaternion rotation, bool shake) ;

/// @brief Method Update addr 0x2250684 size 0x3b8 virtual false final false
 void Update() ;

/// @brief Method ManualUpdate addr 0x0 size 0xffffffffffffffff virtual true final false
 void ManualUpdate(float_t t) ;

// Ctor Parameters []
explicit FlyingObjectEffect() ;

/// @brief Method .ctor addr 0x2250a3c size 0xcc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::FlyingObjectEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingObjectEffect, "", "FlyingObjectEffect");
