#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace GlobalNamespace {
class IUnityXRHapticsHandler;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace GlobalNamespace {
class GlobalNamespace__UnityXRController__Configuration;
}
namespace GlobalNamespace {
struct GlobalNamespace__UnityXRHelper__VRControllerManufacturerName;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine::XR {
struct InputDevice;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__UnityXRController__Configuration;
}
namespace GlobalNamespace {
class UnityXRController;
}
// Type: ::Configuration
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13934))
// CS Name: UnityXRController::Configuration
class CORDL_TYPE GlobalNamespace__UnityXRController__Configuration : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__UnityXRController__Configuration() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__UnityXRController__Configuration", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__UnityXRController__Configuration(GlobalNamespace__UnityXRController__Configuration const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__UnityXRController__Configuration", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__UnityXRController__Configuration(GlobalNamespace__UnityXRController__Configuration&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__UnityXRController__Configuration(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__UnityXRController__Configuration& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__UnityXRController__Configuration& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__UnityXRController__Configuration& operator=(GlobalNamespace__UnityXRController__Configuration&& o) noexcept = default;
  constexpr GlobalNamespace__UnityXRController__Configuration& operator=(GlobalNamespace__UnityXRController__Configuration const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::InputActionReference __declspec(property(get=__get__positionActionReference_k__BackingField, put=__set__positionActionReference_k__BackingField))  _positionActionReference_k__BackingField;

constexpr void __set__positionActionReference_k__BackingField(UnityEngine::InputSystem::InputActionReference value) ;

constexpr UnityEngine::InputSystem::InputActionReference __get__positionActionReference_k__BackingField() const;

 UnityEngine::InputSystem::InputActionReference __declspec(property(get=__get__orientationActionReference_k__BackingField, put=__set__orientationActionReference_k__BackingField))  _orientationActionReference_k__BackingField;

constexpr void __set__orientationActionReference_k__BackingField(UnityEngine::InputSystem::InputActionReference value) ;

constexpr UnityEngine::InputSystem::InputActionReference __get__orientationActionReference_k__BackingField() const;

 UnityEngine::InputSystem::InputActionReference __declspec(property(get=__get__thumbstickActionReference_k__BackingField, put=__set__thumbstickActionReference_k__BackingField))  _thumbstickActionReference_k__BackingField;

constexpr void __set__thumbstickActionReference_k__BackingField(UnityEngine::InputSystem::InputActionReference value) ;

constexpr UnityEngine::InputSystem::InputActionReference __get__thumbstickActionReference_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::InputActionReference __declspec(property(get=get_positionActionReference, put=set_positionActionReference))  positionActionReference;

 UnityEngine::InputSystem::InputActionReference __declspec(property(get=get_orientationActionReference, put=set_orientationActionReference))  orientationActionReference;

 UnityEngine::InputSystem::InputActionReference __declspec(property(get=get_thumbstickActionReference, put=set_thumbstickActionReference))  thumbstickActionReference;


// Methods

/// @brief Method get_positionActionReference addr 0x1f8bdc8 size 0x8 virtual false final false
 UnityEngine::InputSystem::InputActionReference get_positionActionReference() ;

/// @brief Method set_positionActionReference addr 0x1f8bdd0 size 0x8 virtual false final false
 void set_positionActionReference(UnityEngine::InputSystem::InputActionReference value) ;

/// @brief Method get_orientationActionReference addr 0x1f8bdd8 size 0x8 virtual false final false
 UnityEngine::InputSystem::InputActionReference get_orientationActionReference() ;

/// @brief Method set_orientationActionReference addr 0x1f8bde0 size 0x8 virtual false final false
 void set_orientationActionReference(UnityEngine::InputSystem::InputActionReference value) ;

/// @brief Method get_thumbstickActionReference addr 0x1f8bde8 size 0x8 virtual false final false
 UnityEngine::InputSystem::InputActionReference get_thumbstickActionReference() ;

/// @brief Method set_thumbstickActionReference addr 0x1f8bdf0 size 0x8 virtual false final false
 void set_thumbstickActionReference(UnityEngine::InputSystem::InputActionReference value) ;

/// @brief Method CreateController addr 0x1f8991c size 0xc0 virtual false final false
 GlobalNamespace::UnityXRController CreateController(UnityEngine::XR::XRNode node) ;

static GlobalNamespace::GlobalNamespace__UnityXRController__Configuration New_ctor() ;

/// @brief Method .ctor addr 0x1f8bdf8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::UnityXRController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13935))
// CS Name: UnityXRController
class CORDL_TYPE UnityXRController : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Configuration = GlobalNamespace::GlobalNamespace__UnityXRController__Configuration;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~UnityXRController() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityXRController", modifiers: " const&", def_value: None }]
constexpr UnityXRController(UnityXRController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityXRController", modifiers: "&&", def_value: None }]
constexpr UnityXRController(UnityXRController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityXRController(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityXRController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityXRController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityXRController& operator=(UnityXRController&& o) noexcept = default;
  constexpr UnityXRController& operator=(UnityXRController const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::InputAction __declspec(property(get=__get_positionAction, put=__set_positionAction))  positionAction;

constexpr void __set_positionAction(UnityEngine::InputSystem::InputAction value) ;

constexpr UnityEngine::InputSystem::InputAction __get_positionAction() const;

 UnityEngine::InputSystem::InputAction __declspec(property(get=__get_rotationAction, put=__set_rotationAction))  rotationAction;

constexpr void __set_rotationAction(UnityEngine::InputSystem::InputAction value) ;

constexpr UnityEngine::InputSystem::InputAction __get_rotationAction() const;

 UnityEngine::InputSystem::InputAction __declspec(property(get=__get_thumbstickAction, put=__set_thumbstickAction))  thumbstickAction;

constexpr void __set_thumbstickAction(UnityEngine::InputSystem::InputAction value) ;

constexpr UnityEngine::InputSystem::InputAction __get_thumbstickAction() const;

 UnityEngine::XR::XRNode __declspec(property(get=__get_node, put=__set_node))  node;

constexpr void __set_node(UnityEngine::XR::XRNode value) ;

constexpr UnityEngine::XR::XRNode __get_node() const;

 GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName __declspec(property(get=__get__manufacturerName_k__BackingField, put=__set__manufacturerName_k__BackingField))  _manufacturerName_k__BackingField;

constexpr void __set__manufacturerName_k__BackingField(GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName value) ;

constexpr GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName __get__manufacturerName_k__BackingField() const;

 GlobalNamespace::IUnityXRHapticsHandler __declspec(property(get=__get__hapticsHandler, put=__set__hapticsHandler))  _hapticsHandler;

constexpr void __set__hapticsHandler(GlobalNamespace::IUnityXRHapticsHandler value) ;

constexpr GlobalNamespace::IUnityXRHapticsHandler __get__hapticsHandler() const;


// Properties

 GlobalNamespace::IUnityXRHapticsHandler __declspec(property(get=get_hapticsHandler))  hapticsHandler;

 GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName __declspec(property(get=get_manufacturerName, put=set_manufacturerName))  manufacturerName;


// Methods

/// @brief Method get_hapticsHandler addr 0x1f8b9c4 size 0x8 virtual false final false
 GlobalNamespace::IUnityXRHapticsHandler get_hapticsHandler() ;

/// @brief Method get_manufacturerName addr 0x1f8b9cc size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName get_manufacturerName() ;

/// @brief Method set_manufacturerName addr 0x1f8b9d4 size 0x8 virtual false final false
 void set_manufacturerName(GlobalNamespace::GlobalNamespace__UnityXRHelper__VRControllerManufacturerName value) ;

static GlobalNamespace::UnityXRController New_ctor(UnityEngine::XR::XRNode node, UnityEngine::InputSystem::InputAction positionAction, UnityEngine::InputSystem::InputAction rotationAction, UnityEngine::InputSystem::InputAction thumbstickAction) ;

/// @brief Method .ctor addr 0x1f8b9dc size 0xd0 virtual false final false
 void _ctor(UnityEngine::XR::XRNode node, UnityEngine::InputSystem::InputAction positionAction, UnityEngine::InputSystem::InputAction rotationAction, UnityEngine::InputSystem::InputAction thumbstickAction) ;

/// @brief Method SetupController addr 0x1f8baac size 0x34 virtual false final false
 bool SetupController(UnityEngine::XR::InputDevice device, UnityEngine::MonoBehaviour coroutineRunner) ;

/// @brief Method UpdateHapticsHandler addr 0x1f8bc30 size 0x190 virtual false final false
 void UpdateHapticsHandler(UnityEngine::MonoBehaviour coroutineRunner) ;

/// @brief Method TryToUpdateManufacturerName addr 0x1f8bae0 size 0x150 virtual false final false
 bool TryToUpdateManufacturerName(UnityEngine::XR::InputDevice device) ;

/// @brief Method ResetManufacturerName addr 0x1f8bdc0 size 0x8 virtual false final false
 void ResetManufacturerName() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__UnityXRController__Configuration);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__UnityXRController__Configuration, "", "UnityXRController/Configuration");
NEED_NO_BOX(GlobalNamespace::UnityXRController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityXRController, "", "UnityXRController");
