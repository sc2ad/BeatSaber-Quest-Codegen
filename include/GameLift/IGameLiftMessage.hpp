// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.IUnconnectedMessage
#include "BGNet/Core/Messages/IUnconnectedMessage.hpp"
// Completed includes
// Type namespace: GameLift
namespace GameLift {
  // Forward declaring type: IGameLiftMessage
  class IGameLiftMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GameLift::IGameLiftMessage);
DEFINE_IL2CPP_ARG_TYPE(::GameLift::IGameLiftMessage*, "GameLift", "IGameLiftMessage");
// Type namespace: GameLift
namespace GameLift {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: GameLift.IGameLiftMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class IGameLiftMessage/*, public ::BGNet::Core::Messages::IUnconnectedMessage*/ {
    public:
    // Creating interface conversion operator: operator ::BGNet::Core::Messages::IUnconnectedMessage
    operator ::BGNet::Core::Messages::IUnconnectedMessage() noexcept {
      return *reinterpret_cast<::BGNet::Core::Messages::IUnconnectedMessage*>(this);
    }
  }; // GameLift.IGameLiftMessage
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
