// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseReliableResponse
#include "BGNet/Core/Messages/BaseReliableResponse.hpp"
// Including type: MasterServer.IUserMasterServerServerToClientMessage
#include "MasterServer/IUserMasterServerServerToClientMessage.hpp"
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
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Skipping declaration: Result because it is already included!
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
  // Forward declaring type: ConnectToServerResponse
  class ConnectToServerResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MasterServer::ConnectToServerResponse);
DEFINE_IL2CPP_ARG_TYPE(::MasterServer::ConnectToServerResponse*, "MasterServer", "ConnectToServerResponse");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x98
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.ConnectToServerResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class ConnectToServerResponse : public ::BGNet::Core::Messages::BaseReliableResponse/*, public ::MasterServer::IUserMasterServerServerToClientMessage*/ {
    public:
    // Nested type: ::MasterServer::ConnectToServerResponse::Result
    struct Result;
    // Size: 0x1
    #pragma pack(push, 1)
    // Autogenerated type: MasterServer.ConnectToServerResponse/MasterServer.Result
    // [TokenAttribute] Offset: FFFFFFFF
    struct Result/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Byte value__
      // Size: 0x1
      // Offset: 0x0
      uint8_t value;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      public:
      // Creating value type constructor for type: Result
      constexpr Result(uint8_t value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return value;
      }
      // static field const value: static public MasterServer.ConnectToServerResponse/MasterServer.Result Success
      static constexpr const uint8_t Success = 0u;
      // Get static field: static public MasterServer.ConnectToServerResponse/MasterServer.Result Success
      static ::MasterServer::ConnectToServerResponse::Result _get_Success();
      // Set static field: static public MasterServer.ConnectToServerResponse/MasterServer.Result Success
      static void _set_Success(::MasterServer::ConnectToServerResponse::Result value);
      // static field const value: static public MasterServer.ConnectToServerResponse/MasterServer.Result InvalidSecret
      static constexpr const uint8_t InvalidSecret = 1u;
      // Get static field: static public MasterServer.ConnectToServerResponse/MasterServer.Result InvalidSecret
      static ::MasterServer::ConnectToServerResponse::Result _get_InvalidSecret();
      // Set static field: static public MasterServer.ConnectToServerResponse/MasterServer.Result InvalidSecret
      static void _set_InvalidSecret(::MasterServer::ConnectToServerResponse::Result value);
      // static field const value: static public MasterServer.ConnectToServerResponse/MasterServer.Result InvalidCode
      static constexpr const uint8_t InvalidCode = 2u;
      // Get static field: static public MasterServer.ConnectToServerResponse/MasterServer.Result InvalidCode
      static ::MasterServer::ConnectToServerResponse::Result _get_InvalidCode();
      // Set static field: static public MasterServer.ConnectToServerResponse/MasterServer.Result InvalidCode
      static void _set_InvalidCode(::MasterServer::ConnectToServerResponse::Result value);
      // static field const value: static public MasterServer.ConnectToServerResponse/MasterServer.Result InvalidPassword
      static constexpr const uint8_t InvalidPassword = 3u;
      // Get static field: static public MasterServer.ConnectToServerResponse/MasterServer.Result InvalidPassword
      static ::MasterServer::ConnectToServerResponse::Result _get_InvalidPassword();
      // Set static field: static public MasterServer.ConnectToServerResponse/MasterServer.Result InvalidPassword
      static void _set_InvalidPassword(::MasterServer::ConnectToServerResponse::Result value);
      // static field const value: static public MasterServer.ConnectToServerResponse/MasterServer.Result ServerAtCapacity
      static constexpr const uint8_t ServerAtCapacity = 4u;
      // Get static field: static public MasterServer.ConnectToServerResponse/MasterServer.Result ServerAtCapacity
      static ::MasterServer::ConnectToServerResponse::Result _get_ServerAtCapacity();
      // Set static field: static public MasterServer.ConnectToServerResponse/MasterServer.Result ServerAtCapacity
      static void _set_ServerAtCapacity(::MasterServer::ConnectToServerResponse::Result value);
      // static field const value: static public MasterServer.ConnectToServerResponse/MasterServer.Result NoAvailableDedicatedServers
      static constexpr const uint8_t NoAvailableDedicatedServers = 5u;
      // Get static field: static public MasterServer.ConnectToServerResponse/MasterServer.Result NoAvailableDedicatedServers
      static ::MasterServer::ConnectToServerResponse::Result _get_NoAvailableDedicatedServers();
      // Set static field: static public MasterServer.ConnectToServerResponse/MasterServer.Result NoAvailableDedicatedServers
      static void _set_NoAvailableDedicatedServers(::MasterServer::ConnectToServerResponse::Result value);
      // static field const value: static public MasterServer.ConnectToServerResponse/MasterServer.Result VersionMismatch
      static constexpr const uint8_t VersionMismatch = 6u;
      // Get static field: static public MasterServer.ConnectToServerResponse/MasterServer.Result VersionMismatch
      static ::MasterServer::ConnectToServerResponse::Result _get_VersionMismatch();
      // Set static field: static public MasterServer.ConnectToServerResponse/MasterServer.Result VersionMismatch
      static void _set_VersionMismatch(::MasterServer::ConnectToServerResponse::Result value);
      // static field const value: static public MasterServer.ConnectToServerResponse/MasterServer.Result ConfigMismatch
      static constexpr const uint8_t ConfigMismatch = 7u;
      // Get static field: static public MasterServer.ConnectToServerResponse/MasterServer.Result ConfigMismatch
      static ::MasterServer::ConnectToServerResponse::Result _get_ConfigMismatch();
      // Set static field: static public MasterServer.ConnectToServerResponse/MasterServer.Result ConfigMismatch
      static void _set_ConfigMismatch(::MasterServer::ConnectToServerResponse::Result value);
      // static field const value: static public MasterServer.ConnectToServerResponse/MasterServer.Result UnknownError
      static constexpr const uint8_t UnknownError = 8u;
      // Get static field: static public MasterServer.ConnectToServerResponse/MasterServer.Result UnknownError
      static ::MasterServer::ConnectToServerResponse::Result _get_UnknownError();
      // Set static field: static public MasterServer.ConnectToServerResponse/MasterServer.Result UnknownError
      static void _set_UnknownError(::MasterServer::ConnectToServerResponse::Result value);
      // Get instance field reference: public System.Byte value__
      uint8_t& dyn_value__();
    }; // MasterServer.ConnectToServerResponse/MasterServer.Result
    #pragma pack(pop)
    static check_size<sizeof(ConnectToServerResponse::Result), 0 + sizeof(uint8_t)> __MasterServer_ConnectToServerResponse_ResultSizeCheck;
    static_assert(sizeof(ConnectToServerResponse::Result) == 0x1);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public MasterServer.ConnectToServerResponse/MasterServer.Result result
    // Size: 0x1
    // Offset: 0x18
    ::MasterServer::ConnectToServerResponse::Result result;
    // Field size check
    static_assert(sizeof(::MasterServer::ConnectToServerResponse::Result) == 0x1);
    // Padding between fields: result and: userId
    char __padding0[0x7] = {};
    // public System.String userId
    // Size: 0x8
    // Offset: 0x20
    ::StringW userId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String userName
    // Size: 0x8
    // Offset: 0x28
    ::StringW userName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String secret
    // Size: 0x8
    // Offset: 0x30
    ::StringW secret;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String code
    // Size: 0x8
    // Offset: 0x38
    ::StringW code;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public BeatmapLevelSelectionMask selectionMask
    // Size: 0x18
    // Offset: 0x40
    ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapLevelSelectionMask) == 0x18);
    // public System.Boolean isConnectionOwner
    // Size: 0x1
    // Offset: 0x58
    bool isConnectionOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isDedicatedServer
    // Size: 0x1
    // Offset: 0x59
    bool isDedicatedServer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isDedicatedServer and: remoteEndPoint
    char __padding7[0x6] = {};
    // public System.Net.IPEndPoint remoteEndPoint
    // Size: 0x8
    // Offset: 0x60
    ::System::Net::IPEndPoint* remoteEndPoint;
    // Field size check
    static_assert(sizeof(::System::Net::IPEndPoint*) == 0x8);
    // public readonly ByteArrayNetSerializable random
    // Size: 0x8
    // Offset: 0x68
    ::GlobalNamespace::ByteArrayNetSerializable* random;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public readonly ByteArrayNetSerializable publicKey
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::ByteArrayNetSerializable* publicKey;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // public GameplayServerConfiguration configuration
    // Size: 0x18
    // Offset: 0x78
    ::GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayServerConfiguration) == 0x18);
    // public System.String managerId
    // Size: 0x8
    // Offset: 0x90
    ::StringW managerId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::MasterServer::IUserMasterServerServerToClientMessage
    operator ::MasterServer::IUserMasterServerServerToClientMessage() noexcept {
      return *reinterpret_cast<::MasterServer::IUserMasterServerServerToClientMessage*>(this);
    }
    // Get instance field reference: public MasterServer.ConnectToServerResponse/MasterServer.Result result
    ::MasterServer::ConnectToServerResponse::Result& dyn_result();
    // Get instance field reference: public System.String userId
    ::StringW& dyn_userId();
    // Get instance field reference: public System.String userName
    ::StringW& dyn_userName();
    // Get instance field reference: public System.String secret
    ::StringW& dyn_secret();
    // Get instance field reference: public System.String code
    ::StringW& dyn_code();
    // Get instance field reference: public BeatmapLevelSelectionMask selectionMask
    ::GlobalNamespace::BeatmapLevelSelectionMask& dyn_selectionMask();
    // Get instance field reference: public System.Boolean isConnectionOwner
    bool& dyn_isConnectionOwner();
    // Get instance field reference: public System.Boolean isDedicatedServer
    bool& dyn_isDedicatedServer();
    // Get instance field reference: public System.Net.IPEndPoint remoteEndPoint
    ::System::Net::IPEndPoint*& dyn_remoteEndPoint();
    // Get instance field reference: public readonly ByteArrayNetSerializable random
    ::GlobalNamespace::ByteArrayNetSerializable*& dyn_random();
    // Get instance field reference: public readonly ByteArrayNetSerializable publicKey
    ::GlobalNamespace::ByteArrayNetSerializable*& dyn_publicKey();
    // Get instance field reference: public GameplayServerConfiguration configuration
    ::GlobalNamespace::GameplayServerConfiguration& dyn_configuration();
    // Get instance field reference: public System.String managerId
    ::StringW& dyn_managerId();
    // static public IPacketPool`1<MasterServer.ConnectToServerResponse> get_pool()
    // Offset: 0x2C4CEF8
    static ::GlobalNamespace::IPacketPool_1<::MasterServer::ConnectToServerResponse*>* get_pool();
    // protected System.UInt32 get_version()
    // Offset: 0x2C4CFD8
    uint get_version();
    // public MasterServer.ConnectToServerResponse InitForFailure(MasterServer.ConnectToServerResponse/MasterServer.Result result)
    // Offset: 0x2C4CFE0
    ::MasterServer::ConnectToServerResponse* InitForFailure(::MasterServer::ConnectToServerResponse::Result result);
    // public MasterServer.ConnectToServerResponse InitForSuccess(System.String userId, System.String userName, System.String secret, System.String code, BeatmapLevelSelectionMask selectionMask, GameplayServerConfiguration configuration, System.Boolean isConnectionOwner, System.Boolean isDedicatedServer, System.Net.IPEndPoint remoteEndPoint, System.Byte[] random, System.Byte[] publicKey, System.String managerId)
    // Offset: 0x2C4D078
    ::MasterServer::ConnectToServerResponse* InitForSuccess(::StringW userId, ::StringW userName, ::StringW secret, ::StringW code, ::GlobalNamespace::BeatmapLevelSelectionMask selectionMask, ::GlobalNamespace::GameplayServerConfiguration configuration, bool isConnectionOwner, bool isDedicatedServer, ::System::Net::IPEndPoint* remoteEndPoint, ::ArrayW<uint8_t> random, ::ArrayW<uint8_t> publicKey, ::StringW managerId);
    // public override System.Byte get_resultCode()
    // Offset: 0x2C4CF40
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Byte BaseReliableResponse::get_resultCode()
    uint8_t get_resultCode();
    // public override System.String get_resultCodeString()
    // Offset: 0x2C4CF48
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.String BaseReliableResponse::get_resultCodeString()
    ::StringW get_resultCodeString();
    // public System.Void .ctor()
    // Offset: 0x2C4D478
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectToServerResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MasterServer::ConnectToServerResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectToServerResponse*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x2C4D110
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2C4D250
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x2C4D39C
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Release()
    void Release();
  }; // MasterServer.ConnectToServerResponse
  #pragma pack(pop)
  static check_size<sizeof(ConnectToServerResponse), 144 + sizeof(::StringW)> __MasterServer_ConnectToServerResponseSizeCheck;
  static_assert(sizeof(ConnectToServerResponse) == 0x98);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::MasterServer::ConnectToServerResponse::Result, "MasterServer", "ConnectToServerResponse/Result");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::ConnectToServerResponse::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IPacketPool_1<::MasterServer::ConnectToServerResponse*>* (*)()>(&MasterServer::ConnectToServerResponse::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::ConnectToServerResponse*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::ConnectToServerResponse::get_version
// Il2CppName: get_version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (MasterServer::ConnectToServerResponse::*)()>(&MasterServer::ConnectToServerResponse::get_version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::ConnectToServerResponse*), "get_version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::ConnectToServerResponse::InitForFailure
// Il2CppName: InitForFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MasterServer::ConnectToServerResponse* (MasterServer::ConnectToServerResponse::*)(::MasterServer::ConnectToServerResponse::Result)>(&MasterServer::ConnectToServerResponse::InitForFailure)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("MasterServer", "ConnectToServerResponse/Result")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::ConnectToServerResponse*), "InitForFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: MasterServer::ConnectToServerResponse::InitForSuccess
// Il2CppName: InitForSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MasterServer::ConnectToServerResponse* (MasterServer::ConnectToServerResponse::*)(::StringW, ::StringW, ::StringW, ::StringW, ::GlobalNamespace::BeatmapLevelSelectionMask, ::GlobalNamespace::GameplayServerConfiguration, bool, bool, ::System::Net::IPEndPoint*, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::StringW)>(&MasterServer::ConnectToServerResponse::InitForSuccess)> {
  static const MethodInfo* get() {
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* secret = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* selectionMask = &::il2cpp_utils::GetClassFromName("", "BeatmapLevelSelectionMask")->byval_arg;
    static auto* configuration = &::il2cpp_utils::GetClassFromName("", "GameplayServerConfiguration")->byval_arg;
    static auto* isConnectionOwner = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isDedicatedServer = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* remoteEndPoint = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    static auto* random = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* publicKey = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* managerId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::ConnectToServerResponse*), "InitForSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userId, userName, secret, code, selectionMask, configuration, isConnectionOwner, isDedicatedServer, remoteEndPoint, random, publicKey, managerId});
  }
};
// Writing MetadataGetter for method: MasterServer::ConnectToServerResponse::get_resultCode
// Il2CppName: get_resultCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (MasterServer::ConnectToServerResponse::*)()>(&MasterServer::ConnectToServerResponse::get_resultCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::ConnectToServerResponse*), "get_resultCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::ConnectToServerResponse::get_resultCodeString
// Il2CppName: get_resultCodeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MasterServer::ConnectToServerResponse::*)()>(&MasterServer::ConnectToServerResponse::get_resultCodeString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::ConnectToServerResponse*), "get_resultCodeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::ConnectToServerResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::ConnectToServerResponse::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::ConnectToServerResponse::*)(::LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::ConnectToServerResponse::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::ConnectToServerResponse*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::ConnectToServerResponse::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::ConnectToServerResponse::*)(::LiteNetLib::Utils::NetDataReader*)>(&MasterServer::ConnectToServerResponse::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::ConnectToServerResponse*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::ConnectToServerResponse::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::ConnectToServerResponse::*)()>(&MasterServer::ConnectToServerResponse::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::ConnectToServerResponse*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
