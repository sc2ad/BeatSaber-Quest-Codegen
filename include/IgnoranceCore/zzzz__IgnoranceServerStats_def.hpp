#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace IgnoranceCore {
struct IgnoranceClientStats;
}
// Forward declare root types
namespace IgnoranceCore {
struct IgnoranceServerStats;
}
// Type: IgnoranceCore::IgnoranceServerStats
namespace IgnoranceCore {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15291))
// CS Name: IgnoranceCore.IgnoranceServerStats
struct CORDL_TYPE IgnoranceServerStats : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "BytesReceived", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "BytesSent", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "PacketsReceived", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "PacketsSent", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "PeersCount", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "PeerStats", ty: "System::Collections::Generic::Dictionary_2<int32_t,IgnoranceCore::IgnoranceClientStats>", modifiers: "", def_value: None }]
constexpr IgnoranceServerStats(uint64_t BytesReceived, uint64_t BytesSent, uint64_t PacketsReceived, uint64_t PacketsSent, uint64_t PeersCount, System::Collections::Generic::Dictionary_2<int32_t,IgnoranceCore::IgnoranceClientStats> PeerStats) noexcept;


                    constexpr IgnoranceServerStats(IgnoranceServerStats const&) = default;
                    constexpr IgnoranceServerStats(IgnoranceServerStats&&) = default;
                    constexpr IgnoranceServerStats& operator=(IgnoranceServerStats const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IgnoranceServerStats& operator=(IgnoranceServerStats&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IgnoranceServerStats(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

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

 uint64_t __declspec(property(get=__get_PeersCount, put=__set_PeersCount))  PeersCount;

constexpr void __set_PeersCount(uint64_t value) ;

constexpr uint64_t __get_PeersCount() const;

 System::Collections::Generic::Dictionary_2<int32_t,IgnoranceCore::IgnoranceClientStats> __declspec(property(get=__get_PeerStats, put=__set_PeerStats))  PeerStats;

constexpr void __set_PeerStats(System::Collections::Generic::Dictionary_2<int32_t,IgnoranceCore::IgnoranceClientStats> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,IgnoranceCore::IgnoranceClientStats> __get_PeerStats() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def IgnoranceCore
DEFINE_IL2CPP_ARG_TYPE(IgnoranceCore::IgnoranceServerStats, "IgnoranceCore", "IgnoranceServerStats");
