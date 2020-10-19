// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPeer
  class NetPeer;
  // Forward declaring type: DisconnectInfo
  struct DisconnectInfo;
  // Forward declaring type: NetPacketReader
  class NetPacketReader;
  // Forward declaring type: DeliveryMethod
  struct DeliveryMethod;
  // Forward declaring type: UnconnectedMessageType
  struct UnconnectedMessageType;
  // Forward declaring type: ConnectionRequest
  class ConnectionRequest;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: SocketError
  struct SocketError;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Autogenerated type: LiteNetLib.INetEventListener
  class INetEventListener {
    public:
    // public System.Void OnPeerConnected(LiteNetLib.NetPeer peer)
    // Offset: 0xFFFFFFFF
    void LiteNetLib_INetEventListener_OnPeerConnected(LiteNetLib::NetPeer* peer);
    // public System.Void OnPeerDisconnected(LiteNetLib.NetPeer peer, LiteNetLib.DisconnectInfo disconnectInfo)
    // Offset: 0xFFFFFFFF
    void LiteNetLib_INetEventListener_OnPeerDisconnected(LiteNetLib::NetPeer* peer, LiteNetLib::DisconnectInfo disconnectInfo);
    // public System.Void OnNetworkError(System.Net.IPEndPoint endPoint, System.Net.Sockets.SocketError socketError)
    // Offset: 0xFFFFFFFF
    void LiteNetLib_INetEventListener_OnNetworkError(System::Net::IPEndPoint* endPoint, System::Net::Sockets::SocketError socketError);
    // public System.Void OnNetworkReceive(LiteNetLib.NetPeer peer, LiteNetLib.NetPacketReader reader, LiteNetLib.DeliveryMethod deliveryMethod)
    // Offset: 0xFFFFFFFF
    void LiteNetLib_INetEventListener_OnNetworkReceive(LiteNetLib::NetPeer* peer, LiteNetLib::NetPacketReader* reader, LiteNetLib::DeliveryMethod deliveryMethod);
    // public System.Void OnNetworkReceiveUnconnected(System.Net.IPEndPoint remoteEndPoint, LiteNetLib.NetPacketReader reader, LiteNetLib.UnconnectedMessageType messageType)
    // Offset: 0xFFFFFFFF
    void LiteNetLib_INetEventListener_OnNetworkReceiveUnconnected(System::Net::IPEndPoint* remoteEndPoint, LiteNetLib::NetPacketReader* reader, LiteNetLib::UnconnectedMessageType messageType);
    // public System.Void OnNetworkLatencyUpdate(LiteNetLib.NetPeer peer, System.Int32 latency)
    // Offset: 0xFFFFFFFF
    void LiteNetLib_INetEventListener_OnNetworkLatencyUpdate(LiteNetLib::NetPeer* peer, int latency);
    // public System.Void OnConnectionRequest(LiteNetLib.ConnectionRequest request)
    // Offset: 0xFFFFFFFF
    void LiteNetLib_INetEventListener_OnConnectionRequest(LiteNetLib::ConnectionRequest* request);
  }; // LiteNetLib.INetEventListener
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::INetEventListener*, "LiteNetLib", "INetEventListener");
#pragma pack(pop)