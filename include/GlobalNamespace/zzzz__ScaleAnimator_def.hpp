#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
struct EaseType;
}
namespace UnityEngine {
struct Vector3;
}
namespace Tweening {
template<typename T>
class Tween_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ScaleAnimator;
}
// Type: ::ScaleAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5347))
// CS Name: ScaleAnimator
class CORDL_TYPE ScaleAnimator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ScaleAnimator() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScaleAnimator", modifiers: " const&", def_value: None }]
constexpr ScaleAnimator(ScaleAnimator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScaleAnimator", modifiers: "&&", def_value: None }]
constexpr ScaleAnimator(ScaleAnimator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScaleAnimator(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ScaleAnimator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScaleAnimator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScaleAnimator& operator=(ScaleAnimator&& o) noexcept = default;
  constexpr ScaleAnimator& operator=(ScaleAnimator const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__displayedScale, put=__set__displayedScale))  _displayedScale;

constexpr void __set__displayedScale(float_t value) ;

constexpr float_t __get__displayedScale() const;

 ::UnityEngine::Transform __declspec(property(get=__get__targetTransform, put=__set__targetTransform))  _targetTransform;

constexpr void __set__targetTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__targetTransform() const;

 ::Tweening::TimeTweeningManager __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager))  _tweeningManager;

constexpr void __set__tweeningManager(::Tweening::TimeTweeningManager value) ;

constexpr ::Tweening::TimeTweeningManager __get__tweeningManager() const;

 ::Tweening::Tween_1<float_t> __declspec(property(get=__get__scaleUpTween, put=__set__scaleUpTween))  _scaleUpTween;

constexpr void __set__scaleUpTween(::Tweening::Tween_1<float_t> value) ;

constexpr ::Tweening::Tween_1<float_t> __get__scaleUpTween() const;

 ::Tweening::Tween_1<float_t> __declspec(property(get=__get__scaleDownTween, put=__set__scaleDownTween))  _scaleDownTween;

constexpr void __set__scaleDownTween(::Tweening::Tween_1<float_t> value) ;

constexpr ::Tweening::Tween_1<float_t> __get__scaleDownTween() const;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;


// Methods

/// @brief Method OnDestroy addr 0x2104f7c size 0x88 virtual false final false
 void OnDestroy() ;

/// @brief Method InitIfNeeded addr 0x2105004 size 0x254 virtual false final false
 void InitIfNeeded() ;

/// @brief Method SetPositionAndRotation addr 0x2105258 size 0x78 virtual false final false
 void SetPositionAndRotation(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) ;

/// @brief Method HideInstant addr 0x21052d0 size 0xa8 virtual false final false
 void HideInstant() ;

/// @brief Method ShowInstant addr 0x2105378 size 0x70 virtual false final false
 void ShowInstant() ;

/// @brief Method Animate addr 0x21053e8 size 0xfc virtual false final false
 void Animate(bool show, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay) ;

// Ctor Parameters []
explicit ScaleAnimator() ;

/// @brief Method .ctor addr 0x21054e4 size 0x10 virtual false final false
 void _ctor() ;

/// @brief Method <InitIfNeeded>b__7_0 addr 0x21054f4 size 0x24 virtual false final false
 void _InitIfNeeded_b__7_0(float_t val) ;

/// @brief Method <InitIfNeeded>b__7_2 addr 0x2105518 size 0x2c virtual false final false
 void _InitIfNeeded_b__7_2() ;

/// @brief Method <InitIfNeeded>b__7_1 addr 0x2105544 size 0x24 virtual false final false
 void _InitIfNeeded_b__7_1(float_t val) ;

/// @brief Method <InitIfNeeded>b__7_3 addr 0x2105568 size 0x2c virtual false final false
 void _InitIfNeeded_b__7_3() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ScaleAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScaleAnimator, "", "ScaleAnimator");
