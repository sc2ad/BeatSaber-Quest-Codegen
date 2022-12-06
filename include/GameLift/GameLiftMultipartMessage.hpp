// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseMultipartMessage
#include "BGNet/Core/Messages/BaseMultipartMessage.hpp"
// Including type: GameLift.IGameLiftMessage
#include "GameLift/IGameLiftMessage.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Completed forward declares
// Type namespace: GameLift
namespace GameLift {
  // Forward declaring type: GameLiftMultipartMessage
  class GameLiftMultipartMessage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GameLift::GameLiftMultipartMessage);
DEFINE_IL2CPP_ARG_TYPE(::GameLift::GameLiftMultipartMessage*, "GameLift", "GameLiftMultipartMessage");
// Type namespace: GameLift
namespace GameLift {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: GameLift.GameLiftMultipartMessage
  // [TokenAttribute] Offset: FFFFFFFF
  class GameLiftMultipartMessage : public ::BGNet::Core::Messages::BaseMultipartMessage/*, public ::GameLift::IGameLiftMessage*/ {
    public:
    // Creating interface conversion operator: operator ::GameLift::IGameLiftMessage
    operator ::GameLift::IGameLiftMessage() noexcept {
      return *reinterpret_cast<::GameLift::IGameLiftMessage*>(this);
    }
    // Creating interface conversion operator: i_IGameLiftMessage
    inline ::GameLift::IGameLiftMessage* i_IGameLiftMessage() noexcept {
      return reinterpret_cast<::GameLift::IGameLiftMessage*>(this);
    }
    // static public PacketPool`1<GameLift.GameLiftMultipartMessage> get_pool()
    // Offset: 0x16C9058
    static ::GlobalNamespace::PacketPool_1<::GameLift::GameLiftMultipartMessage*>* get_pool();
    // public System.Void .ctor()
    // Offset: 0x16C90FC
    // Implemented from: BGNet.Core.Messages.BaseMultipartMessage
    // Base method: System.Void BaseMultipartMessage::.ctor()
    // Base method: System.Void BaseReliableRequest::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameLiftMultipartMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GameLift::GameLiftMultipartMessage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameLiftMultipartMessage*, creationType>()));
    }
    // public override System.Void Release()
    // Offset: 0x16C90A0
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::Release()
    void Release();
  }; // GameLift.GameLiftMultipartMessage
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GameLift::GameLiftMultipartMessage::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GameLift::GameLiftMultipartMessage*>* (*)()>(&GameLift::GameLiftMultipartMessage::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GameLift::GameLiftMultipartMessage*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GameLift::GameLiftMultipartMessage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GameLift::GameLiftMultipartMessage::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GameLift::GameLiftMultipartMessage::*)()>(&GameLift::GameLiftMultipartMessage::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GameLift::GameLiftMultipartMessage*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
