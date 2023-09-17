#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace ENet {
struct Packet;
}
// Forward declare root types
namespace IgnoranceCore {
struct IgnoranceIncomingPacket;
}
// Type: IgnoranceCore::IgnoranceIncomingPacket
namespace IgnoranceCore {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15285))
// CS Name: IgnoranceCore.IgnoranceIncomingPacket
struct CORDL_TYPE IgnoranceIncomingPacket : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Channel", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "NativePeerId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Payload", ty: "::ENet::Packet", modifiers: "", def_value: None }]
constexpr IgnoranceIncomingPacket(uint8_t Channel, uint32_t NativePeerId, ::ENet::Packet Payload) noexcept;


                    constexpr IgnoranceIncomingPacket(IgnoranceIncomingPacket const&) = default;
                    constexpr IgnoranceIncomingPacket(IgnoranceIncomingPacket&&) = default;
                    constexpr IgnoranceIncomingPacket& operator=(IgnoranceIncomingPacket const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IgnoranceIncomingPacket& operator=(IgnoranceIncomingPacket&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IgnoranceIncomingPacket(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint8_t __declspec(property(get=__get_Channel, put=__set_Channel))  Channel;

constexpr void __set_Channel(uint8_t value) ;

constexpr uint8_t __get_Channel() const;

 uint32_t __declspec(property(get=__get_NativePeerId, put=__set_NativePeerId))  NativePeerId;

constexpr void __set_NativePeerId(uint32_t value) ;

constexpr uint32_t __get_NativePeerId() const;

 ::ENet::Packet __declspec(property(get=__get_Payload, put=__set_Payload))  Payload;

constexpr void __set_Payload(::ENet::Packet value) ;

constexpr ::ENet::Packet __get_Payload() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def IgnoranceCore
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::IgnoranceCore::IgnoranceIncomingPacket, "IgnoranceCore", "IgnoranceIncomingPacket");
