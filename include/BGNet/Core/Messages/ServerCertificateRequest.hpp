// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseReliableResponse
#include "BGNet/Core/Messages/BaseReliableResponse.hpp"
// Including type: BGNet.Core.Messages.IHandshakeServerToClientMessage
#include "BGNet/Core/Messages/IHandshakeServerToClientMessage.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BGNet::Core::Messages
namespace BGNet::Core::Messages {
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ByteArrayNetSerializable
  class ByteArrayNetSerializable;
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Forward declaring type: ServerCertificateRequest
  class ServerCertificateRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::Messages::ServerCertificateRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::ServerCertificateRequest*, "BGNet.Core.Messages", "ServerCertificateRequest");
// Type namespace: BGNet.Core.Messages
namespace BGNet::Core::Messages {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.Messages.ServerCertificateRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class ServerCertificateRequest : public ::BGNet::Core::Messages::BaseReliableResponse/*, public ::BGNet::Core::Messages::IHandshakeServerToClientMessage*/ {
    public:
    // Nested type: ::BGNet::Core::Messages::ServerCertificateRequest::$get_certificateList$d__5
    class $get_certificateList$d__5;
    public:
    // private readonly ByteArrayNetSerializable[] _certificateList
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::ByteArrayNetSerializable*> certificateList;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::ByteArrayNetSerializable*>) == 0x8);
    // private System.Int32 _certificateCount
    // Size: 0x4
    // Offset: 0x20
    int certificateCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::BGNet::Core::Messages::IHandshakeServerToClientMessage
    operator ::BGNet::Core::Messages::IHandshakeServerToClientMessage() noexcept {
      return *reinterpret_cast<::BGNet::Core::Messages::IHandshakeServerToClientMessage*>(this);
    }
    // Creating interface conversion operator: i_IHandshakeServerToClientMessage
    inline ::BGNet::Core::Messages::IHandshakeServerToClientMessage* i_IHandshakeServerToClientMessage() noexcept {
      return reinterpret_cast<::BGNet::Core::Messages::IHandshakeServerToClientMessage*>(this);
    }
    // Get instance field reference: private readonly ByteArrayNetSerializable[] _certificateList
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::ByteArrayNetSerializable*>& dyn__certificateList();
    // Get instance field reference: private System.Int32 _certificateCount
    [[deprecated("Use field access instead!")]] int& dyn__certificateCount();
    // static public PacketPool`1<BGNet.Core.Messages.ServerCertificateRequest> get_pool()
    // Offset: 0x15C5288
    static ::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ServerCertificateRequest*>* get_pool();
    // public System.Collections.Generic.IEnumerable`1<System.Byte[]> get_certificateList()
    // Offset: 0x15C7A18
    ::System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t>>* get_certificateList();
    // public BGNet.Core.Messages.ServerCertificateRequest Init(System.Collections.Generic.IEnumerable`1<System.Byte[]> certificateList)
    // Offset: 0x15CC628
    ::BGNet::Core::Messages::ServerCertificateRequest* Init(::System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t>>* certificateList);
    // public System.Void .ctor()
    // Offset: 0x15CDCE0
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServerCertificateRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::Messages::ServerCertificateRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServerCertificateRequest*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x15CDA34
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x15CDAC8
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x15CDC34
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Release()
    void Release();
  }; // BGNet.Core.Messages.ServerCertificateRequest
  #pragma pack(pop)
  static check_size<sizeof(ServerCertificateRequest), 32 + sizeof(int)> __BGNet_Core_Messages_ServerCertificateRequestSizeCheck;
  static_assert(sizeof(ServerCertificateRequest) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::Messages::ServerCertificateRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::BGNet::Core::Messages::ServerCertificateRequest*>* (*)()>(&BGNet::Core::Messages::ServerCertificateRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ServerCertificateRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::ServerCertificateRequest::get_certificateList
// Il2CppName: get_certificateList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t>>* (BGNet::Core::Messages::ServerCertificateRequest::*)()>(&BGNet::Core::Messages::ServerCertificateRequest::get_certificateList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ServerCertificateRequest*), "get_certificateList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::ServerCertificateRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::Messages::ServerCertificateRequest* (BGNet::Core::Messages::ServerCertificateRequest::*)(::System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t>>*)>(&BGNet::Core::Messages::ServerCertificateRequest::Init)> {
  static const MethodInfo* get() {
    static auto* certificateList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ServerCertificateRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{certificateList});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::ServerCertificateRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BGNet::Core::Messages::ServerCertificateRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ServerCertificateRequest::*)(::LiteNetLib::Utils::NetDataWriter*)>(&BGNet::Core::Messages::ServerCertificateRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ServerCertificateRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::ServerCertificateRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ServerCertificateRequest::*)(::LiteNetLib::Utils::NetDataReader*)>(&BGNet::Core::Messages::ServerCertificateRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ServerCertificateRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: BGNet::Core::Messages::ServerCertificateRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::Messages::ServerCertificateRequest::*)()>(&BGNet::Core::Messages::ServerCertificateRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BGNet::Core::Messages::ServerCertificateRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
