#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateChangeMonitor;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class InputState;
}
namespace UnityEngine::InputSystem::LowLevel {
class ____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate;
}
// Type: ::StateChangeMonitorDelegate
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6647))
// CS Name: UnityEngine.InputSystem.LowLevel.InputState::StateChangeMonitorDelegate
class CORDL_TYPE ____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate(____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate(____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate& operator=(____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate&& o) noexcept = default;
  constexpr ____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate& operator=(____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate const& o) noexcept = default;
                


// Fields

 ::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,int64_t> __declspec(property(get=__get_valueChangeCallback, put=__set_valueChangeCallback))  valueChangeCallback;

constexpr void __set_valueChangeCallback(::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,int64_t> value) ;

constexpr ::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,int64_t> __get_valueChangeCallback() const;

 ::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,int64_t,int32_t> __declspec(property(get=__get_timerExpiredCallback, put=__set_timerExpiredCallback))  timerExpiredCallback;

constexpr void __set_timerExpiredCallback(::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,int64_t,int32_t> value) ;

constexpr ::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,int64_t,int32_t> __get_timerExpiredCallback() const;


// Methods

/// @brief Method NotifyControlStateChanged addr 0x295fcdc size 0x24 virtual true final true
 void NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl control, double_t time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t monitorIndex) ;

/// @brief Method NotifyTimerExpired addr 0x295fd00 size 0x1c virtual true final true
 void NotifyTimerExpired(::UnityEngine::InputSystem::InputControl control, double_t time, int64_t monitorIndex, int32_t timerIndex) ;

// Ctor Parameters []
explicit ____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate() ;

/// @brief Method .ctor addr 0x295fa18 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::InputState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6648))
// CS Name: UnityEngine.InputSystem.LowLevel.InputState
class CORDL_TYPE InputState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using StateChangeMonitorDelegate = ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputState() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputState", modifiers: " const&", def_value: None }]
constexpr InputState(InputState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputState", modifiers: "&&", def_value: None }]
constexpr InputState(InputState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputState& operator=(InputState&& o) noexcept = default;
  constexpr InputState& operator=(InputState const& o) noexcept = default;
                


// Properties

static ::UnityEngine::InputSystem::LowLevel::InputUpdateType __declspec(property(get=get_currentUpdateType))  currentUpdateType;

static uint32_t __declspec(property(get=get_updateCount))  updateCount;

static double_t __declspec(property(get=get_currentTime))  currentTime;


// Methods

/// @brief Method get_currentUpdateType addr 0x295f21c size 0x48 virtual false final false
static ::UnityEngine::InputSystem::LowLevel::InputUpdateType get_currentUpdateType() ;

/// @brief Method get_updateCount addr 0x295f264 size 0x48 virtual false final false
static uint32_t get_updateCount() ;

/// @brief Method get_currentTime addr 0x2952b80 size 0xd0 virtual false final false
static double_t get_currentTime() ;

/// @brief Method add_onChange addr 0x295f2ac size 0x6c virtual false final false
static void add_onChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::LowLevel::InputEventPtr> value) ;

/// @brief Method remove_onChange addr 0x295f318 size 0x6c virtual false final false
static void remove_onChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice,::UnityEngine::InputSystem::LowLevel::InputEventPtr> value) ;

/// @brief Method Change addr 0x295f384 size 0x26c virtual false final false
static void Change(::UnityEngine::InputSystem::InputDevice device, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) ;

/// @brief Method Change addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TState>
static void Change(::UnityEngine::InputSystem::InputControl control, TState state, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method Change addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TState>
static void Change(::UnityEngine::InputSystem::InputControl control, ByRef<TState> state, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method IsIntegerFormat addr 0x295f5f0 size 0x1d8 virtual false final false
static bool IsIntegerFormat(::UnityEngine::InputSystem::Utilities::FourCC format) ;

/// @brief Method AddChangeMonitor addr 0x295f7c8 size 0x174 virtual false final false
static void AddChangeMonitor(::UnityEngine::InputSystem::InputControl control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor, int64_t monitorIndex, uint32_t groupIndex) ;

/// @brief Method AddChangeMonitor addr 0x295f93c size 0xdc virtual false final false
static ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor AddChangeMonitor(::UnityEngine::InputSystem::InputControl control, ::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,::UnityEngine::InputSystem::LowLevel::InputEventPtr,int64_t> valueChangeCallback, int32_t monitorIndex, ::System::Action_4<::UnityEngine::InputSystem::InputControl,double_t,int64_t,int32_t> timerExpiredCallback) ;

/// @brief Method RemoveChangeMonitor addr 0x295fa20 size 0xfc virtual false final false
static void RemoveChangeMonitor(::UnityEngine::InputSystem::InputControl control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor, int64_t monitorIndex) ;

/// @brief Method AddChangeMonitorTimeout addr 0x295fb1c size 0xec virtual false final false
static void AddChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor, double_t time, int64_t monitorIndex, int32_t timerIndex) ;

/// @brief Method RemoveChangeMonitorTimeout addr 0x295fc08 size 0xd4 virtual false final false
static void RemoveChangeMonitorTimeout(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor monitor, int64_t monitorIndex, int32_t timerIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputState, "UnityEngine.InputSystem.LowLevel", "InputState");
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__InputState__StateChangeMonitorDelegate, "UnityEngine.InputSystem.LowLevel", "InputState/StateChangeMonitorDelegate");
