// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BGNet.Core.Messages.BaseReliableResponse
#include "BGNet/Core/Messages/BaseReliableResponse.hpp"
// Including type: MasterServer.IDedicatedServerMasterServerClientToServerMessage
#include "MasterServer/IDedicatedServerMasterServerClientToServerMessage.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
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
  // Forward declaring type: DedicatedServerPrepareForConnectionResponse
  class DedicatedServerPrepareForConnectionResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::MasterServer::DedicatedServerPrepareForConnectionResponse);
DEFINE_IL2CPP_ARG_TYPE(::MasterServer::DedicatedServerPrepareForConnectionResponse*, "MasterServer", "DedicatedServerPrepareForConnectionResponse");
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.DedicatedServerPrepareForConnectionResponse
  // [TokenAttribute] Offset: FFFFFFFF
  class DedicatedServerPrepareForConnectionResponse : public ::BGNet::Core::Messages::BaseReliableResponse/*, public ::MasterServer::IDedicatedServerMasterServerClientToServerMessage*/ {
    public:
    // Nested type: ::MasterServer::DedicatedServerPrepareForConnectionResponse::Result
    struct Result;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MasterServer.DedicatedServerPrepareForConnectionResponse/MasterServer.Result
    // [TokenAttribute] Offset: FFFFFFFF
    struct Result/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Result
      constexpr Result(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MasterServer.DedicatedServerPrepareForConnectionResponse/MasterServer.Result Success
      static constexpr const int Success = 0;
      // Get static field: static public MasterServer.DedicatedServerPrepareForConnectionResponse/MasterServer.Result Success
      static ::MasterServer::DedicatedServerPrepareForConnectionResponse::Result _get_Success();
      // Set static field: static public MasterServer.DedicatedServerPrepareForConnectionResponse/MasterServer.Result Success
      static void _set_Success(::MasterServer::DedicatedServerPrepareForConnectionResponse::Result value);
      // static field const value: static public MasterServer.DedicatedServerPrepareForConnectionResponse/MasterServer.Result UnknownServer
      static constexpr const int UnknownServer = 1;
      // Get static field: static public MasterServer.DedicatedServerPrepareForConnectionResponse/MasterServer.Result UnknownServer
      static ::MasterServer::DedicatedServerPrepareForConnectionResponse::Result _get_UnknownServer();
      // Set static field: static public MasterServer.DedicatedServerPrepareForConnectionResponse/MasterServer.Result UnknownServer
      static void _set_UnknownServer(::MasterServer::DedicatedServerPrepareForConnectionResponse::Result value);
      // static field const value: static public MasterServer.DedicatedServerPrepareForConnectionResponse/MasterServer.Result UnknownError
      static constexpr const int UnknownError = 2;
      // Get static field: static public MasterServer.DedicatedServerPrepareForConnectionResponse/MasterServer.Result UnknownError
      static ::MasterServer::DedicatedServerPrepareForConnectionResponse::Result _get_UnknownError();
      // Set static field: static public MasterServer.DedicatedServerPrepareForConnectionResponse/MasterServer.Result UnknownError
      static void _set_UnknownError(::MasterServer::DedicatedServerPrepareForConnectionResponse::Result value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // MasterServer.DedicatedServerPrepareForConnectionResponse/MasterServer.Result
    #pragma pack(pop)
    static check_size<sizeof(DedicatedServerPrepareForConnectionResponse::Result), 0 + sizeof(int)> __MasterServer_DedicatedServerPrepareForConnectionResponse_ResultSizeCheck;
    static_assert(sizeof(DedicatedServerPrepareForConnectionResponse::Result) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public MasterServer.DedicatedServerPrepareForConnectionResponse/MasterServer.Result result
    // Size: 0x4
    // Offset: 0x18
    ::MasterServer::DedicatedServerPrepareForConnectionResponse::Result result;
    // Field size check
    static_assert(sizeof(::MasterServer::DedicatedServerPrepareForConnectionResponse::Result) == 0x4);
    // Padding between fields: result and: dedicatedServerId
    char __padding0[0x4] = {};
    // private System.String <dedicatedServerId>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW dedicatedServerId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int64 <dedicatedServerCreationTime>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    int64_t dedicatedServerCreationTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Creating interface conversion operator: operator ::MasterServer::IDedicatedServerMasterServerClientToServerMessage
    operator ::MasterServer::IDedicatedServerMasterServerClientToServerMessage() noexcept {
      return *reinterpret_cast<::MasterServer::IDedicatedServerMasterServerClientToServerMessage*>(this);
    }
    // Get instance field reference: public MasterServer.DedicatedServerPrepareForConnectionResponse/MasterServer.Result result
    ::MasterServer::DedicatedServerPrepareForConnectionResponse::Result& dyn_result();
    // Get instance field reference: private System.String <dedicatedServerId>k__BackingField
    ::StringW& dyn_$dedicatedServerId$k__BackingField();
    // Get instance field reference: private System.Int64 <dedicatedServerCreationTime>k__BackingField
    int64_t& dyn_$dedicatedServerCreationTime$k__BackingField();
    // static public PacketPool`1<MasterServer.DedicatedServerPrepareForConnectionResponse> get_pool()
    // Offset: 0x164E588
    static ::GlobalNamespace::PacketPool_1<::MasterServer::DedicatedServerPrepareForConnectionResponse*>* get_pool();
    // public System.String get_dedicatedServerId()
    // Offset: 0x164E668
    ::StringW get_dedicatedServerId();
    // private System.Void set_dedicatedServerId(System.String value)
    // Offset: 0x164E670
    void set_dedicatedServerId(::StringW value);
    // public System.Int64 get_dedicatedServerCreationTime()
    // Offset: 0x164E678
    int64_t get_dedicatedServerCreationTime();
    // private System.Void set_dedicatedServerCreationTime(System.Int64 value)
    // Offset: 0x164E680
    void set_dedicatedServerCreationTime(int64_t value);
    // public MasterServer.DedicatedServerPrepareForConnectionResponse InitForFailure(System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime, MasterServer.DedicatedServerPrepareForConnectionResponse/MasterServer.Result result)
    // Offset: 0x164E7A4
    ::MasterServer::DedicatedServerPrepareForConnectionResponse* InitForFailure(::StringW dedicatedServerId, int64_t dedicatedServerCreationTime, ::MasterServer::DedicatedServerPrepareForConnectionResponse::Result result);
    // public MasterServer.DedicatedServerPrepareForConnectionResponse InitForSuccess(System.String dedicatedServerId, System.Int64 dedicatedServerCreationTime)
    // Offset: 0x164E7B0
    ::MasterServer::DedicatedServerPrepareForConnectionResponse* InitForSuccess(::StringW dedicatedServerId, int64_t dedicatedServerCreationTime);
    // public override System.Byte get_resultCode()
    // Offset: 0x164E5D0
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Byte BaseReliableResponse::get_resultCode()
    uint8_t get_resultCode();
    // public override System.String get_resultCodeString()
    // Offset: 0x164E5D8
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.String BaseReliableResponse::get_resultCodeString()
    ::StringW get_resultCodeString();
    // public System.Void .ctor()
    // Offset: 0x164E7BC
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DedicatedServerPrepareForConnectionResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::MasterServer::DedicatedServerPrepareForConnectionResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DedicatedServerPrepareForConnectionResponse*, creationType>()));
    }
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x164E688
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x164E6E4
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x164E748
    // Implemented from: BGNet.Core.Messages.BaseReliableResponse
    // Base method: System.Void BaseReliableResponse::Release()
    void Release();
  }; // MasterServer.DedicatedServerPrepareForConnectionResponse
  #pragma pack(pop)
  static check_size<sizeof(DedicatedServerPrepareForConnectionResponse), 40 + sizeof(int64_t)> __MasterServer_DedicatedServerPrepareForConnectionResponseSizeCheck;
  static_assert(sizeof(DedicatedServerPrepareForConnectionResponse) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::MasterServer::DedicatedServerPrepareForConnectionResponse::Result, "MasterServer", "DedicatedServerPrepareForConnectionResponse/Result");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionResponse::get_pool
