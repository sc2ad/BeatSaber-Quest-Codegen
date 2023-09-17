#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class RectTransform;
}
namespace Tweening {
class TimeTweeningManager;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyCenterScreenLayoutAnimator;
}
// Type: ::MultiplayerLobbyCenterScreenLayoutAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5649))
// CS Name: MultiplayerLobbyCenterScreenLayoutAnimator
class CORDL_TYPE MultiplayerLobbyCenterScreenLayoutAnimator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MultiplayerLobbyCenterScreenLayoutAnimator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyCenterScreenLayoutAnimator", modifiers: " const&", def_value: None }]
constexpr MultiplayerLobbyCenterScreenLayoutAnimator(MultiplayerLobbyCenterScreenLayoutAnimator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyCenterScreenLayoutAnimator", modifiers: "&&", def_value: None }]
constexpr MultiplayerLobbyCenterScreenLayoutAnimator(MultiplayerLobbyCenterScreenLayoutAnimator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLobbyCenterScreenLayoutAnimator(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLobbyCenterScreenLayoutAnimator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLobbyCenterScreenLayoutAnimator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLobbyCenterScreenLayoutAnimator& operator=(MultiplayerLobbyCenterScreenLayoutAnimator&& o) noexcept = default;
  constexpr MultiplayerLobbyCenterScreenLayoutAnimator& operator=(MultiplayerLobbyCenterScreenLayoutAnimator const& o) noexcept = default;
                


// Fields

 ::UnityEngine::RectTransform __declspec(property(get=__get__nextLevelTransform, put=__set__nextLevelTransform))  _nextLevelTransform;

constexpr void __set__nextLevelTransform(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get__nextLevelTransform() const;

 ::UnityEngine::RectTransform __declspec(property(get=__get__nextLevelBasePosition, put=__set__nextLevelBasePosition))  _nextLevelBasePosition;

constexpr void __set__nextLevelBasePosition(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get__nextLevelBasePosition() const;

 ::UnityEngine::RectTransform __declspec(property(get=__get__nextLevelCountdownPosition, put=__set__nextLevelCountdownPosition))  _nextLevelCountdownPosition;

constexpr void __set__nextLevelCountdownPosition(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get__nextLevelCountdownPosition() const;

 float_t __declspec(property(get=__get__transitionDuration, put=__set__transitionDuration))  _transitionDuration;

constexpr void __set__transitionDuration(float_t value) ;

constexpr float_t __get__transitionDuration() const;

 ::Tweening::TimeTweeningManager __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager))  _tweeningManager;

constexpr void __set__tweeningManager(::Tweening::TimeTweeningManager value) ;

constexpr ::Tweening::TimeTweeningManager __get__tweeningManager() const;


// Methods

/// @brief Method StartCountdown addr 0x214bcd0 size 0x84 virtual false final false
 void StartCountdown() ;

/// @brief Method StopCountdown addr 0x214be90 size 0xa0 virtual false final false
 void StopCountdown(bool instant) ;

/// @brief Method Move addr 0x214bd54 size 0x13c virtual false final false
 void Move(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, float_t duration) ;

// Ctor Parameters []
explicit MultiplayerLobbyCenterScreenLayoutAnimator() ;

/// @brief Method .ctor addr 0x214bf30 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Move>b__7_0 addr 0x214bf38 size 0x1c virtual false final false
 void _Move_b__7_0(::UnityEngine::Vector3 pos) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyCenterScreenLayoutAnimator, "", "MultiplayerLobbyCenterScreenLayoutAnimator");
