#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class HologramRays;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct EaseType;
}
namespace Tweening {
template<typename T>
class Tween_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerBigAvatarAnimator;
}
// Type: ::MultiplayerBigAvatarAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5290))
// CS Name: MultiplayerBigAvatarAnimator
class CORDL_TYPE MultiplayerBigAvatarAnimator : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MultiplayerBigAvatarAnimator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBigAvatarAnimator", modifiers: " const&", def_value: None }]
constexpr MultiplayerBigAvatarAnimator(MultiplayerBigAvatarAnimator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerBigAvatarAnimator", modifiers: "&&", def_value: None }]
constexpr MultiplayerBigAvatarAnimator(MultiplayerBigAvatarAnimator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerBigAvatarAnimator(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerBigAvatarAnimator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerBigAvatarAnimator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerBigAvatarAnimator& operator=(MultiplayerBigAvatarAnimator&& o) noexcept = default;
  constexpr MultiplayerBigAvatarAnimator& operator=(MultiplayerBigAvatarAnimator const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__displayedScale, put=__set__displayedScale))  _displayedScale;

constexpr void __set__displayedScale(float_t value) ;

constexpr float_t __get__displayedScale() const;

 GlobalNamespace::HologramRays __declspec(property(get=__get__hologramRays, put=__set__hologramRays))  _hologramRays;

constexpr void __set__hologramRays(GlobalNamespace::HologramRays value) ;

constexpr GlobalNamespace::HologramRays __get__hologramRays() const;

 UnityEngine::Transform __declspec(property(get=__get__avatarTransform, put=__set__avatarTransform))  _avatarTransform;

constexpr void __set__avatarTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__avatarTransform() const;

 Tweening::TimeTweeningManager __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager))  _tweeningManager;

constexpr void __set__tweeningManager(Tweening::TimeTweeningManager value) ;

constexpr Tweening::TimeTweeningManager __get__tweeningManager() const;

 Tweening::Tween_1<float_t> __declspec(property(get=__get__scaleUpTween, put=__set__scaleUpTween))  _scaleUpTween;

constexpr void __set__scaleUpTween(Tweening::Tween_1<float_t> value) ;

constexpr Tweening::Tween_1<float_t> __get__scaleUpTween() const;

 Tweening::Tween_1<float_t> __declspec(property(get=__get__scaleDownTween, put=__set__scaleDownTween))  _scaleDownTween;

constexpr void __set__scaleDownTween(Tweening::Tween_1<float_t> value) ;

constexpr Tweening::Tween_1<float_t> __get__scaleDownTween() const;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;


// Methods

/// @brief Method OnDestroy addr 0x20eff64 size 0x88 virtual false final false
 void OnDestroy() ;

/// @brief Method InitIfNeeded addr 0x20effec size 0x1d8 virtual false final false
 void InitIfNeeded() ;

/// @brief Method SetPositionAndRotation addr 0x20f01c4 size 0x78 virtual false final false
 void SetPositionAndRotation(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation) ;

/// @brief Method HideInstant addr 0x20f023c size 0xa8 virtual false final false
 void HideInstant() ;

/// @brief Method Animate addr 0x20f02e4 size 0x1d4 virtual false final false
 void Animate(bool show, float_t duration, GlobalNamespace::EaseType easeType) ;

// Ctor Parameters []
explicit MultiplayerBigAvatarAnimator() ;

/// @brief Method .ctor addr 0x20f04b8 size 0x10 virtual false final false
 void _ctor() ;

/// @brief Method <InitIfNeeded>b__8_0 addr 0x20f04c8 size 0x78 virtual false final false
 void _InitIfNeeded_b__8_0(float_t val) ;

/// @brief Method <InitIfNeeded>b__8_1 addr 0x20f0540 size 0x78 virtual false final false
 void _InitIfNeeded_b__8_1(float_t val) ;

/// @brief Method <InitIfNeeded>b__8_2 addr 0x20f05b8 size 0x2c virtual false final false
 void _InitIfNeeded_b__8_2() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerBigAvatarAnimator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerBigAvatarAnimator, "", "MultiplayerBigAvatarAnimator");