// Il2CppName: get_pool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::MasterServer::DedicatedServerPrepareForConnectionResponse*>* (*)()>(&MasterServer::DedicatedServerPrepareForConnectionResponse::get_pool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerPrepareForConnectionResponse*), "get_pool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionResponse::get_dedicatedServerId
// Il2CppName: get_dedicatedServerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MasterServer::DedicatedServerPrepareForConnectionResponse::*)()>(&MasterServer::DedicatedServerPrepareForConnectionResponse::get_dedicatedServerId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerPrepareForConnectionResponse*), "get_dedicatedServerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionResponse::set_dedicatedServerId
// Il2CppName: set_dedicatedServerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerPrepareForConnectionResponse::*)(::StringW)>(&MasterServer::DedicatedServerPrepareForConnectionResponse::set_dedicatedServerId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerPrepareForConnectionResponse*), "set_dedicatedServerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionResponse::get_dedicatedServerCreationTime
// Il2CppName: get_dedicatedServerCreationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (MasterServer::DedicatedServerPrepareForConnectionResponse::*)()>(&MasterServer::DedicatedServerPrepareForConnectionResponse::get_dedicatedServerCreationTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerPrepareForConnectionResponse*), "get_dedicatedServerCreationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionResponse::set_dedicatedServerCreationTime
// Il2CppName: set_dedicatedServerCreationTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerPrepareForConnectionResponse::*)(int64_t)>(&MasterServer::DedicatedServerPrepareForConnectionResponse::set_dedicatedServerCreationTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerPrepareForConnectionResponse*), "set_dedicatedServerCreationTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionResponse::InitForFailure
// Il2CppName: InitForFailure
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MasterServer::DedicatedServerPrepareForConnectionResponse* (MasterServer::DedicatedServerPrepareForConnectionResponse::*)(::StringW, int64_t, ::MasterServer::DedicatedServerPrepareForConnectionResponse::Result)>(&MasterServer::DedicatedServerPrepareForConnectionResponse::InitForFailure)> {
  static const MethodInfo* get() {
    static auto* dedicatedServerId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dedicatedServerCreationTime = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("MasterServer", "DedicatedServerPrepareForConnectionResponse/Result")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerPrepareForConnectionResponse*), "InitForFailure", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dedicatedServerId, dedicatedServerCreationTime, result});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionResponse::InitForSuccess
