#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace Tweening {
class TimeTweeningManager;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLobbyCenterStageLayoutAnimator;
}
// Type: ::MultiplayerLobbyCenterStageLayoutAnimator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5651))
// CS Name: MultiplayerLobbyCenterStageLayoutAnimator
class CORDL_TYPE MultiplayerLobbyCenterStageLayoutAnimator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MultiplayerLobbyCenterStageLayoutAnimator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyCenterStageLayoutAnimator", modifiers: " const&", def_value: None }]
constexpr MultiplayerLobbyCenterStageLayoutAnimator(MultiplayerLobbyCenterStageLayoutAnimator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerLobbyCenterStageLayoutAnimator", modifiers: "&&", def_value: None }]
constexpr MultiplayerLobbyCenterStageLayoutAnimator(MultiplayerLobbyCenterStageLayoutAnimator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerLobbyCenterStageLayoutAnimator(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerLobbyCenterStageLayoutAnimator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerLobbyCenterStageLayoutAnimator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerLobbyCenterStageLayoutAnimator& operator=(MultiplayerLobbyCenterStageLayoutAnimator&& o) noexcept = default;
  constexpr MultiplayerLobbyCenterStageLayoutAnimator& operator=(MultiplayerLobbyCenterStageLayoutAnimator const& o) noexcept = default;
                


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

/// @brief Method StartCountdown addr 0x214bf5c size 0x84 virtual false final false
 void StartCountdown() ;

/// @brief Method StopCountdown addr 0x214c11c size 0xa0 virtual false final false
 void StopCountdown(bool instant) ;

/// @brief Method Move addr 0x214bfe0 size 0x13c virtual false final false
 void Move(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, float_t duration) ;

// Ctor Parameters []
explicit MultiplayerLobbyCenterStageLayoutAnimator() ;

/// @brief Method .ctor addr 0x214c1bc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Move>b__7_0 addr 0x214c1c4 size 0x1c virtual false final false
 void _Move_b__7_0(::UnityEngine::Vector3 pos) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLobbyCenterStageLayoutAnimator, "", "MultiplayerLobbyCenterStageLayoutAnimator");
