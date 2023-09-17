#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Net::NetworkInformation::MacOsStructs {
struct ifaddrs;
}
// Type: System.Net.NetworkInformation.MacOsStructs::ifaddrs
namespace System::Net::NetworkInformation::MacOsStructs {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8145))
// CS Name: System.Net.NetworkInformation.MacOsStructs.ifaddrs
struct CORDL_TYPE ifaddrs : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "ifa_next", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "ifa_name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "ifa_flags", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ifa_addr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "ifa_netmask", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "ifa_dstaddr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "ifa_data", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ifaddrs(::cordl_internals::intptr_t ifa_next, ::StringW ifa_name, uint32_t ifa_flags, ::cordl_internals::intptr_t ifa_addr, ::cordl_internals::intptr_t ifa_netmask, ::cordl_internals::intptr_t ifa_dstaddr, ::cordl_internals::intptr_t ifa_data) noexcept;


                    constexpr ifaddrs(ifaddrs const&) = default;
                    constexpr ifaddrs(ifaddrs&&) = default;
                    constexpr ifaddrs& operator=(ifaddrs const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ifaddrs& operator=(ifaddrs&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ifaddrs(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_ifa_next, put=__set_ifa_next))  ifa_next;

constexpr void __set_ifa_next(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_ifa_next() const;

 ::StringW __declspec(property(get=__get_ifa_name, put=__set_ifa_name))  ifa_name;

constexpr void __set_ifa_name(::StringW value) ;

constexpr ::StringW __get_ifa_name() const;

 uint32_t __declspec(property(get=__get_ifa_flags, put=__set_ifa_flags))  ifa_flags;

constexpr void __set_ifa_flags(uint32_t value) ;

constexpr uint32_t __get_ifa_flags() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_ifa_addr, put=__set_ifa_addr))  ifa_addr;

constexpr void __set_ifa_addr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_ifa_addr() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_ifa_netmask, put=__set_ifa_netmask))  ifa_netmask;

constexpr void __set_ifa_netmask(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_ifa_netmask() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_ifa_dstaddr, put=__set_ifa_dstaddr))  ifa_dstaddr;

constexpr void __set_ifa_dstaddr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_ifa_dstaddr() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_ifa_data, put=__set_ifa_data))  ifa_data;

constexpr void __set_ifa_data(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_ifa_data() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation::MacOsStructs
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::MacOsStructs::ifaddrs, "System.Net.NetworkInformation.MacOsStructs", "ifaddrs");
