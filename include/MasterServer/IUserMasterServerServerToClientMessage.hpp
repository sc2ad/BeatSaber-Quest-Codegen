// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServer.IUserMasterServerMessage
#include "MasterServer/IUserMasterServerMessage.hpp"
// Completed includes
// Type namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: IUserMasterServerServerToClientMessage
  class IUserMasterServerServerToClientMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MasterServer::IUserMasterServerServerToClientMessage);
DEFINE_IL2CPP_ARG_TYPE(::MasterServer::IUserMasterServerServerToClientMessage*, "MasterServer", "IUserMasterServerServerToClientMessage");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.IUserMasterServerServerToClientMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class IUserMasterServerServerToClientMessage/*, public ::MasterServer::IUserMasterServerMessage*/ {
    public:
    // Creating interface conversion operator: operator ::MasterServer::IUserMasterServerMessage
    operator ::MasterServer::IUserMasterServerMessage() noexcept {
      return *reinterpret_cast<::MasterServer::IUserMasterServerMessage*>(this);
    }
    // Creating interface conversion operator: i_IUserMasterServerMessage
    inline ::MasterServer::IUserMasterServerMessage* i_IUserMasterServerMessage() noexcept {
      return reinterpret_cast<::MasterServer::IUserMasterServerMessage*>(this);
    }
  }; // MasterServer.IUserMasterServerServerToClientMessage
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"