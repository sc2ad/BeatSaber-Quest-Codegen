#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Net::NetworkInformation::AixStructs {
struct sockaddr_in;
}
// Type: System.Net.NetworkInformation.AixStructs::sockaddr_in
namespace System::Net::NetworkInformation::AixStructs {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8159))
// CS Name: System.Net.NetworkInformation.AixStructs.sockaddr_in
struct CORDL_TYPE sockaddr_in : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "sin_len", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sin_family", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sin_port", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "sin_addr", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr sockaddr_in(uint8_t sin_len, uint8_t sin_family, uint16_t sin_port, uint32_t sin_addr) noexcept;


                    constexpr sockaddr_in(sockaddr_in const&) = default;
                    constexpr sockaddr_in(sockaddr_in&&) = default;
                    constexpr sockaddr_in& operator=(sockaddr_in const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr sockaddr_in& operator=(sockaddr_in&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit sockaddr_in(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint8_t __declspec(property(get=__get_sin_len, put=__set_sin_len))  sin_len;

constexpr void __set_sin_len(uint8_t value) ;

constexpr uint8_t __get_sin_len() const;

 uint8_t __declspec(property(get=__get_sin_family, put=__set_sin_family))  sin_family;

constexpr void __set_sin_family(uint8_t value) ;

constexpr uint8_t __get_sin_family() const;

 uint16_t __declspec(property(get=__get_sin_port, put=__set_sin_port))  sin_port;

constexpr void __set_sin_port(uint16_t value) ;

constexpr uint16_t __get_sin_port() const;

 uint32_t __declspec(property(get=__get_sin_addr, put=__set_sin_addr))  sin_addr;

constexpr void __set_sin_addr(uint32_t value) ;

constexpr uint32_t __get_sin_addr() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation::AixStructs
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixStructs::sockaddr_in, "System.Net.NetworkInformation.AixStructs", "sockaddr_in");
