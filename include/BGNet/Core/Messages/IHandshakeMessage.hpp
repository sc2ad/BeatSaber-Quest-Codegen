// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.IUnconnectedMessage
#include "BGNet/Core/Messages/IUnconnectedMessage.hpp"
// Completed includes
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: IHandshakeMessage
  class IHandshakeMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::Messages::IHandshakeMessage);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::IHandshakeMessage*, "BGNet.Core.Messages", "IHandshakeMessage");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.Messages.IHandshakeMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class IHandshakeMessage/*, public ::BGNet::Core::Messages::IUnconnectedMessage*/ {
    public:
    // Creating interface conversion operator: operator ::BGNet::Core::Messages::IUnconnectedMessage
    operator ::BGNet::Core::Messages::IUnconnectedMessage() noexcept {
      return *reinterpret_cast<::BGNet::Core::Messages::IUnconnectedMessage*>(this);
    }
  }; // BGNet.Core.Messages.IHandshakeMessage
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
