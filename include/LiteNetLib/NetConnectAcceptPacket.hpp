// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPacket
  class NetPacket;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x1A
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NetConnectAcceptPacket
  // [TokenAttribute] Offset: FFFFFFFF
  class NetConnectAcceptPacket : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public readonly System.Int64 ConnectionId
    // Size: 0x8
    // Offset: 0x10
    int64_t ConnectionId;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Byte ConnectionNumber
    // Size: 0x1
    // Offset: 0x18
    uint8_t ConnectionNumber;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public readonly System.Boolean IsReusedPeer
    // Size: 0x1
    // Offset: 0x19
    bool IsReusedPeer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // static field const value: static public System.Int32 Size
    static constexpr const int Size = 11;
    // Get static field: static public System.Int32 Size
    static int _get_Size();
    // Set static field: static public System.Int32 Size
    static void _set_Size(int value);
    // Get instance field reference: public readonly System.Int64 ConnectionId
    int64_t& dyn_ConnectionId();
    // Get instance field reference: public readonly System.Byte ConnectionNumber
    uint8_t& dyn_ConnectionNumber();
    // Get instance field reference: public readonly System.Boolean IsReusedPeer
    bool& dyn_IsReusedPeer();
    // private System.Void .ctor(System.Int64 connectionId, System.Byte connectionNumber, System.Boolean isReusedPeer)
    // Offset: 0x1DD58F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetConnectAcceptPacket* New_ctor(int64_t connectionId, uint8_t connectionNumber, bool isReusedPeer) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::NetConnectAcceptPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetConnectAcceptPacket*, creationType>(connectionId, connectionNumber, isReusedPeer)));
    }
    // static public LiteNetLib.NetConnectAcceptPacket FromData(LiteNetLib.NetPacket packet)
    // Offset: 0x1DD593C
    static LiteNetLib::NetConnectAcceptPacket* FromData(LiteNetLib::NetPacket* packet);
    // static public LiteNetLib.NetPacket Make(System.Int64 connectId, System.Byte connectNum, System.Boolean reusedPeer)
    // Offset: 0x1DD5A4C
    static LiteNetLib::NetPacket* Make(int64_t connectId, uint8_t connectNum, bool reusedPeer);
  }; // LiteNetLib.NetConnectAcceptPacket
  #pragma pack(pop)
  static check_size<sizeof(NetConnectAcceptPacket), 25 + sizeof(bool)> __LiteNetLib_NetConnectAcceptPacketSizeCheck;
  static_assert(sizeof(NetConnectAcceptPacket) == 0x1A);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetConnectAcceptPacket*, "LiteNetLib", "NetConnectAcceptPacket");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::NetConnectAcceptPacket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::NetConnectAcceptPacket::FromData
// Il2CppName: FromData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::NetConnectAcceptPacket* (*)(LiteNetLib::NetPacket*)>(&LiteNetLib::NetConnectAcceptPacket::FromData)> {
  static const MethodInfo* get() {
    static auto* packet = &::il2cpp_utils::GetClassFromName("LiteNetLib", "NetPacket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetConnectAcceptPacket*), "FromData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packet});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetConnectAcceptPacket::Make
// Il2CppName: Make
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::NetPacket* (*)(int64_t, uint8_t, bool)>(&LiteNetLib::NetConnectAcceptPacket::Make)> {
  static const MethodInfo* get() {
    static auto* connectId = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* connectNum = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* reusedPeer = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetConnectAcceptPacket*), "Make", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{connectId, connectNum, reusedPeer});
  }
};
