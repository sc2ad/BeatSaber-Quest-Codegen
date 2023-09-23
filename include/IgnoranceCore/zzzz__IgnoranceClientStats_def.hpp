#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace IgnoranceCore {
struct IgnoranceClientStats;
}
// Type: IgnoranceCore::IgnoranceClientStats
namespace IgnoranceCore {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15289))
// CS Name: IgnoranceCore.IgnoranceClientStats
struct CORDL_TYPE IgnoranceClientStats : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "RTT", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "BytesReceived", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "BytesSent", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "PacketsReceived", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "PacketsSent", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "PacketsLost", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr IgnoranceClientStats(uint32_t RTT, uint64_t BytesReceived, uint64_t BytesSent, uint64_t PacketsReceived, uint64_t PacketsSent, uint64_t PacketsLost) noexcept;


                    constexpr IgnoranceClientStats(IgnoranceClientStats const&) = default;
                    constexpr IgnoranceClientStats(IgnoranceClientStats&&) = default;
                    constexpr IgnoranceClientStats& operator=(IgnoranceClientStats const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IgnoranceClientStats& operator=(IgnoranceClientStats&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IgnoranceClientStats(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_RTT, put=__set_RTT))  RTT;

constexpr void __set_RTT(uint32_t value) ;

constexpr uint32_t __get_RTT() const;

 uint64_t __declspec(property(get=__get_BytesReceived, put=__set_BytesReceived))  BytesReceived;

constexpr void __set_BytesReceived(uint64_t value) ;

constexpr uint64_t __get_BytesReceived() const;

 uint64_t __declspec(property(get=__get_BytesSent, put=__set_BytesSent))  BytesSent;

constexpr void __set_BytesSent(uint64_t value) ;

constexpr uint64_t __get_BytesSent() const;

 uint64_t __declspec(property(get=__get_PacketsReceived, put=__set_PacketsReceived))  PacketsReceived;

constexpr void __set_PacketsReceived(uint64_t value) ;

constexpr uint64_t __get_PacketsReceived() const;

 uint64_t __declspec(property(get=__get_PacketsSent, put=__set_PacketsSent))  PacketsSent;

constexpr void __set_PacketsSent(uint64_t value) ;

constexpr uint64_t __get_PacketsSent() const;

 uint64_t __declspec(property(get=__get_PacketsLost, put=__set_PacketsLost))  PacketsLost;

constexpr void __set_PacketsLost(uint64_t value) ;

constexpr uint64_t __get_PacketsLost() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def IgnoranceCore
DEFINE_IL2CPP_ARG_TYPE(IgnoranceCore::IgnoranceClientStats, "IgnoranceCore", "IgnoranceClientStats");
