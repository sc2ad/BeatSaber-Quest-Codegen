#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerObstacleClippingController;
}
// Type: ::MultiplayerConnectedPlayerObstacleClippingController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5240))
// CS Name: MultiplayerConnectedPlayerObstacleClippingController
class CORDL_TYPE MultiplayerConnectedPlayerObstacleClippingController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MultiplayerConnectedPlayerObstacleClippingController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerObstacleClippingController", modifiers: " const&", def_value: None }]
constexpr MultiplayerConnectedPlayerObstacleClippingController(MultiplayerConnectedPlayerObstacleClippingController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerObstacleClippingController", modifiers: "&&", def_value: None }]
constexpr MultiplayerConnectedPlayerObstacleClippingController(MultiplayerConnectedPlayerObstacleClippingController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerConnectedPlayerObstacleClippingController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerConnectedPlayerObstacleClippingController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerObstacleClippingController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerConnectedPlayerObstacleClippingController& operator=(MultiplayerConnectedPlayerObstacleClippingController&& o) noexcept = default;
  constexpr MultiplayerConnectedPlayerObstacleClippingController& operator=(MultiplayerConnectedPlayerObstacleClippingController const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController> __declspec(property(get=__get__materialPropertyBlockControllers, put=__set__materialPropertyBlockControllers))  _materialPropertyBlockControllers;

constexpr void __set__materialPropertyBlockControllers(::ArrayW<::GlobalNamespace::MaterialPropertyBlockController> value) ;

constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController> __get__materialPropertyBlockControllers() const;

static int32_t __declspec(property(get=__get__clippingPlanePositionID, put=__set__clippingPlanePositionID))  _clippingPlanePositionID;

static void __set__clippingPlanePositionID(int32_t value) ;

static int32_t __get__clippingPlanePositionID() ;

static int32_t __declspec(property(get=__get__clippingPlaneNormalID, put=__set__clippingPlaneNormalID))  _clippingPlaneNormalID;

static void __set__clippingPlaneNormalID(int32_t value) ;

static int32_t __get__clippingPlaneNormalID() ;


// Methods

/// @brief Method SetClippingParams addr 0x20e23cc size 0x14c virtual false final false
 void SetClippingParams(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 normal) ;

// Ctor Parameters []
explicit MultiplayerConnectedPlayerObstacleClippingController() ;

/// @brief Method .ctor addr 0x20e2518 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController, "", "MultiplayerConnectedPlayerObstacleClippingController");
