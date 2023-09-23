#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace LiteNetLib {
class NetPeer;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace LiteNetLib {
class NetPacket;
}
// Forward declare root types
namespace LiteNetLib {
class BaseChannel;
}
// Type: LiteNetLib::BaseChannel
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14408))
// CS Name: LiteNetLib.BaseChannel
class CORDL_TYPE BaseChannel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BaseChannel() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseChannel", modifiers: " const&", def_value: None }]
constexpr BaseChannel(BaseChannel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseChannel", modifiers: "&&", def_value: None }]
constexpr BaseChannel(BaseChannel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseChannel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BaseChannel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseChannel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseChannel& operator=(BaseChannel&& o) noexcept = default;
  constexpr BaseChannel& operator=(BaseChannel const& o) noexcept = default;
                


// Fields

 LiteNetLib::BaseChannel __declspec(property(get=__get_Next, put=__set_Next))  Next;

constexpr void __set_Next(LiteNetLib::BaseChannel value) ;

constexpr LiteNetLib::BaseChannel __get_Next() const;

 LiteNetLib::NetPeer __declspec(property(get=__get_Peer, put=__set_Peer))  Peer;

constexpr void __set_Peer(LiteNetLib::NetPeer value) ;

constexpr LiteNetLib::NetPeer __get_Peer() const;

 System::Collections::Generic::Queue_1<LiteNetLib::NetPacket> __declspec(property(get=__get_OutgoingQueue, put=__set_OutgoingQueue))  OutgoingQueue;

constexpr void __set_OutgoingQueue(System::Collections::Generic::Queue_1<LiteNetLib::NetPacket> value) ;

constexpr System::Collections::Generic::Queue_1<LiteNetLib::NetPacket> __get_OutgoingQueue() const;


// Properties

 int32_t __declspec(property(get=get_PacketsInQueue))  PacketsInQueue;


// Methods

// Ctor Parameters [CppParam { name: "peer", ty: "LiteNetLib::NetPeer", modifiers: "", def_value: None }]
explicit BaseChannel(LiteNetLib::NetPeer peer) ;

/// @brief Method .ctor addr 0x208485c size 0x94 virtual false final false
 void _ctor(LiteNetLib::NetPeer peer) ;

/// @brief Method get_PacketsInQueue addr 0x20848f0 size 0x48 virtual false final false
 int32_t get_PacketsInQueue() ;

/// @brief Method AddToQueue addr 0x2084938 size 0xfc virtual false final false
 void AddToQueue(LiteNetLib::NetPacket packet) ;

/// @brief Method SendNextPackets addr 0x0 size 0xffffffffffffffff virtual true final false
 void SendNextPackets() ;

/// @brief Method ProcessPacket addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ProcessPacket(LiteNetLib::NetPacket packet) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
NEED_NO_BOX(LiteNetLib::BaseChannel);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::BaseChannel, "LiteNetLib", "BaseChannel");
