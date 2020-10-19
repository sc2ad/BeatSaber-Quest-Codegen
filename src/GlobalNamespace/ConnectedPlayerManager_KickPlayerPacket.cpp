// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: ConnectedPlayerManager/KickPlayerPacket
#include "GlobalNamespace/ConnectedPlayerManager_KickPlayerPacket.hpp"
// Including type: PacketPool`1
#include "GlobalNamespace/PacketPool_1.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: ConnectedPlayerManager/KickPlayerPacket.get_pool
GlobalNamespace::PacketPool_1<GlobalNamespace::ConnectedPlayerManager::KickPlayerPacket*>* GlobalNamespace::ConnectedPlayerManager::KickPlayerPacket::get_pool() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::PacketPool_1<GlobalNamespace::ConnectedPlayerManager::KickPlayerPacket*>*>("", "ConnectedPlayerManager/KickPlayerPacket", "get_pool"));
}
// Autogenerated method: ConnectedPlayerManager/KickPlayerPacket.Init
GlobalNamespace::ConnectedPlayerManager::KickPlayerPacket* GlobalNamespace::ConnectedPlayerManager::KickPlayerPacket::Init(GlobalNamespace::DisconnectedReason disconnectedReason) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::ConnectedPlayerManager::KickPlayerPacket*>(this, "Init", disconnectedReason));
}
// Autogenerated method: ConnectedPlayerManager/KickPlayerPacket.Serialize
void GlobalNamespace::ConnectedPlayerManager::KickPlayerPacket::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Serialize", writer));
}
void GlobalNamespace::ConnectedPlayerManager::KickPlayerPacket::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  GlobalNamespace::ConnectedPlayerManager::KickPlayerPacket::Serialize(writer);
}
// Autogenerated method: ConnectedPlayerManager/KickPlayerPacket.Deserialize
void GlobalNamespace::ConnectedPlayerManager::KickPlayerPacket::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Deserialize", reader));
}
void GlobalNamespace::ConnectedPlayerManager::KickPlayerPacket::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  GlobalNamespace::ConnectedPlayerManager::KickPlayerPacket::Deserialize(reader);
}
// Autogenerated method: ConnectedPlayerManager/KickPlayerPacket.Release
void GlobalNamespace::ConnectedPlayerManager::KickPlayerPacket::Release() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Release"));
}
// Autogenerated method: ConnectedPlayerManager/KickPlayerPacket..ctor
GlobalNamespace::ConnectedPlayerManager::KickPlayerPacket* GlobalNamespace::ConnectedPlayerManager::KickPlayerPacket::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<ConnectedPlayerManager::KickPlayerPacket*>());
}