// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessageSink
#include "System/Runtime/Remoting/Messaging/IMessageSink.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: Context
  class Context;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMessageCtrl
  class IMessageCtrl;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: ClientContextTerminatorSink
  class ClientContextTerminatorSink;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink*, "System.Runtime.Remoting.Messaging", "ClientContextTerminatorSink");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.ClientContextTerminatorSink
  // [TokenAttribute] Offset: FFFFFFFF
  class ClientContextTerminatorSink : public ::Il2CppObject/*, public ::System::Runtime::Remoting::Messaging::IMessageSink*/ {
    public:
    public:
    // private System.Runtime.Remoting.Contexts.Context _context
    // Size: 0x8
    // Offset: 0x10
    ::System::Runtime::Remoting::Contexts::Context* context;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Contexts::Context*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Remoting::Messaging::IMessageSink
    operator ::System::Runtime::Remoting::Messaging::IMessageSink() noexcept {
      return *reinterpret_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(this);
    }
    // Creating interface conversion operator: i_IMessageSink
    inline ::System::Runtime::Remoting::Messaging::IMessageSink* i_IMessageSink() noexcept {
      return reinterpret_cast<::System::Runtime::Remoting::Messaging::IMessageSink*>(this);
    }
    // Creating conversion operator: operator ::System::Runtime::Remoting::Contexts::Context*
    constexpr operator ::System::Runtime::Remoting::Contexts::Context*() const noexcept {
      return context;
    }
    // Get instance field reference: private System.Runtime.Remoting.Contexts.Context _context
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Contexts::Context*& dyn__context();
    // public System.Void .ctor(System.Runtime.Remoting.Contexts.Context ctx)
    // Offset: 0x1D334B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClientContextTerminatorSink* New_ctor(::System::Runtime::Remoting::Contexts::Context* ctx) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClientContextTerminatorSink*, creationType>(ctx)));
    }
    // public System.Runtime.Remoting.Messaging.IMessage SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x1D3B1A0
    ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);
    // public System.Runtime.Remoting.Messaging.IMessageCtrl AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0x1D3B380
    ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);
  }; // System.Runtime.Remoting.Messaging.ClientContextTerminatorSink
  #pragma pack(pop)
  static check_size<sizeof(ClientContextTerminatorSink), 16 + sizeof(::System::Runtime::Remoting::Contexts::Context*)> __System_Runtime_Remoting_Messaging_ClientContextTerminatorSinkSizeCheck;
  static_assert(sizeof(ClientContextTerminatorSink) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::SyncProcessMessage
// Il2CppName: SyncProcessMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::SyncProcessMessage)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ClientContextTerminatorSink*), "SyncProcessMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::AsyncProcessMessage
// Il2CppName: AsyncProcessMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl* (System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(&System::Runtime::Remoting::Messaging::ClientContextTerminatorSink::AsyncProcessMessage)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    static auto* replySink = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessageSink")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::ClientContextTerminatorSink*), "AsyncProcessMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg, replySink});
  }
};
