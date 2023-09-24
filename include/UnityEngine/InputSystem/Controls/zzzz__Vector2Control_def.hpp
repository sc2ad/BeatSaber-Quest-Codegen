#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
// Type: UnityEngine.InputSystem.Controls::Vector2Control
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6299)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6299), inst: 393 }), TypeDefinitionIndex(TypeDefinitionIndex(10184))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6727))
// CS Name: UnityEngine.InputSystem.Controls.Vector2Control
class CORDL_TYPE Vector2Control : public UnityEngine::InputSystem::InputControl_1<UnityEngine::Vector2> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x100};

virtual ~Vector2Control() = default;

// Ctor Parameters [CppParam { name: "", ty: "Vector2Control", modifiers: " const&", def_value: None }]
constexpr Vector2Control(Vector2Control const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Vector2Control", modifiers: "&&", def_value: None }]
constexpr Vector2Control(Vector2Control&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Vector2Control(void* ptr) noexcept : UnityEngine::InputSystem::InputControl_1<UnityEngine::Vector2>(ptr) {
}


  constexpr Vector2Control& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Vector2Control& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Vector2Control& operator=(Vector2Control&& o) noexcept = default;
  constexpr Vector2Control& operator=(Vector2Control const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__x_k__BackingField, put=__set__x_k__BackingField))  _x_k__BackingField;

constexpr void __set__x_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__x_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__y_k__BackingField, put=__set__y_k__BackingField))  _y_k__BackingField;

constexpr void __set__y_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__y_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_x, put=set_x))  x;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_y, put=set_y))  y;


// Methods

/// @brief Method get_x addr 0x29795f0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_x() ;

/// @brief Method set_x addr 0x29795f8 size 0x8 virtual false final false
 void set_x(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_y addr 0x2979600 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_y() ;

/// @brief Method set_y addr 0x2979608 size 0x8 virtual false final false
 void set_y(UnityEngine::InputSystem::Controls::AxisControl value) ;

static UnityEngine::InputSystem::Controls::Vector2Control New_ctor() ;

/// @brief Method .ctor addr 0x2977b84 size 0x88 virtual false final false
 void _ctor() ;

/// @brief Method FinishSetup addr 0x2977ae0 size 0xa0 virtual true final false
 void FinishSetup() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x2979610 size 0x68 virtual true final false
 UnityEngine::Vector2 ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x2979678 size 0x60 virtual true final false
 void WriteValueIntoState(UnityEngine::Vector2 value, void* statePtr) ;

/// @brief Method EvaluateMagnitude addr 0x29796d8 size 0xb4 virtual true final false
 float_t EvaluateMagnitude(void* statePtr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Controls
NEED_NO_BOX(UnityEngine::InputSystem::Controls::Vector2Control);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Controls::Vector2Control, "UnityEngine.InputSystem.Controls", "Vector2Control");
