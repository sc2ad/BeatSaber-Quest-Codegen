#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::NetworkInformation {
struct NetworkInterfaceComponent;
}
// Type: System.Net.NetworkInformation::NetworkInterfaceComponent
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8104))
// CS Name: System.Net.NetworkInformation.NetworkInterfaceComponent
struct CORDL_TYPE NetworkInterfaceComponent : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NetworkInterfaceComponent(int32_t value__) noexcept;


                    constexpr NetworkInterfaceComponent(NetworkInterfaceComponent const&) = default;
                    constexpr NetworkInterfaceComponent(NetworkInterfaceComponent&&) = default;
                    constexpr NetworkInterfaceComponent& operator=(NetworkInterfaceComponent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NetworkInterfaceComponent& operator=(NetworkInterfaceComponent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NetworkInterfaceComponent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NetworkInterfaceComponent_Unwrapped : int32_t {
__IPv4 = 0,
__IPv6 = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkInterfaceComponent_Unwrapped () const noexcept {
return std::bit_cast<__NetworkInterfaceComponent_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field IPv4 offset 0
static System::Net::NetworkInformation::NetworkInterfaceComponent const IPv4;

/// @brief Field IPv6 offset 0
static System::Net::NetworkInformation::NetworkInterfaceComponent const IPv6;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::NetworkInterfaceComponent, "System.Net.NetworkInformation", "NetworkInterfaceComponent");
