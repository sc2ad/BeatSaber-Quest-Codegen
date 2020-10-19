// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.AuthenticateUserResponse
#include "MasterServer/AuthenticateUserResponse.hpp"
// Including type: PacketPool`1
#include "GlobalNamespace/PacketPool_1.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MasterServer.AuthenticateUserResponse.get_pool
GlobalNamespace::PacketPool_1<MasterServer::AuthenticateUserResponse*>* MasterServer::AuthenticateUserResponse::get_pool() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::PacketPool_1<MasterServer::AuthenticateUserResponse*>*>("MasterServer", "AuthenticateUserResponse", "get_pool"));
}
// Autogenerated method: MasterServer.AuthenticateUserResponse.Init
MasterServer::AuthenticateUserResponse* MasterServer::AuthenticateUserResponse::Init(MasterServer::AuthenticateUserResponse::Result result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<MasterServer::AuthenticateUserResponse*>(this, "Init", result));
}
// Autogenerated method: MasterServer.AuthenticateUserResponse.get_resultCode
uint8_t MasterServer::AuthenticateUserResponse::get_resultCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t>(this, "get_resultCode"));
}
// Autogenerated method: MasterServer.AuthenticateUserResponse.get_resultCodeString
::Il2CppString* MasterServer::AuthenticateUserResponse::get_resultCodeString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_resultCodeString"));
}
// Autogenerated method: MasterServer.AuthenticateUserResponse.get_isAuthenticated
bool MasterServer::AuthenticateUserResponse::get_isAuthenticated() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isAuthenticated"));
}
// Autogenerated method: MasterServer.AuthenticateUserResponse.Serialize
void MasterServer::AuthenticateUserResponse::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Serialize", writer));
}
void MasterServer::AuthenticateUserResponse::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  MasterServer::AuthenticateUserResponse::Serialize(writer);
}
// Autogenerated method: MasterServer.AuthenticateUserResponse.Deserialize
void MasterServer::AuthenticateUserResponse::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Deserialize", reader));
}
void MasterServer::AuthenticateUserResponse::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  MasterServer::AuthenticateUserResponse::Deserialize(reader);
}
// Autogenerated method: MasterServer.AuthenticateUserResponse.Release
void MasterServer::AuthenticateUserResponse::Release() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Release"));
}
// Autogenerated method: MasterServer.AuthenticateUserResponse..ctor
MasterServer::AuthenticateUserResponse* MasterServer::AuthenticateUserResponse::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<AuthenticateUserResponse*>());
}