#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::InputSystem::UI {
class InputSystemUIInputModule;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem::Users {
struct InputUserChange;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TDelegate>
struct CallbackArray_1;
}
namespace UnityEngine::InputSystem {
struct InputControlScheme;
}
namespace UnityEngine::InputSystem::Users {
struct InputUser;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
struct PlayerNotifications;
}
namespace UnityEngine::InputSystem {
class InputValue;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputAction__CallbackContext;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class PlayerInput;
}
namespace UnityEngine::InputSystem {
class UnityEngine__InputSystem__PlayerInput__ActionEvent;
}
namespace UnityEngine::InputSystem {
class UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent;
}
namespace UnityEngine::InputSystem {
class UnityEngine__InputSystem__PlayerInput__DeviceLostEvent;
}
namespace UnityEngine::InputSystem {
class UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent;
}
// Type: ::ActionEvent
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 408 }), TypeDefinitionIndex(TypeDefinitionIndex(10401)), TypeDefinitionIndex(TypeDefinitionIndex(6216))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6394))
// CS Name: UnityEngine.InputSystem.PlayerInput::ActionEvent
class CORDL_TYPE UnityEngine__InputSystem__PlayerInput__ActionEvent : public UnityEngine::Events::UnityEvent_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UnityEngine__InputSystem__PlayerInput__ActionEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__PlayerInput__ActionEvent", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__PlayerInput__ActionEvent(UnityEngine__InputSystem__PlayerInput__ActionEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__PlayerInput__ActionEvent", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__PlayerInput__ActionEvent(UnityEngine__InputSystem__PlayerInput__ActionEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__PlayerInput__ActionEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>(ptr) {
}


  constexpr UnityEngine__InputSystem__PlayerInput__ActionEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__PlayerInput__ActionEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__PlayerInput__ActionEvent& operator=(UnityEngine__InputSystem__PlayerInput__ActionEvent&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__PlayerInput__ActionEvent& operator=(UnityEngine__InputSystem__PlayerInput__ActionEvent const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_ActionId, put=__set_m_ActionId))  m_ActionId;

constexpr void __set_m_ActionId(::StringW value) ;

constexpr ::StringW __get_m_ActionId() const;

 ::StringW __declspec(property(get=__get_m_ActionName, put=__set_m_ActionName))  m_ActionName;

constexpr void __set_m_ActionName(::StringW value) ;

constexpr ::StringW __get_m_ActionName() const;


// Properties

 ::StringW __declspec(property(get=get_actionId))  actionId;

 ::StringW __declspec(property(get=get_actionName))  actionName;


// Methods

/// @brief Method get_actionId addr 0x2930418 size 0x8 virtual false final false
 ::StringW get_actionId() ;

/// @brief Method get_actionName addr 0x2930420 size 0x8 virtual false final false
 ::StringW get_actionName() ;

// Ctor Parameters []
explicit UnityEngine__InputSystem__PlayerInput__ActionEvent() ;

/// @brief Method .ctor addr 0x2930428 size 0x48 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "action", ty: "UnityEngine::InputSystem::InputAction", modifiers: "", def_value: None }]
explicit UnityEngine__InputSystem__PlayerInput__ActionEvent(UnityEngine::InputSystem::InputAction action) ;

/// @brief Method .ctor addr 0x2930470 size 0x1dc virtual false final false
 void _ctor(UnityEngine::InputSystem::InputAction action) ;

// Ctor Parameters [CppParam { name: "actionGUID", ty: "System::Guid", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit UnityEngine__InputSystem__PlayerInput__ActionEvent(System::Guid actionGUID, ::StringW name) ;

/// @brief Method .ctor addr 0x293064c size 0x74 virtual false final false
 void _ctor(System::Guid actionGUID, ::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::PlayerInput
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6398))
// CS Name: UnityEngine.InputSystem.PlayerInput
class CORDL_TYPE PlayerInput : public UnityEngine::MonoBehaviour {
public:
// Declarations
using ControlsChangedEvent = UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent;

using DeviceRegainedEvent = UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent;

using DeviceLostEvent = UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__DeviceLostEvent;

using ActionEvent = UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__ActionEvent;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x210};

