#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace ENet {
struct Packet;
}
// Forward declare root types
namespace IgnoranceCore {
struct IgnoranceOutgoingPacket;
}
// Type: IgnoranceCore::IgnoranceOutgoingPacket
namespace IgnoranceCore {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15286))
// CS Name: IgnoranceCore.IgnoranceOutgoingPacket
struct CORDL_TYPE IgnoranceOutgoingPacket : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Channel", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "NativePeerId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Payload", ty: "ENet::Packet", modifiers: "", def_value: None }]
constexpr IgnoranceOutgoingPacket(uint8_t Channel, uint32_t NativePeerId, ENet::Packet Payload) noexcept;


                    constexpr IgnoranceOutgoingPacket(IgnoranceOutgoingPacket const&) = default;
                    constexpr IgnoranceOutgoingPacket(IgnoranceOutgoingPacket&&) = default;
                    constexpr IgnoranceOutgoingPacket& operator=(IgnoranceOutgoingPacket const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IgnoranceOutgoingPacket& operator=(IgnoranceOutgoingPacket&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IgnoranceOutgoingPacket(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
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

 ENet::Packet __declspec(property(get=__get_Payload, put=__set_Payload))  Payload;

constexpr void __set_Payload(ENet::Packet value) ;

constexpr ENet::Packet __get_Payload() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def IgnoranceCore
DEFINE_IL2CPP_ARG_TYPE(IgnoranceCore::IgnoranceOutgoingPacket, "IgnoranceCore", "IgnoranceOutgoingPacket");
