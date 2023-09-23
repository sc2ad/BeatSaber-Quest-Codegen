#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__ObstacleController_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class ObstacleData;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerObstacleClippingController;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerConnectedPlayerObstacleController__Pool;
}
namespace GlobalNamespace {
class MultiplayerConnectedPlayerObstacleController;
}
// Type: ::MultiplayerConnectedPlayerObstacleController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4908))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5242))
// CS Name: MultiplayerConnectedPlayerObstacleController
class CORDL_TYPE MultiplayerConnectedPlayerObstacleController : public GlobalNamespace::ObstacleController {
public:
// Declarations
using Pool = GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerObstacleController__Pool;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x128};

virtual ~MultiplayerConnectedPlayerObstacleController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerObstacleController", modifiers: " const&", def_value: None }]
constexpr MultiplayerConnectedPlayerObstacleController(MultiplayerConnectedPlayerObstacleController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerObstacleController", modifiers: "&&", def_value: None }]
constexpr MultiplayerConnectedPlayerObstacleController(MultiplayerConnectedPlayerObstacleController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerConnectedPlayerObstacleController(void* ptr) noexcept : GlobalNamespace::ObstacleController(ptr) {
}


  constexpr MultiplayerConnectedPlayerObstacleController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerObstacleController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerObstacleController& operator=(MultiplayerConnectedPlayerObstacleController&& o) noexcept = default;
  constexpr MultiplayerConnectedPlayerObstacleController& operator=(MultiplayerConnectedPlayerObstacleController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController __declspec(property(get=__get__multiplayerConnectedPlayerObstacleClippingController, put=__set__multiplayerConnectedPlayerObstacleClippingController))  _multiplayerConnectedPlayerObstacleClippingController;

constexpr void __set__multiplayerConnectedPlayerObstacleClippingController(GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController value) ;

constexpr GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController __get__multiplayerConnectedPlayerObstacleClippingController() const;


// Methods

/// @brief Method Init addr 0x20e25bc size 0x1d0 virtual true final false
 void Init(GlobalNamespace::ObstacleData obstacleData, float_t worldRotation, UnityEngine::Vector3 startPos, UnityEngine::Vector3 midPos, UnityEngine::Vector3 endPos, float_t move1Duration, float_t move2Duration, float_t singleLineWidth, float_t height) ;

// Ctor Parameters []
explicit MultiplayerConnectedPlayerObstacleController() ;

/// @brief Method .ctor addr 0x20e278c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 2716 }), TypeDefinitionIndex(TypeDefinitionIndex(5242)), TypeDefinitionIndex(TypeDefinitionIndex(10992))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5241))
// CS Name: MultiplayerConnectedPlayerObstacleController::Pool
class CORDL_TYPE GlobalNamespace__MultiplayerConnectedPlayerObstacleController__Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::MultiplayerConnectedPlayerObstacleController> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__MultiplayerConnectedPlayerObstacleController__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerConnectedPlayerObstacleController__Pool", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerConnectedPlayerObstacleController__Pool(GlobalNamespace__MultiplayerConnectedPlayerObstacleController__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerConnectedPlayerObstacleController__Pool", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerConnectedPlayerObstacleController__Pool(GlobalNamespace__MultiplayerConnectedPlayerObstacleController__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerConnectedPlayerObstacleController__Pool(void* ptr) noexcept : Zenject::MonoMemoryPool_1<GlobalNamespace::MultiplayerConnectedPlayerObstacleController>(ptr) {
}


  constexpr GlobalNamespace__MultiplayerConnectedPlayerObstacleController__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerConnectedPlayerObstacleController__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerConnectedPlayerObstacleController__Pool& operator=(GlobalNamespace__MultiplayerConnectedPlayerObstacleController__Pool&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerConnectedPlayerObstacleController__Pool& operator=(GlobalNamespace__MultiplayerConnectedPlayerObstacleController__Pool const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MultiplayerConnectedPlayerObstacleController__Pool() ;

/// @brief Method .ctor addr 0x20e2794 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerObstacleController__Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerConnectedPlayerObstacleController__Pool, "", "MultiplayerConnectedPlayerObstacleController/Pool");
NEED_NO_BOX(GlobalNamespace::MultiplayerConnectedPlayerObstacleController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerObstacleController, "", "MultiplayerConnectedPlayerObstacleController");
