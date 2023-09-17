#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Net::NetworkInformation {
struct sockaddr_ll;
}
// Type: System.Net.NetworkInformation::sockaddr_ll
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8126))
// CS Name: System.Net.NetworkInformation.sockaddr_ll
struct CORDL_TYPE sockaddr_ll : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "sll_family", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "sll_protocol", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "sll_ifindex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sll_hatype", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "sll_pkttype", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sll_halen", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sll_addr", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr sockaddr_ll(uint16_t sll_family, uint16_t sll_protocol, int32_t sll_ifindex, uint16_t sll_hatype, uint8_t sll_pkttype, uint8_t sll_halen, ::ArrayW<uint8_t> sll_addr) noexcept;


                    constexpr sockaddr_ll(sockaddr_ll const&) = default;
                    constexpr sockaddr_ll(sockaddr_ll&&) = default;
                    constexpr sockaddr_ll& operator=(sockaddr_ll const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr sockaddr_ll& operator=(sockaddr_ll&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit sockaddr_ll(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint16_t __declspec(property(get=__get_sll_family, put=__set_sll_family))  sll_family;

constexpr void __set_sll_family(uint16_t value) ;

constexpr uint16_t __get_sll_family() const;

 uint16_t __declspec(property(get=__get_sll_protocol, put=__set_sll_protocol))  sll_protocol;

constexpr void __set_sll_protocol(uint16_t value) ;

constexpr uint16_t __get_sll_protocol() const;

 int32_t __declspec(property(get=__get_sll_ifindex, put=__set_sll_ifindex))  sll_ifindex;

constexpr void __set_sll_ifindex(int32_t value) ;

constexpr int32_t __get_sll_ifindex() const;

 uint16_t __declspec(property(get=__get_sll_hatype, put=__set_sll_hatype))  sll_hatype;

constexpr void __set_sll_hatype(uint16_t value) ;

constexpr uint16_t __get_sll_hatype() const;

 uint8_t __declspec(property(get=__get_sll_pkttype, put=__set_sll_pkttype))  sll_pkttype;

constexpr void __set_sll_pkttype(uint8_t value) ;

constexpr uint8_t __get_sll_pkttype() const;

 uint8_t __declspec(property(get=__get_sll_halen, put=__set_sll_halen))  sll_halen;

constexpr void __set_sll_halen(uint8_t value) ;

constexpr uint8_t __get_sll_halen() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_sll_addr, put=__set_sll_addr))  sll_addr;

constexpr void __set_sll_addr(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_sll_addr() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::sockaddr_ll, "System.Net.NetworkInformation", "sockaddr_ll");
