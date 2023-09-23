#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib {
class NetPacket;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Net {
class SocketAddress;
}
// Forward declare root types
namespace LiteNetLib {
class NetConnectRequestPacket;
}
// Type: LiteNetLib::NetConnectRequestPacket
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14451))
// CS Name: LiteNetLib.NetConnectRequestPacket
class CORDL_TYPE NetConnectRequestPacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~NetConnectRequestPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetConnectRequestPacket", modifiers: " const&", def_value: None }]
constexpr NetConnectRequestPacket(NetConnectRequestPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetConnectRequestPacket", modifiers: "&&", def_value: None }]
constexpr NetConnectRequestPacket(NetConnectRequestPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetConnectRequestPacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetConnectRequestPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetConnectRequestPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetConnectRequestPacket& operator=(NetConnectRequestPacket&& o) noexcept = default;
  constexpr NetConnectRequestPacket& operator=(NetConnectRequestPacket const& o) noexcept = default;
                


// Fields

/// @brief Field HeaderSize offset 0
static constexpr int32_t  HeaderSize{14};

 int64_t __declspec(property(get=__get_ConnectionTime, put=__set_ConnectionTime))  ConnectionTime;

constexpr void __set_ConnectionTime(int64_t value) ;

constexpr int64_t __get_ConnectionTime() const;

 uint8_t __declspec(property(get=__get_ConnectionNumber, put=__set_ConnectionNumber))  ConnectionNumber;

constexpr void __set_ConnectionNumber(uint8_t value) ;

constexpr uint8_t __get_ConnectionNumber() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_TargetAddress, put=__set_TargetAddress))  TargetAddress;

constexpr void __set_TargetAddress(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_TargetAddress() const;

 LiteNetLib::Utils::NetDataReader __declspec(property(get=__get_Data, put=__set_Data))  Data;

constexpr void __set_Data(LiteNetLib::Utils::NetDataReader value) ;

constexpr LiteNetLib::Utils::NetDataReader __get_Data() const;


// Methods

// Ctor Parameters [CppParam { name: "connectionTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "connectionNumber", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "targetAddress", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "data", ty: "LiteNetLib::Utils::NetDataReader", modifiers: "", def_value: None }]
explicit NetConnectRequestPacket(int64_t connectionTime, uint8_t connectionNumber, ::ArrayW<uint8_t> targetAddress, LiteNetLib::Utils::NetDataReader data) ;

/// @brief Method .ctor addr 0x208f880 size 0x44 virtual false final false
 void _ctor(int64_t connectionTime, uint8_t connectionNumber, ::ArrayW<uint8_t> targetAddress, LiteNetLib::Utils::NetDataReader data) ;

/// @brief Method GetProtocolId addr 0x208c454 size 0x68 virtual false final false
static int32_t GetProtocolId(LiteNetLib::NetPacket packet) ;

/// @brief Method FromData addr 0x208c560 size 0x1ac virtual false final false
static LiteNetLib::NetConnectRequestPacket FromData(LiteNetLib::NetPacket packet) ;

/// @brief Method Make addr 0x208f904 size 0x144 virtual false final false
static LiteNetLib::NetPacket Make(LiteNetLib::Utils::NetDataWriter connectData, System::Net::SocketAddress addressBytes, int64_t connectId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
NEED_NO_BOX(LiteNetLib::NetConnectRequestPacket);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetConnectRequestPacket, "LiteNetLib", "NetConnectRequestPacket");
