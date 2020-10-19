// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: PacketProperty
  struct PacketProperty;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Autogenerated type: LiteNetLib.NetPacket
  class NetPacket : public ::Il2CppObject {
    public:
    // public System.Byte[] RawData
    // Offset: 0x10
    ::Array<uint8_t>* RawData;
    // public System.Int32 Size
    // Offset: 0x18
    int Size;
    // public System.Object UserData
    // Offset: 0x20
    ::Il2CppObject* UserData;
    // Get static field: static private readonly System.Int32 LastProperty
    static int _get_LastProperty();
    // Set static field: static private readonly System.Int32 LastProperty
    static void _set_LastProperty(int value);
    // public LiteNetLib.PacketProperty get_Property()
    // Offset: 0x180B1AC
    LiteNetLib::PacketProperty get_Property();
    // public System.Void set_Property(LiteNetLib.PacketProperty value)
    // Offset: 0x180CA90
    void set_Property(LiteNetLib::PacketProperty value);
    // public System.Byte get_ConnectionNumber()
    // Offset: 0x180715C
    uint8_t get_ConnectionNumber();
    // public System.Void set_ConnectionNumber(System.Byte value)
    // Offset: 0x180A734
    void set_ConnectionNumber(uint8_t value);
    // public System.UInt16 get_Sequence()
    // Offset: 0x180DFA0
    uint16_t get_Sequence();
    // public System.Void set_Sequence(System.UInt16 value)
    // Offset: 0x180E010
    void set_Sequence(uint16_t value);
    // public System.Boolean get_IsFragmented()
    // Offset: 0x180E024
    bool get_IsFragmented();
    // public System.Void MarkFragmented()
    // Offset: 0x180E060
    void MarkFragmented();
    // public System.Byte get_ChannelId()
    // Offset: 0x180E09C
    uint8_t get_ChannelId();
    // public System.Void set_ChannelId(System.Byte value)
    // Offset: 0x180E0D4
    void set_ChannelId(uint8_t value);
    // public System.UInt16 get_FragmentId()
    // Offset: 0x180E10C
    uint16_t get_FragmentId();
    // public System.Void set_FragmentId(System.UInt16 value)
    // Offset: 0x180E17C
    void set_FragmentId(uint16_t value);
    // public System.UInt16 get_FragmentPart()
    // Offset: 0x180E18C
    uint16_t get_FragmentPart();
    // public System.Void set_FragmentPart(System.UInt16 value)
    // Offset: 0x180E1FC
    void set_FragmentPart(uint16_t value);
    // public System.UInt16 get_FragmentsTotal()
    // Offset: 0x180E20C
    uint16_t get_FragmentsTotal();
    // public System.Void set_FragmentsTotal(System.UInt16 value)
    // Offset: 0x180E27C
    void set_FragmentsTotal(uint16_t value);
    // public System.Void .ctor(System.Int32 size)
    // Offset: 0x180E28C
    static NetPacket* New_ctor(int size);
    // public System.Void .ctor(LiteNetLib.PacketProperty property, System.Int32 size)
    // Offset: 0x1806DDC
    static NetPacket* New_ctor(LiteNetLib::PacketProperty property, int size);
    // static public System.Int32 GetHeaderSize(LiteNetLib.PacketProperty property)
    // Offset: 0x180CA64
    static int GetHeaderSize(LiteNetLib::PacketProperty property);
    // public System.Int32 GetHeaderSize()
    // Offset: 0x180E30C
    int GetHeaderSize();
    // public System.Boolean FromBytes(System.Byte[] data, System.Int32 start, System.Int32 packetSize)
    // Offset: 0x180B060
    bool FromBytes(::Array<uint8_t>* data, int start, int packetSize);
    // static private System.Void .cctor()
    // Offset: 0x180E3A4
    static void _cctor();
  }; // LiteNetLib.NetPacket
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetPacket*, "LiteNetLib", "NetPacket");
#pragma pack(pop)