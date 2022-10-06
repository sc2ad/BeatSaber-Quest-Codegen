// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Messaging.MethodResponse
#include "System/Runtime/Remoting/Messaging/MethodResponse.hpp"
// Including type: System.Runtime.Remoting.Activation.IConstructionReturnMessage
#include "System/Runtime/Remoting/Activation/IConstructionReturnMessage.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: LogicalCallContext
  class LogicalCallContext;
  // Forward declaring type: IMethodCallMessage
  class IMethodCallMessage;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: ConstructionResponse
  class ConstructionResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ConstructionResponse);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ConstructionResponse*, "System.Runtime.Remoting.Messaging", "ConstructionResponse");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.ConstructionResponse
  // [TokenAttribute] Offset: FFFFFFFF
  // [CLSCompliantAttribute] Offset: 1059BCC
  // [ComVisibleAttribute] Offset: 1059BCC
  class ConstructionResponse : public ::System::Runtime::Remoting::Messaging::MethodResponse/*, public ::System::Runtime::Remoting::Activation::IConstructionReturnMessage*/ {
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Remoting::Activation::IConstructionReturnMessage
    operator ::System::Runtime::Remoting::Activation::IConstructionReturnMessage() noexcept {
      return *reinterpret_cast<::System::Runtime::Remoting::Activation::IConstructionReturnMessage*>(this);
    }
    // Creating interface conversion operator: i_IConstructionReturnMessage
    inline ::System::Runtime::Remoting::Activation::IConstructionReturnMessage* i_IConstructionReturnMessage() noexcept {
      return reinterpret_cast<::System::Runtime::Remoting::Activation::IConstructionReturnMessage*>(this);
    }
    // System.Void .ctor(System.Object resultObject, System.Runtime.Remoting.Messaging.LogicalCallContext callCtx, System.Runtime.Remoting.Messaging.IMethodCallMessage msg)
    // Offset: 0x1CD0D90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstructionResponse* New_ctor(::Il2CppObject* resultObject, ::System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::ConstructionResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstructionResponse*, creationType>(resultObject, callCtx, msg)));
    }
    // public override System.Collections.IDictionary get_Properties()
    // Offset: 0x1CD0F0C
    // Implemented from: System.Runtime.Remoting.Messaging.MethodResponse
    // Base method: System.Collections.IDictionary MethodResponse::get_Properties()
    ::System::Collections::IDictionary* get_Properties();
    // System.Void .ctor(System.Exception e, System.Runtime.Remoting.Messaging.IMethodCallMessage msg)
    // Offset: 0x1CD0E88
    // Implemented from: System.Runtime.Remoting.Messaging.MethodResponse
    // Base method: System.Void MethodResponse::.ctor(System.Exception e, System.Runtime.Remoting.Messaging.IMethodCallMessage msg)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstructionResponse* New_ctor(::System::Exception* e, ::System::Runtime::Remoting::Messaging::IMethodCallMessage* msg) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::ConstructionResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstructionResponse*, creationType>(e, msg)));
    }
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1CD0E8C
    // Implemented from: System.Runtime.Remoting.Messaging.MethodResponse
    // Base method: System.Void MethodResponse::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstructionResponse* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::ConstructionResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstructionResponse*, creationType>(info, context)));
    }
  }; // System.Runtime.Remoting.Messaging.ConstructionResponse
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionResponse::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IDictionary* (System::Runtime::Remoting::Messaging::ConstructionResponse::*)()>(&System::Runtime::Remoting::Messaging::ConstructionResponse::get_Properties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ConstructionResponse*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ConstructionResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
