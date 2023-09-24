#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace ENet {
struct ENetEvent;
}
namespace ENet {
struct EventType;
}
namespace ENet {
struct Peer;
}
namespace ENet {
struct Packet;
}
// Forward declare root types
namespace ENet {
struct Event;
}
// Type: ENet::Event
namespace ENet {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15270))
// CS Name: ENet.Event
struct CORDL_TYPE Event : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "nativeEvent", ty: "ENet::ENetEvent", modifiers: "", def_value: None }]
constexpr Event(ENet::ENetEvent nativeEvent) noexcept;


                    constexpr Event(Event const&) = default;
                    constexpr Event(Event&&) = default;
                    constexpr Event& operator=(Event const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Event& operator=(Event&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Event(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ENet::ENetEvent __declspec(property(get=__get_nativeEvent, put=__set_nativeEvent))  nativeEvent;

constexpr void __set_nativeEvent(ENet::ENetEvent value) ;

constexpr ENet::ENetEvent __get_nativeEvent() const;


// Properties

 ENet::ENetEvent __declspec(property(get=get_NativeData, put=set_NativeData))  NativeData;

 ENet::EventType __declspec(property(get=get_Type))  Type;

 ENet::Peer __declspec(property(get=get_Peer))  Peer;

 uint8_t __declspec(property(get=get_ChannelID))  ChannelID;

 uint32_t __declspec(property(get=get_Data))  Data;

 ENet::Packet __declspec(property(get=get_Packet))  Packet;


// Methods

/// @brief Method get_NativeData addr 0x207d4dc size 0xc virtual false final false
 ENet::ENetEvent get_NativeData() ;

/// @brief Method set_NativeData addr 0x207d4e8 size 0xc virtual false final false
 void set_NativeData(ENet::ENetEvent value) ;

/// @brief Method .ctor addr 0x207d4f4 size 0xc virtual false final false
 void _ctor(ENet::ENetEvent event) ;

/// @brief Method get_Type addr 0x207d500 size 0x8 virtual false final false
 ENet::EventType get_Type() ;

/// @brief Method get_Peer addr 0x207d508 size 0x28 virtual false final false
 ENet::Peer get_Peer() ;

/// @brief Method get_ChannelID addr 0x207d5b0 size 0x8 virtual false final false
 uint8_t get_ChannelID() ;

/// @brief Method get_Data addr 0x207d5b8 size 0x8 virtual false final false
 uint32_t get_Data() ;

/// @brief Method get_Packet addr 0x207d5c0 size 0x8 virtual false final false
 ENet::Packet get_Packet() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def ENet
DEFINE_IL2CPP_ARG_TYPE(ENet::Event, "ENet", "Event");
