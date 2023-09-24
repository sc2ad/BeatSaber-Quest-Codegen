#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ObstacleControllerBase_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class ObstacleControllerBase;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class GlobalNamespace__MirroredObstacleController__Pool;
}
namespace GlobalNamespace {
class StretchableObstacle;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MirroredObstacleController__Pool;
}
namespace GlobalNamespace {
class MirroredObstacleController;
}
// Type: ::MirroredObstacleController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4909))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4905))
// CS Name: MirroredObstacleController
class CORDL_TYPE MirroredObstacleController : public GlobalNamespace::ObstacleControllerBase {
public:
// Declarations
using Pool = GlobalNamespace::GlobalNamespace__MirroredObstacleController__Pool;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~MirroredObstacleController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MirroredObstacleController", modifiers: " const&", def_value: None }]
constexpr MirroredObstacleController(MirroredObstacleController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MirroredObstacleController", modifiers: "&&", def_value: None }]
constexpr MirroredObstacleController(MirroredObstacleController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MirroredObstacleController(void* ptr) noexcept : GlobalNamespace::ObstacleControllerBase(ptr) {
}


  constexpr MirroredObstacleController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MirroredObstacleController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MirroredObstacleController& operator=(MirroredObstacleController&& o) noexcept = default;
  constexpr MirroredObstacleController& operator=(MirroredObstacleController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::StretchableObstacle __declspec(property(get=__get__stretchableObstacle, put=__set__stretchableObstacle))  _stretchableObstacle;

constexpr void __set__stretchableObstacle(GlobalNamespace::StretchableObstacle value) ;

constexpr GlobalNamespace::StretchableObstacle __get__stretchableObstacle() const;

 GlobalNamespace::ObstacleController __declspec(property(get=__get__followedObstacle, put=__set__followedObstacle))  _followedObstacle;

constexpr void __set__followedObstacle(GlobalNamespace::ObstacleController value) ;

constexpr GlobalNamespace::ObstacleController __get__followedObstacle() const;

 UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transform() const;

 UnityEngine::Transform __declspec(property(get=__get__followedTransform, put=__set__followedTransform))  _followedTransform;

constexpr void __set__followedTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__followedTransform() const;


// Properties

 bool __declspec(property(put=set_hide))  hide;


// Methods

/// @brief Method set_hide addr 0x2244194 size 0x2c virtual false final false
 void set_hide(bool value) ;

/// @brief Method Awake addr 0x22441c0 size 0x1c virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x22441dc size 0x4 virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x22442ac size 0x4 virtual false final false
 void Update() ;

/// @brief Method RemoveListeners addr 0x22441e0 size 0xcc virtual false final false
 void RemoveListeners() ;

/// @brief Method UpdatePositionAndRotation addr 0x22442b0 size 0x104 virtual false final false
 void UpdatePositionAndRotation() ;

/// @brief Method Mirror addr 0x2244464 size 0xf8 virtual false final false
 void Mirror(GlobalNamespace::ObstacleController obstacleController) ;

/// @brief Method HandleDidStartDissolving addr 0x2244a0c size 0x20 virtual false final false
 void HandleDidStartDissolving(GlobalNamespace::ObstacleControllerBase obstacleController, float_t duration) ;

static GlobalNamespace::MirroredObstacleController New_ctor() ;

/// @brief Method .ctor addr 0x2244a48 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10992)), TypeDefinitionIndex(TypeDefinitionIndex(4905)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 2712 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4904))
// CS Name: MirroredObstacleController::Pool
class CORDL_TYPE GlobalNamespace__MirroredObstacleController__Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::MirroredObstacleController> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__MirroredObstacleController__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MirroredObstacleController__Pool", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MirroredObstacleController__Pool(GlobalNamespace__MirroredObstacleController__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MirroredObstacleController__Pool", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MirroredObstacleController__Pool(GlobalNamespace__MirroredObstacleController__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MirroredObstacleController__Pool(void* ptr) noexcept : Zenject::MonoMemoryPool_1<GlobalNamespace::MirroredObstacleController>(ptr) {
}


  constexpr GlobalNamespace__MirroredObstacleController__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MirroredObstacleController__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MirroredObstacleController__Pool& operator=(GlobalNamespace__MirroredObstacleController__Pool&& o) noexcept = default;
  constexpr GlobalNamespace__MirroredObstacleController__Pool& operator=(GlobalNamespace__MirroredObstacleController__Pool const& o) noexcept = default;
                


// Methods

static GlobalNamespace::GlobalNamespace__MirroredObstacleController__Pool New_ctor() ;

/// @brief Method .ctor addr 0x2244a58 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MirroredObstacleController__Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MirroredObstacleController__Pool, "", "MirroredObstacleController/Pool");
NEED_NO_BOX(GlobalNamespace::MirroredObstacleController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MirroredObstacleController, "", "MirroredObstacleController");
