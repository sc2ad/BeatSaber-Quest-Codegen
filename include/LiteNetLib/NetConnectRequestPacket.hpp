// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPacket
  class NetPacket;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: SocketAddress
  class SocketAddress;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetConnectRequestPacket
  class NetConnectRequestPacket;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LiteNetLib::NetConnectRequestPacket);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetConnectRequestPacket*, "LiteNetLib", "NetConnectRequestPacket");
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NetConnectRequestPacket
  // [TokenAttribute] Offset: FFFFFFFF
  class NetConnectRequestPacket : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public readonly System.Int64 ConnectionTime
    // Size: 0x8
    // Offset: 0x10
    int64_t ConnectionTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Byte ConnectionNumber
    // Size: 0x1
    // Offset: 0x18
    uint8_t ConnectionNumber;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: ConnectionNumber and: TargetAddress
    char __padding1[0x7] = {};
    // public readonly System.Byte[] TargetAddress
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> TargetAddress;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public readonly LiteNetLib.Utils.NetDataReader Data
    // Size: 0x8
    // Offset: 0x28
    ::LiteNetLib::Utils::NetDataReader* Data;
    // Field size check
    static_assert(sizeof(::LiteNetLib::Utils::NetDataReader*) == 0x8);
    public:
    // static field const value: static public System.Int32 HeaderSize
    static constexpr const int HeaderSize = 14;
    // Get static field: static public System.Int32 HeaderSize
    static int _get_HeaderSize();
    // Set static field: static public System.Int32 HeaderSize
    static void _set_HeaderSize(int value);
    // Get instance field reference: public readonly System.Int64 ConnectionTime
    int64_t& dyn_ConnectionTime();
    // Get instance field reference: public readonly System.Byte ConnectionNumber
    uint8_t& dyn_ConnectionNumber();
    // Get instance field reference: public readonly System.Byte[] TargetAddress
    ::ArrayW<uint8_t>& dyn_TargetAddress();
    // Get instance field reference: public readonly LiteNetLib.Utils.NetDataReader Data
    ::LiteNetLib::Utils::NetDataReader*& dyn_Data();
    // private System.Void .ctor(System.Int64 connectionTime, System.Byte connectionNumber, System.Byte[] targetAddress, LiteNetLib.Utils.NetDataReader data)
    // Offset: 0x21648C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetConnectRequestPacket* New_ctor(int64_t connectionTime, uint8_t connectionNumber, ::ArrayW<uint8_t> targetAddress, ::LiteNetLib::Utils::NetDataReader* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::NetConnectRequestPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetConnectRequestPacket*, creationType>(connectionTime, connectionNumber, targetAddress, data)));
    }
    // static public System.Int32 GetProtocolId(LiteNetLib.NetPacket packet)
    // Offset: 0x2164910
    static int GetProtocolId(::LiteNetLib::NetPacket* packet);
    // static public LiteNetLib.NetConnectRequestPacket FromData(LiteNetLib.NetPacket packet)
    // Offset: 0x2164988
    static ::LiteNetLib::NetConnectRequestPacket* FromData(::LiteNetLib::NetPacket* packet);
    // static public LiteNetLib.NetPacket Make(LiteNetLib.Utils.NetDataWriter connectData, System.Net.SocketAddress addressBytes, System.Int64 connectId)
    // Offset: 0x2164BA0
    static ::LiteNetLib::NetPacket* Make(::LiteNetLib::Utils::NetDataWriter* connectData, ::System::Net::SocketAddress* addressBytes, int64_t connectId);
  }; // LiteNetLib.NetConnectRequestPacket
  #pragma pack(pop)
  static check_size<sizeof(NetConnectRequestPacket), 40 + sizeof(::LiteNetLib::Utils::NetDataReader*)> __LiteNetLib_NetConnectRequestPacketSizeCheck;
  static_assert(sizeof(NetConnectRequestPacket) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::NetConnectRequestPacket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::NetConnectRequestPacket::GetProtocolId
// Il2CppName: GetProtocolId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::LiteNetLib::NetPacket*)>(&LiteNetLib::NetConnectRequestPacket::GetProtocolId)> {
  static const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetPacket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetConnectRequestPacket*), "GetProtocolId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetConnectRequestPacket::FromData
// Il2CppName: FromData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetConnectRequestPacket* (*)(::LiteNetLib::NetPacket*)>(&LiteNetLib::NetConnectRequestPacket::FromData)> {
  static const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetPacket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetConnectRequestPacket*), "FromData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetConnectRequestPacket::Make
// Il2CppName: Make
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetPacket* (*)(::LiteNetLib::Utils::NetDataWriter*, ::System::Net::SocketAddress*, int64_t)>(&LiteNetLib::NetConnectRequestPacket::Make)> {
  static const MethodInfo* get() {
    static auto* connectData = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    static auto* addressBytes = &::il2cpp_utils::GetClassFromName("System.Net", "SocketAddress")->byval_arg;
    static auto* connectId = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetConnectRequestPacket*), "Make", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectData, addressBytes, connectId});
  }
};
