#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::NetworkInformation::AixStructs {
struct ifconf;
}
// Type: System.Net.NetworkInformation.AixStructs::ifconf
namespace System::Net::NetworkInformation::AixStructs {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8151))
// CS Name: System.Net.NetworkInformation.AixStructs.ifconf
struct CORDL_TYPE ifconf : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "ifc_len", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ifc_buf", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr ifconf(int32_t ifc_len, ::cordl_internals::intptr_t ifc_buf) noexcept;


                    constexpr ifconf(ifconf const&) = default;
                    constexpr ifconf(ifconf&&) = default;
                    constexpr ifconf& operator=(ifconf const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ifconf& operator=(ifconf&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ifconf(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_ifc_len, put=__set_ifc_len))  ifc_len;

constexpr void __set_ifc_len(int32_t value) ;

constexpr int32_t __get_ifc_len() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_ifc_buf, put=__set_ifc_buf))  ifc_buf;

constexpr void __set_ifc_buf(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_ifc_buf() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation::AixStructs
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::AixStructs::ifconf, "System.Net.NetworkInformation.AixStructs", "ifconf");
