#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__PlayerInput_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TDelegate>
struct CallbackArray_1;
}
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::InputSystem {
class PlayerInput;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
struct PlayerNotifications;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::InputSystem {
struct PlayerJoinBehavior;
}
namespace UnityEngine::InputSystem {
struct ____UnityEngine__InputSystem__InputAction__CallbackContext;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class PlayerInputManager;
}
namespace UnityEngine::InputSystem {
class ____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent;
}
namespace UnityEngine::InputSystem {
class ____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent;
}
// Type: ::PlayerJoinedEvent
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10401)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 361 }), TypeDefinitionIndex(TypeDefinitionIndex(6398))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6399))
// CS Name: UnityEngine.InputSystem.PlayerInputManager::PlayerJoinedEvent
class CORDL_TYPE ____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::InputSystem::PlayerInput> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent(____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent(____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent(void* ptr) noexcept : ::UnityEngine::Events::UnityEvent_1<::UnityEngine::InputSystem::PlayerInput>(ptr) {
}


  constexpr ____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent& operator=(____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent& operator=(____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent() ;

/// @brief Method .ctor addr 0x293143c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::PlayerLeftEvent
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 361 }), TypeDefinitionIndex(TypeDefinitionIndex(6398)), TypeDefinitionIndex(TypeDefinitionIndex(10401))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6400))
// CS Name: UnityEngine.InputSystem.PlayerInputManager::PlayerLeftEvent
class CORDL_TYPE ____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::InputSystem::PlayerInput> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent(____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent(____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent(void* ptr) noexcept : ::UnityEngine::Events::UnityEvent_1<::UnityEngine::InputSystem::PlayerInput>(ptr) {
}


  constexpr ____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent& operator=(____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent& operator=(____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent() ;

/// @brief Method .ctor addr 0x29314ec size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::PlayerInputManager
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6401))
// CS Name: UnityEngine.InputSystem.PlayerInputManager
class CORDL_TYPE PlayerInputManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PlayerLeftEvent = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent;

using PlayerJoinedEvent = ::UnityEngine::InputSystem::____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x128};

virtual ~PlayerInputManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerInputManager", modifiers: " const&", def_value: None }]
constexpr PlayerInputManager(PlayerInputManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerInputManager", modifiers: "&&", def_value: None }]
constexpr PlayerInputManager(PlayerInputManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerInputManager(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PlayerInputManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerInputManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerInputManager& operator=(PlayerInputManager&& o) noexcept = default;
  constexpr PlayerInputManager& operator=(PlayerInputManager const& o) noexcept = default;
                


// Fields

/// @brief Field PlayerJoinedMessage offset 0
static constexpr ::ConstString  PlayerJoinedMessage{u"OnPlayerJoined"};

/// @brief Field PlayerLeftMessage offset 0
static constexpr ::ConstString  PlayerLeftMessage{u"OnPlayerLeft"};

static ::UnityEngine::InputSystem::PlayerInputManager __declspec(property(get=__get__instance_k__BackingField, put=__set__instance_k__BackingField))  _instance_k__BackingField;

static void __set__instance_k__BackingField(::UnityEngine::InputSystem::PlayerInputManager value) ;

static ::UnityEngine::InputSystem::PlayerInputManager __get__instance_k__BackingField() ;

 ::UnityEngine::InputSystem::PlayerNotifications __declspec(property(get=__get_m_NotificationBehavior, put=__set_m_NotificationBehavior))  m_NotificationBehavior;

constexpr void __set_m_NotificationBehavior(::UnityEngine::InputSystem::PlayerNotifications value) ;

constexpr ::UnityEngine::InputSystem::PlayerNotifications __get_m_NotificationBehavior() const;

 int32_t __declspec(property(get=__get_m_MaxPlayerCount, put=__set_m_MaxPlayerCount))  m_MaxPlayerCount;

constexpr void __set_m_MaxPlayerCount(int32_t value) ;

constexpr int32_t __get_m_MaxPlayerCount() const;

 bool __declspec(property(get=__get_m_AllowJoining, put=__set_m_AllowJoining))  m_AllowJoining;

constexpr void __set_m_AllowJoining(bool value) ;

constexpr bool __get_m_AllowJoining() const;

 ::UnityEngine::InputSystem::PlayerJoinBehavior __declspec(property(get=__get_m_JoinBehavior, put=__set_m_JoinBehavior))  m_JoinBehavior;

constexpr void __set_m_JoinBehavior(::UnityEngine::InputSystem::PlayerJoinBehavior value) ;

constexpr ::UnityEngine::InputSystem::PlayerJoinBehavior __get_m_JoinBehavior() const;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent __declspec(property(get=__get_m_PlayerJoinedEvent, put=__set_m_PlayerJoinedEvent))  m_PlayerJoinedEvent;

constexpr void __set_m_PlayerJoinedEvent(::UnityEngine::InputSystem::____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent value) ;

constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent __get_m_PlayerJoinedEvent() const;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent __declspec(property(get=__get_m_PlayerLeftEvent, put=__set_m_PlayerLeftEvent))  m_PlayerLeftEvent;

constexpr void __set_m_PlayerLeftEvent(::UnityEngine::InputSystem::____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent value) ;

constexpr ::UnityEngine::InputSystem::____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent __get_m_PlayerLeftEvent() const;

 ::UnityEngine::InputSystem::InputActionProperty __declspec(property(get=__get_m_JoinAction, put=__set_m_JoinAction))  m_JoinAction;

constexpr void __set_m_JoinAction(::UnityEngine::InputSystem::InputActionProperty value) ;

constexpr ::UnityEngine::InputSystem::InputActionProperty __get_m_JoinAction() const;

 ::UnityEngine::GameObject __declspec(property(get=__get_m_PlayerPrefab, put=__set_m_PlayerPrefab))  m_PlayerPrefab;

constexpr void __set_m_PlayerPrefab(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get_m_PlayerPrefab() const;

 bool __declspec(property(get=__get_m_SplitScreen, put=__set_m_SplitScreen))  m_SplitScreen;

constexpr void __set_m_SplitScreen(bool value) ;

constexpr bool __get_m_SplitScreen() const;

 bool __declspec(property(get=__get_m_MaintainAspectRatioInSplitScreen, put=__set_m_MaintainAspectRatioInSplitScreen))  m_MaintainAspectRatioInSplitScreen;

constexpr void __set_m_MaintainAspectRatioInSplitScreen(bool value) ;

constexpr bool __get_m_MaintainAspectRatioInSplitScreen() const;

 int32_t __declspec(property(get=__get_m_FixedNumberOfSplitScreens, put=__set_m_FixedNumberOfSplitScreens))  m_FixedNumberOfSplitScreens;

constexpr void __set_m_FixedNumberOfSplitScreens(int32_t value) ;

constexpr int32_t __get_m_FixedNumberOfSplitScreens() const;

 ::UnityEngine::Rect __declspec(property(get=__get_m_SplitScreenRect, put=__set_m_SplitScreenRect))  m_SplitScreenRect;

constexpr void __set_m_SplitScreenRect(::UnityEngine::Rect value) ;

constexpr ::UnityEngine::Rect __get_m_SplitScreenRect() const;

 bool __declspec(property(get=__get_m_JoinActionDelegateHooked, put=__set_m_JoinActionDelegateHooked))  m_JoinActionDelegateHooked;

constexpr void __set_m_JoinActionDelegateHooked(bool value) ;

constexpr bool __get_m_JoinActionDelegateHooked() const;

 bool __declspec(property(get=__get_m_UnpairedDeviceUsedDelegateHooked, put=__set_m_UnpairedDeviceUsedDelegateHooked))  m_UnpairedDeviceUsedDelegateHooked;

constexpr void __set_m_UnpairedDeviceUsedDelegateHooked(bool value) ;

constexpr bool __get_m_UnpairedDeviceUsedDelegateHooked() const;

 ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> __declspec(property(get=__get_m_JoinActionDelegate, put=__set_m_JoinActionDelegate))  m_JoinActionDelegate;

constexpr void __set_m_JoinActionDelegate(::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> value) ;

constexpr ::System::Action_1<::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext> __get_m_JoinActionDelegate() const;

 ::System::Action_2<::UnityEngine::InputSystem::InputControl,::UnityEngine::InputSystem::LowLevel::InputEventPtr> __declspec(property(get=__get_m_UnpairedDeviceUsedDelegate, put=__set_m_UnpairedDeviceUsedDelegate))  m_UnpairedDeviceUsedDelegate;

constexpr void __set_m_UnpairedDeviceUsedDelegate(::System::Action_2<::UnityEngine::InputSystem::InputControl,::UnityEngine::InputSystem::LowLevel::InputEventPtr> value) ;

constexpr ::System::Action_2<::UnityEngine::InputSystem::InputControl,::UnityEngine::InputSystem::LowLevel::InputEventPtr> __get_m_UnpairedDeviceUsedDelegate() const;

 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::PlayerInput>> __declspec(property(get=__get_m_PlayerJoinedCallbacks, put=__set_m_PlayerJoinedCallbacks))  m_PlayerJoinedCallbacks;

constexpr void __set_m_PlayerJoinedCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::PlayerInput>> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::PlayerInput>> __get_m_PlayerJoinedCallbacks() const;

 ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::PlayerInput>> __declspec(property(get=__get_m_PlayerLeftCallbacks, put=__set_m_PlayerLeftCallbacks))  m_PlayerLeftCallbacks;

constexpr void __set_m_PlayerLeftCallbacks(::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::PlayerInput>> value) ;

constexpr ::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::PlayerInput>> __get_m_PlayerLeftCallbacks() const;


// Properties

 bool __declspec(property(get=get_splitScreen, put=set_splitScreen))  splitScreen;

 bool __declspec(property(get=get_maintainAspectRatioInSplitScreen))  maintainAspectRatioInSplitScreen;

 int32_t __declspec(property(get=get_fixedNumberOfSplitScreens))  fixedNumberOfSplitScreens;

 ::UnityEngine::Rect __declspec(property(get=get_splitScreenArea))  splitScreenArea;

 int32_t __declspec(property(get=get_playerCount))  playerCount;

 int32_t __declspec(property(get=get_maxPlayerCount))  maxPlayerCount;

 bool __declspec(property(get=get_joiningEnabled))  joiningEnabled;

 ::UnityEngine::InputSystem::PlayerJoinBehavior __declspec(property(get=get_joinBehavior, put=set_joinBehavior))  joinBehavior;

 ::UnityEngine::InputSystem::InputActionProperty __declspec(property(get=get_joinAction, put=set_joinAction))  joinAction;

 ::UnityEngine::InputSystem::PlayerNotifications __declspec(property(get=get_notificationBehavior, put=set_notificationBehavior))  notificationBehavior;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent __declspec(property(get=get_playerJoinedEvent))  playerJoinedEvent;

 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent __declspec(property(get=get_playerLeftEvent))  playerLeftEvent;

 ::UnityEngine::GameObject __declspec(property(get=get_playerPrefab, put=set_playerPrefab))  playerPrefab;

static ::UnityEngine::InputSystem::PlayerInputManager __declspec(property(get=get_instance, put=set_instance))  instance;

static ::ArrayW<::StringW> __declspec(property(get=get_messages))  messages;


// Methods

/// @brief Method get_splitScreen addr 0x29306c0 size 0x8 virtual false final false
 bool get_splitScreen() ;

/// @brief Method set_splitScreen addr 0x29306c8 size 0x260 virtual false final false
 void set_splitScreen(bool value) ;

/// @brief Method get_maintainAspectRatioInSplitScreen addr 0x2930f68 size 0x8 virtual false final false
 bool get_maintainAspectRatioInSplitScreen() ;

/// @brief Method get_fixedNumberOfSplitScreens addr 0x2930f70 size 0x8 virtual false final false
 int32_t get_fixedNumberOfSplitScreens() ;

/// @brief Method get_splitScreenArea addr 0x2930f78 size 0xc virtual false final false
 ::UnityEngine::Rect get_splitScreenArea() ;

/// @brief Method get_playerCount addr 0x2930f84 size 0x58 virtual false final false
 int32_t get_playerCount() ;

/// @brief Method get_maxPlayerCount addr 0x2930fdc size 0x8 virtual false final false
 int32_t get_maxPlayerCount() ;

/// @brief Method get_joiningEnabled addr 0x2930fe4 size 0x8 virtual false final false
 bool get_joiningEnabled() ;

/// @brief Method get_joinBehavior addr 0x2930fec size 0x8 virtual false final false
 ::UnityEngine::InputSystem::PlayerJoinBehavior get_joinBehavior() ;

/// @brief Method set_joinBehavior addr 0x2930ff4 size 0x50 virtual false final false
 void set_joinBehavior(::UnityEngine::InputSystem::PlayerJoinBehavior value) ;

/// @brief Method get_joinAction addr 0x293130c size 0x14 virtual false final false
 ::UnityEngine::InputSystem::InputActionProperty get_joinAction() ;

/// @brief Method set_joinAction addr 0x2931320 size 0xa4 virtual false final false
 void set_joinAction(::UnityEngine::InputSystem::InputActionProperty value) ;

/// @brief Method get_notificationBehavior addr 0x29313c4 size 0x8 virtual false final false
 ::UnityEngine::InputSystem::PlayerNotifications get_notificationBehavior() ;

/// @brief Method set_notificationBehavior addr 0x29313cc size 0x8 virtual false final false
 void set_notificationBehavior(::UnityEngine::InputSystem::PlayerNotifications value) ;

/// @brief Method get_playerJoinedEvent addr 0x29313d4 size 0x68 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent get_playerJoinedEvent() ;

/// @brief Method get_playerLeftEvent addr 0x2931484 size 0x68 virtual false final false
 ::UnityEngine::InputSystem::____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent get_playerLeftEvent() ;

/// @brief Method add_onPlayerJoined addr 0x2931534 size 0xa0 virtual false final false
 void add_onPlayerJoined(::System::Action_1<::UnityEngine::InputSystem::PlayerInput> value) ;

/// @brief Method remove_onPlayerJoined addr 0x29315d4 size 0xa0 virtual false final false
 void remove_onPlayerJoined(::System::Action_1<::UnityEngine::InputSystem::PlayerInput> value) ;

/// @brief Method add_onPlayerLeft addr 0x2931674 size 0xa0 virtual false final false
 void add_onPlayerLeft(::System::Action_1<::UnityEngine::InputSystem::PlayerInput> value) ;

/// @brief Method remove_onPlayerLeft addr 0x2931714 size 0xa0 virtual false final false
 void remove_onPlayerLeft(::System::Action_1<::UnityEngine::InputSystem::PlayerInput> value) ;

/// @brief Method get_playerPrefab addr 0x29317b4 size 0x8 virtual false final false
 ::UnityEngine::GameObject get_playerPrefab() ;

/// @brief Method set_playerPrefab addr 0x29317bc size 0x8 virtual false final false
 void set_playerPrefab(::UnityEngine::GameObject value) ;

/// @brief Method get_instance addr 0x29317c4 size 0x48 virtual false final false
static ::UnityEngine::InputSystem::PlayerInputManager get_instance() ;

/// @brief Method set_instance addr 0x293180c size 0x4c virtual false final false
static void set_instance(::UnityEngine::InputSystem::PlayerInputManager value) ;

/// @brief Method EnableJoining addr 0x293111c size 0x1f0 virtual false final false
 void EnableJoining() ;

/// @brief Method DisableJoining addr 0x2931044 size 0xd8 virtual false final false
 void DisableJoining() ;

/// @brief Method JoinPlayerFromUI addr 0x293185c size 0x54 virtual false final false
 void JoinPlayerFromUI() ;

/// @brief Method JoinPlayerFromAction addr 0x2931b88 size 0x54 virtual false final false
 void JoinPlayerFromAction(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method JoinPlayerFromActionIfNotAlreadyJoined addr 0x2931c98 size 0xe8 virtual false final false
 void JoinPlayerFromActionIfNotAlreadyJoined(::UnityEngine::InputSystem::____UnityEngine__InputSystem__InputAction__CallbackContext context) ;

/// @brief Method JoinPlayer addr 0x2931bdc size 0xbc virtual false final false
 ::UnityEngine::InputSystem::PlayerInput JoinPlayer(int32_t playerIndex, int32_t splitScreenIndex, ::StringW controlScheme, ::UnityEngine::InputSystem::InputDevice pairWithDevice) ;

/// @brief Method JoinPlayer addr 0x2931d80 size 0xbc virtual false final false
 ::UnityEngine::InputSystem::PlayerInput JoinPlayer(int32_t playerIndex, int32_t splitScreenIndex, ::StringW controlScheme, ::ArrayW<::UnityEngine::InputSystem::InputDevice> pairWithDevices) ;

/// @brief Method get_messages addr 0x2931e3c size 0xe4 virtual false final false
static ::ArrayW<::StringW> get_messages() ;

/// @brief Method CheckIfPlayerCanJoin addr 0x29318b0 size 0x2d8 virtual false final false
 bool CheckIfPlayerCanJoin(int32_t playerIndex) ;

/// @brief Method OnUnpairedDeviceUsed addr 0x2931f20 size 0xb4 virtual false final false
 void OnUnpairedDeviceUsed(::UnityEngine::InputSystem::InputControl control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method OnEnable addr 0x2932350 size 0x340 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2932690 size 0xdc virtual false final false
 void OnDisable() ;

/// @brief Method UpdateSplitScreen addr 0x2930928 size 0x640 virtual false final false
 void UpdateSplitScreen() ;

/// @brief Method IsDeviceUsableWithPlayerActions addr 0x2931fd4 size 0x37c virtual false final false
 bool IsDeviceUsableWithPlayerActions(::UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method ValidateInputActionAsset addr 0x2931858 size 0x4 virtual false final false
 void ValidateInputActionAsset() ;

/// @brief Method NotifyPlayerJoined addr 0x292ebcc size 0x128 virtual false final false
 void NotifyPlayerJoined(::UnityEngine::InputSystem::PlayerInput player) ;

/// @brief Method NotifyPlayerLeft addr 0x292f584 size 0x128 virtual false final false
 void NotifyPlayerLeft(::UnityEngine::InputSystem::PlayerInput player) ;

// Ctor Parameters []
explicit PlayerInputManager() ;

/// @brief Method .ctor addr 0x293276c size 0x60 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::PlayerInputManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::PlayerInputManager, "UnityEngine.InputSystem", "PlayerInputManager");
NEED_NO_BOX(::UnityEngine::InputSystem::____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__PlayerInputManager__PlayerJoinedEvent, "UnityEngine.InputSystem", "PlayerInputManager/PlayerJoinedEvent");
NEED_NO_BOX(::UnityEngine::InputSystem::____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::____UnityEngine__InputSystem__PlayerInputManager__PlayerLeftEvent, "UnityEngine.InputSystem", "PlayerInputManager/PlayerLeftEvent");
