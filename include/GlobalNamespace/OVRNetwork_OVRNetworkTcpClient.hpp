// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRNetwork
#include "GlobalNamespace/OVRNetwork.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`4<T1, T2, T3, T4>
  template<typename T1, typename T2, typename T3, typename T4>
  class Action_4;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: TcpClient
  class TcpClient;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRNetwork::OVRNetworkTcpClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRNetwork::OVRNetworkTcpClient*, "", "OVRNetwork/OVRNetworkTcpClient");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: OVRNetwork/OVRNetworkTcpClient
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRNetwork::OVRNetworkTcpClient : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::ConnectionState
    struct ConnectionState;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Action connectionStateChangedCallback
    // Size: 0x8
    // Offset: 0x10
    ::System::Action* connectionStateChangedCallback;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public System.Action`4<System.Int32,System.Byte[],System.Int32,System.Int32> payloadReceivedCallback
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_4<int, ::ArrayW<uint8_t>, int, int>* payloadReceivedCallback;
    // Field size check
    static_assert(sizeof(::System::Action_4<int, ::ArrayW<uint8_t>, int, int>*) == 0x8);
    // private System.Net.Sockets.TcpClient tcpClient
    // Size: 0x8
    // Offset: 0x20
    ::System::Net::Sockets::TcpClient* tcpClient;
    // Field size check
    static_assert(sizeof(::System::Net::Sockets::TcpClient*) == 0x8);
    // private System.Byte[][] receivedBuffers
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::ArrayW<uint8_t>> receivedBuffers;
    // Field size check
    static_assert(sizeof(::ArrayW<::ArrayW<uint8_t>>) == 0x8);
    // private System.Int32 receivedBufferIndex
    // Size: 0x4
    // Offset: 0x30
    int receivedBufferIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 receivedBufferDataSize
    // Size: 0x4
    // Offset: 0x34
    int receivedBufferDataSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Threading.ManualResetEvent readyReceiveDataEvent
    // Size: 0x8
    // Offset: 0x38
    ::System::Threading::ManualResetEvent* readyReceiveDataEvent;
    // Field size check
    static_assert(sizeof(::System::Threading::ManualResetEvent*) == 0x8);
    public:
    // Get instance field reference: public System.Action connectionStateChangedCallback
    ::System::Action*& dyn_connectionStateChangedCallback();
    // Get instance field reference: public System.Action`4<System.Int32,System.Byte[],System.Int32,System.Int32> payloadReceivedCallback
    ::System::Action_4<int, ::ArrayW<uint8_t>, int, int>*& dyn_payloadReceivedCallback();
    // Get instance field reference: private System.Net.Sockets.TcpClient tcpClient
    ::System::Net::Sockets::TcpClient*& dyn_tcpClient();
    // Get instance field reference: private System.Byte[][] receivedBuffers
    ::ArrayW<::ArrayW<uint8_t>>& dyn_receivedBuffers();
    // Get instance field reference: private System.Int32 receivedBufferIndex
    int& dyn_receivedBufferIndex();
    // Get instance field reference: private System.Int32 receivedBufferDataSize
    int& dyn_receivedBufferDataSize();
    // Get instance field reference: private System.Threading.ManualResetEvent readyReceiveDataEvent
    ::System::Threading::ManualResetEvent*& dyn_readyReceiveDataEvent();
    // public OVRNetwork/OVRNetworkTcpClient/ConnectionState get_connectionState()
    // Offset: 0x16C29B4
    ::GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::ConnectionState get_connectionState();
    // public System.Boolean get_Connected()
    // Offset: 0x16C29E0
    bool get_Connected();
    // public System.Void Connect(System.Int32 listeningPort)
    // Offset: 0x16C29F4
    void Connect(int listeningPort);
    // private System.Void ConnectCallback(System.IAsyncResult ar)
    // Offset: 0x16C2B48
    void ConnectCallback(::System::IAsyncResult* ar);
    // public System.Void Disconnect()
    // Offset: 0x16C2E48
    void Disconnect();
    // public System.Void Tick()
    // Offset: 0x16C309C
    void Tick();
    // private System.Void OnReadDataCallback(System.IAsyncResult ar)
    // Offset: 0x16C32A0
    void OnReadDataCallback(::System::IAsyncResult* ar);
    // public System.Void .ctor()
    // Offset: 0x16C3784
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRNetwork::OVRNetworkTcpClient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRNetwork::OVRNetworkTcpClient*, creationType>()));
    }
  }; // OVRNetwork/OVRNetworkTcpClient
  #pragma pack(pop)
  static check_size<sizeof(OVRNetwork::OVRNetworkTcpClient), 56 + sizeof(::System::Threading::ManualResetEvent*)> __GlobalNamespace_OVRNetwork_OVRNetworkTcpClientSizeCheck;
  static_assert(sizeof(OVRNetwork::OVRNetworkTcpClient) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::get_connectionState
// Il2CppName: get_connectionState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::ConnectionState (GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::*)()>(&GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::get_connectionState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNetwork::OVRNetworkTcpClient*), "get_connectionState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::get_Connected
// Il2CppName: get_Connected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::*)()>(&GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::get_Connected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNetwork::OVRNetworkTcpClient*), "get_Connected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::Connect
// Il2CppName: Connect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::*)(int)>(&GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::Connect)> {
  static const MethodInfo* get() {
    static auto* listeningPort = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNetwork::OVRNetworkTcpClient*), "Connect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{listeningPort});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::ConnectCallback
// Il2CppName: ConnectCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::*)(::System::IAsyncResult*)>(&GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::ConnectCallback)> {
  static const MethodInfo* get() {
    static auto* ar = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNetwork::OVRNetworkTcpClient*), "ConnectCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ar});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::Disconnect
// Il2CppName: Disconnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::*)()>(&GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::Disconnect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNetwork::OVRNetworkTcpClient*), "Disconnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::Tick
// Il2CppName: Tick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::*)()>(&GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::Tick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNetwork::OVRNetworkTcpClient*), "Tick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::OnReadDataCallback
// Il2CppName: OnReadDataCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::*)(::System::IAsyncResult*)>(&GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::OnReadDataCallback)> {
  static const MethodInfo* get() {
    static auto* ar = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNetwork::OVRNetworkTcpClient*), "OnReadDataCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ar});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNetwork::OVRNetworkTcpClient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
