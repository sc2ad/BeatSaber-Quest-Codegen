#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__Vector2Control_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
struct ____UnityEngine__InputSystem__Controls__DpadControl__ButtonBits;
}
namespace UnityEngine::InputSystem::Controls {
class DpadControl;
}
namespace UnityEngine::InputSystem::Controls {
class ____UnityEngine__InputSystem__Controls__DpadControl__DpadAxisControl;
}
// Type: ::DpadAxisControl
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6711))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6717))
// CS Name: UnityEngine.InputSystem.Controls.DpadControl::DpadAxisControl
class CORDL_TYPE ____UnityEngine__InputSystem__Controls__DpadControl__DpadAxisControl : public ::UnityEngine::InputSystem::Controls::AxisControl {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x120};

virtual ~____UnityEngine__InputSystem__Controls__DpadControl__DpadAxisControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__Controls__DpadControl__DpadAxisControl", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__Controls__DpadControl__DpadAxisControl(____UnityEngine__InputSystem__Controls__DpadControl__DpadAxisControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__Controls__DpadControl__DpadAxisControl", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__Controls__DpadControl__DpadAxisControl(____UnityEngine__InputSystem__Controls__DpadControl__DpadAxisControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Controls__DpadControl__DpadAxisControl(void* ptr) noexcept : ::UnityEngine::InputSystem::Controls::AxisControl(ptr) {
}


  constexpr ____UnityEngine__InputSystem__Controls__DpadControl__DpadAxisControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__Controls__DpadControl__DpadAxisControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__Controls__DpadControl__DpadAxisControl& operator=(____UnityEngine__InputSystem__Controls__DpadControl__DpadAxisControl&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__Controls__DpadControl__DpadAxisControl& operator=(____UnityEngine__InputSystem__Controls__DpadControl__DpadAxisControl const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__component_k__BackingField, put=__set__component_k__BackingField))  _component_k__BackingField;

constexpr void __set__component_k__BackingField(int32_t value) ;

constexpr int32_t __get__component_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_component, put=set_component))  component;


// Methods

/// @brief Method get_component addr 0x29784dc size 0x8 virtual false final false
 int32_t get_component() ;

/// @brief Method set_component addr 0x29784e4 size 0x8 virtual false final false
 void set_component(int32_t value) ;

/// @brief Method FinishSetup addr 0x29784ec size 0x84 virtual true final false
 void FinishSetup() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x2978570 size 0x118 virtual true final false
 float_t ReadUnprocessedValueFromState(void* statePtr) ;

// Ctor Parameters []
explicit ____UnityEngine__InputSystem__Controls__DpadControl__DpadAxisControl() ;

/// @brief Method .ctor addr 0x2978688 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Controls
// Type: ::ButtonBits
namespace UnityEngine::InputSystem::Controls {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6718))
// CS Name: UnityEngine.InputSystem.Controls.DpadControl::ButtonBits
struct CORDL_TYPE ____UnityEngine__InputSystem__Controls__DpadControl__ButtonBits : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__Controls__DpadControl__ButtonBits(int32_t value__) noexcept;


                    constexpr ____UnityEngine__InputSystem__Controls__DpadControl__ButtonBits(____UnityEngine__InputSystem__Controls__DpadControl__ButtonBits const&) = default;
                    constexpr ____UnityEngine__InputSystem__Controls__DpadControl__ButtonBits(____UnityEngine__InputSystem__Controls__DpadControl__ButtonBits&&) = default;
                    constexpr ____UnityEngine__InputSystem__Controls__DpadControl__ButtonBits& operator=(____UnityEngine__InputSystem__Controls__DpadControl__ButtonBits const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__Controls__DpadControl__ButtonBits& operator=(____UnityEngine__InputSystem__Controls__DpadControl__ButtonBits&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Controls__DpadControl__ButtonBits(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__InputSystem__Controls__DpadControl__ButtonBits_Unwrapped : int32_t {
__Up = 0,
__Down = 1,
__Left = 2,
__Right = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__InputSystem__Controls__DpadControl__ButtonBits_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__InputSystem__Controls__DpadControl__ButtonBits_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Up offset 0
static ::UnityEngine::InputSystem::Controls::____UnityEngine__InputSystem__Controls__DpadControl__ButtonBits const Up;

/// @brief Field Down offset 0
static ::UnityEngine::InputSystem::Controls::____UnityEngine__InputSystem__Controls__DpadControl__ButtonBits const Down;

/// @brief Field Left offset 0
static ::UnityEngine::InputSystem::Controls::____UnityEngine__InputSystem__Controls__DpadControl__ButtonBits const Left;

/// @brief Field Right offset 0
static ::UnityEngine::InputSystem::Controls::____UnityEngine__InputSystem__Controls__DpadControl__ButtonBits const Right;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Controls
// Type: UnityEngine.InputSystem.Controls::DpadControl
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6727))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6719))
// CS Name: UnityEngine.InputSystem.Controls.DpadControl
class CORDL_TYPE DpadControl : public ::UnityEngine::InputSystem::Controls::Vector2Control {
public:
// Declarations
using ButtonBits = ::UnityEngine::InputSystem::Controls::____UnityEngine__InputSystem__Controls__DpadControl__ButtonBits;

using DpadAxisControl = ::UnityEngine::InputSystem::Controls::____UnityEngine__InputSystem__Controls__DpadControl__DpadAxisControl;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x120};

