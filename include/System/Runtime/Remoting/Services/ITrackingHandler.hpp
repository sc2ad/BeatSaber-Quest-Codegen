// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ObjRef
  class ObjRef;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Remoting.Services
namespace System::Runtime::Remoting::Services {
  // Forward declaring type: ITrackingHandler
  class ITrackingHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Services::ITrackingHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Services::ITrackingHandler*, "System.Runtime.Remoting.Services", "ITrackingHandler");
// Type namespace: System.Runtime.Remoting.Services
namespace System::Runtime::Remoting::Services {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Services.ITrackingHandler
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 11AC2DC
  class ITrackingHandler {
    public:
    // public System.Void DisconnectedObject(System.Object obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void DisconnectedObject(::Il2CppObject* obj);
    // public System.Void MarshaledObject(System.Object obj, System.Runtime.Remoting.ObjRef or)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void MarshaledObject(::Il2CppObject* obj, ::System::Runtime::Remoting::ObjRef* _or);
    // public System.Void UnmarshaledObject(System.Object obj, System.Runtime.Remoting.ObjRef or)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void UnmarshaledObject(::Il2CppObject* obj, ::System::Runtime::Remoting::ObjRef* _or);
  }; // System.Runtime.Remoting.Services.ITrackingHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Services::ITrackingHandler::DisconnectedObject
// Il2CppName: DisconnectedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Services::ITrackingHandler::*)(::Il2CppObject*)>(&System::Runtime::Remoting::Services::ITrackingHandler::DisconnectedObject)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Services::ITrackingHandler*), "DisconnectedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Services::ITrackingHandler::MarshaledObject
// Il2CppName: MarshaledObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Services::ITrackingHandler::*)(::Il2CppObject*, ::System::Runtime::Remoting::ObjRef*)>(&System::Runtime::Remoting::Services::ITrackingHandler::MarshaledObject)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* _or = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "ObjRef")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Services::ITrackingHandler*), "MarshaledObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, _or});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Services::ITrackingHandler::UnmarshaledObject
// Il2CppName: UnmarshaledObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Services::ITrackingHandler::*)(::Il2CppObject*, ::System::Runtime::Remoting::ObjRef*)>(&System::Runtime::Remoting::Services::ITrackingHandler::UnmarshaledObject)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* _or = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "ObjRef")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Services::ITrackingHandler*), "UnmarshaledObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, _or});
  }
};
