#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRController_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace UnityEngine::XR::WindowsMR::Input {
class HololensHand;
}
// Type: UnityEngine.XR.WindowsMR.Input::HololensHand
namespace UnityEngine::XR::WindowsMR::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6408))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6208))
// CS Name: UnityEngine.XR.WindowsMR.Input.HololensHand
class CORDL_TYPE HololensHand : public UnityEngine::InputSystem::XR::XRController {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x198};

virtual ~HololensHand() = default;

// Ctor Parameters [CppParam { name: "", ty: "HololensHand", modifiers: " const&", def_value: None }]
constexpr HololensHand(HololensHand const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HololensHand", modifiers: "&&", def_value: None }]
constexpr HololensHand(HololensHand&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HololensHand(void* ptr) noexcept : UnityEngine::InputSystem::XR::XRController(ptr) {
}


  constexpr HololensHand& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HololensHand& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HololensHand& operator=(HololensHand&& o) noexcept = default;
  constexpr HololensHand& operator=(HololensHand const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__deviceVelocity_k__BackingField, put=__set__deviceVelocity_k__BackingField))  _deviceVelocity_k__BackingField;

constexpr void __set__deviceVelocity_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__deviceVelocity_k__BackingField() const;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__airTap_k__BackingField, put=__set__airTap_k__BackingField))  _airTap_k__BackingField;

constexpr void __set__airTap_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__airTap_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__sourceLossRisk_k__BackingField, put=__set__sourceLossRisk_k__BackingField))  _sourceLossRisk_k__BackingField;

constexpr void __set__sourceLossRisk_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__sourceLossRisk_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=__get__sourceLossMitigationDirection_k__BackingField, put=__set__sourceLossMitigationDirection_k__BackingField))  _sourceLossMitigationDirection_k__BackingField;

constexpr void __set__sourceLossMitigationDirection_k__BackingField(UnityEngine::InputSystem::Controls::Vector3Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector3Control __get__sourceLossMitigationDirection_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_deviceVelocity, put=set_deviceVelocity))  deviceVelocity;

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_airTap, put=set_airTap))  airTap;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_sourceLossRisk, put=set_sourceLossRisk))  sourceLossRisk;

 UnityEngine::InputSystem::Controls::Vector3Control __declspec(property(get=get_sourceLossMitigationDirection, put=set_sourceLossMitigationDirection))  sourceLossMitigationDirection;


// Methods

/// @brief Method get_deviceVelocity addr 0x28a3568 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_deviceVelocity() ;

/// @brief Method set_deviceVelocity addr 0x28a3570 size 0x8 virtual false final false
 void set_deviceVelocity(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method get_airTap addr 0x28a3578 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_airTap() ;

/// @brief Method set_airTap addr 0x28a3580 size 0x8 virtual false final false
 void set_airTap(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_sourceLossRisk addr 0x28a3588 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_sourceLossRisk() ;

/// @brief Method set_sourceLossRisk addr 0x28a3590 size 0x8 virtual false final false
 void set_sourceLossRisk(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_sourceLossMitigationDirection addr 0x28a3598 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector3Control get_sourceLossMitigationDirection() ;

/// @brief Method set_sourceLossMitigationDirection addr 0x28a35a0 size 0x8 virtual false final false
 void set_sourceLossMitigationDirection(UnityEngine::InputSystem::Controls::Vector3Control value) ;

/// @brief Method FinishSetup addr 0x28a35a8 size 0x12c virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit HololensHand() ;

/// @brief Method .ctor addr 0x28a36d4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::WindowsMR::Input
NEED_NO_BOX(UnityEngine::XR::WindowsMR::Input::HololensHand);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::WindowsMR::Input::HololensHand, "UnityEngine.XR.WindowsMR.Input", "HololensHand");
