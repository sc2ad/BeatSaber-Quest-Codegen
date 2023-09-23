#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "LiteNetLib/zzzz__BaseChannel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace LiteNetLib {
class NetPeer;
}
namespace LiteNetLib {
struct DeliveryMethod;
}
namespace LiteNetLib {
class NetPacket;
}
// Forward declare root types
namespace LiteNetLib {
class ReliableChannel;
}
namespace LiteNetLib {
struct LiteNetLib__ReliableChannel__PendingPacket;
}
// Type: ::PendingPacket
namespace LiteNetLib {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14465))
// CS Name: LiteNetLib.ReliableChannel::PendingPacket
struct CORDL_TYPE LiteNetLib__ReliableChannel__PendingPacket : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_packet", ty: "LiteNetLib::NetPacket", modifiers: "", def_value: None }, CppParam { name: "_timeStamp", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "_isSent", ty: "bool", modifiers: "", def_value: None }]
constexpr LiteNetLib__ReliableChannel__PendingPacket(LiteNetLib::NetPacket _packet, int64_t _timeStamp, bool _isSent) noexcept;


                    constexpr LiteNetLib__ReliableChannel__PendingPacket(LiteNetLib__ReliableChannel__PendingPacket const&) = default;
                    constexpr LiteNetLib__ReliableChannel__PendingPacket(LiteNetLib__ReliableChannel__PendingPacket&&) = default;
                    constexpr LiteNetLib__ReliableChannel__PendingPacket& operator=(LiteNetLib__ReliableChannel__PendingPacket const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LiteNetLib__ReliableChannel__PendingPacket& operator=(LiteNetLib__ReliableChannel__PendingPacket&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__ReliableChannel__PendingPacket(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 LiteNetLib::NetPacket __declspec(property(get=__get__packet, put=__set__packet))  _packet;

constexpr void __set__packet(LiteNetLib::NetPacket value) ;

constexpr LiteNetLib::NetPacket __get__packet() const;

 int64_t __declspec(property(get=__get__timeStamp, put=__set__timeStamp))  _timeStamp;

constexpr void __set__timeStamp(int64_t value) ;

constexpr int64_t __get__timeStamp() const;

 bool __declspec(property(get=__get__isSent, put=__set__isSent))  _isSent;

constexpr void __set__isSent(bool value) ;

constexpr bool __get__isSent() const;


// Methods

/// @brief Method ToString addr 0x20943e4 size 0x68 virtual true final false
 ::StringW ToString() ;

/// @brief Method Init addr 0x2093e64 size 0xc virtual false final false
 void Init(LiteNetLib::NetPacket packet) ;

/// @brief Method TrySend addr 0x2093e70 size 0x78 virtual false final false
 void TrySend(int64_t currentTime, LiteNetLib::NetPeer peer) ;

/// @brief Method Clear addr 0x20939bc size 0x3c virtual false final false
 bool Clear(LiteNetLib::NetPeer peer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LiteNetLib
// Type: LiteNetLib::ReliableChannel
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14408))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14466))
// CS Name: LiteNetLib.ReliableChannel
class CORDL_TYPE ReliableChannel : public LiteNetLib::BaseChannel {
public:
// Declarations
using PendingPacket = LiteNetLib::LiteNetLib__ReliableChannel__PendingPacket;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~ReliableChannel() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReliableChannel", modifiers: " const&", def_value: None }]
constexpr ReliableChannel(ReliableChannel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReliableChannel", modifiers: "&&", def_value: None }]
constexpr ReliableChannel(ReliableChannel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReliableChannel(void* ptr) noexcept : LiteNetLib::BaseChannel(ptr) {
}


  constexpr ReliableChannel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReliableChannel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReliableChannel& operator=(ReliableChannel&& o) noexcept = default;
  constexpr ReliableChannel& operator=(ReliableChannel const& o) noexcept = default;
                


// Fields

 LiteNetLib::NetPacket __declspec(property(get=__get__outgoingAcks, put=__set__outgoingAcks))  _outgoingAcks;

constexpr void __set__outgoingAcks(LiteNetLib::NetPacket value) ;

constexpr LiteNetLib::NetPacket __get__outgoingAcks() const;

 ::ArrayW<LiteNetLib::LiteNetLib__ReliableChannel__PendingPacket> __declspec(property(get=__get__pendingPackets, put=__set__pendingPackets))  _pendingPackets;

constexpr void __set__pendingPackets(::ArrayW<LiteNetLib::LiteNetLib__ReliableChannel__PendingPacket> value) ;

constexpr ::ArrayW<LiteNetLib::LiteNetLib__ReliableChannel__PendingPacket> __get__pendingPackets() const;

 ::ArrayW<LiteNetLib::NetPacket> __declspec(property(get=__get__receivedPackets, put=__set__receivedPackets))  _receivedPackets;

constexpr void __set__receivedPackets(::ArrayW<LiteNetLib::NetPacket> value) ;

constexpr ::ArrayW<LiteNetLib::NetPacket> __get__receivedPackets() const;

 ::ArrayW<bool> __declspec(property(get=__get__earlyReceived, put=__set__earlyReceived))  _earlyReceived;

constexpr void __set__earlyReceived(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get__earlyReceived() const;

 int32_t __declspec(property(get=__get__localSeqence, put=__set__localSeqence))  _localSeqence;

constexpr void __set__localSeqence(int32_t value) ;

constexpr int32_t __get__localSeqence() const;

 int32_t __declspec(property(get=__get__remoteSequence, put=__set__remoteSequence))  _remoteSequence;

constexpr void __set__remoteSequence(int32_t value) ;

constexpr int32_t __get__remoteSequence() const;

 int32_t __declspec(property(get=__get__localWindowStart, put=__set__localWindowStart))  _localWindowStart;

constexpr void __set__localWindowStart(int32_t value) ;

constexpr int32_t __get__localWindowStart() const;

 int32_t __declspec(property(get=__get__remoteWindowStart, put=__set__remoteWindowStart))  _remoteWindowStart;

constexpr void __set__remoteWindowStart(int32_t value) ;

constexpr int32_t __get__remoteWindowStart() const;

 bool __declspec(property(get=__get__mustSendAcks, put=__set__mustSendAcks))  _mustSendAcks;

constexpr void __set__mustSendAcks(bool value) ;

constexpr bool __get__mustSendAcks() const;

 LiteNetLib::DeliveryMethod __declspec(property(get=__get__deliveryMethod, put=__set__deliveryMethod))  _deliveryMethod;

constexpr void __set__deliveryMethod(LiteNetLib::DeliveryMethod value) ;

constexpr LiteNetLib::DeliveryMethod __get__deliveryMethod() const;

 bool __declspec(property(get=__get__ordered, put=__set__ordered))  _ordered;

constexpr void __set__ordered(bool value) ;

constexpr bool __get__ordered() const;

 int32_t __declspec(property(get=__get__windowSize, put=__set__windowSize))  _windowSize;

constexpr void __set__windowSize(int32_t value) ;

constexpr int32_t __get__windowSize() const;

/// @brief Field BitsInByte offset 0
static constexpr int32_t  BitsInByte{8};

 uint8_t __declspec(property(get=__get__id, put=__set__id))  _id;

constexpr void __set__id(uint8_t value) ;

constexpr uint8_t __get__id() const;


// Methods

// Ctor Parameters [CppParam { name: "peer", ty: "LiteNetLib::NetPeer", modifiers: "", def_value: None }, CppParam { name: "ordered", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "id", ty: "uint8_t", modifiers: "", def_value: None }]
explicit ReliableChannel(LiteNetLib::NetPeer peer, bool ordered, uint8_t id) ;

/// @brief Method .ctor addr 0x208ff40 size 0x188 virtual false final false
 void _ctor(LiteNetLib::NetPeer peer, bool ordered, uint8_t id) ;

/// @brief Method ProcessAck addr 0x209366c size 0x350 virtual false final false
 void ProcessAck(LiteNetLib::NetPacket packet) ;

/// @brief Method SendNextPackets addr 0x20939f8 size 0x46c virtual true final false
 void SendNextPackets() ;

/// @brief Method ProcessPacket addr 0x2093ee8 size 0x4fc virtual true final false
 bool ProcessPacket(LiteNetLib::NetPacket packet) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
NEED_NO_BOX(LiteNetLib::ReliableChannel);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::ReliableChannel, "LiteNetLib", "ReliableChannel");
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::LiteNetLib__ReliableChannel__PendingPacket, "LiteNetLib", "ReliableChannel/PendingPacket");
