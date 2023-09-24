#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Type: UnityEngine.InputSystem.Controls::Vector3Control
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10190)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6299), inst: 394 }), TypeDefinitionIndex(TypeDefinitionIndex(6299))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6728))
// CS Name: UnityEngine.InputSystem.Controls.Vector3Control
class CORDL_TYPE Vector3Control : public UnityEngine::InputSystem::InputControl_1<UnityEngine::Vector3> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x108};

virtual ~Vector3Control() = default;

// Ctor Parameters [CppParam { name: "", ty: "Vector3Control", modifiers: " const&", def_value: None }]
constexpr Vector3Control(Vector3Control const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Vector3Control", modifiers: "&&", def_value: None }]
constexpr Vector3Control(Vector3Control&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Vector3Control(void* ptr) noexcept : UnityEngine::InputSystem::InputControl_1<UnityEngine::Vector3>(ptr) {
}


  constexpr Vector3Control& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Vector3Control& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Vector3Control& operator=(Vector3Control&& o) noexcept = default;
  constexpr Vector3Control& operator=(Vector3Control const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__x_k__BackingField, put=__set__x_k__BackingField))  _x_k__BackingField;

constexpr void __set__x_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__x_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__y_k__BackingField, put=__set__y_k__BackingField))  _y_k__BackingField;

constexpr void __set__y_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__y_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__z_k__BackingField, put=__set__z_k__BackingField))  _z_k__BackingField;

constexpr void __set__z_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__z_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_x, put=set_x))  x;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_y, put=set_y))  y;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_z, put=set_z))  z;


// Methods

/// @brief Method get_x addr 0x297978c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_x() ;

/// @brief Method set_x addr 0x2979794 size 0x8 virtual false final false
 void set_x(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_y addr 0x297979c size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_y() ;

/// @brief Method set_y addr 0x29797a4 size 0x8 virtual false final false
 void set_y(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_z addr 0x29797ac size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_z() ;

/// @brief Method set_z addr 0x29797b4 size 0x8 virtual false final false
 void set_z(UnityEngine::InputSystem::Controls::AxisControl value) ;

static UnityEngine::InputSystem::Controls::Vector3Control New_ctor() ;

/// @brief Method .ctor addr 0x29797bc size 0x88 virtual false final false
 void _ctor() ;

/// @brief Method FinishSetup addr 0x2979844 size 0xd0 virtual true final false
 void FinishSetup() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x2979914 size 0x8c virtual true final false
 UnityEngine::Vector3 ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x29799a0 size 0x84 virtual true final false
 void WriteValueIntoState(UnityEngine::Vector3 value, void* statePtr) ;

/// @brief Method EvaluateMagnitude addr 0x2979a24 size 0xc8 virtual true final false
 float_t EvaluateMagnitude(void* statePtr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Controls
NEED_NO_BOX(UnityEngine::InputSystem::Controls::Vector3Control);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Controls::Vector3Control, "UnityEngine.InputSystem.Controls", "Vector3Control");