virtual ~DpadControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "DpadControl", modifiers: " const&", def_value: None }]
constexpr DpadControl(DpadControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DpadControl", modifiers: "&&", def_value: None }]
constexpr DpadControl(DpadControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DpadControl(void* ptr) noexcept : ::UnityEngine::InputSystem::Controls::Vector2Control(ptr) {
}


  constexpr DpadControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DpadControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DpadControl& operator=(DpadControl&& o) noexcept = default;
  constexpr DpadControl& operator=(DpadControl const& o) noexcept = default;
                


// Fields

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__up_k__BackingField, put=__set__up_k__BackingField))  _up_k__BackingField;

constexpr void __set__up_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__up_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__down_k__BackingField, put=__set__down_k__BackingField))  _down_k__BackingField;

constexpr void __set__down_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__down_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__left_k__BackingField, put=__set__left_k__BackingField))  _left_k__BackingField;

constexpr void __set__left_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__left_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__right_k__BackingField, put=__set__right_k__BackingField))  _right_k__BackingField;

constexpr void __set__right_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__right_k__BackingField() const;


// Properties

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_up, put=set_up))  up;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_down, put=set_down))  down;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_left, put=set_left))  left;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_right, put=set_right))  right;


// Methods

/// @brief Method get_up addr 0x2977ee8 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_up() ;

/// @brief Method set_up addr 0x2977ef0 size 0x8 virtual false final false
 void set_up(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_down addr 0x2977ef8 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_down() ;

/// @brief Method set_down addr 0x2977f00 size 0x8 virtual false final false
 void set_down(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_left addr 0x2977f08 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_left() ;

/// @brief Method set_left addr 0x2977f10 size 0x8 virtual false final false
 void set_left(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_right addr 0x2977f18 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_right() ;

/// @brief Method set_right addr 0x2977f20 size 0x8 virtual false final false
 void set_right(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

// Ctor Parameters []
explicit DpadControl() ;

/// @brief Method .ctor addr 0x2977f28 size 0x70 virtual false final false
 void _ctor() ;

/// @brief Method FinishSetup addr 0x2977f98 size 0xf4 virtual true final false
 void FinishSetup() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x297808c size 0x238 virtual true final false
 ::UnityEngine::Vector2 ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x2978320 size 0x1ac virtual true final false
 void WriteValueIntoState(::UnityEngine::Vector2 value, void* statePtr) ;

/// @brief Method MakeDpadVector addr 0x29782c4 size 0x5c virtual false final false
static ::UnityEngine::Vector2 MakeDpadVector(bool up, bool down, bool left, bool right, bool normalize) ;

/// @brief Method MakeDpadVector addr 0x29784cc size 0x10 virtual false final false
static ::UnityEngine::Vector2 MakeDpadVector(float_t up, float_t down, float_t left, float_t right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Controls
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::____UnityEngine__InputSystem__Controls__DpadControl__ButtonBits, "UnityEngine.InputSystem.Controls", "DpadControl/ButtonBits");
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::DpadControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::DpadControl, "UnityEngine.InputSystem.Controls", "DpadControl");
NEED_NO_BOX(::UnityEngine::InputSystem::Controls::____UnityEngine__InputSystem__Controls__DpadControl__DpadAxisControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Controls::____UnityEngine__InputSystem__Controls__DpadControl__DpadAxisControl, "UnityEngine.InputSystem.Controls", "DpadControl/DpadAxisControl");
