#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::NetworkInformation::MacOsStructs {
struct sockaddr;
}
// Type: System.Net.NetworkInformation.MacOsStructs::sockaddr
namespace System::Net::NetworkInformation::MacOsStructs {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8146))
// CS Name: System.Net.NetworkInformation.MacOsStructs.sockaddr
struct CORDL_TYPE sockaddr : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "sa_len", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "sa_family", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr sockaddr(uint8_t sa_len, uint8_t sa_family) noexcept;


                    constexpr sockaddr(sockaddr const&) = default;
                    constexpr sockaddr(sockaddr&&) = default;
                    constexpr sockaddr& operator=(sockaddr const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr sockaddr& operator=(sockaddr&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x2};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit sockaddr(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint8_t __declspec(property(get=__get_sa_len, put=__set_sa_len))  sa_len;

constexpr void __set_sa_len(uint8_t value) ;

constexpr uint8_t __get_sa_len() const;

 uint8_t __declspec(property(get=__get_sa_family, put=__set_sa_family))  sa_family;

constexpr void __set_sa_family(uint8_t value) ;

constexpr uint8_t __get_sa_family() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation::MacOsStructs
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::MacOsStructs::sockaddr, "System.Net.NetworkInformation.MacOsStructs", "sockaddr");
