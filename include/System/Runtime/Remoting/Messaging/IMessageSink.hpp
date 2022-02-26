// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
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
  // Forward declaring type: IMessageSink
  class IMessageSink;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::IMessageSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::IMessageSink*, "System.Runtime.Remoting.Messaging", "IMessageSink");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.IMessageSink
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 118AF54
  class IMessageSink {
    public:
    // public System.Runtime.Remoting.Messaging.IMessage SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0xFFFFFFFF
    ::System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg);
    // public System.Runtime.Remoting.Messaging.IMessageCtrl AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0xFFFFFFFF
    ::System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage* msg, ::System::Runtime::Remoting::Messaging::IMessageSink* replySink);
  }; // System.Runtime.Remoting.Messaging.IMessageSink
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IMessageSink::SyncProcessMessage
// Il2CppName: SyncProcessMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessage* (System::Runtime::Remoting::Messaging::IMessageSink::*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&System::Runtime::Remoting::Messaging::IMessageSink::SyncProcessMessage)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::IMessageSink*), "SyncProcessMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IMessageSink::AsyncProcessMessage
// Il2CppName: AsyncProcessMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageCtrl* (System::Runtime::Remoting::Messaging::IMessageSink::*)(::System::Runtime::Remoting::Messaging::IMessage*, ::System::Runtime::Remoting::Messaging::IMessageSink*)>(&System::Runtime::Remoting::Messaging::IMessageSink::AsyncProcessMessage)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessage")->byval_arg;
    static auto* replySink = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "IMessageSink")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::IMessageSink*), "AsyncProcessMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg, replySink});
  }
};
