// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.InputDevice
#include "UnityEngine/XR/InputDevice.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: ConnectionChangeType
  struct ConnectionChangeType;
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Forward declaring type: InputDevices
  class InputDevices;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::InputDevices);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::InputDevices*, "UnityEngine.XR", "InputDevices");
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.InputDevices
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 1094E24
  // [UsedByNativeCodeAttribute] Offset: 1094E24
  // [StaticAccessorAttribute] Offset: 1094E24
  // [NativeConditionalAttribute] Offset: 1094E24
  class InputDevices : public ::Il2CppObject {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x10954D0
    // Get static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceConnected
    static ::System::Action_1<::UnityEngine::XR::InputDevice>* _get_deviceConnected();
    // Set static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceConnected
    static void _set_deviceConnected(::System::Action_1<::UnityEngine::XR::InputDevice>* value);
    // [DebuggerBrowsableAttribute] Offset: 0x109550C
    // Get static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceDisconnected
    static ::System::Action_1<::UnityEngine::XR::InputDevice>* _get_deviceDisconnected();
    // Set static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceDisconnected
    static void _set_deviceDisconnected(::System::Action_1<::UnityEngine::XR::InputDevice>* value);
    // [DebuggerBrowsableAttribute] Offset: 0x1095548
    // Get static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceConfigChanged
    static ::System::Action_1<::UnityEngine::XR::InputDevice>* _get_deviceConfigChanged();
    // Set static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceConfigChanged
    static void _set_deviceConfigChanged(::System::Action_1<::UnityEngine::XR::InputDevice>* value);
    // static private System.Void InvokeConnectionEvent(System.UInt64 deviceId, UnityEngine.XR.ConnectionChangeType change)
    // Offset: 0x2B37A08
    static void InvokeConnectionEvent(uint64_t deviceId, ::UnityEngine::XR::ConnectionChangeType change);
  }; // UnityEngine.XR.InputDevices
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::InputDevices::InvokeConnectionEvent
// Il2CppName: InvokeConnectionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::UnityEngine::XR::ConnectionChangeType)>(&UnityEngine::XR::InputDevices::InvokeConnectionEvent)> {
  static const MethodInfo* get() {
    static auto* deviceId = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* change = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "ConnectionChangeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::InputDevices*), "InvokeConnectionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceId, change});
  }
};
