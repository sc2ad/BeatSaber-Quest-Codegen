// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.IMasterServerUnreliableMessage
#include "MasterServer/IMasterServerUnreliableMessage.hpp"
// Including type: MasterServer.IDedicatedServerServerToClientMessage
#include "MasterServer/IDedicatedServerServerToClientMessage.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Autogenerated type: MasterServer.DedicatedServerHeartbeatResponse
  class DedicatedServerHeartbeatResponse : public ::Il2CppObject, public MasterServer::IMasterServerUnreliableMessage, public MasterServer::IDedicatedServerServerToClientMessage {
    public:
    // static public PacketPool`1<MasterServer.DedicatedServerHeartbeatResponse> get_pool()
    // Offset: 0x211EBEC
    static GlobalNamespace::PacketPool_1<MasterServer::DedicatedServerHeartbeatResponse*>* get_pool();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x211EC34
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x211EC38
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x211EC3C
    // Implemented from: IPoolablePacket
    // Base method: System.Void IPoolablePacket::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x211EC98
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DedicatedServerHeartbeatResponse* New_ctor();
  }; // MasterServer.DedicatedServerHeartbeatResponse
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::DedicatedServerHeartbeatResponse*, "MasterServer", "DedicatedServerHeartbeatResponse");
#pragma pack(pop)