#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "LiteNetLib/zzzz__BaseChannel_def.hpp"
#include <cstdint>
namespace LiteNetLib {
class NetPacket;
}
namespace LiteNetLib {
class NetPeer;
}
// Forward declare root types
namespace LiteNetLib {
class SequencedChannel;
}
// Type: LiteNetLib::SequencedChannel
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14408))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14467))
// CS Name: LiteNetLib.SequencedChannel
class CORDL_TYPE SequencedChannel : public LiteNetLib::BaseChannel {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~SequencedChannel() = default;

// Ctor Parameters [CppParam { name: "", ty: "SequencedChannel", modifiers: " const&", def_value: None }]
constexpr SequencedChannel(SequencedChannel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SequencedChannel", modifiers: "&&", def_value: None }]
constexpr SequencedChannel(SequencedChannel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SequencedChannel(void* ptr) noexcept : LiteNetLib::BaseChannel(ptr) {
}


  constexpr SequencedChannel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SequencedChannel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SequencedChannel& operator=(SequencedChannel&& o) noexcept = default;
  constexpr SequencedChannel& operator=(SequencedChannel const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__localSequence, put=__set__localSequence))  _localSequence;

constexpr void __set__localSequence(int32_t value) ;

constexpr int32_t __get__localSequence() const;

 uint16_t __declspec(property(get=__get__remoteSequence, put=__set__remoteSequence))  _remoteSequence;

constexpr void __set__remoteSequence(uint16_t value) ;

constexpr uint16_t __get__remoteSequence() const;

 bool __declspec(property(get=__get__reliable, put=__set__reliable))  _reliable;

constexpr void __set__reliable(bool value) ;

constexpr bool __get__reliable() const;

 LiteNetLib::NetPacket __declspec(property(get=__get__lastPacket, put=__set__lastPacket))  _lastPacket;

constexpr void __set__lastPacket(LiteNetLib::NetPacket value) ;

constexpr LiteNetLib::NetPacket __get__lastPacket() const;

 LiteNetLib::NetPacket __declspec(property(get=__get__ackPacket, put=__set__ackPacket))  _ackPacket;

constexpr void __set__ackPacket(LiteNetLib::NetPacket value) ;

constexpr LiteNetLib::NetPacket __get__ackPacket() const;

 bool __declspec(property(get=__get__mustSendAck, put=__set__mustSendAck))  _mustSendAck;

constexpr void __set__mustSendAck(bool value) ;

constexpr bool __get__mustSendAck() const;

 uint8_t __declspec(property(get=__get__id, put=__set__id))  _id;

constexpr void __set__id(uint8_t value) ;

constexpr uint8_t __get__id() const;

 int64_t __declspec(property(get=__get__lastPacketSendTime, put=__set__lastPacketSendTime))  _lastPacketSendTime;

constexpr void __set__lastPacketSendTime(int64_t value) ;

constexpr int64_t __get__lastPacketSendTime() const;


// Methods

// Ctor Parameters [CppParam { name: "peer", ty: "LiteNetLib::NetPeer", modifiers: "", def_value: None }, CppParam { name: "reliable", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "id", ty: "uint8_t", modifiers: "", def_value: None }]
explicit SequencedChannel(LiteNetLib::NetPeer peer, bool reliable, uint8_t id) ;

/// @brief Method .ctor addr 0x20900c8 size 0xa8 virtual false final false
 void _ctor(LiteNetLib::NetPeer peer, bool reliable, uint8_t id) ;

/// @brief Method SendNextPackets addr 0x209444c size 0x308 virtual true final false
 void SendNextPackets() ;

/// @brief Method ProcessPacket addr 0x2094754 size 0x1d0 virtual true final false
 bool ProcessPacket(LiteNetLib::NetPacket packet) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
NEED_NO_BOX(LiteNetLib::SequencedChannel);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::SequencedChannel, "LiteNetLib", "SequencedChannel");
