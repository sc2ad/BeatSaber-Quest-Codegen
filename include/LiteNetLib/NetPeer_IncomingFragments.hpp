// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.NetPeer
#include "LiteNetLib/NetPeer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPacket
  class NetPacket;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LiteNetLib::NetPeer::IncomingFragments);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetPeer::IncomingFragments*, "LiteNetLib", "NetPeer/IncomingFragments");
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NetPeer/LiteNetLib.IncomingFragments
  // [TokenAttribute] Offset: FFFFFFFF
  class NetPeer::IncomingFragments : public ::Il2CppObject {
    public:
    public:
    // public LiteNetLib.NetPacket[] Fragments
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::LiteNetLib::NetPacket*> Fragments;
    // Field size check
    static_assert(sizeof(::ArrayW<::LiteNetLib::NetPacket*>) == 0x8);
    // public System.Int32 ReceivedCount
    // Size: 0x4
    // Offset: 0x18
    int ReceivedCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 TotalSize
    // Size: 0x4
    // Offset: 0x1C
    int TotalSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Byte ChannelId
    // Size: 0x1
    // Offset: 0x20
    uint8_t ChannelId;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Get instance field reference: public LiteNetLib.NetPacket[] Fragments
    [[deprecated("Use field access instead!")]] ::ArrayW<::LiteNetLib::NetPacket*>& dyn_Fragments();
    // Get instance field reference: public System.Int32 ReceivedCount
    [[deprecated("Use field access instead!")]] int& dyn_ReceivedCount();
    // Get instance field reference: public System.Int32 TotalSize
    [[deprecated("Use field access instead!")]] int& dyn_TotalSize();
    // Get instance field reference: public System.Byte ChannelId
    [[deprecated("Use field access instead!")]] uint8_t& dyn_ChannelId();
    // public System.Void .ctor()
    // Offset: 0x2205A94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetPeer::IncomingFragments* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::NetPeer::IncomingFragments::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetPeer::IncomingFragments*, creationType>()));
    }
  }; // LiteNetLib.NetPeer/LiteNetLib.IncomingFragments
  #pragma pack(pop)
  static check_size<sizeof(NetPeer::IncomingFragments), 32 + sizeof(uint8_t)> __LiteNetLib_NetPeer_IncomingFragmentsSizeCheck;
  static_assert(sizeof(NetPeer::IncomingFragments) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::NetPeer::IncomingFragments::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
