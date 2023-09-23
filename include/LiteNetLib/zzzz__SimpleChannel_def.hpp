#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "LiteNetLib/zzzz__BaseChannel_def.hpp"
namespace LiteNetLib {
class NetPacket;
}
namespace LiteNetLib {
class NetPeer;
}
// Forward declare root types
namespace LiteNetLib {
class SimpleChannel;
}
// Type: LiteNetLib::SimpleChannel
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14408))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14468))
// CS Name: LiteNetLib.SimpleChannel
class CORDL_TYPE SimpleChannel : public LiteNetLib::BaseChannel {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SimpleChannel() = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleChannel", modifiers: " const&", def_value: None }]
constexpr SimpleChannel(SimpleChannel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleChannel", modifiers: "&&", def_value: None }]
constexpr SimpleChannel(SimpleChannel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SimpleChannel(void* ptr) noexcept : LiteNetLib::BaseChannel(ptr) {
}


  constexpr SimpleChannel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SimpleChannel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SimpleChannel& operator=(SimpleChannel&& o) noexcept = default;
  constexpr SimpleChannel& operator=(SimpleChannel const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "peer", ty: "LiteNetLib::NetPeer", modifiers: "", def_value: None }]
explicit SimpleChannel(LiteNetLib::NetPeer peer) ;

/// @brief Method .ctor addr 0x2094924 size 0x4 virtual false final false
 void _ctor(LiteNetLib::NetPeer peer) ;

/// @brief Method SendNextPackets addr 0x2094928 size 0x170 virtual true final false
 void SendNextPackets() ;

/// @brief Method ProcessPacket addr 0x2094a98 size 0x8 virtual true final false
 bool ProcessPacket(LiteNetLib::NetPacket packet) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
NEED_NO_BOX(LiteNetLib::SimpleChannel);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::SimpleChannel, "LiteNetLib", "SimpleChannel");
