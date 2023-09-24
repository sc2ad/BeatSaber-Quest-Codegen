#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem {
class Touchscreen;
}
namespace UnityEngine::InputSystem {
struct TouchPhase;
}
namespace UnityEngine::InputSystem {
class Pointer;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateChangeMonitor;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::EnhancedTouch {
class TouchSimulation;
}
// Type: UnityEngine.InputSystem.EnhancedTouch::TouchSimulation
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6505))
// CS Name: UnityEngine.InputSystem.EnhancedTouch.TouchSimulation
class CORDL_TYPE TouchSimulation : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~TouchSimulation() = default;

// Ctor Parameters [CppParam { name: "", ty: "TouchSimulation", modifiers: " const&", def_value: None }]
constexpr TouchSimulation(TouchSimulation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TouchSimulation", modifiers: "&&", def_value: None }]
constexpr TouchSimulation(TouchSimulation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TouchSimulation(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TouchSimulation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TouchSimulation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TouchSimulation& operator=(TouchSimulation&& o) noexcept = default;
  constexpr TouchSimulation& operator=(TouchSimulation const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Touchscreen __declspec(property(get=__get__simulatedTouchscreen_k__BackingField, put=__set__simulatedTouchscreen_k__BackingField))  _simulatedTouchscreen_k__BackingField;

constexpr void __set__simulatedTouchscreen_k__BackingField(UnityEngine::InputSystem::Touchscreen value) ;

constexpr UnityEngine::InputSystem::Touchscreen __get__simulatedTouchscreen_k__BackingField() const;

 int32_t __declspec(property(get=__get_m_NumPointers, put=__set_m_NumPointers))  m_NumPointers;

constexpr void __set_m_NumPointers(int32_t value) ;

constexpr int32_t __get_m_NumPointers() const;

 ::ArrayW<UnityEngine::InputSystem::Pointer> __declspec(property(get=__get_m_Pointers, put=__set_m_Pointers))  m_Pointers;

constexpr void __set_m_Pointers(::ArrayW<UnityEngine::InputSystem::Pointer> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::Pointer> __get_m_Pointers() const;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=__get_m_CurrentPositions, put=__set_m_CurrentPositions))  m_CurrentPositions;

constexpr void __set_m_CurrentPositions(::ArrayW<UnityEngine::Vector2> value) ;

constexpr ::ArrayW<UnityEngine::Vector2> __get_m_CurrentPositions() const;

 ::ArrayW<UnityEngine::InputSystem::Controls::ButtonControl> __declspec(property(get=__get_m_Touches, put=__set_m_Touches))  m_Touches;

constexpr void __set_m_Touches(::ArrayW<UnityEngine::InputSystem::Controls::ButtonControl> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::Controls::ButtonControl> __get_m_Touches() const;

 int32_t __declspec(property(get=__get_m_LastTouchId, put=__set_m_LastTouchId))  m_LastTouchId;

constexpr void __set_m_LastTouchId(int32_t value) ;

constexpr int32_t __get_m_LastTouchId() const;

 int32_t __declspec(property(get=__get_m_PrimaryTouchIndex, put=__set_m_PrimaryTouchIndex))  m_PrimaryTouchIndex;

constexpr void __set_m_PrimaryTouchIndex(int32_t value) ;

constexpr int32_t __get_m_PrimaryTouchIndex() const;

 System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange> __declspec(property(get=__get_m_OnDeviceChange, put=__set_m_OnDeviceChange))  m_OnDeviceChange;

constexpr void __set_m_OnDeviceChange(System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange> value) ;

constexpr System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange> __get_m_OnDeviceChange() const;

 System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice> __declspec(property(get=__get_m_OnEvent, put=__set_m_OnEvent))  m_OnEvent;

constexpr void __set_m_OnEvent(System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice> value) ;

constexpr System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice> __get_m_OnEvent() const;

static UnityEngine::InputSystem::EnhancedTouch::TouchSimulation __declspec(property(get=__get_s_Instance, put=__set_s_Instance))  s_Instance;

static void __set_s_Instance(UnityEngine::InputSystem::EnhancedTouch::TouchSimulation value) ;

static UnityEngine::InputSystem::EnhancedTouch::TouchSimulation __get_s_Instance() ;


// Properties

 UnityEngine::InputSystem::Touchscreen __declspec(property(get=get_simulatedTouchscreen, put=set_simulatedTouchscreen))  simulatedTouchscreen;

static UnityEngine::InputSystem::EnhancedTouch::TouchSimulation __declspec(property(get=get_instance))  instance;


// Methods

/// @brief Method get_simulatedTouchscreen addr 0x295123c size 0x8 virtual false final false
 UnityEngine::InputSystem::Touchscreen get_simulatedTouchscreen() ;

/// @brief Method set_simulatedTouchscreen addr 0x2951244 size 0x8 virtual false final false
 void set_simulatedTouchscreen(UnityEngine::InputSystem::Touchscreen value) ;

/// @brief Method get_instance addr 0x295124c size 0x48 virtual false final false
static UnityEngine::InputSystem::EnhancedTouch::TouchSimulation get_instance() ;

/// @brief Method Enable addr 0x2951294 size 0x19c virtual false final false
static void Enable() ;

/// @brief Method Disable addr 0x2951430 size 0xd8 virtual false final false
static void Disable() ;

/// @brief Method Destroy addr 0x2951508 size 0xd0 virtual false final false
static void Destroy() ;

/// @brief Method AddPointer addr 0x29515d8 size 0x160 virtual false final false
 void AddPointer(UnityEngine::InputSystem::Pointer pointer) ;

/// @brief Method RemovePointer addr 0x2951738 size 0x1d0 virtual false final false
 void RemovePointer(UnityEngine::InputSystem::Pointer pointer) ;

/// @brief Method OnEvent addr 0x2951c90 size 0x514 virtual false final false
 void OnEvent(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method OnDeviceChange addr 0x295221c size 0x144 virtual false final false
 void OnDeviceChange(UnityEngine::InputSystem::InputDevice device, UnityEngine::InputSystem::InputDeviceChange change) ;

/// @brief Method OnEnable addr 0x2952360 size 0x3bc virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x295289c size 0x164 virtual false final false
 void OnDisable() ;

/// @brief Method UpdateTouch addr 0x2951908 size 0x388 virtual false final false
 void UpdateTouch(int32_t touchIndex, int32_t pointerIndex, UnityEngine::InputSystem::TouchPhase phase, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged addr 0x2952cf4 size 0x4 virtual true final true
 void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged(UnityEngine::InputSystem::InputControl control, double_t time, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t monitorIndex) ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired addr 0x2952cf8 size 0x4 virtual true final true
 void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired(UnityEngine::InputSystem::InputControl control, double_t time, int64_t monitorIndex, int32_t timerIndex) ;

/// @brief Method InstallStateChangeMonitors addr 0x2952cfc size 0x4 virtual false final false
 void InstallStateChangeMonitors(int32_t startIndex) ;

/// @brief Method OnSourceControlChangedValue addr 0x2952d00 size 0x4 virtual false final false
 void OnSourceControlChangedValue(UnityEngine::InputSystem::InputControl control, double_t time, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t sourceDeviceAndButtonIndex) ;

/// @brief Method UninstallStateChangeMonitors addr 0x2952d04 size 0x4 virtual false final false
 void UninstallStateChangeMonitors(int32_t startIndex) ;

static UnityEngine::InputSystem::EnhancedTouch::TouchSimulation New_ctor() ;

/// @brief Method .ctor addr 0x2952d08 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::EnhancedTouch
NEED_NO_BOX(UnityEngine::InputSystem::EnhancedTouch::TouchSimulation);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::EnhancedTouch::TouchSimulation, "UnityEngine.InputSystem.EnhancedTouch", "TouchSimulation");
