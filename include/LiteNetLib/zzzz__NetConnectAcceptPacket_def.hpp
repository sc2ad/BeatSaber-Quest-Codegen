#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace LiteNetLib {
class NetPacket;
}
// Forward declare root types
namespace LiteNetLib {
class NetConnectAcceptPacket;
}
// Type: LiteNetLib::NetConnectAcceptPacket
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14452))
// CS Name: LiteNetLib.NetConnectAcceptPacket
class CORDL_TYPE NetConnectAcceptPacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~NetConnectAcceptPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetConnectAcceptPacket", modifiers: " const&", def_value: None }]
constexpr NetConnectAcceptPacket(NetConnectAcceptPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetConnectAcceptPacket", modifiers: "&&", def_value: None }]
constexpr NetConnectAcceptPacket(NetConnectAcceptPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetConnectAcceptPacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetConnectAcceptPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetConnectAcceptPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetConnectAcceptPacket& operator=(NetConnectAcceptPacket&& o) noexcept = default;
  constexpr NetConnectAcceptPacket& operator=(NetConnectAcceptPacket const& o) noexcept = default;
                


// Fields

/// @brief Field Size offset 0
static constexpr int32_t  Size{11};

 int64_t __declspec(property(get=__get_ConnectionId, put=__set_ConnectionId))  ConnectionId;

constexpr void __set_ConnectionId(int64_t value) ;

constexpr int64_t __get_ConnectionId() const;

 uint8_t __declspec(property(get=__get_ConnectionNumber, put=__set_ConnectionNumber))  ConnectionNumber;

constexpr void __set_ConnectionNumber(uint8_t value) ;

constexpr uint8_t __get_ConnectionNumber() const;

 bool __declspec(property(get=__get_IsReusedPeer, put=__set_IsReusedPeer))  IsReusedPeer;

constexpr void __set_IsReusedPeer(bool value) ;

constexpr bool __get_IsReusedPeer() const;


// Methods

static LiteNetLib::NetConnectAcceptPacket New_ctor(int64_t connectionId, uint8_t connectionNumber, bool isReusedPeer) ;

/// @brief Method .ctor addr 0x208fa4c size 0x40 virtual false final false
 void _ctor(int64_t connectionId, uint8_t connectionNumber, bool isReusedPeer) ;

/// @brief Method FromData addr 0x208c7d4 size 0x108 virtual false final false
static LiteNetLib::NetConnectAcceptPacket FromData(LiteNetLib::NetPacket packet) ;

/// @brief Method Make addr 0x208fa8c size 0xbc virtual false final false
static LiteNetLib::NetPacket Make(int64_t connectId, uint8_t connectNum, bool reusedPeer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
NEED_NO_BOX(LiteNetLib::NetConnectAcceptPacket);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetConnectAcceptPacket, "LiteNetLib", "NetConnectAcceptPacket");
