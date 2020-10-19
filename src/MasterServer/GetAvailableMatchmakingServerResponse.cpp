// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.GetAvailableMatchmakingServerResponse
#include "MasterServer/GetAvailableMatchmakingServerResponse.hpp"
// Including type: ByteArrayNetSerializable
#include "GlobalNamespace/ByteArrayNetSerializable.hpp"
// Including type: PacketPool`1
#include "GlobalNamespace/PacketPool_1.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MasterServer.GetAvailableMatchmakingServerResponse.get_pool
GlobalNamespace::PacketPool_1<MasterServer::GetAvailableMatchmakingServerResponse*>* MasterServer::GetAvailableMatchmakingServerResponse::get_pool() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::PacketPool_1<MasterServer::GetAvailableMatchmakingServerResponse*>*>("MasterServer", "GetAvailableMatchmakingServerResponse", "get_pool"));
}
// Autogenerated method: MasterServer.GetAvailableMatchmakingServerResponse.set_dedicatedServerId
void MasterServer::GetAvailableMatchmakingServerResponse::set_dedicatedServerId(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_dedicatedServerId", value));
}
// Autogenerated method: MasterServer.GetAvailableMatchmakingServerResponse.set_dedicatedServerCreationTime
void MasterServer::GetAvailableMatchmakingServerResponse::set_dedicatedServerCreationTime(int64_t value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_dedicatedServerCreationTime", value));
}
// Autogenerated method: MasterServer.GetAvailableMatchmakingServerResponse.InitForFailure
MasterServer::GetAvailableMatchmakingServerResponse* MasterServer::GetAvailableMatchmakingServerResponse::InitForFailure(::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, MasterServer::GetAvailableMatchmakingServerResponse::Result result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<MasterServer::GetAvailableMatchmakingServerResponse*>(this, "InitForFailure", dedicatedServerId, dedicatedServerCreationTime, result));
}
// Autogenerated method: MasterServer.GetAvailableMatchmakingServerResponse.InitForSuccess
MasterServer::GetAvailableMatchmakingServerResponse* MasterServer::GetAvailableMatchmakingServerResponse::InitForSuccess(::Il2CppString* dedicatedServerId, int64_t dedicatedServerCreationTime, ::Il2CppString* id, int port, ::Array<uint8_t>* random, ::Array<uint8_t>* publicKey, int maxPlayerCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<MasterServer::GetAvailableMatchmakingServerResponse*>(this, "InitForSuccess", dedicatedServerId, dedicatedServerCreationTime, id, port, random, publicKey, maxPlayerCount));
}
// Autogenerated method: MasterServer.GetAvailableMatchmakingServerResponse.get_resultCode
uint8_t MasterServer::GetAvailableMatchmakingServerResponse::get_resultCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t>(this, "get_resultCode"));
}
// Autogenerated method: MasterServer.GetAvailableMatchmakingServerResponse.get_resultCodeString
::Il2CppString* MasterServer::GetAvailableMatchmakingServerResponse::get_resultCodeString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_resultCodeString"));
}
// Autogenerated method: MasterServer.GetAvailableMatchmakingServerResponse.get_dedicatedServerId
::Il2CppString* MasterServer::GetAvailableMatchmakingServerResponse::get_dedicatedServerId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_dedicatedServerId"));
}
// Autogenerated method: MasterServer.GetAvailableMatchmakingServerResponse.get_dedicatedServerCreationTime
int64_t MasterServer::GetAvailableMatchmakingServerResponse::get_dedicatedServerCreationTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(this, "get_dedicatedServerCreationTime"));
}
// Autogenerated method: MasterServer.GetAvailableMatchmakingServerResponse.Serialize
void MasterServer::GetAvailableMatchmakingServerResponse::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Serialize", writer));
}
void MasterServer::GetAvailableMatchmakingServerResponse::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  MasterServer::GetAvailableMatchmakingServerResponse::Serialize(writer);
}
// Autogenerated method: MasterServer.GetAvailableMatchmakingServerResponse.Deserialize
void MasterServer::GetAvailableMatchmakingServerResponse::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Deserialize", reader));
}
void MasterServer::GetAvailableMatchmakingServerResponse::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  MasterServer::GetAvailableMatchmakingServerResponse::Deserialize(reader);
}
// Autogenerated method: MasterServer.GetAvailableMatchmakingServerResponse.Release
void MasterServer::GetAvailableMatchmakingServerResponse::Release() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Release"));
}
// Autogenerated method: MasterServer.GetAvailableMatchmakingServerResponse..ctor
MasterServer::GetAvailableMatchmakingServerResponse* MasterServer::GetAvailableMatchmakingServerResponse::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<GetAvailableMatchmakingServerResponse*>());
}