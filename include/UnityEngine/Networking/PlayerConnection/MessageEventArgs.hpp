// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: UnityEngine.Networking.PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Forward declaring type: MessageEventArgs
  class MessageEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::MessageEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*, "UnityEngine.Networking.PlayerConnection", "MessageEventArgs");
// Type namespace: UnityEngine.Networking.PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Networking.PlayerConnection.MessageEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class MessageEventArgs : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 playerId
    // Size: 0x4
    // Offset: 0x10
    int playerId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: playerId and: data
    char __padding0[0x4] = {};
    // public System.Byte[] data
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> data;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get instance field reference: public System.Int32 playerId
    [[deprecated("Use field access instead!")]] int& dyn_playerId();
    // Get instance field reference: public System.Byte[] data
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_data();
    // public System.Void .ctor()
    // Offset: 0x20F0434
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageEventArgs* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Networking::PlayerConnection::MessageEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageEventArgs*, creationType>()));
    }
  }; // UnityEngine.Networking.PlayerConnection.MessageEventArgs
  #pragma pack(pop)
  static check_size<sizeof(MessageEventArgs), 24 + sizeof(::ArrayW<uint8_t>)> __UnityEngine_Networking_PlayerConnection_MessageEventArgsSizeCheck;
  static_assert(sizeof(MessageEventArgs) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Networking::PlayerConnection::MessageEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
