// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseAcknowledgeMessage
#include "BGNet/Core/Messages/BaseAcknowledgeMessage.hpp"
// Including type: BGNet.Core.Messages.IHandshakeMessage
#include "BGNet/Core/Messages/IHandshakeMessage.hpp"
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
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: HandshakeMessageReceivedAcknowledge
  class HandshakeMessageReceivedAcknowledge;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge*, "BGNet.Core.Messages", "HandshakeMessageReceivedAcknowledge");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Size: 0x15
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.Messages.HandshakeMessageReceivedAcknowledge
  // [TokenAttribute] Offset: FFFFFFFF
  class HandshakeMessageReceivedAcknowledge : public ::BGNet::Core::Messages::BaseAcknowledgeMessage/*, public ::BGNet::Core::Messages::IHandshakeMessage*/ {
    public:
    // Creating interface conversion operator: operator ::BGNet::Core::Messages::IHandshakeMessage
    operator ::BGNet::Core::Messages::IHandshakeMessage() noexcept {
      return *reinterpret_cast<::BGNet::Core::Messages::IHandshakeMessage*>(this);
    }
    // Creating interface conversion operator: i_IHandshakeMessage
    inline ::BGNet::Core::Messages::IHandshakeMessage* i_IHandshakeMessage() noexcept {
      return reinterpret_cast<::BGNet::Core::Messages::IHandshakeMessage*>(this);
    }
    // static public PacketPool`1<BGNet.Core.Messages.HandshakeMessageReceivedAcknowledge> get_pool()
    // Offset: 0x15C2ED0
    static ::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge*>* get_pool();
    // public System.Void .ctor()
    // Offset: 0x15CB3A8
    // Implemented from: BGNet.Core.Messages.BaseAcknowledgeMessage
    // Base method: System.Void BaseAcknowledgeMessage::.ctor()
    // Base method: System.Void BaseResponse::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandshakeMessageReceivedAcknowledge* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandshakeMessageReceivedAcknowledge*, creationType>()));
    }
    // public override System.Void Release()
    // Offset: 0x15CB34C
    // Implemented from: BGNet.Core.Messages.BaseResponse
    // Base method: System.Void BaseResponse::Release()
    void Release();
  }; // BGNet.Core.Messages.HandshakeMessageReceivedAcknowledge
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge*>* (*)()>(&BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge::*)()>(&BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::HandshakeMessageReceivedAcknowledge*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
