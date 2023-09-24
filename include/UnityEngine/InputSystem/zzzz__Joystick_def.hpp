#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class StickControl;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class Joystick;
}
// Type: UnityEngine.InputSystem::Joystick
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6322))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6324))
// CS Name: UnityEngine.InputSystem.Joystick
class CORDL_TYPE Joystick : public UnityEngine::InputSystem::InputDevice {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x178};

virtual ~Joystick() = default;

// Ctor Parameters [CppParam { name: "", ty: "Joystick", modifiers: " const&", def_value: None }]
constexpr Joystick(Joystick const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Joystick", modifiers: "&&", def_value: None }]
constexpr Joystick(Joystick&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Joystick(void* ptr) noexcept : UnityEngine::InputSystem::InputDevice(ptr) {
}


  constexpr Joystick& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Joystick& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Joystick& operator=(Joystick&& o) noexcept = default;
  constexpr Joystick& operator=(Joystick const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=__get__trigger_k__BackingField, put=__set__trigger_k__BackingField))  _trigger_k__BackingField;

constexpr void __set__trigger_k__BackingField(UnityEngine::InputSystem::Controls::ButtonControl value) ;

constexpr UnityEngine::InputSystem::Controls::ButtonControl __get__trigger_k__BackingField() const;

 UnityEngine::InputSystem::Controls::StickControl __declspec(property(get=__get__stick_k__BackingField, put=__set__stick_k__BackingField))  _stick_k__BackingField;

constexpr void __set__stick_k__BackingField(UnityEngine::InputSystem::Controls::StickControl value) ;

constexpr UnityEngine::InputSystem::Controls::StickControl __get__stick_k__BackingField() const;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=__get__twist_k__BackingField, put=__set__twist_k__BackingField))  _twist_k__BackingField;

constexpr void __set__twist_k__BackingField(UnityEngine::InputSystem::Controls::AxisControl value) ;

constexpr UnityEngine::InputSystem::Controls::AxisControl __get__twist_k__BackingField() const;

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=__get__hatswitch_k__BackingField, put=__set__hatswitch_k__BackingField))  _hatswitch_k__BackingField;

constexpr void __set__hatswitch_k__BackingField(UnityEngine::InputSystem::Controls::Vector2Control value) ;

constexpr UnityEngine::InputSystem::Controls::Vector2Control __get__hatswitch_k__BackingField() const;

static UnityEngine::InputSystem::Joystick __declspec(property(get=__get__current_k__BackingField, put=__set__current_k__BackingField))  _current_k__BackingField;

static void __set__current_k__BackingField(UnityEngine::InputSystem::Joystick value) ;

static UnityEngine::InputSystem::Joystick __get__current_k__BackingField() ;

static int32_t __declspec(property(get=__get_s_JoystickCount, put=__set_s_JoystickCount))  s_JoystickCount;

static void __set_s_JoystickCount(int32_t value) ;

static int32_t __get_s_JoystickCount() ;

static ::ArrayW<UnityEngine::InputSystem::Joystick> __declspec(property(get=__get_s_Joysticks, put=__set_s_Joysticks))  s_Joysticks;

static void __set_s_Joysticks(::ArrayW<UnityEngine::InputSystem::Joystick> value) ;

static ::ArrayW<UnityEngine::InputSystem::Joystick> __get_s_Joysticks() ;


// Properties

 UnityEngine::InputSystem::Controls::ButtonControl __declspec(property(get=get_trigger, put=set_trigger))  trigger;

 UnityEngine::InputSystem::Controls::StickControl __declspec(property(get=get_stick, put=set_stick))  stick;

 UnityEngine::InputSystem::Controls::AxisControl __declspec(property(get=get_twist, put=set_twist))  twist;

 UnityEngine::InputSystem::Controls::Vector2Control __declspec(property(get=get_hatswitch, put=set_hatswitch))  hatswitch;

static UnityEngine::InputSystem::Joystick __declspec(property(get=get_current, put=set_current))  current;

static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Joystick> __declspec(property(get=get_all))  all;


// Methods

/// @brief Method get_trigger addr 0x28d82a0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::ButtonControl get_trigger() ;

/// @brief Method set_trigger addr 0x28d82a8 size 0x8 virtual false final false
 void set_trigger(UnityEngine::InputSystem::Controls::ButtonControl value) ;

/// @brief Method get_stick addr 0x28d82b0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::StickControl get_stick() ;

/// @brief Method set_stick addr 0x28d82b8 size 0x8 virtual false final false
 void set_stick(UnityEngine::InputSystem::Controls::StickControl value) ;

/// @brief Method get_twist addr 0x28d82c0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::AxisControl get_twist() ;

/// @brief Method set_twist addr 0x28d82c8 size 0x8 virtual false final false
 void set_twist(UnityEngine::InputSystem::Controls::AxisControl value) ;

/// @brief Method get_hatswitch addr 0x28d82d0 size 0x8 virtual false final false
 UnityEngine::InputSystem::Controls::Vector2Control get_hatswitch() ;

/// @brief Method set_hatswitch addr 0x28d82d8 size 0x8 virtual false final false
 void set_hatswitch(UnityEngine::InputSystem::Controls::Vector2Control value) ;

/// @brief Method get_current addr 0x28d82e0 size 0x48 virtual false final false
static UnityEngine::InputSystem::Joystick get_current() ;

/// @brief Method set_current addr 0x28d8328 size 0x4c virtual false final false
static void set_current(UnityEngine::InputSystem::Joystick value) ;

/// @brief Method get_all addr 0x28d8374 size 0x80 virtual false final false
static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Joystick> get_all() ;

/// @brief Method FinishSetup addr 0x28d83f4 size 0x13c virtual true final false
 void FinishSetup() ;

/// @brief Method MakeCurrent addr 0x28d8530 size 0x4c virtual true final false
 void MakeCurrent() ;

/// @brief Method OnAdded addr 0x28d857c size 0x78 virtual true final false
 void OnAdded() ;

/// @brief Method OnRemoved addr 0x28d85f4 size 0x118 virtual true final false
 void OnRemoved() ;

static UnityEngine::InputSystem::Joystick New_ctor() ;

/// @brief Method .ctor addr 0x28d870c size 0x2c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::Joystick);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Joystick, "UnityEngine.InputSystem", "Joystick");
