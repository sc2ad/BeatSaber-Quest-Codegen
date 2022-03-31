// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.IDedicatedServerMasterServerMessage
#include "MasterServer/IDedicatedServerMasterServerMessage.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: IDedicatedServerMasterServerClientToServerMessage
  class IDedicatedServerMasterServerClientToServerMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MasterServer::IDedicatedServerMasterServerClientToServerMessage);
DEFINE_IL2CPP_ARG_TYPE(::MasterServer::IDedicatedServerMasterServerClientToServerMessage*, "MasterServer", "IDedicatedServerMasterServerClientToServerMessage");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.IDedicatedServerMasterServerClientToServerMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class IDedicatedServerMasterServerClientToServerMessage/*, public ::MasterServer::IDedicatedServerMasterServerMessage*/ {
    public:
    // Creating interface conversion operator: operator ::MasterServer::IDedicatedServerMasterServerMessage
    operator ::MasterServer::IDedicatedServerMasterServerMessage() noexcept {
      return *reinterpret_cast<::MasterServer::IDedicatedServerMasterServerMessage*>(this);
    }
    // public System.String get_dedicatedServerId()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_dedicatedServerId();
    // public System.Int64 get_dedicatedServerCreationTime()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int64_t get_dedicatedServerCreationTime();
  }; // MasterServer.IDedicatedServerMasterServerClientToServerMessage
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::IDedicatedServerMasterServerClientToServerMessage::get_dedicatedServerId
// Il2CppName: get_dedicatedServerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MasterServer::IDedicatedServerMasterServerClientToServerMessage::*)()>(&MasterServer::IDedicatedServerMasterServerClientToServerMessage::get_dedicatedServerId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IDedicatedServerMasterServerClientToServerMessage*), "get_dedicatedServerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::IDedicatedServerMasterServerClientToServerMessage::get_dedicatedServerCreationTime
// Il2CppName: get_dedicatedServerCreationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (MasterServer::IDedicatedServerMasterServerClientToServerMessage::*)()>(&MasterServer::IDedicatedServerMasterServerClientToServerMessage::get_dedicatedServerCreationTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::IDedicatedServerMasterServerClientToServerMessage*), "get_dedicatedServerCreationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};