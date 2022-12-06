// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMethodReturnMessage
#include "System/Runtime/Remoting/Messaging/IMethodReturnMessage.hpp"
// Including type: System.Runtime.Remoting.Messaging.IInternalMessage
#include "System/Runtime/Remoting/Messaging/IInternalMessage.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: LogicalCallContext
  class LogicalCallContext;
  // Forward declaring type: MethodReturnDictionary
  class MethodReturnDictionary;
  // Forward declaring type: ArgInfo
  class ArgInfo;
  // Forward declaring type: IMethodCallMessage
  class IMethodCallMessage;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
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
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: ReturnMessage
  class ReturnMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ReturnMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ReturnMessage*, "System.Runtime.Remoting.Messaging", "ReturnMessage");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.ReturnMessage
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1070EF8
  class ReturnMessage : public ::Il2CppObject/*, public ::System::Runtime::Remoting::Messaging::IMethodReturnMessage, public ::System::Runtime::Remoting::Messaging::IInternalMessage*/ {
    public:
    public:
    // private System.Object[] _outArgs
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Il2CppObject*> outArgs;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // private System.Object[] _args
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Il2CppObject*> args;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // private System.Runtime.Remoting.Messaging.LogicalCallContext _callCtx
    // Size: 0x8
    // Offset: 0x20
    ::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Messaging::LogicalCallContext*) == 0x8);
    // private System.Object _returnValue
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* returnValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.String _uri
    // Size: 0x8
    // Offset: 0x30
    ::StringW uri;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Exception _exception
    // Size: 0x8
    // Offset: 0x38
    ::System::Exception* exception;
    // Field size check
    static_assert(sizeof(::System::Exception*) == 0x8);
    // private System.Reflection.MethodBase _methodBase
    // Size: 0x8
    // Offset: 0x40
    ::System::Reflection::MethodBase* methodBase;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodBase*) == 0x8);
    // private System.String _methodName
    // Size: 0x8
    // Offset: 0x48
    ::StringW methodName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Type[] _methodSignature
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::System::Type*> methodSignature;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    // private System.String _typeName
    // Size: 0x8
    // Offset: 0x58
    ::StringW typeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Runtime.Remoting.Messaging.MethodReturnDictionary _properties
    // Size: 0x8
    // Offset: 0x60
    ::System::Runtime::Remoting::Messaging::MethodReturnDictionary* properties;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Messaging::MethodReturnDictionary*) == 0x8);
    // private System.Runtime.Remoting.Identity _targetIdentity
    // Size: 0x8
    // Offset: 0x68
    ::System::Runtime::Remoting::Identity* targetIdentity;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Identity*) == 0x8);
    // private System.Runtime.Remoting.Messaging.ArgInfo _inArgInfo
    // Size: 0x8
    // Offset: 0x70
    ::System::Runtime::Remoting::Messaging::ArgInfo* inArgInfo;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Messaging::ArgInfo*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Remoting::Messaging::IMethodReturnMessage
    operator ::System::Runtime::Remoting::Messaging::IMethodReturnMessage() noexcept {
      return *reinterpret_cast<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>(this);
    }
    // Creating interface conversion operator: i_IMethodReturnMessage
    inline ::System::Runtime::Remoting::Messaging::IMethodReturnMessage* i_IMethodReturnMessage() noexcept {
      return reinterpret_cast<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Remoting::Messaging::IInternalMessage
    operator ::System::Runtime::Remoting::Messaging::IInternalMessage() noexcept {
      return *reinterpret_cast<::System::Runtime::Remoting::Messaging::IInternalMessage*>(this);
    }
    // Creating interface conversion operator: i_IInternalMessage
    inline ::System::Runtime::Remoting::Messaging::IInternalMessage* i_IInternalMessage() noexcept {
      return reinterpret_cast<::System::Runtime::Remoting::Messaging::IInternalMessage*>(this);
    }
    // Get instance field reference: private System.Object[] _outArgs
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn__outArgs();
    // Get instance field reference: private System.Object[] _args
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn__args();
    // Get instance field reference: private System.Runtime.Remoting.Messaging.LogicalCallContext _callCtx
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Messaging::LogicalCallContext*& dyn__callCtx();
    // Get instance field reference: private System.Object _returnValue
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__returnValue();
    // Get instance field reference: private System.String _uri
    [[deprecated("Use field access instead!")]] ::StringW& dyn__uri();
    // Get instance field reference: private System.Exception _exception
    [[deprecated("Use field access instead!")]] ::System::Exception*& dyn__exception();
    // Get instance field reference: private System.Reflection.MethodBase _methodBase
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodBase*& dyn__methodBase();
    // Get instance field reference: private System.String _methodName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__methodName();
    // Get instance field reference: private System.Type[] _methodSignature
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Type*>& dyn__methodSignature();
    // Get instance field reference: private System.String _typeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__typeName();
    // Get instance field reference: private System.Runtime.Remoting.Messaging.MethodReturnDictionary _properties
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Messaging::MethodReturnDictionary*& dyn__properties();
    // Get instance field reference: private System.Runtime.Remoting.Identity _targetIdentity
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Identity*& dyn__targetIdentity();
    // Get instance field reference: private System.Runtime.Remoting.Messaging.ArgInfo _inArgInfo
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Messaging::ArgInfo*& dyn__inArgInfo();
    // public System.Int32 get_ArgCount()
    // Offset: 0x1D3FC94
    int get_ArgCount();
    // public System.Object[] get_Args()
    // Offset: 0x1D3FCB0
    ::ArrayW<::Il2CppObject*> get_Args();
    // public System.Runtime.Remoting.Messaging.LogicalCallContext get_LogicalCallContext()
    // Offset: 0x1D3FCB8
    ::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
    // public System.Reflection.MethodBase get_MethodBase()
    // Offset: 0x1D3FD24
    ::System::Reflection::MethodBase* get_MethodBase();
    // public System.String get_MethodName()
    // Offset: 0x1D3FD2C
    ::StringW get_MethodName();
    // public System.Object get_MethodSignature()
    // Offset: 0x1D3FD88
    ::Il2CppObject* get_MethodSignature();
    // public System.Collections.IDictionary get_Properties()
    // Offset: 0x1D3FECC
    ::System::Collections::IDictionary* get_Properties();
    // public System.String get_TypeName()
    // Offset: 0x1D3FF38
    ::StringW get_TypeName();
    // public System.String get_Uri()
    // Offset: 0x1D3FFA8
    ::StringW get_Uri();
    // public System.Void set_Uri(System.String value)
    // Offset: 0x1D3FFB0
    void set_Uri(::StringW value);
    // private System.String System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri()
    // Offset: 0x1D3FFB8
    ::StringW System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri();
    // private System.Void System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String value)
    // Offset: 0x1D3FFC0
    void System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::StringW value);
    // public System.Exception get_Exception()
    // Offset: 0x1D40004
    ::System::Exception* get_Exception();
    // public System.Object[] get_OutArgs()
    // Offset: 0x1D4000C
    ::ArrayW<::Il2CppObject*> get_OutArgs();
    // public System.Object get_ReturnValue()
    // Offset: 0x1D400B4
    ::Il2CppObject* get_ReturnValue();
    // private System.Runtime.Remoting.Identity System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity()
    // Offset: 0x1D400BC
    ::System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity();
    // private System.Void System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity(System.Runtime.Remoting.Identity value)
    // Offset: 0x1D400C4
    void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(::System::Runtime::Remoting::Identity* value);
    // public System.Void .ctor(System.Object ret, System.Object[] outArgs, System.Int32 outArgsCount, System.Runtime.Remoting.Messaging.LogicalCallContext callCtx, System.Runtime.Remoting.Messaging.IMethodCallMessage mcm)
    // Offset: 0x1D3FB18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReturnMessage* New_ctor(::Il2CppObject* ret, ::ArrayW<::Il2CppObject*> outArgs, int outArgsCount, ::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* mcm) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::ReturnMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReturnMessage*, creationType>(ret, outArgs, outArgsCount, callCtx, mcm)));
    }
    // public System.Void .ctor(System.Exception e, System.Runtime.Remoting.Messaging.IMethodCallMessage mcm)
    // Offset: 0x1D27DD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReturnMessage* New_ctor(::System::Exception* e, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* mcm) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::ReturnMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReturnMessage*, creationType>(e, mcm)));
    }
    // public System.Object GetArg(System.Int32 argNum)
    // Offset: 0x1D3FFC8
    ::Il2CppObject* GetArg(int argNum);
  }; // System.Runtime.Remoting.Messaging.ReturnMessage
  #pragma pack(pop)
  static check_size<sizeof(ReturnMessage), 112 + sizeof(::System::Runtime::Remoting::Messaging::ArgInfo*)> __System_Runtime_Remoting_Messaging_ReturnMessageSizeCheck;
  static_assert(sizeof(ReturnMessage) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ReturnMessage::get_ArgCount
// Il2CppName: get_ArgCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&System::Runtime::Remoting::Messaging::ReturnMessage::get_ArgCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ReturnMessage*), "get_ArgCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ReturnMessage::get_Args
// Il2CppName: get_Args
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&System::Runtime::Remoting::Messaging::ReturnMessage::get_Args)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ReturnMessage*), "get_Args", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ReturnMessage::get_LogicalCallContext
// Il2CppName: get_LogicalCallContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::LogicalCallContext* (System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&System::Runtime::Remoting::Messaging::ReturnMessage::get_LogicalCallContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ReturnMessage*), "get_LogicalCallContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ReturnMessage::get_MethodBase
// Il2CppName: get_MethodBase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase* (System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&System::Runtime::Remoting::Messaging::ReturnMessage::get_MethodBase)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ReturnMessage*), "get_MethodBase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ReturnMessage::get_MethodName
// Il2CppName: get_MethodName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&System::Runtime::Remoting::Messaging::ReturnMessage::get_MethodName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ReturnMessage*), "get_MethodName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ReturnMessage::get_MethodSignature
// Il2CppName: get_MethodSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&System::Runtime::Remoting::Messaging::ReturnMessage::get_MethodSignature)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ReturnMessage*), "get_MethodSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ReturnMessage::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&System::Runtime::Remoting::Messaging::ReturnMessage::get_Properties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ReturnMessage*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ReturnMessage::get_TypeName
// Il2CppName: get_TypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&System::Runtime::Remoting::Messaging::ReturnMessage::get_TypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ReturnMessage*), "get_TypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ReturnMessage::get_Uri
// Il2CppName: get_Uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&System::Runtime::Remoting::Messaging::ReturnMessage::get_Uri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ReturnMessage*), "get_Uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ReturnMessage::set_Uri
// Il2CppName: set_Uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::ReturnMessage::*)(::StringW)>(&System::Runtime::Remoting::Messaging::ReturnMessage::set_Uri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ReturnMessage*), "set_Uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ReturnMessage::System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri
// Il2CppName: System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&System::Runtime::Remoting::Messaging::ReturnMessage::System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ReturnMessage*), "System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ReturnMessage::System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri
// Il2CppName: System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::ReturnMessage::*)(::StringW)>(&System::Runtime::Remoting::Messaging::ReturnMessage::System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ReturnMessage*), "System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ReturnMessage::get_Exception
// Il2CppName: get_Exception
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&System::Runtime::Remoting::Messaging::ReturnMessage::get_Exception)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ReturnMessage*), "get_Exception", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ReturnMessage::get_OutArgs
// Il2CppName: get_OutArgs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&System::Runtime::Remoting::Messaging::ReturnMessage::get_OutArgs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ReturnMessage*), "get_OutArgs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ReturnMessage::get_ReturnValue
// Il2CppName: get_ReturnValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&System::Runtime::Remoting::Messaging::ReturnMessage::get_ReturnValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ReturnMessage*), "get_ReturnValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ReturnMessage::System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity
// Il2CppName: System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Identity* (System::Runtime::Remoting::Messaging::ReturnMessage::*)()>(&System::Runtime::Remoting::Messaging::ReturnMessage::System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ReturnMessage*), "System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ReturnMessage::System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity
// Il2CppName: System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::ReturnMessage::*)(::System::Runtime::Remoting::Identity*)>(&System::Runtime::Remoting::Messaging::ReturnMessage::System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "Identity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ReturnMessage*), "System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ReturnMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ReturnMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ReturnMessage::GetArg
// Il2CppName: GetArg
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::ReturnMessage::*)(int)>(&System::Runtime::Remoting::Messaging::ReturnMessage::GetArg)> {
  static const MethodInfo* get() {
    static auto* argNum = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ReturnMessage*), "GetArg", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{argNum});
  }
};
