#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
namespace {
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
// Type: UnityEngine.InputSystem.Controls::QuaternionControl
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6299)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6299), inst: 3222 }), TypeDefinitionIndex(TypeDefinitionIndex(10193))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6722))
// CS Name: UnityEngine.InputSystem.Controls.QuaternionControl
class CORDL_TYPE QuaternionControl : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Quaternion> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x110};

virtual ~QuaternionControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "QuaternionControl", modifiers: " const&", def_value: None }]
constexpr QuaternionControl(QuaternionControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "QuaternionControl", modifiers: "&&", def_value: None }]
constexpr QuaternionControl(QuaternionControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit QuaternionControl(void* ptr) noexcept : ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::Quaternion>(ptr) {
}


  constexpr QuaternionControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr QuaternionControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr QuaternionControl& operator=(QuaternionControl&& o) noexcept = default;
  constexpr QuaternionControl& operator=(QuaternionControl const& o) noexcept = default;
                


// Fields

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__x_k__BackingField, put=__set__x_k__BackingField))  _x_k__BackingField;

constexpr void __set__x_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl __get__x_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__y_k__BackingField, put=__set__y_k__BackingField))  _y_k__BackingField;

constexpr void __set__y_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl __get__y_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__z_k__BackingField, put=__set__z_k__BackingField))  _z_k__BackingField;

constexpr void __set__z_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl __get__z_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__w_k__BackingField, put=__set__w_k__BackingField))  _w_k__BackingField;

constexpr void __set__w_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl __get__w_k__BackingField() const;


// Properties

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_x, put=set_x))  x;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_y, put=set_y))  y;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_z, put=set_z))  z;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_w, put=set_w))  w;


// Methods

/// @brief Method get_x addr 0x29788d8 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::AxisControl get_x() ;

/// @brief Method set_x addr 0x29788e0 size 0x8 virtual false final false
 void set_x(::UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_y addr 0x29788e8 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::AxisControl get_y() ;

/// @brief Method set_y addr 0x29788f0 size 0x8 virtual false final false
 void set_y(::UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_z addr 0x29788f8 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::AxisControl get_z() ;

/// @brief Method set_z addr 0x2978900 size 0x8 virtual false final false
 void set_z(::UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_w addr 0x2978908 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::AxisControl get_w() ;

/// @brief Method set_w addr 0x2978910 size 0x8 virtual false final false
 void set_w(::UnityEngine::InputSystem::Controls::AxisControl value) ;

// Ctor Parameters []
explicit QuaternionControl() ;

/// @brief Method .ctor addr 0x2978918 size 0x90 virtual false final false
 void _ctor() ;

/// @brief Method FinishSetup addr 0x29789a8 size 0xf8 virtual true final false
 void FinishSetup() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x2978aa0 size 0xcc virtual true final false
 ::UnityEngine::Quaternion ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x2978b6c size 0xb0 virtual true final false
 void WriteValueIntoState(::UnityEngine::Quaternion value, void* statePtr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Controls
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::QuaternionControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::QuaternionControl, "UnityEngine.InputSystem.Controls", "QuaternionControl");
