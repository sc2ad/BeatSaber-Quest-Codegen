#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Net::NetworkInformation::MacOsStructs {
struct in6_addr;
}
// Forward declare root types
namespace System::Net::NetworkInformation::MacOsStructs {
struct sockaddr_in6;
}
// Type: System.Net.NetworkInformation.MacOsStructs::sockaddr_in6
namespace System::Net::NetworkInformation::MacOsStructs {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8149))
// CS Name: System.Net.NetworkInformation.MacOsStructs.sockaddr_in6
struct CORDL_TYPE sockaddr_in6 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "sin6_len", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sin6_family", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sin6_port", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "sin6_flowinfo", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "sin6_addr", ty: "System::Net::NetworkInformation::MacOsStructs::in6_addr", modifiers: "", def_value: None }, CppParam { name: "sin6_scope_id", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr sockaddr_in6(uint8_t sin6_len, uint8_t sin6_family, uint16_t sin6_port, uint32_t sin6_flowinfo, System::Net::NetworkInformation::MacOsStructs::in6_addr sin6_addr, uint32_t sin6_scope_id) noexcept;


                    constexpr sockaddr_in6(sockaddr_in6 const&) = default;
                    constexpr sockaddr_in6(sockaddr_in6&&) = default;
                    constexpr sockaddr_in6& operator=(sockaddr_in6 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr sockaddr_in6& operator=(sockaddr_in6&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit sockaddr_in6(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint8_t __declspec(property(get=__get_sin6_len, put=__set_sin6_len))  sin6_len;

constexpr void __set_sin6_len(uint8_t value) ;

constexpr uint8_t __get_sin6_len() const;

 uint8_t __declspec(property(get=__get_sin6_family, put=__set_sin6_family))  sin6_family;

constexpr void __set_sin6_family(uint8_t value) ;

constexpr uint8_t __get_sin6_family() const;

 uint16_t __declspec(property(get=__get_sin6_port, put=__set_sin6_port))  sin6_port;

constexpr void __set_sin6_port(uint16_t value) ;

constexpr uint16_t __get_sin6_port() const;

 uint32_t __declspec(property(get=__get_sin6_flowinfo, put=__set_sin6_flowinfo))  sin6_flowinfo;

constexpr void __set_sin6_flowinfo(uint32_t value) ;

constexpr uint32_t __get_sin6_flowinfo() const;

 System::Net::NetworkInformation::MacOsStructs::in6_addr __declspec(property(get=__get_sin6_addr, put=__set_sin6_addr))  sin6_addr;

constexpr void __set_sin6_addr(System::Net::NetworkInformation::MacOsStructs::in6_addr value) ;

constexpr System::Net::NetworkInformation::MacOsStructs::in6_addr __get_sin6_addr() const;

 uint32_t __declspec(property(get=__get_sin6_scope_id, put=__set_sin6_scope_id))  sin6_scope_id;

constexpr void __set_sin6_scope_id(uint32_t value) ;

constexpr uint32_t __get_sin6_scope_id() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation::MacOsStructs
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::MacOsStructs::sockaddr_in6, "System.Net.NetworkInformation.MacOsStructs", "sockaddr_in6");
