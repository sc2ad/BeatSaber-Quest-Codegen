#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace LiteNetLib {
class NetStatistics;
}
// Type: LiteNetLib::NetStatistics
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14462))
// CS Name: LiteNetLib.NetStatistics
class CORDL_TYPE NetStatistics : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~NetStatistics() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetStatistics", modifiers: " const&", def_value: None }]
constexpr NetStatistics(NetStatistics const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetStatistics", modifiers: "&&", def_value: None }]
constexpr NetStatistics(NetStatistics&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetStatistics(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetStatistics& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetStatistics& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetStatistics& operator=(NetStatistics&& o) noexcept = default;
  constexpr NetStatistics& operator=(NetStatistics const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get__packetsSent, put=__set__packetsSent))  _packetsSent;

constexpr void __set__packetsSent(int64_t value) ;

constexpr int64_t __get__packetsSent() const;

 int64_t __declspec(property(get=__get__packetsReceived, put=__set__packetsReceived))  _packetsReceived;

constexpr void __set__packetsReceived(int64_t value) ;

constexpr int64_t __get__packetsReceived() const;

 int64_t __declspec(property(get=__get__bytesSent, put=__set__bytesSent))  _bytesSent;

constexpr void __set__bytesSent(int64_t value) ;

constexpr int64_t __get__bytesSent() const;

 int64_t __declspec(property(get=__get__bytesReceived, put=__set__bytesReceived))  _bytesReceived;

constexpr void __set__bytesReceived(int64_t value) ;

constexpr int64_t __get__bytesReceived() const;

 int64_t __declspec(property(get=__get__packetLoss, put=__set__packetLoss))  _packetLoss;

constexpr void __set__packetLoss(int64_t value) ;

constexpr int64_t __get__packetLoss() const;


// Properties

 int64_t __declspec(property(get=get_PacketsSent))  PacketsSent;

 int64_t __declspec(property(get=get_PacketsReceived))  PacketsReceived;

 int64_t __declspec(property(get=get_BytesSent))  BytesSent;

 int64_t __declspec(property(get=get_BytesReceived))  BytesReceived;

 int64_t __declspec(property(get=get_PacketLoss))  PacketLoss;

 int64_t __declspec(property(get=get_PacketLossPercent))  PacketLossPercent;


// Methods

/// @brief Method get_PacketsSent addr 0x209247c size 0xc virtual false final false
 int64_t get_PacketsSent() ;

/// @brief Method get_PacketsReceived addr 0x2092488 size 0xc virtual false final false
 int64_t get_PacketsReceived() ;

/// @brief Method get_BytesSent addr 0x2092494 size 0xc virtual false final false
 int64_t get_BytesSent() ;

/// @brief Method get_BytesReceived addr 0x20924a0 size 0xc virtual false final false
 int64_t get_BytesReceived() ;

/// @brief Method get_PacketLoss addr 0x20924ac size 0xc virtual false final false
 int64_t get_PacketLoss() ;

/// @brief Method get_PacketLossPercent addr 0x20924b8 size 0x4c virtual false final false
 int64_t get_PacketLossPercent() ;

/// @brief Method Reset addr 0x2092504 size 0x5c virtual false final false
 void Reset() ;

/// @brief Method IncrementPacketsSent addr 0x208a35c size 0xc virtual false final false
 void IncrementPacketsSent() ;

/// @brief Method IncrementPacketsReceived addr 0x208c2e4 size 0xc virtual false final false
 void IncrementPacketsReceived() ;

/// @brief Method AddBytesSent addr 0x208a368 size 0xc virtual false final false
 void AddBytesSent(int64_t bytesSent) ;

/// @brief Method AddBytesReceived addr 0x208c2f0 size 0xc virtual false final false
 void AddBytesReceived(int64_t bytesReceived) ;

/// @brief Method IncrementPacketLoss addr 0x2092560 size 0xc virtual false final false
 void IncrementPacketLoss() ;

/// @brief Method AddPacketLoss addr 0x209256c size 0xc virtual false final false
 void AddPacketLoss(int64_t packetLoss) ;

/// @brief Method ToString addr 0x2092578 size 0x270 virtual true final false
 ::StringW ToString() ;

// Ctor Parameters []
explicit NetStatistics() ;

/// @brief Method .ctor addr 0x2089b04 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
} // end anonymous namespace
NEED_NO_BOX(::LiteNetLib::NetStatistics);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::NetStatistics, "LiteNetLib", "NetStatistics");
