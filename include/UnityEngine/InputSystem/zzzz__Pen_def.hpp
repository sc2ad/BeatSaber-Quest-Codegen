#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__Pointer_def.hpp"
namespace {
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem {
struct PenButton;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class Pen;
}
// Type: UnityEngine.InputSystem::Pen
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6330))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6329))
// CS Name: UnityEngine.InputSystem.Pen
class CORDL_TYPE Pen : public ::UnityEngine::InputSystem::Pointer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1c8};

virtual ~Pen() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pen", modifiers: " const&", def_value: None }]
constexpr Pen(Pen const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pen", modifiers: "&&", def_value: None }]
constexpr Pen(Pen&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pen(void* ptr) noexcept : ::UnityEngine::InputSystem::Pointer(ptr) {
}


  constexpr Pen& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pen& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pen& operator=(Pen&& o) noexcept = default;
  constexpr Pen& operator=(Pen const& o) noexcept = default;
                


// Fields

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__tip_k__BackingField, put=__set__tip_k__BackingField))  _tip_k__BackingField;

constexpr void __set__tip_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__tip_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__eraser_k__BackingField, put=__set__eraser_k__BackingField))  _eraser_k__BackingField;

constexpr void __set__eraser_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__eraser_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__firstBarrelButton_k__BackingField, put=__set__firstBarrelButton_k__BackingField))  _firstBarrelButton_k__BackingField;

constexpr void __set__firstBarrelButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__firstBarrelButton_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__secondBarrelButton_k__BackingField, put=__set__secondBarrelButton_k__BackingField))  _secondBarrelButton_k__BackingField;

constexpr void __set__secondBarrelButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__secondBarrelButton_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__thirdBarrelButton_k__BackingField, put=__set__thirdBarrelButton_k__BackingField))  _thirdBarrelButton_k__BackingField;

constexpr void __set__thirdBarrelButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__thirdBarrelButton_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__fourthBarrelButton_k__BackingField, put=__set__fourthBarrelButton_k__BackingField))  _fourthBarrelButton_k__BackingField;

constexpr void __set__fourthBarrelButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__fourthBarrelButton_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__inRange_k__BackingField, put=__set__inRange_k__BackingField))  _inRange_k__BackingField;

constexpr void __set__inRange_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::ButtonControl __get__inRange_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__tilt_k__BackingField, put=__set__tilt_k__BackingField))  _tilt_k__BackingField;

constexpr void __set__tilt_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr ::UnityEngine::InputSystem::Controls::Vector2Control __get__tilt_k__BackingField() const;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__twist_k__BackingField, put=__set__twist_k__BackingField))  _twist_k__BackingField;

constexpr void __set__twist_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr ::UnityEngine::InputSystem::Controls::AxisControl __get__twist_k__BackingField() const;

static ::UnityEngine::InputSystem::Pen __declspec(property(get=__get__current_k__BackingField, put=__set__current_k__BackingField))  _current_k__BackingField;

static void __set__current_k__BackingField(::UnityEngine::InputSystem::Pen value) ;

static ::UnityEngine::InputSystem::Pen __get__current_k__BackingField() ;


// Properties

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_tip, put=set_tip))  tip;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_eraser, put=set_eraser))  eraser;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_firstBarrelButton, put=set_firstBarrelButton))  firstBarrelButton;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_secondBarrelButton, put=set_secondBarrelButton))  secondBarrelButton;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_thirdBarrelButton, put=set_thirdBarrelButton))  thirdBarrelButton;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_fourthBarrelButton, put=set_fourthBarrelButton))  fourthBarrelButton;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_inRange, put=set_inRange))  inRange;

 ::UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_tilt, put=set_tilt))  tilt;

 ::UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_twist, put=set_twist))  twist;

static ::UnityEngine::InputSystem::Pen __declspec(property(get=get_current, put=set_current))  current;

 ::UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method get_tip addr 0x28dbb48 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_tip() ;

/// @brief Method set_tip addr 0x28dbb50 size 0x8 virtual false final false
 void set_tip(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_eraser addr 0x28dbb58 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_eraser() ;

/// @brief Method set_eraser addr 0x28dbb60 size 0x8 virtual false final false
 void set_eraser(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_firstBarrelButton addr 0x28dbb68 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_firstBarrelButton() ;

/// @brief Method set_firstBarrelButton addr 0x28dbb70 size 0x8 virtual false final false
 void set_firstBarrelButton(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_secondBarrelButton addr 0x28dbb78 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_secondBarrelButton() ;

/// @brief Method set_secondBarrelButton addr 0x28dbb80 size 0x8 virtual false final false
 void set_secondBarrelButton(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_thirdBarrelButton addr 0x28dbb88 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_thirdBarrelButton() ;

/// @brief Method set_thirdBarrelButton addr 0x28dbb90 size 0x8 virtual false final false
 void set_thirdBarrelButton(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_fourthBarrelButton addr 0x28dbb98 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_fourthBarrelButton() ;

/// @brief Method set_fourthBarrelButton addr 0x28dbba0 size 0x8 virtual false final false
 void set_fourthBarrelButton(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_inRange addr 0x28dbba8 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_inRange() ;

/// @brief Method set_inRange addr 0x28dbbb0 size 0x8 virtual false final false
 void set_inRange(::UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_tilt addr 0x28dbbb8 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::Vector2Control get_tilt() ;

/// @brief Method set_tilt addr 0x28dbbc0 size 0x8 virtual false final false
 void set_tilt(::UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method get_twist addr 0x28dbbc8 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::Controls::AxisControl get_twist() ;

/// @brief Method set_twist addr 0x28dbbd0 size 0x8 virtual false final false
 void set_twist(::UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_current addr 0x28dbbd8 size 0x48 virtual false final false
static ::UnityEngine::InputSystem::Pen get_current() ;

/// @brief Method set_current addr 0x28dbc20 size 0x4c virtual false final false
static void set_current(::UnityEngine::InputSystem::Pen value) ;

/// @brief Method get_Item addr 0x28dbc6c size 0xf8 virtual false final false
 ::UnityEngine::InputSystem::Controls::ButtonControl get_Item(::UnityEngine::InputSystem::PenButton button) ;

/// @brief Method MakeCurrent addr 0x28dbd64 size 0x80 virtual true final false
 void MakeCurrent() ;

/// @brief Method OnRemoved addr 0x28dbde4 size 0x80 virtual true final false
 void OnRemoved() ;

/// @brief Method FinishSetup addr 0x28dbe64 size 0x1f4 virtual true final false
 void FinishSetup() ;

// Ctor Parameters []
explicit Pen() ;

/// @brief Method .ctor addr 0x28dc058 size 0x2c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Pen);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Pen, "UnityEngine.InputSystem", "Pen");
