// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RemoteSettings
  class RemoteSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::RemoteSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RemoteSettings*, "UnityEngine", "RemoteSettings");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.RemoteSettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 121C078
  // [NativeHeaderAttribute] Offset: 121C078
  class RemoteSettings : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::RemoteSettings::UpdatedEventHandler
    class UpdatedEventHandler;
    // [DebuggerBrowsableAttribute] Offset: 0x121C258
    // Get static field: static private UnityEngine.RemoteSettings/UnityEngine.UpdatedEventHandler Updated
    static ::UnityEngine::RemoteSettings::UpdatedEventHandler* _get_Updated();
    // Set static field: static private UnityEngine.RemoteSettings/UnityEngine.UpdatedEventHandler Updated
    static void _set_Updated(::UnityEngine::RemoteSettings::UpdatedEventHandler* value);
    // [DebuggerBrowsableAttribute] Offset: 0x121C294
    // Get static field: static private System.Action BeforeFetchFromServer
    static ::System::Action* _get_BeforeFetchFromServer();
    // Set static field: static private System.Action BeforeFetchFromServer
    static void _set_BeforeFetchFromServer(::System::Action* value);
    // [DebuggerBrowsableAttribute] Offset: 0x121C2D0
    // Get static field: static private System.Action`3<System.Boolean,System.Boolean,System.Int32> Completed
    static ::System::Action_3<bool, bool, int>* _get_Completed();
    // Set static field: static private System.Action`3<System.Boolean,System.Boolean,System.Int32> Completed
    static void _set_Completed(::System::Action_3<bool, bool, int>* value);
    // static System.Void RemoteSettingsUpdated(System.Boolean wasLastUpdatedFromServer)
    // Offset: 0x2A6030C
    static void RemoteSettingsUpdated(bool wasLastUpdatedFromServer);
    // static System.Void RemoteSettingsBeforeFetchFromServer()
    // Offset: 0x2A60578
    static void RemoteSettingsBeforeFetchFromServer();
    // static System.Void RemoteSettingsUpdateCompleted(System.Boolean wasLastUpdatedFromServer, System.Boolean settingsChanged, System.Int32 response)
    // Offset: 0x2A605DC
    static void RemoteSettingsUpdateCompleted(bool wasLastUpdatedFromServer, bool settingsChanged, int response);
  }; // UnityEngine.RemoteSettings
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::RemoteSettings::RemoteSettingsUpdated
// Il2CppName: RemoteSettingsUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::RemoteSettings::RemoteSettingsUpdated)> {
  static const MethodInfo* get() {
    static auto* wasLastUpdatedFromServer = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RemoteSettings*), "RemoteSettingsUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{wasLastUpdatedFromServer});
  }
};
// Writing MetadataGetter for method: UnityEngine::RemoteSettings::RemoteSettingsBeforeFetchFromServer
// Il2CppName: RemoteSettingsBeforeFetchFromServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::RemoteSettings::RemoteSettingsBeforeFetchFromServer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RemoteSettings*), "RemoteSettingsBeforeFetchFromServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RemoteSettings::RemoteSettingsUpdateCompleted
// Il2CppName: RemoteSettingsUpdateCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, bool, int)>(&UnityEngine::RemoteSettings::RemoteSettingsUpdateCompleted)> {
  static const MethodInfo* get() {
    static auto* wasLastUpdatedFromServer = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* settingsChanged = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* response = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RemoteSettings*), "RemoteSettingsUpdateCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{wasLastUpdatedFromServer, settingsChanged, response});
  }
};