virtual ~PlayerInput() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerInput", modifiers: " const&", def_value: None }]
constexpr PlayerInput(PlayerInput const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerInput", modifiers: "&&", def_value: None }]
constexpr PlayerInput(PlayerInput&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerInput(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PlayerInput& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerInput& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerInput& operator=(PlayerInput&& o) noexcept = default;
  constexpr PlayerInput& operator=(PlayerInput const& o) noexcept = default;
                


// Fields

/// @brief Field DeviceLostMessage offset 0
static constexpr ::ConstString  DeviceLostMessage{u"OnDeviceLost"};

/// @brief Field DeviceRegainedMessage offset 0
static constexpr ::ConstString  DeviceRegainedMessage{u"OnDeviceRegained"};

/// @brief Field ControlsChangedMessage offset 0
static constexpr ::ConstString  ControlsChangedMessage{u"OnControlsChanged"};

 UnityEngine::InputSystem::InputActionAsset __declspec(property(get=__get_m_Actions, put=__set_m_Actions))  m_Actions;

constexpr void __set_m_Actions(UnityEngine::InputSystem::InputActionAsset value) ;

constexpr UnityEngine::InputSystem::InputActionAsset __get_m_Actions() const;

 UnityEngine::InputSystem::PlayerNotifications __declspec(property(get=__get_m_NotificationBehavior, put=__set_m_NotificationBehavior))  m_NotificationBehavior;

constexpr void __set_m_NotificationBehavior(UnityEngine::InputSystem::PlayerNotifications value) ;

constexpr UnityEngine::InputSystem::PlayerNotifications __get_m_NotificationBehavior() const;

 UnityEngine::InputSystem::UI::InputSystemUIInputModule __declspec(property(get=__get_m_UIInputModule, put=__set_m_UIInputModule))  m_UIInputModule;

constexpr void __set_m_UIInputModule(UnityEngine::InputSystem::UI::InputSystemUIInputModule value) ;

constexpr UnityEngine::InputSystem::UI::InputSystemUIInputModule __get_m_UIInputModule() const;

 UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__DeviceLostEvent __declspec(property(get=__get_m_DeviceLostEvent, put=__set_m_DeviceLostEvent))  m_DeviceLostEvent;

constexpr void __set_m_DeviceLostEvent(UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__DeviceLostEvent value) ;

constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__DeviceLostEvent __get_m_DeviceLostEvent() const;

 UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent __declspec(property(get=__get_m_DeviceRegainedEvent, put=__set_m_DeviceRegainedEvent))  m_DeviceRegainedEvent;

constexpr void __set_m_DeviceRegainedEvent(UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent value) ;

constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent __get_m_DeviceRegainedEvent() const;

 UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent __declspec(property(get=__get_m_ControlsChangedEvent, put=__set_m_ControlsChangedEvent))  m_ControlsChangedEvent;

constexpr void __set_m_ControlsChangedEvent(UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent value) ;

constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent __get_m_ControlsChangedEvent() const;

 ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__ActionEvent> __declspec(property(get=__get_m_ActionEvents, put=__set_m_ActionEvents))  m_ActionEvents;

constexpr void __set_m_ActionEvents(::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__ActionEvent> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__ActionEvent> __get_m_ActionEvents() const;

 bool __declspec(property(get=__get_m_NeverAutoSwitchControlSchemes, put=__set_m_NeverAutoSwitchControlSchemes))  m_NeverAutoSwitchControlSchemes;

constexpr void __set_m_NeverAutoSwitchControlSchemes(bool value) ;

constexpr bool __get_m_NeverAutoSwitchControlSchemes() const;

 ::StringW __declspec(property(get=__get_m_DefaultControlScheme, put=__set_m_DefaultControlScheme))  m_DefaultControlScheme;

constexpr void __set_m_DefaultControlScheme(::StringW value) ;

constexpr ::StringW __get_m_DefaultControlScheme() const;

 ::StringW __declspec(property(get=__get_m_DefaultActionMap, put=__set_m_DefaultActionMap))  m_DefaultActionMap;

constexpr void __set_m_DefaultActionMap(::StringW value) ;

constexpr ::StringW __get_m_DefaultActionMap() const;

 int32_t __declspec(property(get=__get_m_SplitScreenIndex, put=__set_m_SplitScreenIndex))  m_SplitScreenIndex;

constexpr void __set_m_SplitScreenIndex(int32_t value) ;

constexpr int32_t __get_m_SplitScreenIndex() const;

 UnityEngine::Camera __declspec(property(get=__get_m_Camera, put=__set_m_Camera))  m_Camera;

constexpr void __set_m_Camera(UnityEngine::Camera value) ;

constexpr UnityEngine::Camera __get_m_Camera() const;

 UnityEngine::InputSystem::InputValue __declspec(property(get=__get_m_InputValueObject, put=__set_m_InputValueObject))  m_InputValueObject;

constexpr void __set_m_InputValueObject(UnityEngine::InputSystem::InputValue value) ;

constexpr UnityEngine::InputSystem::InputValue __get_m_InputValueObject() const;

 UnityEngine::InputSystem::InputActionMap __declspec(property(get=__get_m_CurrentActionMap, put=__set_m_CurrentActionMap))  m_CurrentActionMap;

constexpr void __set_m_CurrentActionMap(UnityEngine::InputSystem::InputActionMap value) ;

constexpr UnityEngine::InputSystem::InputActionMap __get_m_CurrentActionMap() const;

 int32_t __declspec(property(get=__get_m_PlayerIndex, put=__set_m_PlayerIndex))  m_PlayerIndex;

constexpr void __set_m_PlayerIndex(int32_t value) ;

constexpr int32_t __get_m_PlayerIndex() const;

 bool __declspec(property(get=__get_m_InputActive, put=__set_m_InputActive))  m_InputActive;

constexpr void __set_m_InputActive(bool value) ;

constexpr bool __get_m_InputActive() const;

 bool __declspec(property(get=__get_m_Enabled, put=__set_m_Enabled))  m_Enabled;

constexpr void __set_m_Enabled(bool value) ;

constexpr bool __get_m_Enabled() const;

 bool __declspec(property(get=__get_m_ActionsInitialized, put=__set_m_ActionsInitialized))  m_ActionsInitialized;

constexpr void __set_m_ActionsInitialized(bool value) ;

constexpr bool __get_m_ActionsInitialized() const;

 System::Collections::Generic::Dictionary_2<::StringW,::StringW> __declspec(property(get=__get_m_ActionMessageNames, put=__set_m_ActionMessageNames))  m_ActionMessageNames;

constexpr void __set_m_ActionMessageNames(System::Collections::Generic::Dictionary_2<::StringW,::StringW> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,::StringW> __get_m_ActionMessageNames() const;

 UnityEngine::InputSystem::Users::InputUser __declspec(property(get=__get_m_InputUser, put=__set_m_InputUser))  m_InputUser;

constexpr void __set_m_InputUser(UnityEngine::InputSystem::Users::InputUser value) ;

constexpr UnityEngine::InputSystem::Users::InputUser __get_m_InputUser() const;

 System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> __declspec(property(get=__get_m_ActionTriggeredDelegate, put=__set_m_ActionTriggeredDelegate))  m_ActionTriggeredDelegate;

constexpr void __set_m_ActionTriggeredDelegate(System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

constexpr System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> __get_m_ActionTriggeredDelegate() const;

 UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::PlayerInput>> __declspec(property(get=__get_m_DeviceLostCallbacks, put=__set_m_DeviceLostCallbacks))  m_DeviceLostCallbacks;

constexpr void __set_m_DeviceLostCallbacks(UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::PlayerInput>> value) ;

constexpr UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::PlayerInput>> __get_m_DeviceLostCallbacks() const;

 UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::PlayerInput>> __declspec(property(get=__get_m_DeviceRegainedCallbacks, put=__set_m_DeviceRegainedCallbacks))  m_DeviceRegainedCallbacks;

constexpr void __set_m_DeviceRegainedCallbacks(UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::PlayerInput>> value) ;

constexpr UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::PlayerInput>> __get_m_DeviceRegainedCallbacks() const;

 UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::PlayerInput>> __declspec(property(get=__get_m_ControlsChangedCallbacks, put=__set_m_ControlsChangedCallbacks))  m_ControlsChangedCallbacks;

constexpr void __set_m_ControlsChangedCallbacks(UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::PlayerInput>> value) ;

constexpr UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::PlayerInput>> __get_m_ControlsChangedCallbacks() const;

 UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>> __declspec(property(get=__get_m_ActionTriggeredCallbacks, put=__set_m_ActionTriggeredCallbacks))  m_ActionTriggeredCallbacks;

constexpr void __set_m_ActionTriggeredCallbacks(UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>> value) ;

constexpr UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>> __get_m_ActionTriggeredCallbacks() const;

 System::Action_2<UnityEngine::InputSystem::InputControl,UnityEngine::InputSystem::LowLevel::InputEventPtr> __declspec(property(get=__get_m_UnpairedDeviceUsedDelegate, put=__set_m_UnpairedDeviceUsedDelegate))  m_UnpairedDeviceUsedDelegate;

constexpr void __set_m_UnpairedDeviceUsedDelegate(System::Action_2<UnityEngine::InputSystem::InputControl,UnityEngine::InputSystem::LowLevel::InputEventPtr> value) ;

constexpr System::Action_2<UnityEngine::InputSystem::InputControl,UnityEngine::InputSystem::LowLevel::InputEventPtr> __get_m_UnpairedDeviceUsedDelegate() const;

 System::Func_3<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool> __declspec(property(get=__get_m_PreFilterUnpairedDeviceUsedDelegate, put=__set_m_PreFilterUnpairedDeviceUsedDelegate))  m_PreFilterUnpairedDeviceUsedDelegate;

constexpr void __set_m_PreFilterUnpairedDeviceUsedDelegate(System::Func_3<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool> value) ;

constexpr System::Func_3<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool> __get_m_PreFilterUnpairedDeviceUsedDelegate() const;

 bool __declspec(property(get=__get_m_OnUnpairedDeviceUsedHooked, put=__set_m_OnUnpairedDeviceUsedHooked))  m_OnUnpairedDeviceUsedHooked;

constexpr void __set_m_OnUnpairedDeviceUsedHooked(bool value) ;

constexpr bool __get_m_OnUnpairedDeviceUsedHooked() const;

 System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange> __declspec(property(get=__get_m_DeviceChangeDelegate, put=__set_m_DeviceChangeDelegate))  m_DeviceChangeDelegate;

constexpr void __set_m_DeviceChangeDelegate(System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange> value) ;

constexpr System::Action_2<UnityEngine::InputSystem::InputDevice,UnityEngine::InputSystem::InputDeviceChange> __get_m_DeviceChangeDelegate() const;

 bool __declspec(property(get=__get_m_OnDeviceChangeHooked, put=__set_m_OnDeviceChangeHooked))  m_OnDeviceChangeHooked;

constexpr void __set_m_OnDeviceChangeHooked(bool value) ;

constexpr bool __get_m_OnDeviceChangeHooked() const;

static int32_t __declspec(property(get=__get_s_AllActivePlayersCount, put=__set_s_AllActivePlayersCount))  s_AllActivePlayersCount;

static void __set_s_AllActivePlayersCount(int32_t value) ;

static int32_t __get_s_AllActivePlayersCount() ;

static ::ArrayW<UnityEngine::InputSystem::PlayerInput> __declspec(property(get=__get_s_AllActivePlayers, put=__set_s_AllActivePlayers))  s_AllActivePlayers;

static void __set_s_AllActivePlayers(::ArrayW<UnityEngine::InputSystem::PlayerInput> value) ;

static ::ArrayW<UnityEngine::InputSystem::PlayerInput> __get_s_AllActivePlayers() ;

static System::Action_3<UnityEngine::InputSystem::Users::InputUser,UnityEngine::InputSystem::Users::InputUserChange,UnityEngine::InputSystem::InputDevice> __declspec(property(get=__get_s_UserChangeDelegate, put=__set_s_UserChangeDelegate))  s_UserChangeDelegate;

static void __set_s_UserChangeDelegate(System::Action_3<UnityEngine::InputSystem::Users::InputUser,UnityEngine::InputSystem::Users::InputUserChange,UnityEngine::InputSystem::InputDevice> value) ;

static System::Action_3<UnityEngine::InputSystem::Users::InputUser,UnityEngine::InputSystem::Users::InputUserChange,UnityEngine::InputSystem::InputDevice> __get_s_UserChangeDelegate() ;

static int32_t __declspec(property(get=__get_s_InitPairWithDevicesCount, put=__set_s_InitPairWithDevicesCount))  s_InitPairWithDevicesCount;

static void __set_s_InitPairWithDevicesCount(int32_t value) ;

static int32_t __get_s_InitPairWithDevicesCount() ;

static ::ArrayW<UnityEngine::InputSystem::InputDevice> __declspec(property(get=__get_s_InitPairWithDevices, put=__set_s_InitPairWithDevices))  s_InitPairWithDevices;

static void __set_s_InitPairWithDevices(::ArrayW<UnityEngine::InputSystem::InputDevice> value) ;

static ::ArrayW<UnityEngine::InputSystem::InputDevice> __get_s_InitPairWithDevices() ;

static int32_t __declspec(property(get=__get_s_InitPlayerIndex, put=__set_s_InitPlayerIndex))  s_InitPlayerIndex;

static void __set_s_InitPlayerIndex(int32_t value) ;

static int32_t __get_s_InitPlayerIndex() ;

static int32_t __declspec(property(get=__get_s_InitSplitScreenIndex, put=__set_s_InitSplitScreenIndex))  s_InitSplitScreenIndex;

static void __set_s_InitSplitScreenIndex(int32_t value) ;

static int32_t __get_s_InitSplitScreenIndex() ;

static ::StringW __declspec(property(get=__get_s_InitControlScheme, put=__set_s_InitControlScheme))  s_InitControlScheme;

static void __set_s_InitControlScheme(::StringW value) ;

static ::StringW __get_s_InitControlScheme() ;

static bool __declspec(property(get=__get_s_DestroyIfDeviceSetupUnsuccessful, put=__set_s_DestroyIfDeviceSetupUnsuccessful))  s_DestroyIfDeviceSetupUnsuccessful;

static void __set_s_DestroyIfDeviceSetupUnsuccessful(bool value) ;

static bool __get_s_DestroyIfDeviceSetupUnsuccessful() ;


// Properties

 bool __declspec(property(get=get_inputIsActive))  inputIsActive;

 bool __declspec(property(get=get_active))  active;

 int32_t __declspec(property(get=get_playerIndex))  playerIndex;

 int32_t __declspec(property(get=get_splitScreenIndex))  splitScreenIndex;

 UnityEngine::InputSystem::InputActionAsset __declspec(property(get=get_actions, put=set_actions))  actions;

 ::StringW __declspec(property(get=get_currentControlScheme))  currentControlScheme;

 ::StringW __declspec(property(get=get_defaultControlScheme, put=set_defaultControlScheme))  defaultControlScheme;

 bool __declspec(property(get=get_neverAutoSwitchControlSchemes, put=set_neverAutoSwitchControlSchemes))  neverAutoSwitchControlSchemes;

 UnityEngine::InputSystem::InputActionMap __declspec(property(get=get_currentActionMap, put=set_currentActionMap))  currentActionMap;

 ::StringW __declspec(property(get=get_defaultActionMap, put=set_defaultActionMap))  defaultActionMap;

 UnityEngine::InputSystem::PlayerNotifications __declspec(property(get=get_notificationBehavior, put=set_notificationBehavior))  notificationBehavior;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__ActionEvent> __declspec(property(get=get_actionEvents, put=set_actionEvents))  actionEvents;

 UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__DeviceLostEvent __declspec(property(get=get_deviceLostEvent))  deviceLostEvent;

 UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent __declspec(property(get=get_deviceRegainedEvent))  deviceRegainedEvent;

 UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent __declspec(property(get=get_controlsChangedEvent))  controlsChangedEvent;

 UnityEngine::Camera __declspec(property(get=get_camera, put=set_camera))  camera;

 UnityEngine::InputSystem::UI::InputSystemUIInputModule __declspec(property(get=get_uiInputModule, put=set_uiInputModule))  uiInputModule;

 UnityEngine::InputSystem::Users::InputUser __declspec(property(get=get_user))  user;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputDevice> __declspec(property(get=get_devices))  devices;

 bool __declspec(property(get=get_hasMissingRequiredDevices))  hasMissingRequiredDevices;

static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::PlayerInput> __declspec(property(get=get_all))  all;

static bool __declspec(property(get=get_isSinglePlayer))  isSinglePlayer;


// Methods

/// @brief Method get_inputIsActive addr 0x29297a8 size 0x8 virtual false final false
 bool get_inputIsActive() ;

/// @brief Method get_active addr 0x29297b0 size 0x8 virtual false final false
 bool get_active() ;

/// @brief Method get_playerIndex addr 0x29297b8 size 0x8 virtual false final false
 int32_t get_playerIndex() ;

/// @brief Method get_splitScreenIndex addr 0x29297c0 size 0x8 virtual false final false
 int32_t get_splitScreenIndex() ;

/// @brief Method get_actions addr 0x29297c8 size 0x44 virtual false final false
 UnityEngine::InputSystem::InputActionAsset get_actions() ;

/// @brief Method set_actions addr 0x2929d18 size 0xf8 virtual false final false
 void set_actions(UnityEngine::InputSystem::InputActionAsset value) ;

/// @brief Method get_currentControlScheme addr 0x292a828 size 0x80 virtual false final false
 ::StringW get_currentControlScheme() ;

/// @brief Method get_defaultControlScheme addr 0x292a9d8 size 0x8 virtual false final false
 ::StringW get_defaultControlScheme() ;

/// @brief Method set_defaultControlScheme addr 0x292a9e0 size 0x8 virtual false final false
 void set_defaultControlScheme(::StringW value) ;

/// @brief Method get_neverAutoSwitchControlSchemes addr 0x292a9e8 size 0x8 virtual false final false
 bool get_neverAutoSwitchControlSchemes() ;

/// @brief Method set_neverAutoSwitchControlSchemes addr 0x292a9f0 size 0x38 virtual false final false
 void set_neverAutoSwitchControlSchemes(bool value) ;

/// @brief Method get_currentActionMap addr 0x292abd0 size 0x8 virtual false final false
 UnityEngine::InputSystem::InputActionMap get_currentActionMap() ;

/// @brief Method set_currentActionMap addr 0x292abd8 size 0x4c virtual false final false
 void set_currentActionMap(UnityEngine::InputSystem::InputActionMap value) ;

/// @brief Method get_defaultActionMap addr 0x292ac24 size 0x8 virtual false final false
 ::StringW get_defaultActionMap() ;

/// @brief Method set_defaultActionMap addr 0x292ac2c size 0x8 virtual false final false
 void set_defaultActionMap(::StringW value) ;

/// @brief Method get_notificationBehavior addr 0x292ac34 size 0x8 virtual false final false
 UnityEngine::InputSystem::PlayerNotifications get_notificationBehavior() ;

/// @brief Method set_notificationBehavior addr 0x292ac3c size 0x58 virtual false final false
 void set_notificationBehavior(UnityEngine::InputSystem::PlayerNotifications value) ;

/// @brief Method get_actionEvents addr 0x292ac94 size 0x48 virtual false final false
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__ActionEvent> get_actionEvents() ;

/// @brief Method set_actionEvents addr 0x292acdc size 0x7c virtual false final false
 void set_actionEvents(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__ActionEvent> value) ;

/// @brief Method get_deviceLostEvent addr 0x292ad58 size 0x68 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__DeviceLostEvent get_deviceLostEvent() ;

/// @brief Method get_deviceRegainedEvent addr 0x292ae08 size 0x68 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent get_deviceRegainedEvent() ;

/// @brief Method get_controlsChangedEvent addr 0x292aeb8 size 0x68 virtual false final false
 UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent get_controlsChangedEvent() ;

/// @brief Method add_onActionTriggered addr 0x292af68 size 0xa0 virtual false final false
 void add_onActionTriggered(System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

/// @brief Method remove_onActionTriggered addr 0x292b008 size 0xa0 virtual false final false
 void remove_onActionTriggered(System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

/// @brief Method add_onDeviceLost addr 0x292b0a8 size 0xa0 virtual false final false
 void add_onDeviceLost(System::Action_1<UnityEngine::InputSystem::PlayerInput> value) ;

/// @brief Method remove_onDeviceLost addr 0x292b148 size 0xa0 virtual false final false
 void remove_onDeviceLost(System::Action_1<UnityEngine::InputSystem::PlayerInput> value) ;

/// @brief Method add_onDeviceRegained addr 0x292b1e8 size 0xa0 virtual false final false
 void add_onDeviceRegained(System::Action_1<UnityEngine::InputSystem::PlayerInput> value) ;

/// @brief Method remove_onDeviceRegained addr 0x292b288 size 0xa0 virtual false final false
 void remove_onDeviceRegained(System::Action_1<UnityEngine::InputSystem::PlayerInput> value) ;

/// @brief Method add_onControlsChanged addr 0x292b328 size 0xa0 virtual false final false
 void add_onControlsChanged(System::Action_1<UnityEngine::InputSystem::PlayerInput> value) ;

/// @brief Method remove_onControlsChanged addr 0x292b3c8 size 0xa0 virtual false final false
 void remove_onControlsChanged(System::Action_1<UnityEngine::InputSystem::PlayerInput> value) ;

/// @brief Method get_camera addr 0x292b468 size 0x8 virtual false final false
 UnityEngine::Camera get_camera() ;

/// @brief Method set_camera addr 0x292b470 size 0x8 virtual false final false
 void set_camera(UnityEngine::Camera value) ;

/// @brief Method get_uiInputModule addr 0x292b478 size 0x8 virtual false final false
 UnityEngine::InputSystem::UI::InputSystemUIInputModule get_uiInputModule() ;

/// @brief Method set_uiInputModule addr 0x292b480 size 0x158 virtual false final false
 void set_uiInputModule(UnityEngine::InputSystem::UI::InputSystemUIInputModule value) ;

/// @brief Method get_user addr 0x292b5d8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Users::InputUser get_user() ;

/// @brief Method get_devices addr 0x292b5e0 size 0x30 virtual false final false
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputDevice> get_devices() ;

/// @brief Method get_hasMissingRequiredDevices addr 0x292b6bc size 0x48 virtual false final false
 bool get_hasMissingRequiredDevices() ;

/// @brief Method get_all addr 0x292b780 size 0x90 virtual false final false
static UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::PlayerInput> get_all() ;

/// @brief Method get_isSinglePlayer addr 0x292b810 size 0x118 virtual false final false
static bool get_isSinglePlayer() ;

/// @brief Method GetDevice addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDevice>
 TDevice GetDevice() ;

/// @brief Method ActivateInput addr 0x292a774 size 0xb4 virtual false final false
 void ActivateInput() ;

/// @brief Method DeactivateInput addr 0x292ba94 size 0x24 virtual false final false
 void DeactivateInput() ;

/// @brief Method PassivateInput addr 0x292bab8 size 0x24 virtual false final false
 void PassivateInput() ;

/// @brief Method SwitchCurrentControlScheme addr 0x292badc size 0x1d8 virtual false final false
 bool SwitchCurrentControlScheme(::ArrayW<UnityEngine::InputSystem::InputDevice> devices) ;

/// @brief Method SwitchCurrentControlScheme addr 0x292c0a8 size 0xe0 virtual false final false
 void SwitchCurrentControlScheme(::StringW controlScheme, ::ArrayW<UnityEngine::InputSystem::InputDevice> devices) ;

/// @brief Method SwitchCurrentActionMap addr 0x292b928 size 0x16c virtual false final false
 void SwitchCurrentActionMap(::StringW mapNameOrId) ;

/// @brief Method GetPlayerByIndex addr 0x292c244 size 0xfc virtual false final false
static UnityEngine::InputSystem::PlayerInput GetPlayerByIndex(int32_t playerIndex) ;

/// @brief Method FindFirstPairedToDevice addr 0x292c340 size 0x16c virtual false final false
static UnityEngine::InputSystem::PlayerInput FindFirstPairedToDevice(UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method Instantiate addr 0x292c4ac size 0x15c virtual false final false
static UnityEngine::InputSystem::PlayerInput Instantiate(UnityEngine::GameObject prefab, int32_t playerIndex, ::StringW controlScheme, int32_t splitScreenIndex, UnityEngine::InputSystem::InputDevice pairWithDevice) ;

/// @brief Method Instantiate addr 0x292c948 size 0x194 virtual false final false
static UnityEngine::InputSystem::PlayerInput Instantiate(UnityEngine::GameObject prefab, int32_t playerIndex, ::StringW controlScheme, int32_t splitScreenIndex, ::ArrayW<UnityEngine::InputSystem::InputDevice> pairWithDevices) ;

/// @brief Method DoInstantiate addr 0x292c608 size 0x340 virtual false final false
static UnityEngine::InputSystem::PlayerInput DoInstantiate(UnityEngine::GameObject prefab) ;

/// @brief Method InitializeActions addr 0x292980c size 0x50c virtual false final false
 void InitializeActions() ;

/// @brief Method UninitializeActions addr 0x2929e10 size 0x1d4 virtual false final false
 void UninitializeActions() ;

/// @brief Method InstallOnActionTriggeredHook addr 0x292cadc size 0x1d8 virtual false final false
 void InstallOnActionTriggeredHook() ;

/// @brief Method UninstallOnActionTriggeredHook addr 0x292d080 size 0x18c virtual false final false
 void UninstallOnActionTriggeredHook() ;

/// @brief Method OnActionTriggered addr 0x292d20c size 0x1f4 virtual false final false
 void OnActionTriggered(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method CacheMessageNames addr 0x292ccb4 size 0x3cc virtual false final false
 void CacheMessageNames() ;

/// @brief Method ClearCaches addr 0x2929fe4 size 0x4 virtual false final false
 void ClearCaches() ;

/// @brief Method AssignUserAndDevices addr 0x2929fe8 size 0x78c virtual false final false
 void AssignUserAndDevices() ;

/// @brief Method HaveBindingForDevice addr 0x292da90 size 0x108 virtual false final false
 bool HaveBindingForDevice(UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method UnassignUserAndDevices addr 0x292ded0 size 0xb8 virtual false final false
 void UnassignUserAndDevices() ;

/// @brief Method TryToActivateControlScheme addr 0x292d83c size 0x1e0 virtual false final false
 bool TryToActivateControlScheme(UnityEngine::InputSystem::InputControlScheme controlScheme) ;

/// @brief Method AssignPlayerIndex addr 0x292e264 size 0x208 virtual false final false
 void AssignPlayerIndex() ;

/// @brief Method OnEnable addr 0x292e46c size 0x4c8 virtual false final false
 void OnEnable() ;

/// @brief Method StartListeningForUnpairedDeviceActivity addr 0x292aa28 size 0x138 virtual false final false
 void StartListeningForUnpairedDeviceActivity() ;

/// @brief Method StopListeningForUnpairedDeviceActivity addr 0x292ab60 size 0x70 virtual false final false
 void StopListeningForUnpairedDeviceActivity() ;

/// @brief Method StartListeningForDeviceChanges addr 0x292e9ec size 0xc4 virtual false final false
 void StartListeningForDeviceChanges() ;

/// @brief Method StopListeningForDeviceChanges addr 0x292f16c size 0x6c virtual false final false
 void StopListeningForDeviceChanges() ;

/// @brief Method OnDisable addr 0x292f1d8 size 0x2f4 virtual false final false
 void OnDisable() ;

/// @brief Method DebugLogAction addr 0x292f6ac size 0x78 virtual false final false
 void DebugLogAction(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method HandleDeviceLost addr 0x292f724 size 0x11c virtual false final false
 void HandleDeviceLost() ;

/// @brief Method HandleDeviceRegained addr 0x292f840 size 0x11c virtual false final false
 void HandleDeviceRegained() ;

/// @brief Method HandleControlsChanged addr 0x292eab0 size 0x11c virtual false final false
 void HandleControlsChanged() ;

/// @brief Method OnUserChange addr 0x292f95c size 0x168 virtual false final false
static void OnUserChange(UnityEngine::InputSystem::Users::InputUser user, UnityEngine::InputSystem::Users::InputUserChange change, UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method OnPreFilterUnpairedDeviceUsed addr 0x292fad0 size 0xf4 virtual false final false
static bool OnPreFilterUnpairedDeviceUsed(UnityEngine::InputSystem::InputDevice device, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method OnUnpairedDeviceUsed addr 0x292fbc4 size 0x610 virtual false final false
 void OnUnpairedDeviceUsed(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method OnDeviceChange addr 0x29301d4 size 0x108 virtual false final false
 void OnDeviceChange(UnityEngine::InputSystem::InputDevice device, UnityEngine::InputSystem::InputDeviceChange change) ;

/// @brief Method SwitchControlSchemeInternal addr 0x292bcb4 size 0x3f4 virtual false final false
 void SwitchControlSchemeInternal(ByRef<UnityEngine::InputSystem::InputControlScheme> controlScheme, ::ArrayW<UnityEngine::InputSystem::InputDevice> devices) ;

// Ctor Parameters []
explicit PlayerInput() ;

/// @brief Method .ctor addr 0x29303b8 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::DeviceLostEvent
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6398)), TypeDefinitionIndex(TypeDefinitionIndex(10401)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 361 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6395))
// CS Name: UnityEngine.InputSystem.PlayerInput::DeviceLostEvent
class CORDL_TYPE UnityEngine__InputSystem__PlayerInput__DeviceLostEvent : public UnityEngine::Events::UnityEvent_1<UnityEngine::InputSystem::PlayerInput> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__InputSystem__PlayerInput__DeviceLostEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__PlayerInput__DeviceLostEvent", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__PlayerInput__DeviceLostEvent(UnityEngine__InputSystem__PlayerInput__DeviceLostEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__PlayerInput__DeviceLostEvent", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__PlayerInput__DeviceLostEvent(UnityEngine__InputSystem__PlayerInput__DeviceLostEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__PlayerInput__DeviceLostEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<UnityEngine::InputSystem::PlayerInput>(ptr) {
}


  constexpr UnityEngine__InputSystem__PlayerInput__DeviceLostEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__PlayerInput__DeviceLostEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__PlayerInput__DeviceLostEvent& operator=(UnityEngine__InputSystem__PlayerInput__DeviceLostEvent&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__PlayerInput__DeviceLostEvent& operator=(UnityEngine__InputSystem__PlayerInput__DeviceLostEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__InputSystem__PlayerInput__DeviceLostEvent() ;

/// @brief Method .ctor addr 0x292adc0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::DeviceRegainedEvent
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6398)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 361 }), TypeDefinitionIndex(TypeDefinitionIndex(10401))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6396))
// CS Name: UnityEngine.InputSystem.PlayerInput::DeviceRegainedEvent
class CORDL_TYPE UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent : public UnityEngine::Events::UnityEvent_1<UnityEngine::InputSystem::PlayerInput> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent(UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent(UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<UnityEngine::InputSystem::PlayerInput>(ptr) {
}


  constexpr UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent& operator=(UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent& operator=(UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent() ;

/// @brief Method .ctor addr 0x292ae70 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::ControlsChangedEvent
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 361 }), TypeDefinitionIndex(TypeDefinitionIndex(6398)), TypeDefinitionIndex(TypeDefinitionIndex(10401))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6397))
// CS Name: UnityEngine.InputSystem.PlayerInput::ControlsChangedEvent
class CORDL_TYPE UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent : public UnityEngine::Events::UnityEvent_1<UnityEngine::InputSystem::PlayerInput> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent(UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent(UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<UnityEngine::InputSystem::PlayerInput>(ptr) {
}


  constexpr UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent& operator=(UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent& operator=(UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent() ;

/// @brief Method .ctor addr 0x292af20 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::PlayerInput);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::PlayerInput, "UnityEngine.InputSystem", "PlayerInput");
NEED_NO_BOX(UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__ActionEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__ActionEvent, "UnityEngine.InputSystem", "PlayerInput/ActionEvent");
NEED_NO_BOX(UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__ControlsChangedEvent, "UnityEngine.InputSystem", "PlayerInput/ControlsChangedEvent");
NEED_NO_BOX(UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__DeviceLostEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__DeviceLostEvent, "UnityEngine.InputSystem", "PlayerInput/DeviceLostEvent");
NEED_NO_BOX(UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__PlayerInput__DeviceRegainedEvent, "UnityEngine.InputSystem", "PlayerInput/DeviceRegainedEvent");
