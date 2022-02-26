// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMethodCallMessage
#include "System/Runtime/Remoting/Messaging/IMethodCallMessage.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: LogicalCallContext
  class LogicalCallContext;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: ErrorMessage
  class ErrorMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ErrorMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ErrorMessage*, "System.Runtime.Remoting.Messaging", "ErrorMessage");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.ErrorMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class ErrorMessage : public ::Il2CppObject/*, public ::System::Runtime::Remoting::Messaging::IMethodCallMessage*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.String _uri
    // Size: 0x8
    // Offset: 0x10
    ::StringW uri;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Remoting::Messaging::IMethodCallMessage
    operator ::System::Runtime::Remoting::Messaging::IMethodCallMessage() noexcept {
      return *reinterpret_cast<::System::Runtime::Remoting::Messaging::IMethodCallMessage*>(this);
    }
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return uri;
    }
    // Get instance field reference: private System.String _uri
    ::StringW& dyn__uri();
    // public System.Int32 get_ArgCount()
    // Offset: 0x1B8AF6C
    int get_ArgCount();
    // public System.Object[] get_Args()
    // Offset: 0x1B8AF74
    ::ArrayW<::Il2CppObject*> get_Args();
    // public System.Reflection.MethodBase get_MethodBase()
    // Offset: 0x1B8AF7C
    ::System::Reflection::MethodBase* get_MethodBase();
    // public System.String get_MethodName()
    // Offset: 0x1B8AF84
    ::StringW get_MethodName();
    // public System.Object get_MethodSignature()
    // Offset: 0x1B8AFCC
    ::Il2CppObject* get_MethodSignature();
    // public System.Collections.IDictionary get_Properties()
    // Offset: 0x1B8AFD4
    ::System::Collections::IDictionary* get_Properties();
    // public System.String get_TypeName()
    // Offset: 0x1B8AFDC
    ::StringW get_TypeName();
    // public System.String get_Uri()
    // Offset: 0x1B8B024
    ::StringW get_Uri();
    // public System.Runtime.Remoting.Messaging.LogicalCallContext get_LogicalCallContext()
    // Offset: 0x1B8B034
    ::System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
    // public System.Object GetArg(System.Int32 arg_num)
    // Offset: 0x1B8B02C
    ::Il2CppObject* GetArg(int arg_num);
    // public System.Void .ctor()
    // Offset: 0x1B7A7F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ErrorMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::ErrorMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ErrorMessage*, creationType>()));
    }
  }; // System.Runtime.Remoting.Messaging.ErrorMessage
  #pragma pack(pop)
  static check_size<sizeof(ErrorMessage), 16 + sizeof(::StringW)> __System_Runtime_Remoting_Messaging_ErrorMessageSizeCheck;
  static_assert(sizeof(ErrorMessage) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ErrorMessage::get_ArgCount
// Il2CppName: get_ArgCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Remoting::Messaging::ErrorMessage::*)()>(&System::Runtime::Remoting::Messaging::ErrorMessage::get_ArgCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ErrorMessage*), "get_ArgCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ErrorMessage::get_Args
// Il2CppName: get_Args
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Runtime::Remoting::Messaging::ErrorMessage::*)()>(&System::Runtime::Remoting::Messaging::ErrorMessage::get_Args)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ErrorMessage*), "get_Args", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ErrorMessage::get_MethodBase
// Il2CppName: get_MethodBase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBase* (System::Runtime::Remoting::Messaging::ErrorMessage::*)()>(&System::Runtime::Remoting::Messaging::ErrorMessage::get_MethodBase)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ErrorMessage*), "get_MethodBase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ErrorMessage::get_MethodName
// Il2CppName: get_MethodName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Messaging::ErrorMessage::*)()>(&System::Runtime::Remoting::Messaging::ErrorMessage::get_MethodName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ErrorMessage*), "get_MethodName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ErrorMessage::get_MethodSignature
// Il2CppName: get_MethodSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::ErrorMessage::*)()>(&System::Runtime::Remoting::Messaging::ErrorMessage::get_MethodSignature)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ErrorMessage*), "get_MethodSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ErrorMessage::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (System::Runtime::Remoting::Messaging::ErrorMessage::*)()>(&System::Runtime::Remoting::Messaging::ErrorMessage::get_Properties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ErrorMessage*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ErrorMessage::get_TypeName
// Il2CppName: get_TypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Messaging::ErrorMessage::*)()>(&System::Runtime::Remoting::Messaging::ErrorMessage::get_TypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ErrorMessage*), "get_TypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ErrorMessage::get_Uri
// Il2CppName: get_Uri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::Messaging::ErrorMessage::*)()>(&System::Runtime::Remoting::Messaging::ErrorMessage::get_Uri)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ErrorMessage*), "get_Uri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ErrorMessage::get_LogicalCallContext
// Il2CppName: get_LogicalCallContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::LogicalCallContext* (System::Runtime::Remoting::Messaging::ErrorMessage::*)()>(&System::Runtime::Remoting::Messaging::ErrorMessage::get_LogicalCallContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ErrorMessage*), "get_LogicalCallContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ErrorMessage::GetArg
// Il2CppName: GetArg
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::ErrorMessage::*)(int)>(&System::Runtime::Remoting::Messaging::ErrorMessage::GetArg)> {
  static const MethodInfo* get() {
    static auto* arg_num = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ErrorMessage*), "GetArg", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg_num});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ErrorMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
