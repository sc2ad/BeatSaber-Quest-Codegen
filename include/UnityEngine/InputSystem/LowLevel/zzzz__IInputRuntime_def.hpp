#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::LowLevel {
class InputUpdateDelegate;
}
namespace UnityEngine {
struct ScreenOrientation;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
class Action;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class IInputRuntime;
}
// Type: UnityEngine.InputSystem.LowLevel::IInputRuntime
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6632))
// CS Name: UnityEngine.InputSystem.LowLevel.IInputRuntime
class CORDL_TYPE IInputRuntime : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IInputRuntime() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IInputRuntime(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate __declspec(property(get=get_onUpdate, put=set_onUpdate))  onUpdate;

 ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType> __declspec(property(get=get_onBeforeUpdate, put=set_onBeforeUpdate))  onBeforeUpdate;

 ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType,bool> __declspec(property(get=get_onShouldRunUpdate, put=set_onShouldRunUpdate))  onShouldRunUpdate;

 ::System::Action_2<int32_t,::StringW> __declspec(property(get=get_onDeviceDiscovered, put=set_onDeviceDiscovered))  onDeviceDiscovered;

 ::System::Action_1<bool> __declspec(property(get=get_onPlayerFocusChanged, put=set_onPlayerFocusChanged))  onPlayerFocusChanged;

 bool __declspec(property(get=get_isPlayerFocused))  isPlayerFocused;

 ::System::Action __declspec(property(get=get_onShutdown, put=set_onShutdown))  onShutdown;

 float_t __declspec(property(get=get_pollingFrequency, put=set_pollingFrequency))  pollingFrequency;

 double_t __declspec(property(get=get_currentTime))  currentTime;

 double_t __declspec(property(get=get_currentTimeForFixedUpdate))  currentTimeForFixedUpdate;

 float_t __declspec(property(get=get_unscaledGameTime))  unscaledGameTime;

 double_t __declspec(property(get=get_currentTimeOffsetToRealtimeSinceStartup))  currentTimeOffsetToRealtimeSinceStartup;

 bool __declspec(property(get=get_runInBackground))  runInBackground;

 ::UnityEngine::Vector2 __declspec(property(get=get_screenSize))  screenSize;

 ::UnityEngine::ScreenOrientation __declspec(property(get=get_screenOrientation))  screenOrientation;

 bool __declspec(property(get=get_isInBatchMode))  isInBatchMode;


// Methods

/// @brief Method AllocateDeviceId addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t AllocateDeviceId() ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
 void Update(::UnityEngine::InputSystem::LowLevel::InputUpdateType type) ;

/// @brief Method QueueEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void QueueEvent(void* ptr) ;

/// @brief Method DeviceCommand addr 0x0 size 0xffffffffffffffff virtual true final false
 int64_t DeviceCommand(int32_t deviceId, void* commandPtr) ;

/// @brief Method get_onUpdate addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate get_onUpdate() ;

/// @brief Method set_onUpdate addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_onUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate value) ;

/// @brief Method get_onBeforeUpdate addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType> get_onBeforeUpdate() ;

/// @brief Method set_onBeforeUpdate addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_onBeforeUpdate(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType> value) ;

/// @brief Method get_onShouldRunUpdate addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType,bool> get_onShouldRunUpdate() ;

/// @brief Method set_onShouldRunUpdate addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_onShouldRunUpdate(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType,bool> value) ;

/// @brief Method get_onDeviceDiscovered addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Action_2<int32_t,::StringW> get_onDeviceDiscovered() ;

/// @brief Method set_onDeviceDiscovered addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_onDeviceDiscovered(::System::Action_2<int32_t,::StringW> value) ;

/// @brief Method get_onPlayerFocusChanged addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Action_1<bool> get_onPlayerFocusChanged() ;

/// @brief Method set_onPlayerFocusChanged addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_onPlayerFocusChanged(::System::Action_1<bool> value) ;

/// @brief Method get_isPlayerFocused addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isPlayerFocused() ;

/// @brief Method get_onShutdown addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Action get_onShutdown() ;

/// @brief Method set_onShutdown addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_onShutdown(::System::Action value) ;

/// @brief Method get_pollingFrequency addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_pollingFrequency() ;

/// @brief Method set_pollingFrequency addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_pollingFrequency(float_t value) ;

/// @brief Method get_currentTime addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t get_currentTime() ;

/// @brief Method get_currentTimeForFixedUpdate addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t get_currentTimeForFixedUpdate() ;

/// @brief Method get_unscaledGameTime addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_unscaledGameTime() ;

/// @brief Method get_currentTimeOffsetToRealtimeSinceStartup addr 0x0 size 0xffffffffffffffff virtual true final false
 double_t get_currentTimeOffsetToRealtimeSinceStartup() ;

/// @brief Method get_runInBackground addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_runInBackground() ;

/// @brief Method get_screenSize addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Vector2 get_screenSize() ;

/// @brief Method get_screenOrientation addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::ScreenOrientation get_screenOrientation() ;

/// @brief Method get_isInBatchMode addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isInBatchMode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::IInputRuntime);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::IInputRuntime, "UnityEngine.InputSystem.LowLevel", "IInputRuntime");
