// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.ClientHelloWithCookieRequest
#include "MasterServer/ClientHelloWithCookieRequest.hpp"
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
// Autogenerated method: MasterServer.ClientHelloWithCookieRequest.get_pool
GlobalNamespace::PacketPool_1<MasterServer::ClientHelloWithCookieRequest*>* MasterServer::ClientHelloWithCookieRequest::get_pool() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::PacketPool_1<MasterServer::ClientHelloWithCookieRequest*>*>("MasterServer", "ClientHelloWithCookieRequest", "get_pool"));
}
// Autogenerated method: MasterServer.ClientHelloWithCookieRequest.Init
MasterServer::ClientHelloWithCookieRequest* MasterServer::ClientHelloWithCookieRequest::Init(uint certificateResponseId, ::Array<uint8_t>* random, ::Array<uint8_t>* cookie) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<MasterServer::ClientHelloWithCookieRequest*>(this, "Init", certificateResponseId, random, cookie));
}
// Autogenerated method: MasterServer.ClientHelloWithCookieRequest.Serialize
void MasterServer::ClientHelloWithCookieRequest::Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Serialize", writer));
}
void MasterServer::ClientHelloWithCookieRequest::LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer) {
  MasterServer::ClientHelloWithCookieRequest::Serialize(writer);
}
// Autogenerated method: MasterServer.ClientHelloWithCookieRequest.Deserialize
void MasterServer::ClientHelloWithCookieRequest::Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Deserialize", reader));
}
void MasterServer::ClientHelloWithCookieRequest::LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader) {
  MasterServer::ClientHelloWithCookieRequest::Deserialize(reader);
}
// Autogenerated method: MasterServer.ClientHelloWithCookieRequest.Release
void MasterServer::ClientHelloWithCookieRequest::Release() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Release"));
}
// Autogenerated method: MasterServer.ClientHelloWithCookieRequest..ctor
MasterServer::ClientHelloWithCookieRequest* MasterServer::ClientHelloWithCookieRequest::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<ClientHelloWithCookieRequest*>());
}