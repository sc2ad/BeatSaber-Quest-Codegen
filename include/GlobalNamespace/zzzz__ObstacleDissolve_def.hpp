#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class ObstacleControllerBase;
}
namespace GlobalNamespace {
class CutoutAnimateEffect;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleDissolve;
}
// Type: ::ObstacleDissolve
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4910))
// CS Name: ObstacleDissolve
class CORDL_TYPE ObstacleDissolve : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ObstacleDissolve() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleDissolve", modifiers: " const&", def_value: None }]
constexpr ObstacleDissolve(ObstacleDissolve const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleDissolve", modifiers: "&&", def_value: None }]
constexpr ObstacleDissolve(ObstacleDissolve&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObstacleDissolve(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ObstacleDissolve& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObstacleDissolve& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObstacleDissolve& operator=(ObstacleDissolve&& o) noexcept = default;
  constexpr ObstacleDissolve& operator=(ObstacleDissolve const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ObstacleControllerBase __declspec(property(get=__get__obstacleController, put=__set__obstacleController))  _obstacleController;

constexpr void __set__obstacleController(GlobalNamespace::ObstacleControllerBase value) ;

constexpr GlobalNamespace::ObstacleControllerBase __get__obstacleController() const;

 GlobalNamespace::CutoutAnimateEffect __declspec(property(get=__get__cutoutAnimateEffect, put=__set__cutoutAnimateEffect))  _cutoutAnimateEffect;

constexpr void __set__cutoutAnimateEffect(GlobalNamespace::CutoutAnimateEffect value) ;

constexpr GlobalNamespace::CutoutAnimateEffect __get__cutoutAnimateEffect() const;


// Methods

/// @brief Method Awake addr 0x2245c10 size 0xec virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x2245cfc size 0x134 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleObstacleDidInitEvent addr 0x2245e30 size 0x30 virtual false final false
 void HandleObstacleDidInitEvent(GlobalNamespace::ObstacleControllerBase obstacleController) ;

/// @brief Method HandleObcstacleDidStartDissolvingEvent addr 0x2245e60 size 0x24 virtual false final false
 void HandleObcstacleDidStartDissolvingEvent(GlobalNamespace::ObstacleControllerBase obstacleController, float_t duration) ;

// Ctor Parameters []
explicit ObstacleDissolve() ;

/// @brief Method .ctor addr 0x2245ed8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ObstacleDissolve);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleDissolve, "", "ObstacleDissolve");
