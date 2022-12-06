// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: IActivator
  class IActivator;
  // Forward declaring type: IConstructionCallMessage
  class IConstructionCallMessage;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: ConstructionCall
  class ConstructionCall;
}
// Forward declaring namespace: System::Runtime::Remoting::Proxies
namespace System::Runtime::Remoting::Proxies {
  // Forward declaring type: RemotingProxy
  class RemotingProxy;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: ActivationServices
  class ActivationServices;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Activation::ActivationServices);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Activation::ActivationServices*, "System.Runtime.Remoting.Activation", "ActivationServices");
// Type namespace: System.Runtime.Remoting.Activation
namespace System::Runtime::Remoting::Activation {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Activation.ActivationServices
  // [TokenAttribute] Offset: FFFFFFFF
  class ActivationServices : public ::Il2CppObject {
    public:
    // Get static field: static private System.Runtime.Remoting.Activation.IActivator _constructionActivator
    static ::System::Runtime::Remoting::Activation::IActivator* _get__constructionActivator();
    // Set static field: static private System.Runtime.Remoting.Activation.IActivator _constructionActivator
    static void _set__constructionActivator(::System::Runtime::Remoting::Activation::IActivator* value);
    // static private System.Runtime.Remoting.Activation.IActivator get_ConstructionActivator()
    // Offset: 0x1E0BB24
    static ::System::Runtime::Remoting::Activation::IActivator* get_ConstructionActivator();
    // static public System.Runtime.Remoting.Messaging.IMessage Activate(System.Runtime.Remoting.Proxies.RemotingProxy proxy, System.Runtime.Remoting.Messaging.ConstructionCall ctorCall)
    // Offset: 0x1E0BBB4
    static ::System::Runtime::Remoting::Messaging::IMessage* Activate(::System::Runtime::Remoting::Proxies::RemotingProxy* proxy, ::System::Runtime::Remoting::Messaging::ConstructionCall* ctorCall);
    // static public System.Runtime.Remoting.Messaging.IMessage RemoteActivate(System.Runtime.Remoting.Activation.IConstructionCallMessage ctorCall)
    // Offset: 0x1E0BDE4
    static ::System::Runtime::Remoting::Messaging::IMessage* RemoteActivate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall);
    // static public System.Runtime.Remoting.Messaging.ConstructionCall CreateConstructionCall(System.Type type, System.String activationUrl, System.Object[] activationAttributes)
    // Offset: 0x1E0BFC4
    static ::System::Runtime::Remoting::Messaging::ConstructionCall* CreateConstructionCall(::System::Type* type, ::StringW activationUrl, ::ArrayW<::Il2CppObject*> activationAttributes);
    // static public System.Runtime.Remoting.Messaging.IMessage CreateInstanceFromMessage(System.Runtime.Remoting.Activation.IConstructionCallMessage ctorCall)
    // Offset: 0x1E0C940
    static ::System::Runtime::Remoting::Messaging::IMessage* CreateInstanceFromMessage(::System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall);
    // static public System.Object CreateProxyForType(System.Type type)
    // Offset: 0x1E0CD40
    static ::Il2CppObject* CreateProxyForType(::System::Type* type);
    // static public System.Object AllocateUninitializedClassInstance(System.Type type)
    // Offset: 0x1E0CD3C
    static ::Il2CppObject* AllocateUninitializedClassInstance(::System::Type* type);
    // static public System.Void EnableProxyActivation(System.Type type, System.Boolean enable)
    // Offset: 0x1E0CEB4
    static void EnableProxyActivation(::System::Type* type, bool enable);
  }; // System.Runtime.Remoting.Activation.ActivationServices
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::ActivationServices::get_ConstructionActivator
// Il2CppName: get_ConstructionActivator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Activation::IActivator* (*)()>(&System::Runtime::Remoting::Activation::ActivationServices::get_ConstructionActivator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::ActivationServices*), "get_ConstructionActivator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::ActivationServices::Activate
// Il2CppName: Activate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (*)(::System::Runtime::Remoting::Proxies::RemotingProxy*, ::System::Runtime::Remoting::Messaging::ConstructionCall*)>(&System::Runtime::Remoting::Activation::ActivationServices::Activate)> {
  static const MethodInfo* get() {
    static auto* proxy = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Proxies", "RemotingProxy")->byval_arg;
    static auto* ctorCall = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "ConstructionCall")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::ActivationServices*), "Activate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{proxy, ctorCall});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::ActivationServices::RemoteActivate
// Il2CppName: RemoteActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&System::Runtime::Remoting::Activation::ActivationServices::RemoteActivate)> {
  static const MethodInfo* get() {
    static auto* ctorCall = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Activation", "IConstructionCallMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::ActivationServices*), "RemoteActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctorCall});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::ActivationServices::CreateConstructionCall
// Il2CppName: CreateConstructionCall
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::ConstructionCall* (*)(::System::Type*, ::StringW, ::ArrayW<::Il2CppObject*>)>(&System::Runtime::Remoting::Activation::ActivationServices::CreateConstructionCall)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* activationUrl = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* activationAttributes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::ActivationServices*), "CreateConstructionCall", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, activationUrl, activationAttributes});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::ActivationServices::CreateInstanceFromMessage
// Il2CppName: CreateInstanceFromMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(&System::Runtime::Remoting::Activation::ActivationServices::CreateInstanceFromMessage)> {
  static const MethodInfo* get() {
    static auto* ctorCall = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Activation", "IConstructionCallMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::ActivationServices*), "CreateInstanceFromMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctorCall});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::ActivationServices::CreateProxyForType
// Il2CppName: CreateProxyForType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::Type*)>(&System::Runtime::Remoting::Activation::ActivationServices::CreateProxyForType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::ActivationServices*), "CreateProxyForType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::ActivationServices::AllocateUninitializedClassInstance
// Il2CppName: AllocateUninitializedClassInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::Type*)>(&System::Runtime::Remoting::Activation::ActivationServices::AllocateUninitializedClassInstance)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::ActivationServices*), "AllocateUninitializedClassInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Activation::ActivationServices::EnableProxyActivation
// Il2CppName: EnableProxyActivation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*, bool)>(&System::Runtime::Remoting::Activation::ActivationServices::EnableProxyActivation)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* enable = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Activation::ActivationServices*), "EnableProxyActivation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, enable});
  }
};
