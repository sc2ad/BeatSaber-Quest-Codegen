// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: MarshalByRefObject
  class MarshalByRefObject;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Remoting::Proxies
namespace System::Runtime::Remoting::Proxies {
  // Forward declaring type: RealProxy
  class RealProxy;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ObjRef
  class ObjRef;
}
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: Context
  class Context;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Proxies
namespace System::Runtime::Remoting::Proxies {
  // Forward declaring type: ProxyAttribute
  class ProxyAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Proxies::ProxyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Proxies::ProxyAttribute*, "System.Runtime.Remoting.Proxies", "ProxyAttribute");
// Type namespace: System.Runtime.Remoting.Proxies
namespace System::Runtime::Remoting::Proxies {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Proxies.ProxyAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 118AA50
  // [AttributeUsageAttribute] Offset: 118AA50
  class ProxyAttribute : public ::System::Attribute {
    public:
    // public System.MarshalByRefObject CreateInstance(System.Type serverType)
    // Offset: 0x1800244
    ::System::MarshalByRefObject* CreateInstance(::System::Type* serverType);
    // public System.Runtime.Remoting.Proxies.RealProxy CreateProxy(System.Runtime.Remoting.ObjRef objRef, System.Type serverType, System.Object serverObject, System.Runtime.Remoting.Contexts.Context serverContext)
    // Offset: 0x1800394
    ::System::Runtime::Remoting::Proxies::RealProxy* CreateProxy(::System::Runtime::Remoting::ObjRef* objRef, ::System::Type* serverType, ::Il2CppObject* serverObject, ::System::Runtime::Remoting::Contexts::Context* serverContext);
  }; // System.Runtime.Remoting.Proxies.ProxyAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::ProxyAttribute::CreateInstance
// Il2CppName: CreateInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::MarshalByRefObject* (System::Runtime::Remoting::Proxies::ProxyAttribute::*)(::System::Type*)>(&System::Runtime::Remoting::Proxies::ProxyAttribute::CreateInstance)> {
  static const MethodInfo* get() {
    static auto* serverType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::ProxyAttribute*), "CreateInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serverType});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Proxies::ProxyAttribute::CreateProxy
// Il2CppName: CreateProxy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Proxies::RealProxy* (System::Runtime::Remoting::Proxies::ProxyAttribute::*)(::System::Runtime::Remoting::ObjRef*, ::System::Type*, ::Il2CppObject*, ::System::Runtime::Remoting::Contexts::Context*)>(&System::Runtime::Remoting::Proxies::ProxyAttribute::CreateProxy)> {
  static const MethodInfo* get() {
    static auto* objRef = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "ObjRef")->byval_arg;
    static auto* serverType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* serverObject = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* serverContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Contexts", "Context")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Proxies::ProxyAttribute*), "CreateProxy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objRef, serverType, serverObject, serverContext});
  }
};
