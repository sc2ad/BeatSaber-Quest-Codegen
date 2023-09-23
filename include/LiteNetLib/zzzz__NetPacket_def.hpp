#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace LiteNetLib {
struct PacketProperty;
}
// Forward declare root types
namespace LiteNetLib {
class NetPacket;
}
// Type: LiteNetLib::NetPacket
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14450))
// CS Name: LiteNetLib.NetPacket
class CORDL_TYPE NetPacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~NetPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetPacket", modifiers: " const&", def_value: None }]
constexpr NetPacket(NetPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetPacket", modifiers: "&&", def_value: None }]
constexpr NetPacket(NetPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetPacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetPacket& operator=(NetPacket&& o) noexcept = default;
  constexpr NetPacket& operator=(NetPacket const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_LastProperty, put=__set_LastProperty))  LastProperty;

static void __set_LastProperty(int32_t value) ;

static int32_t __get_LastProperty() ;

 ::ArrayW<uint8_t> __declspec(property(get=__get_RawData, put=__set_RawData))  RawData;

constexpr void __set_RawData(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_RawData() const;

 int32_t __declspec(property(get=__get_Size, put=__set_Size))  Size;

constexpr void __set_Size(int32_t value) ;

constexpr int32_t __get_Size() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_UserData, put=__set_UserData))  UserData;

constexpr void __set_UserData(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_UserData() const;


// Properties

 LiteNetLib::PacketProperty __declspec(property(get=get_Property, put=set_Property))  Property;

 uint8_t __declspec(property(get=get_ConnectionNumber, put=set_ConnectionNumber))  ConnectionNumber;

 uint16_t __declspec(property(get=get_Sequence, put=set_Sequence))  Sequence;

 bool __declspec(property(get=get_IsFragmented))  IsFragmented;

 uint8_t __declspec(property(get=get_ChannelId, put=set_ChannelId))  ChannelId;

 uint16_t __declspec(property(get=get_FragmentId, put=set_FragmentId))  FragmentId;

 uint16_t __declspec(property(get=get_FragmentPart, put=set_FragmentPart))  FragmentPart;

 uint16_t __declspec(property(get=get_FragmentsTotal, put=set_FragmentsTotal))  FragmentsTotal;


// Methods

/// @brief Method get_Property addr 0x208c428 size 0x2c virtual false final false
 LiteNetLib::PacketProperty get_Property() ;

/// @brief Method set_Property addr 0x208e03c size 0x34 virtual false final false
 void set_Property(LiteNetLib::PacketProperty value) ;

/// @brief Method get_ConnectionNumber addr 0x208f3c8 size 0x2c virtual false final false
 uint8_t get_ConnectionNumber() ;

/// @brief Method set_ConnectionNumber addr 0x208b9c4 size 0x34 virtual false final false
 void set_ConnectionNumber(uint8_t value) ;

/// @brief Method get_Sequence addr 0x208f3f4 size 0x60 virtual false final false
 uint16_t get_Sequence() ;

/// @brief Method set_Sequence addr 0x208f454 size 0x10 virtual false final false
 void set_Sequence(uint16_t value) ;

/// @brief Method get_IsFragmented addr 0x208f468 size 0x30 virtual false final false
 bool get_IsFragmented() ;

/// @brief Method MarkFragmented addr 0x208f498 size 0x30 virtual false final false
 void MarkFragmented() ;

/// @brief Method get_ChannelId addr 0x208f4c8 size 0x2c virtual false final false
 uint8_t get_ChannelId() ;

/// @brief Method set_ChannelId addr 0x208f4f4 size 0x2c virtual false final false
 void set_ChannelId(uint8_t value) ;

/// @brief Method get_FragmentId addr 0x208f520 size 0x60 virtual false final false
 uint16_t get_FragmentId() ;

/// @brief Method set_FragmentId addr 0x208f580 size 0x10 virtual false final false
 void set_FragmentId(uint16_t value) ;

/// @brief Method get_FragmentPart addr 0x208f590 size 0x60 virtual false final false
 uint16_t get_FragmentPart() ;

/// @brief Method set_FragmentPart addr 0x208f5f0 size 0x10 virtual false final false
 void set_FragmentPart(uint16_t value) ;

/// @brief Method get_FragmentsTotal addr 0x208f600 size 0x60 virtual false final false
 uint16_t get_FragmentsTotal() ;

/// @brief Method set_FragmentsTotal addr 0x208f660 size 0x10 virtual false final false
 void set_FragmentsTotal(uint16_t value) ;

// Ctor Parameters [CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }]
explicit NetPacket(int32_t size) ;

/// @brief Method .ctor addr 0x208f670 size 0x6c virtual false final false
 void _ctor(int32_t size) ;

// Ctor Parameters [CppParam { name: "property", ty: "LiteNetLib::PacketProperty", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }]
explicit NetPacket(LiteNetLib::PacketProperty property, int32_t size) ;

/// @brief Method .ctor addr 0x208f6dc size 0xcc virtual false final false
 void _ctor(LiteNetLib::PacketProperty property, int32_t size) ;

/// @brief Method GetHeaderSize addr 0x208e010 size 0x2c virtual false final false
static int32_t GetHeaderSize(LiteNetLib::PacketProperty property) ;

/// @brief Method GetHeaderSize addr 0x2088c30 size 0x88 virtual false final false
 int32_t GetHeaderSize() ;

/// @brief Method FromBytes addr 0x208c2fc size 0x12c virtual false final false
 bool FromBytes(::ArrayW<uint8_t> data, int32_t start, int32_t packetSize) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
NEED_NO_BOX(LiteNetLib::NetPacket);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetPacket, "LiteNetLib", "NetPacket");
