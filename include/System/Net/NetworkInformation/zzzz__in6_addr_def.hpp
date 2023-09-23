#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::NetworkInformation {
struct in6_addr;
}
// Type: System.Net.NetworkInformation::in6_addr
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8125))
// CS Name: System.Net.NetworkInformation.in6_addr
struct CORDL_TYPE in6_addr : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "u6_addr8", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr in6_addr(::ArrayW<uint8_t> u6_addr8) noexcept;


                    constexpr in6_addr(in6_addr const&) = default;
                    constexpr in6_addr(in6_addr&&) = default;
                    constexpr in6_addr& operator=(in6_addr const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr in6_addr& operator=(in6_addr&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit in6_addr(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_u6_addr8, put=__set_u6_addr8))  u6_addr8;

constexpr void __set_u6_addr8(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_u6_addr8() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::in6_addr, "System.Net.NetworkInformation", "in6_addr");
