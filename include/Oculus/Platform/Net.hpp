// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Packet
  class Packet;
  // Forward declaring type: SendPolicy
  struct SendPolicy;
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PingResult
  class PingResult;
  // Forward declaring type: NetworkingPeer
  class NetworkingPeer;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: Net
  class Net;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Net);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Net*, "Oculus.Platform", "Net");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Net
  // [TokenAttribute] Offset: FFFFFFFF
  class Net : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Packet ReadPacket()
    // Offset: 0x2ACF314
    static ::Oculus::Platform::Packet* ReadPacket();
    // static public System.Boolean SendPacket(System.UInt64 userID, System.Byte[] bytes, Oculus.Platform.SendPolicy policy)
    // Offset: 0x2ACF4E4
    static bool SendPacket(uint64_t userID, ::ArrayW<uint8_t> bytes, ::Oculus::Platform::SendPolicy policy);
    // static public System.Void Connect(System.UInt64 userID)
    // Offset: 0x2ACF630
    static void Connect(uint64_t userID);
    // static public System.Void Accept(System.UInt64 userID)
    // Offset: 0x2ACF71C
    static void Accept(uint64_t userID);
    // static public System.Void Close(System.UInt64 userID)
    // Offset: 0x2ACF808
    static void Close(uint64_t userID);
    // static public System.Boolean IsConnected(System.UInt64 userID)
    // Offset: 0x2ACF8F4
    static bool IsConnected(uint64_t userID);
    // static public System.Boolean SendPacketToCurrentRoom(System.Byte[] bytes, Oculus.Platform.SendPolicy policy)
    // Offset: 0x2ACF9E4
    static bool SendPacketToCurrentRoom(::ArrayW<uint8_t> bytes, ::Oculus::Platform::SendPolicy policy);
    // static public System.Boolean AcceptForCurrentRoom()
    // Offset: 0x2ACFB1C
    static bool AcceptForCurrentRoom();
    // static public System.Void CloseForCurrentRoom()
    // Offset: 0x2ACFBF8
    static void CloseForCurrentRoom();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.PingResult> Ping(System.UInt64 userID)
    // Offset: 0x2ACFCD0
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PingResult*>* Ping(uint64_t userID);
    // static public System.Void SetConnectionStateChangedCallback(Oculus.Platform.Message`1/Oculus.Platform.Callback<Oculus.Platform.Models.NetworkingPeer> callback)
    // Offset: 0x2ACFDEC
    static void SetConnectionStateChangedCallback(typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetworkingPeer*>::Callback* callback);
    // static public System.Void SetPeerConnectRequestCallback(Oculus.Platform.Message`1/Oculus.Platform.Callback<Oculus.Platform.Models.NetworkingPeer> callback)
    // Offset: 0x2ACFE64
    static void SetPeerConnectRequestCallback(typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetworkingPeer*>::Callback* callback);
    // static public System.Void SetPingResultNotificationCallback(Oculus.Platform.Message`1/Oculus.Platform.Callback<Oculus.Platform.Models.PingResult> callback)
    // Offset: 0x2ACFEDC
    static void SetPingResultNotificationCallback(typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::PingResult*>::Callback* callback);
  }; // Oculus.Platform.Net
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Net::ReadPacket
// Il2CppName: ReadPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Packet* (*)()>(&Oculus::Platform::Net::ReadPacket)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Net*), "ReadPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Net::SendPacket
// Il2CppName: SendPacket
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t, ::ArrayW<uint8_t>, ::Oculus::Platform::SendPolicy)>(&Oculus::Platform::Net::SendPacket)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* policy = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "SendPolicy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Net*), "SendPacket", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID, bytes, policy});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Net::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t)>(&Oculus::Platform::Net::Connect)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Net*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Net::Accept
// Il2CppName: Accept
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t)>(&Oculus::Platform::Net::Accept)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Net*), "Accept", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Net::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t)>(&Oculus::Platform::Net::Close)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Net*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Net::IsConnected
// Il2CppName: IsConnected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint64_t)>(&Oculus::Platform::Net::IsConnected)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Net*), "IsConnected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Net::SendPacketToCurrentRoom
// Il2CppName: SendPacketToCurrentRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ArrayW<uint8_t>, ::Oculus::Platform::SendPolicy)>(&Oculus::Platform::Net::SendPacketToCurrentRoom)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* policy = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "SendPolicy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Net*), "SendPacketToCurrentRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, policy});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Net::AcceptForCurrentRoom
// Il2CppName: AcceptForCurrentRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&Oculus::Platform::Net::AcceptForCurrentRoom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Net*), "AcceptForCurrentRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Net::CloseForCurrentRoom
// Il2CppName: CloseForCurrentRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Platform::Net::CloseForCurrentRoom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Net*), "CloseForCurrentRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Net::Ping
// Il2CppName: Ping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PingResult*>* (*)(uint64_t)>(&Oculus::Platform::Net::Ping)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Net*), "Ping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::Net::SetConnectionStateChangedCallback
// Il2CppName: SetConnectionStateChangedCallback
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: Oculus::Platform::Net::SetPeerConnectRequestCallback
// Il2CppName: SetPeerConnectRequestCallback
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: Oculus::Platform::Net::SetPingResultNotificationCallback
// Il2CppName: SetPingResultNotificationCallback
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
