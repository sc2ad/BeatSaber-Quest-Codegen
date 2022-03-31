// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseReliableRequest
#include "BGNet/Core/Messages/BaseReliableRequest.hpp"
// Including type: MasterServer.IDedicatedServerMasterServerServerToClientMessage
#include "MasterServer/IDedicatedServerMasterServerServerToClientMessage.hpp"
// Including type: BeatmapLevelSelectionMask
#include "GlobalNamespace/BeatmapLevelSelectionMask.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ByteArrayNetSerializable
  class ByteArrayNetSerializable;
  // Forward declaring type: IPacketPool`1<T>
  template<typename T>
  class IPacketPool_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: CreateDedicatedServerInstanceRequest
  class CreateDedicatedServerInstanceRequest;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MasterServer::CreateDedicatedServerInstanceRequest);
DEFINE_IL2CPP_ARG_TYPE(::MasterServer::CreateDedicatedServerInstanceRequest*, "MasterServer", "CreateDedicatedServerInstanceRequest");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.CreateDedicatedServerInstanceRequest
  // [TokenAttribute] Offset: FFFFFFFF
  class CreateDedicatedServerInstanceRequest : public ::BGNet::Core::Messages::BaseReliableRequest/*, public ::MasterServer::IDedicatedServerMasterServerServerToClientMessage*/ {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.String secret
    // Size: 0x8
    // Offset: 0x18
    ::StringW secret;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public BeatmapLevelSelectionMask selectionMask
    // Size: 0x18
    // Offset: 0x20
    ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapLevelSelectionMask) == 0x18);
    // public System.String userId
    // Size: 0x8
    // Offset: 0x38
    ::StringW userId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String userName
    // Size: 0x8
    // Offset: 0x40
    ::StringW userName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Net.IPEndPoint userEndPoint
    // Size: 0x8
    // Offset: 0x48
    ::System::Net::IPEndPoint* userEndPoint;
    // Field size check
    static_assert(sizeof(::System::Net::IPEndPoint*) == 0x8);
    // public readonly ByteArrayNetSerializable userRandom
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::ByteArrayNetSerializable* userRandom;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public readonly ByteArrayNetSerializable userPublicKey
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::ByteArrayNetSerializable* userPublicKey;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public GameplayServerConfiguration configuration
    // Size: 0x18
    // Offset: 0x60
    ::GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayServerConfiguration) == 0x18);
    public:
    // Creating interface conversion operator: operator ::MasterServer::IDedicatedServerMasterServerServerToClientMessage
    operator ::MasterServer::IDedicatedServerMasterServerServerToClientMessage() noexcept {
      return *reinterpret_cast<::MasterServer::IDedicatedServerMasterServerServerToClientMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // Get instance field reference: public System.String secret
    ::StringW& dyn_secret();
    // Get instance field reference: public BeatmapLevelSelectionMask selectionMask
    ::GlobalNamespace::BeatmapLevelSelectionMask& dyn_selectionMask();
    // Get instance field reference: public System.String userId
    ::StringW& dyn_userId();
    // Get instance field reference: public System.String userName
    ::StringW& dyn_userName();
    // Get instance field reference: public System.Net.IPEndPoint userEndPoint
    ::System::Net::IPEndPoint*& dyn_userEndPoint();
    // Get instance field reference: public readonly ByteArrayNetSerializable userRandom
    ::GlobalNamespace::ByteArrayNetSerializable*& dyn_userRandom();
    // Get instance field reference: public readonly ByteArrayNetSerializable userPublicKey
    ::GlobalNamespace::ByteArrayNetSerializable*& dyn_userPublicKey();
    // Get instance field reference: public GameplayServerConfiguration configuration
    ::GlobalNamespace::GameplayServerConfiguration& dyn_configuration();
    // static public IPacketPool`1<MasterServer.CreateDedicatedServerInstanceRequest> get_pool()
    // Offset: 0x164D288
    static ::GlobalNamespace::IPacketPool_1<::MasterServer::CreateDedicatedServerInstanceRequest*>* get_pool();
    // protected System.UInt32 get_version()
    // Offset: 0x164D2D0
    uint get_version();
    // public MasterServer.CreateDedicatedServerInstanceRequest Init(System.String secret, BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration, System.String userId, System.String userName, System.Net.IPEndPoint userEndPoint, System.Byte[] userRandom, System.Byte[] userPublicKey)
    // Offset: 0x164D5A4
    ::MasterServer::CreateDedicatedServerInstanceRequest* Init(::StringW secret, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration, ::StringW userId, ::StringW userName, ::System::Net::IPEndPoint* userEndPoint, ::ArrayW<uint8_t> userRandom, ::ArrayW<uint8_t> userPublicKey);
    // public System.Void .ctor()
    // Offset: 0x164D61C
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CreateDedicatedServerInstanceRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MasterServer::CreateDedicatedServerInstanceRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CreateDedicatedServerInstanceRequest*, creationType>()));
    }
    // public override System.Void Release()
    // Offset: 0x164D2D8
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::Release()
    void Release();
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x164D3B4
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x164D4B0
    // Implemented from: BGNet.Core.Messages.BaseReliableRequest
    // Base method: System.Void BaseReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
  }; // MasterServer.CreateDedicatedServerInstanceRequest
  #pragma pack(pop)
  static check_size<sizeof(CreateDedicatedServerInstanceRequest), 96 + sizeof(::GlobalNamespace::GameplayServerConfiguration)> __MasterServer_CreateDedicatedServerInstanceRequestSizeCheck;
  static_assert(sizeof(CreateDedicatedServerInstanceRequest) == 0x78);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::CreateDedicatedServerInstanceRequest::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IPacketPool_1<::MasterServer::CreateDedicatedServerInstanceRequest*>* (*)()>(&MasterServer::CreateDedicatedServerInstanceRequest::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateDedicatedServerInstanceRequest*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateDedicatedServerInstanceRequest::get_version
// Il2CppName: get_version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (MasterServer::CreateDedicatedServerInstanceRequest::*)()>(&MasterServer::CreateDedicatedServerInstanceRequest::get_version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateDedicatedServerInstanceRequest*), "get_version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateDedicatedServerInstanceRequest::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MasterServer::CreateDedicatedServerInstanceRequest* (MasterServer::CreateDedicatedServerInstanceRequest::*)(::StringW, ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration, ::StringW, ::StringW, ::System::Net::IPEndPoint*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&MasterServer::CreateDedicatedServerInstanceRequest::Init)> {
  static const MethodInfo* get() {
    static auto* secret = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* selectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* userRandom = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* userPublicKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateDedicatedServerInstanceRequest*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{secret, selectionMask, configuration, userId, userName, userEndPoint, userRandom, userPublicKey});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateDedicatedServerInstanceRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::CreateDedicatedServerInstanceRequest::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::CreateDedicatedServerInstanceRequest::*)()>(&MasterServer::CreateDedicatedServerInstanceRequest::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateDedicatedServerInstanceRequest*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateDedicatedServerInstanceRequest::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::CreateDedicatedServerInstanceRequest::*)(::LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::CreateDedicatedServerInstanceRequest::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateDedicatedServerInstanceRequest*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::CreateDedicatedServerInstanceRequest::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::CreateDedicatedServerInstanceRequest::*)(::LiteNetLib::Utils::NetDataReader*)>(&MasterServer::CreateDedicatedServerInstanceRequest::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::CreateDedicatedServerInstanceRequest*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
