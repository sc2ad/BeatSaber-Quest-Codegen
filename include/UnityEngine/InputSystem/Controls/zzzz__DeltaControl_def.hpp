#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector2Control_def.hpp"
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class DeltaControl;
}
// Type: UnityEngine.InputSystem.Controls::DeltaControl
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6727))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6713))
// CS Name: UnityEngine.InputSystem.Controls.DeltaControl
class CORDL_TYPE DeltaControl : public UnityEngine::InputSystem::Controls::Vector2Control {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x120};

virtual ~DeltaControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "DeltaControl", modifiers: " const&", def_value: None }]
constexpr DeltaControl(DeltaControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DeltaControl", modifiers: "&&", def_value: None }]
constexpr DeltaControl(DeltaControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DeltaControl(void* ptr) noexcept : UnityEngine::InputSystem::Controls::Vector2Control(ptr) {
}


  constexpr DeltaControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DeltaControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DeltaControl& operator=(DeltaControl&& o) noexcept = default;
  constexpr DeltaControl& operator=(DeltaControl const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__up_k__BackingField, put=__set__up_k__BackingField))  _up_k__BackingField;

constexpr void __set__up_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__up_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__down_k__BackingField, put=__set__down_k__BackingField))  _down_k__BackingField;

constexpr void __set__down_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__down_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__left_k__BackingField, put=__set__left_k__BackingField))  _left_k__BackingField;

constexpr void __set__left_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__left_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__right_k__BackingField, put=__set__right_k__BackingField))  _right_k__BackingField;

constexpr void __set__right_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__right_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_up, put=set_up))  up;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_down, put=set_down))  down;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_left, put=set_left))  left;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_right, put=set_right))  right;


// Methods

/// @brief Method get_up addr 0x29779a8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_up() ;

/// @brief Method set_up addr 0x29779b0 size 0x8 virtual false final false
 void set_up(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_down addr 0x29779b8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_down() ;

/// @brief Method set_down addr 0x29779c0 size 0x8 virtual false final false
 void set_down(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_left addr 0x29779c8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_left() ;

/// @brief Method set_left addr 0x29779d0 size 0x8 virtual false final false
 void set_left(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_right addr 0x29779d8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_right() ;

/// @brief Method set_right addr 0x29779e0 size 0x8 virtual false final false
 void set_right(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method FinishSetup addr 0x29779e8 size 0xf8 virtual true final false
 void FinishSetup() ;

static UnityEngine::InputSystem::Controls::DeltaControl New_ctor() ;

/// @brief Method .ctor addr 0x2977b80 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Controls
NEED_NO_BOX(UnityEngine::InputSystem::Controls::DeltaControl);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Controls::DeltaControl, "UnityEngine.InputSystem.Controls", "DeltaControl");
