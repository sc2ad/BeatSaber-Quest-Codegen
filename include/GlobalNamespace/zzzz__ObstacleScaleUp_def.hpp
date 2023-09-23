#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class ObstacleControllerBase;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleScaleUp;
}
// Type: ::ObstacleScaleUp
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4911))
// CS Name: ObstacleScaleUp
class CORDL_TYPE ObstacleScaleUp : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ObstacleScaleUp() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleScaleUp", modifiers: " const&", def_value: None }]
constexpr ObstacleScaleUp(ObstacleScaleUp const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleScaleUp", modifiers: "&&", def_value: None }]
constexpr ObstacleScaleUp(ObstacleScaleUp&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObstacleScaleUp(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ObstacleScaleUp& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObstacleScaleUp& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObstacleScaleUp& operator=(ObstacleScaleUp&& o) noexcept = default;
  constexpr ObstacleScaleUp& operator=(ObstacleScaleUp const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__fullScalePart, put=__set__fullScalePart))  _fullScalePart;

constexpr void __set__fullScalePart(float_t value) ;

constexpr float_t __get__fullScalePart() const;

 UnityEngine::Transform __declspec(property(get=__get__targetTransform, put=__set__targetTransform))  _targetTransform;

constexpr void __set__targetTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__targetTransform() const;

 GlobalNamespace::ObstacleController __declspec(property(get=__get__obstacleController, put=__set__obstacleController))  _obstacleController;

constexpr void __set__obstacleController(GlobalNamespace::ObstacleController value) ;

constexpr GlobalNamespace::ObstacleController __get__obstacleController() const;


// Methods

/// @brief Method Awake addr 0x2245ee0 size 0x94 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x2246090 size 0x138 virtual false final false
 void OnDestroy() ;

/// @brief Method UpdateScale addr 0x2245f74 size 0x11c virtual false final false
 void UpdateScale(float_t progress) ;

/// @brief Method HandleObstacleControllerDidUpdateProgress addr 0x22461c8 size 0x28 virtual false final false
 void HandleObstacleControllerDidUpdateProgress(GlobalNamespace::ObstacleController obstacleController, float_t time) ;

/// @brief Method HandleObstacleControllerDidInit addr 0x22461f0 size 0xd0 virtual false final false
 void HandleObstacleControllerDidInit(GlobalNamespace::ObstacleControllerBase obstacleController) ;

// Ctor Parameters []
explicit ObstacleScaleUp() ;

/// @brief Method .ctor addr 0x22462c0 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ObstacleScaleUp);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleScaleUp, "", "ObstacleScaleUp");
