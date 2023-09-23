#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class VRController;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerVRControllersManager;
}
// Type: ::PlayerVRControllersManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5368))
// CS Name: PlayerVRControllersManager
class CORDL_TYPE PlayerVRControllersManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PlayerVRControllersManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerVRControllersManager", modifiers: " const&", def_value: None }]
constexpr PlayerVRControllersManager(PlayerVRControllersManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerVRControllersManager", modifiers: "&&", def_value: None }]
constexpr PlayerVRControllersManager(PlayerVRControllersManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerVRControllersManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PlayerVRControllersManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerVRControllersManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerVRControllersManager& operator=(PlayerVRControllersManager&& o) noexcept = default;
  constexpr PlayerVRControllersManager& operator=(PlayerVRControllersManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::VRController __declspec(property(get=__get__leftHandVRController, put=__set__leftHandVRController))  _leftHandVRController;

constexpr void __set__leftHandVRController(GlobalNamespace::VRController value) ;

constexpr GlobalNamespace::VRController __get__leftHandVRController() const;

 GlobalNamespace::VRController __declspec(property(get=__get__rightHandVRController, put=__set__rightHandVRController))  _rightHandVRController;

constexpr void __set__rightHandVRController(GlobalNamespace::VRController value) ;

constexpr GlobalNamespace::VRController __get__rightHandVRController() const;


// Properties

 GlobalNamespace::VRController __declspec(property(get=get_leftHandVRController))  leftHandVRController;

 GlobalNamespace::VRController __declspec(property(get=get_rightHandVRController))  rightHandVRController;


// Methods

/// @brief Method get_leftHandVRController addr 0x210936c size 0x8 virtual false final false
 GlobalNamespace::VRController get_leftHandVRController() ;

/// @brief Method get_rightHandVRController addr 0x2109374 size 0x8 virtual false final false
 GlobalNamespace::VRController get_rightHandVRController() ;

/// @brief Method DisableAllVRControllers addr 0x210937c size 0x38 virtual false final false
 void DisableAllVRControllers() ;

// Ctor Parameters []
explicit PlayerVRControllersManager() ;

/// @brief Method .ctor addr 0x21093b4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PlayerVRControllersManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerVRControllersManager, "", "PlayerVRControllersManager");
