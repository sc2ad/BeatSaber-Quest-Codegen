#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class MainAudioEffects;
}
namespace GlobalNamespace {
class PlayerHeadAndObstacleInteraction;
}
// Forward declare root types
namespace GlobalNamespace {
class HeadObstacleLowPassAudioEffect;
}
// Type: ::HeadObstacleLowPassAudioEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5014))
// CS Name: HeadObstacleLowPassAudioEffect
class CORDL_TYPE HeadObstacleLowPassAudioEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HeadObstacleLowPassAudioEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "HeadObstacleLowPassAudioEffect", modifiers: " const&", def_value: None }]
constexpr HeadObstacleLowPassAudioEffect(HeadObstacleLowPassAudioEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HeadObstacleLowPassAudioEffect", modifiers: "&&", def_value: None }]
constexpr HeadObstacleLowPassAudioEffect(HeadObstacleLowPassAudioEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HeadObstacleLowPassAudioEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HeadObstacleLowPassAudioEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HeadObstacleLowPassAudioEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HeadObstacleLowPassAudioEffect& operator=(HeadObstacleLowPassAudioEffect&& o) noexcept = default;
  constexpr HeadObstacleLowPassAudioEffect& operator=(HeadObstacleLowPassAudioEffect const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PlayerHeadAndObstacleInteraction __declspec(property(get=__get__playerHeadAndObstacleInteraction, put=__set__playerHeadAndObstacleInteraction))  _playerHeadAndObstacleInteraction;

constexpr void __set__playerHeadAndObstacleInteraction(GlobalNamespace::PlayerHeadAndObstacleInteraction value) ;

constexpr GlobalNamespace::PlayerHeadAndObstacleInteraction __get__playerHeadAndObstacleInteraction() const;

 GlobalNamespace::MainAudioEffects __declspec(property(get=__get__mainAudioEffects, put=__set__mainAudioEffects))  _mainAudioEffects;

constexpr void __set__mainAudioEffects(GlobalNamespace::MainAudioEffects value) ;

constexpr GlobalNamespace::MainAudioEffects __get__mainAudioEffects() const;

 bool __declspec(property(get=__get__headWasInObstacle, put=__set__headWasInObstacle))  _headWasInObstacle;

constexpr void __set__headWasInObstacle(bool value) ;

constexpr bool __get__headWasInObstacle() const;


// Methods

/// @brief Method Update addr 0x225c1d8 size 0x5c virtual false final false
 void Update() ;

// Ctor Parameters []
explicit HeadObstacleLowPassAudioEffect() ;

/// @brief Method .ctor addr 0x225c234 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::HeadObstacleLowPassAudioEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HeadObstacleLowPassAudioEffect, "", "HeadObstacleLowPassAudioEffect");
