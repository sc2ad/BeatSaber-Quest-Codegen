#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
struct EaseType;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Color;
}
namespace Tweening {
template<typename T>
class Tween_1;
}
namespace TMPro {
class TextMeshPro;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerCenterTextAnimator;
}
// Type: ::MultiplayerCenterTextAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5293))
// CS Name: MultiplayerCenterTextAnimator
class CORDL_TYPE MultiplayerCenterTextAnimator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~MultiplayerCenterTextAnimator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerCenterTextAnimator", modifiers: " const&", def_value: None }]
constexpr MultiplayerCenterTextAnimator(MultiplayerCenterTextAnimator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerCenterTextAnimator", modifiers: "&&", def_value: None }]
constexpr MultiplayerCenterTextAnimator(MultiplayerCenterTextAnimator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerCenterTextAnimator(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerCenterTextAnimator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerCenterTextAnimator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerCenterTextAnimator& operator=(MultiplayerCenterTextAnimator&& o) noexcept = default;
  constexpr MultiplayerCenterTextAnimator& operator=(MultiplayerCenterTextAnimator const& o) noexcept = default;
                


// Fields

 ::TMPro::TextMeshPro __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(::TMPro::TextMeshPro value) ;

constexpr ::TMPro::TextMeshPro __get__text() const;

 ::UnityEngine::Transform __declspec(property(get=__get__scalingTarget, put=__set__scalingTarget))  _scalingTarget;

constexpr void __set__scalingTarget(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__scalingTarget() const;

 ::Tweening::TimeTweeningManager __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager))  _tweeningManager;

constexpr void __set__tweeningManager(::Tweening::TimeTweeningManager value) ;

constexpr ::Tweening::TimeTweeningManager __get__tweeningManager() const;

 ::Tweening::Tween_1<float_t> __declspec(property(get=__get__fadeInTween, put=__set__fadeInTween))  _fadeInTween;

constexpr void __set__fadeInTween(::Tweening::Tween_1<float_t> value) ;

constexpr ::Tweening::Tween_1<float_t> __get__fadeInTween() const;

 ::Tweening::Tween_1<float_t> __declspec(property(get=__get__fadeOutTween, put=__set__fadeOutTween))  _fadeOutTween;

constexpr void __set__fadeOutTween(::Tweening::Tween_1<float_t> value) ;

constexpr ::Tweening::Tween_1<float_t> __get__fadeOutTween() const;

 ::Tweening::Tween_1<float_t> __declspec(property(get=__get__fontSizeTween, put=__set__fontSizeTween))  _fontSizeTween;

constexpr void __set__fontSizeTween(::Tweening::Tween_1<float_t> value) ;

constexpr ::Tweening::Tween_1<float_t> __get__fontSizeTween() const;

 ::Tweening::Tween_1<::UnityEngine::Color> __declspec(property(get=__get__colorTween, put=__set__colorTween))  _colorTween;

constexpr void __set__colorTween(::Tweening::Tween_1<::UnityEngine::Color> value) ;

constexpr ::Tweening::Tween_1<::UnityEngine::Color> __get__colorTween() const;

 ::Tweening::Tween_1<::UnityEngine::Vector3> __declspec(property(get=__get__offsetTween, put=__set__offsetTween))  _offsetTween;

constexpr void __set__offsetTween(::Tweening::Tween_1<::UnityEngine::Vector3> value) ;

constexpr ::Tweening::Tween_1<::UnityEngine::Vector3> __get__offsetTween() const;


// Methods

/// @brief Method Awake addr 0x20f0cac size 0x408 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x20f10b4 size 0x88 virtual false final false
 void OnDestroy() ;

/// @brief Method AnimateTextColor addr 0x20f113c size 0x98 virtual false final false
 void AnimateTextColor(::UnityEngine::Color color, float_t duration, ::GlobalNamespace::EaseType easeType) ;

/// @brief Method AnimateFontSize addr 0x20f11d4 size 0x44 virtual false final false
 void AnimateFontSize(float_t fontSize, float_t duration, ::GlobalNamespace::EaseType easeType) ;

/// @brief Method AnimatePositionOffsetSize addr 0x20f1218 size 0x8c virtual false final false
 void AnimatePositionOffsetSize(::UnityEngine::Vector3 offset, float_t duration, ::GlobalNamespace::EaseType easeType) ;

/// @brief Method AnimateEnabled addr 0x20f12a4 size 0x148 virtual false final false
 void AnimateEnabled(bool isEnabled, float_t duration, ::GlobalNamespace::EaseType easeType) ;

/// @brief Method SetText addr 0x20f13ec size 0x24 virtual false final false
 void SetText(::StringW text) ;

// Ctor Parameters []
explicit MultiplayerCenterTextAnimator() ;

/// @brief Method .ctor addr 0x20f1410 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Awake>b__8_0 addr 0x20f1418 size 0x78 virtual false final false
 void _Awake_b__8_0(float_t val) ;

/// @brief Method <Awake>b__8_1 addr 0x20f1490 size 0x78 virtual false final false
 void _Awake_b__8_1(float_t val) ;

/// @brief Method <Awake>b__8_5 addr 0x20f1508 size 0x2c virtual false final false
 void _Awake_b__8_5() ;

/// @brief Method <Awake>b__8_2 addr 0x20f1534 size 0x1c virtual false final false
 void _Awake_b__8_2(float_t val) ;

/// @brief Method <Awake>b__8_3 addr 0x20f1550 size 0x24 virtual false final false
 void _Awake_b__8_3(::UnityEngine::Color val) ;

/// @brief Method <Awake>b__8_4 addr 0x20f1574 size 0x1c virtual false final false
 void _Awake_b__8_4(::UnityEngine::Vector3 val) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerCenterTextAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerCenterTextAnimator, "", "MultiplayerCenterTextAnimator");
