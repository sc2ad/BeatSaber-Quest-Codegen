// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMethodCallMessage
#include "System/Runtime/Remoting/Messaging/IMethodCallMessage.hpp"
// Including type: System.Runtime.Remoting.Messaging.IInternalMessage
#include "System/Runtime/Remoting/Messaging/IInternalMessage.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: LogicalCallContext
  class LogicalCallContext;
  // Forward declaring type: CADMethodCallMessage
  class CADMethodCallMessage;
  // Skipping declaration: IMethodMessage because it is already included!
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: Identity
  class Identity;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.MethodCall
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: E6011C
  // [CLSCompliantAttribute] Offset: E6011C
  class MethodCall : public ::Il2CppObject/*, public System::Runtime::Serialization::ISerializable, public System::Runtime::Remoting::Messaging::IMethodCallMessage, public System::Runtime::Remoting::Messaging::IInternalMessage*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.String _uri
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* uri;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _typeName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* typeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _methodName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* methodName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Object[] _args
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::Il2CppObject*> args;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // private System.Type[] _methodSignature
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<System::Type*> methodSignature;
    // Field size check
    static_assert(sizeof(::ArrayW<System::Type*>) == 0x8);
    // private System.Reflection.MethodBase _methodBase
    // Size: 0x8
    // Offset: 0x38
    System::Reflection::MethodBase* methodBase;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodBase*) == 0x8);
    // private System.Runtime.Remoting.Messaging.LogicalCallContext _callContext
    // Size: 0x8
    // Offset: 0x40
    System::Runtime::Remoting::Messaging::LogicalCallContext* callContext;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::LogicalCallContext*) == 0x8);
    // private System.Runtime.Remoting.Identity _targetIdentity
    // Size: 0x8
    // Offset: 0x48
    System::Runtime::Remoting::Identity* targetIdentity;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Identity*) == 0x8);
    // private System.Type[] _genericArguments
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<System::Type*> genericArguments;
    // Field size check
    static_assert(sizeof(::ArrayW<System::Type*>) == 0x8);
    // protected System.Collections.IDictionary ExternalProperties
    // Size: 0x8
    // Offset: 0x58
    System::Collections::IDictionary* ExternalProperties;
    // Field size check
    static_assert(sizeof(System::Collections::IDictionary*) == 0x8);
    // protected System.Collections.IDictionary InternalProperties
    // Size: 0x8
    // Offset: 0x60
    System::Collections::IDictionary* InternalProperties;
    // Field size check
    static_assert(sizeof(System::Collections::IDictionary*) == 0x8);
    public:
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Remoting::Messaging::IMethodCallMessage
    operator System::Runtime::Remoting::Messaging::IMethodCallMessage() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Messaging::IMethodCallMessage*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Remoting::Messaging::IInternalMessage
    operator System::Runtime::Remoting::Messaging::IInternalMessage() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Messaging::IInternalMessage*>(this);
    }
    // Get instance field reference: private System.String _uri
    ::Il2CppString*& dyn__uri();
    // Get instance field reference: private System.String _typeName
    ::Il2CppString*& dyn__typeName();
    // Get instance field reference: private System.String _methodName
    ::Il2CppString*& dyn__methodName();
    // Get instance field reference: private System.Object[] _args
    ::ArrayW<::Il2CppObject*>& dyn__args();
    // Get instance field reference: private System.Type[] _methodSignature
    ::ArrayW<System::Type*>& dyn__methodSignature();
    // Get instance field reference: private System.Reflection.MethodBase _methodBase
    System::Reflection::MethodBase*& dyn__methodBase();
    // Get instance field reference: private System.Runtime.Remoting.Messaging.LogicalCallContext _callContext
    System::Runtime::Remoting::Messaging::LogicalCallContext*& dyn__callContext();
    // Get instance field reference: private System.Runtime.Remoting.Identity _targetIdentity
    System::Runtime::Remoting::Identity*& dyn__targetIdentity();
    // Get instance field reference: private System.Type[] _genericArguments
    ::ArrayW<System::Type*>& dyn__genericArguments();
    // Get instance field reference: protected System.Collections.IDictionary ExternalProperties
    System::Collections::IDictionary*& dyn_ExternalProperties();
    // Get instance field reference: protected System.Collections.IDictionary InternalProperties
    System::Collections::IDictionary*& dyn_InternalProperties();
    // public System.Int32 get_ArgCount()
    // Offset: 0x1C1B160
    int get_ArgCount();
    // public System.Object[] get_Args()
    // Offset: 0x1C1B17C
    ::ArrayW<::Il2CppObject*> get_Args();
    // public System.Runtime.Remoting.Messaging.LogicalCallContext get_LogicalCallContext()
    // Offset: 0x1C1B184
    System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
    // public System.Reflection.MethodBase get_MethodBase()
    // Offset: 0x1C1B1F0
    System::Reflection::MethodBase* get_MethodBase();
    // public System.String get_MethodName()
    // Offset: 0x1C1B8AC
    ::Il2CppString* get_MethodName();
    // public System.Object get_MethodSignature()
    // Offset: 0x1C1B8EC
    ::Il2CppObject* get_MethodSignature();
    // public System.Collections.IDictionary get_Properties()
    // Offset: 0x1C16758
    System::Collections::IDictionary* get_Properties();
    // public System.String get_TypeName()
    // Offset: 0x1C1BABC
    ::Il2CppString* get_TypeName();
    // public System.String get_Uri()
    // Offset: 0x1C1BB10
    ::Il2CppString* get_Uri();
    // public System.Void set_Uri(System.String value)
    // Offset: 0x1C1BB18
    void set_Uri(::Il2CppString* value);
    // private System.String System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri()
    // Offset: 0x1C1BB20
    ::Il2CppString* System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri();
    // private System.Void System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String value)
    // Offset: 0x1C1BB28
    void System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::Il2CppString* value);
    // private System.Runtime.Remoting.Identity System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity()
    // Offset: 0x1C1C38C
    System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity();
    // private System.Void System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity(System.Runtime.Remoting.Identity value)
    // Offset: 0x1C1C394
    void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(System::Runtime::Remoting::Identity* value);
    // private System.Type[] get_GenericArguments()
    // Offset: 0x1C1C294
    ::ArrayW<System::Type*> get_GenericArguments();
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1C1594C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodCall* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::MethodCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodCall*, creationType>(info, context)));
    }
    // System.Void .ctor(System.Runtime.Remoting.Messaging.CADMethodCallMessage msg)
    // Offset: 0x1C1ACD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodCall* New_ctor(System::Runtime::Remoting::Messaging::CADMethodCallMessage* msg) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::MethodCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodCall*, creationType>(msg)));
    }
    // System.Void CopyFrom(System.Runtime.Remoting.Messaging.IMethodMessage call)
    // Offset: 0x1C1ADE8
    void CopyFrom(System::Runtime::Remoting::Messaging::IMethodMessage* call);
    // System.Void InitMethodProperty(System.String key, System.Object value)
    // Offset: 0x1C15EAC
    void InitMethodProperty(::Il2CppString* key, ::Il2CppObject* value);
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1C16380
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.Void InitDictionary()
    // Offset: 0x1C1BA30
    void InitDictionary();
    // public System.Object GetArg(System.Int32 argNum)
    // Offset: 0x1C1BB30
    ::Il2CppObject* GetArg(int argNum);
    // public System.Void Init()
    // Offset: 0x1C1BB6C
    void Init();
    // public System.Void ResolveMethod()
    // Offset: 0x1C1B22C
    void ResolveMethod();
    // private System.Type CastTo(System.String clientType, System.Type serverType)
    // Offset: 0x1C1BC30
    System::Type* CastTo(::Il2CppString* clientType, System::Type* serverType);
    // static private System.String GetTypeNameFromAssemblyQualifiedName(System.String aqname)
    // Offset: 0x1C1C2DC
    static ::Il2CppString* GetTypeNameFromAssemblyQualifiedName(::Il2CppString* aqname);
    // System.Void .ctor()
    // Offset: 0x1C15940
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodCall* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::MethodCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodCall*, creationType>()));
    }
  }; // System.Runtime.Remoting.Messaging.MethodCall
  #pragma pack(pop)
  static check_size<sizeof(MethodCall), 96 + sizeof(System::Collections::IDictionary*)> __System_Runtime_Remoting_Messaging_MethodCallSizeCheck;
  static_assert(sizeof(MethodCall) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::MethodCall*, "System.Runtime.Remoting.Messaging", "MethodCall");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::get_ArgCount
// Il2CppName: get_ArgCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::get_ArgCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "get_ArgCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::get_Args
// Il2CppName: get_Args
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::get_Args)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "get_Args", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::get_LogicalCallContext
// Il2CppName: get_LogicalCallContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Messaging::LogicalCallContext* (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::get_LogicalCallContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "get_LogicalCallContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::get_MethodBase
// Il2CppName: get_MethodBase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Reflection::MethodBase* (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::get_MethodBase)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "get_MethodBase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::get_MethodName
// Il2CppName: get_MethodName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::get_MethodName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "get_MethodName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::get_MethodSignature
// Il2CppName: get_MethodSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::get_MethodSignature)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "get_MethodSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IDictionary* (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::get_Properties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::get_TypeName
// Il2CppName: get_TypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::get_TypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "get_TypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::get_Uri
// Il2CppName: get_Uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::get_Uri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "get_Uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::set_Uri
// Il2CppName: set_Uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MethodCall::*)(::Il2CppString*)>(&System::Runtime::Remoting::Messaging::MethodCall::set_Uri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "set_Uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri
// Il2CppName: System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri
// Il2CppName: System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MethodCall::*)(::Il2CppString*)>(&System::Runtime::Remoting::Messaging::MethodCall::System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity
// Il2CppName: System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Identity* (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity
// Il2CppName: System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MethodCall::*)(System::Runtime::Remoting::Identity*)>(&System::Runtime::Remoting::Messaging::MethodCall::System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "Identity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::get_GenericArguments
// Il2CppName: get_GenericArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Type*> (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::get_GenericArguments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "get_GenericArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MethodCall::*)(System::Runtime::Remoting::Messaging::IMethodMessage*)>(&System::Runtime::Remoting::Messaging::MethodCall::CopyFrom)> {
  static const MethodInfo* get() {
    static auto* call = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMethodMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{call});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::InitMethodProperty
// Il2CppName: InitMethodProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MethodCall::*)(::Il2CppString*, ::Il2CppObject*)>(&System::Runtime::Remoting::Messaging::MethodCall::InitMethodProperty)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "InitMethodProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MethodCall::*)(System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Remoting::Messaging::MethodCall::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::InitDictionary
// Il2CppName: InitDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::InitDictionary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "InitDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::GetArg
// Il2CppName: GetArg
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::MethodCall::*)(int)>(&System::Runtime::Remoting::Messaging::MethodCall::GetArg)> {
  static const MethodInfo* get() {
    static auto* argNum = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "GetArg", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{argNum});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::ResolveMethod
// Il2CppName: ResolveMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::MethodCall::*)()>(&System::Runtime::Remoting::Messaging::MethodCall::ResolveMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "ResolveMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::CastTo
// Il2CppName: CastTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Runtime::Remoting::Messaging::MethodCall::*)(::Il2CppString*, System::Type*)>(&System::Runtime::Remoting::Messaging::MethodCall::CastTo)> {
  static const MethodInfo* get() {
    static auto* clientType = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* serverType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "CastTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clientType, serverType});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::GetTypeNameFromAssemblyQualifiedName
// Il2CppName: GetTypeNameFromAssemblyQualifiedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::Runtime::Remoting::Messaging::MethodCall::GetTypeNameFromAssemblyQualifiedName)> {
  static const MethodInfo* get() {
    static auto* aqname = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::MethodCall*), "GetTypeNameFromAssemblyQualifiedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aqname});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::MethodCall::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
