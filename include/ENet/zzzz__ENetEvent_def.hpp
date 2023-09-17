#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace ENet {
struct EventType;
}
// Forward declare root types
namespace ENet {
struct ENetEvent;
}
// Type: ENet::ENetEvent
namespace ENet {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15259))
// CS Name: ENet.ENetEvent
struct CORDL_TYPE ENetEvent : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "type", ty: "::ENet::EventType", modifiers: "", def_value: None }, CppParam { name: "peer", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "channelID", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "data", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "packet", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ENetEvent(::ENet::EventType type, ::cordl_internals::intptr_t peer, uint8_t channelID, uint32_t data, ::cordl_internals::intptr_t packet) noexcept;


                    constexpr ENetEvent(ENetEvent const&) = default;
                    constexpr ENetEvent(ENetEvent&&) = default;
                    constexpr ENetEvent& operator=(ENetEvent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ENetEvent& operator=(ENetEvent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ENetEvent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ENet::EventType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::ENet::EventType value) ;

constexpr ::ENet::EventType __get_type() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_peer, put=__set_peer))  peer;

constexpr void __set_peer(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_peer() const;

 uint8_t __declspec(property(get=__get_channelID, put=__set_channelID))  channelID;

constexpr void __set_channelID(uint8_t value) ;

constexpr uint8_t __get_channelID() const;

 uint32_t __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(uint32_t value) ;

constexpr uint32_t __get_data() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_packet, put=__set_packet))  packet;

constexpr void __set_packet(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_packet() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def ENet
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::ENet::ENetEvent, "ENet", "ENetEvent");
