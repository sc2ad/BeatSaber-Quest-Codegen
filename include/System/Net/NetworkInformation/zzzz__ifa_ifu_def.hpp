#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Net::NetworkInformation {
struct ifa_ifu;
}
// Type: System.Net.NetworkInformation::ifa_ifu
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8121))
// CS Name: System.Net.NetworkInformation.ifa_ifu
struct CORDL_TYPE ifa_ifu : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "ifu_broadaddr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "ifu_dstaddr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ifa_ifu(::cordl_internals::intptr_t ifu_broadaddr, ::cordl_internals::intptr_t ifu_dstaddr) noexcept;


                    constexpr ifa_ifu(ifa_ifu const&) = default;
                    constexpr ifa_ifu(ifa_ifu&&) = default;
                    constexpr ifa_ifu& operator=(ifa_ifu const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ifa_ifu& operator=(ifa_ifu&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ifa_ifu(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_ifu_broadaddr, put=__set_ifu_broadaddr))  ifu_broadaddr;

constexpr void __set_ifu_broadaddr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_ifu_broadaddr() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_ifu_dstaddr, put=__set_ifu_dstaddr))  ifu_dstaddr;

constexpr void __set_ifu_dstaddr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_ifu_dstaddr() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::ifa_ifu, "System.Net.NetworkInformation", "ifa_ifu");
