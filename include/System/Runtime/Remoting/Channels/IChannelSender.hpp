// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.Channels.IChannel
#include "System/Runtime/Remoting/Channels/IChannel.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessageSink
  class IMessageSink;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Forward declaring type: IChannelSender
  class IChannelSender;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Channels::IChannelSender);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::IChannelSender*, "System.Runtime.Remoting.Channels", "IChannelSender");
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Channels.IChannelSender
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 11AC548
  class IChannelSender/*, public ::System::Runtime::Remoting::Channels::IChannel*/ {
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Remoting::Channels::IChannel
    operator ::System::Runtime::Remoting::Channels::IChannel() noexcept {
      return *reinterpret_cast<::System::Runtime::Remoting::Channels::IChannel*>(this);
    }
    // public System.Runtime.Remoting.Messaging.IMessageSink CreateMessageSink(System.String url, System.Object remoteChannelData, out System.String objectURI)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Runtime::Remoting::Messaging::IMessageSink* CreateMessageSink(::StringW url, ::Il2CppObject* remoteChannelData, ByRef<::StringW> objectURI);
  }; // System.Runtime.Remoting.Channels.IChannelSender
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Channels::IChannelSender::CreateMessageSink
// Il2CppName: CreateMessageSink
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::IMessageSink* (System::Runtime::Remoting::Channels::IChannelSender::*)(::StringW, ::Il2CppObject*, ByRef<::StringW>)>(&System::Runtime::Remoting::Channels::IChannelSender::CreateMessageSink)> {
  static const MethodInfo* get() {
    static auto* url = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* remoteChannelData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* objectURI = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Channels::IChannelSender*), "CreateMessageSink", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{url, remoteChannelData, objectURI});
  }
};
