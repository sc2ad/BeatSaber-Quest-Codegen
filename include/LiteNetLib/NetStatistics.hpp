// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NetStatistics
  // [TokenAttribute] Offset: FFFFFFFF
  class NetStatistics : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Int64 _packetsSent
    // Size: 0x8
    // Offset: 0x10
    int64_t packetsSent;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _packetsReceived
    // Size: 0x8
    // Offset: 0x18
    int64_t packetsReceived;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _bytesSent
    // Size: 0x8
    // Offset: 0x20
    int64_t bytesSent;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _bytesReceived
    // Size: 0x8
    // Offset: 0x28
    int64_t bytesReceived;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _packetLoss
    // Size: 0x8
    // Offset: 0x30
    int64_t packetLoss;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Get instance field reference: private System.Int64 _packetsSent
    int64_t& dyn__packetsSent();
    // Get instance field reference: private System.Int64 _packetsReceived
    int64_t& dyn__packetsReceived();
    // Get instance field reference: private System.Int64 _bytesSent
    int64_t& dyn__bytesSent();
    // Get instance field reference: private System.Int64 _bytesReceived
    int64_t& dyn__bytesReceived();
    // Get instance field reference: private System.Int64 _packetLoss
    int64_t& dyn__packetLoss();
    // public System.Int64 get_PacketsSent()
    // Offset: 0x1DDF6C4
    int64_t get_PacketsSent();
    // public System.Int64 get_PacketsReceived()
    // Offset: 0x1DDF6D0
    int64_t get_PacketsReceived();
    // public System.Int64 get_BytesSent()
    // Offset: 0x1DDF6DC
    int64_t get_BytesSent();
    // public System.Int64 get_BytesReceived()
    // Offset: 0x1DDF6E8
    int64_t get_BytesReceived();
    // public System.Int64 get_PacketLoss()
    // Offset: 0x1DDF6F4
    int64_t get_PacketLoss();
    // public System.Int64 get_PacketLossPercent()
    // Offset: 0x1DDF700
    int64_t get_PacketLossPercent();
    // public System.Void Reset()
    // Offset: 0x1DDF750
    void Reset();
    // public System.Void IncrementPacketsSent()
    // Offset: 0x1DD790C
    void IncrementPacketsSent();
    // public System.Void IncrementPacketsReceived()
    // Offset: 0x1DD9988
    void IncrementPacketsReceived();
    // public System.Void AddBytesSent(System.Int64 bytesSent)
    // Offset: 0x1DD7918
    void AddBytesSent(int64_t bytesSent);
    // public System.Void AddBytesReceived(System.Int64 bytesReceived)
    // Offset: 0x1DD9994
    void AddBytesReceived(int64_t bytesReceived);
    // public System.Void IncrementPacketLoss()
    // Offset: 0x1DDF7B8
    void IncrementPacketLoss();
    // public System.Void AddPacketLoss(System.Int64 packetLoss)
    // Offset: 0x1DDF7C4
    void AddPacketLoss(int64_t packetLoss);
    // public System.Void .ctor()
    // Offset: 0x1DD6F90
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetStatistics* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::NetStatistics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetStatistics*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x1DDF7D0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // LiteNetLib.NetStatistics
  #pragma pack(pop)
  static check_size<sizeof(NetStatistics), 48 + sizeof(int64_t)> __LiteNetLib_NetStatisticsSizeCheck;
  static_assert(sizeof(NetStatistics) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetStatistics*, "LiteNetLib", "NetStatistics");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::NetStatistics::get_PacketsSent
// Il2CppName: get_PacketsSent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (LiteNetLib::NetStatistics::*)()>(&LiteNetLib::NetStatistics::get_PacketsSent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetStatistics*), "get_PacketsSent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetStatistics::get_PacketsReceived
// Il2CppName: get_PacketsReceived
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (LiteNetLib::NetStatistics::*)()>(&LiteNetLib::NetStatistics::get_PacketsReceived)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetStatistics*), "get_PacketsReceived", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetStatistics::get_BytesSent
// Il2CppName: get_BytesSent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (LiteNetLib::NetStatistics::*)()>(&LiteNetLib::NetStatistics::get_BytesSent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetStatistics*), "get_BytesSent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetStatistics::get_BytesReceived
// Il2CppName: get_BytesReceived
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (LiteNetLib::NetStatistics::*)()>(&LiteNetLib::NetStatistics::get_BytesReceived)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetStatistics*), "get_BytesReceived", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetStatistics::get_PacketLoss
// Il2CppName: get_PacketLoss
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (LiteNetLib::NetStatistics::*)()>(&LiteNetLib::NetStatistics::get_PacketLoss)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetStatistics*), "get_PacketLoss", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetStatistics::get_PacketLossPercent
// Il2CppName: get_PacketLossPercent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (LiteNetLib::NetStatistics::*)()>(&LiteNetLib::NetStatistics::get_PacketLossPercent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetStatistics*), "get_PacketLossPercent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetStatistics::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetStatistics::*)()>(&LiteNetLib::NetStatistics::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetStatistics*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetStatistics::IncrementPacketsSent
// Il2CppName: IncrementPacketsSent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetStatistics::*)()>(&LiteNetLib::NetStatistics::IncrementPacketsSent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetStatistics*), "IncrementPacketsSent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetStatistics::IncrementPacketsReceived
// Il2CppName: IncrementPacketsReceived
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetStatistics::*)()>(&LiteNetLib::NetStatistics::IncrementPacketsReceived)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetStatistics*), "IncrementPacketsReceived", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetStatistics::AddBytesSent
// Il2CppName: AddBytesSent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetStatistics::*)(int64_t)>(&LiteNetLib::NetStatistics::AddBytesSent)> {
  static const MethodInfo* get() {
    static auto* bytesSent = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetStatistics*), "AddBytesSent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytesSent});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetStatistics::AddBytesReceived
// Il2CppName: AddBytesReceived
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetStatistics::*)(int64_t)>(&LiteNetLib::NetStatistics::AddBytesReceived)> {
  static const MethodInfo* get() {
    static auto* bytesReceived = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetStatistics*), "AddBytesReceived", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytesReceived});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetStatistics::IncrementPacketLoss
// Il2CppName: IncrementPacketLoss
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetStatistics::*)()>(&LiteNetLib::NetStatistics::IncrementPacketLoss)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetStatistics*), "IncrementPacketLoss", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetStatistics::AddPacketLoss
// Il2CppName: AddPacketLoss
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NetStatistics::*)(int64_t)>(&LiteNetLib::NetStatistics::AddPacketLoss)> {
  static const MethodInfo* get() {
    static auto* packetLoss = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetStatistics*), "AddPacketLoss", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packetLoss});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NetStatistics::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::NetStatistics::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (LiteNetLib::NetStatistics::*)()>(&LiteNetLib::NetStatistics::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NetStatistics*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