// Il2CppName: InitForSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::MasterServer::DedicatedServerPrepareForConnectionResponse* (MasterServer::DedicatedServerPrepareForConnectionResponse::*)(::StringW, int64_t)>(&MasterServer::DedicatedServerPrepareForConnectionResponse::InitForSuccess)> {
  static const MethodInfo* get() {
    static auto* dedicatedServerId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dedicatedServerCreationTime = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerPrepareForConnectionResponse*), "InitForSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dedicatedServerId, dedicatedServerCreationTime});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionResponse::get_resultCode
// Il2CppName: get_resultCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (MasterServer::DedicatedServerPrepareForConnectionResponse::*)()>(&MasterServer::DedicatedServerPrepareForConnectionResponse::get_resultCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerPrepareForConnectionResponse*), "get_resultCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionResponse::get_resultCodeString
// Il2CppName: get_resultCodeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (MasterServer::DedicatedServerPrepareForConnectionResponse::*)()>(&MasterServer::DedicatedServerPrepareForConnectionResponse::get_resultCodeString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerPrepareForConnectionResponse*), "get_resultCodeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionResponse::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionResponse::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerPrepareForConnectionResponse::*)(::LiteNetLib::Utils::NetDataWriter*)>(&MasterServer::DedicatedServerPrepareForConnectionResponse::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerPrepareForConnectionResponse*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionResponse::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerPrepareForConnectionResponse::*)(::LiteNetLib::Utils::NetDataReader*)>(&MasterServer::DedicatedServerPrepareForConnectionResponse::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerPrepareForConnectionResponse*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: MasterServer::DedicatedServerPrepareForConnectionResponse::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (MasterServer::DedicatedServerPrepareForConnectionResponse::*)()>(&MasterServer::DedicatedServerPrepareForConnectionResponse::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(MasterServer::DedicatedServerPrepareForConnectionResponse*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
