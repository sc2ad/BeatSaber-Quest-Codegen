#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Net::NetworkInformation {
struct MacOsArpHardware;
}
// Type: System.Net.NetworkInformation::MacOsArpHardware
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8132))
// CS Name: System.Net.NetworkInformation.MacOsArpHardware
struct CORDL_TYPE MacOsArpHardware : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MacOsArpHardware(int32_t value__) noexcept;


                    constexpr MacOsArpHardware(MacOsArpHardware const&) = default;
                    constexpr MacOsArpHardware(MacOsArpHardware&&) = default;
                    constexpr MacOsArpHardware& operator=(MacOsArpHardware const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MacOsArpHardware& operator=(MacOsArpHardware&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MacOsArpHardware(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MacOsArpHardware_Unwrapped : int32_t {
__ETHER = 6,
__ATM = 37,
__SLIP = 28,
__PPP = 23,
__LOOPBACK = 24,
__FDDI = 15,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MacOsArpHardware_Unwrapped () const noexcept {
return std::bit_cast<__MacOsArpHardware_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ETHER offset 0
static ::System::Net::NetworkInformation::MacOsArpHardware const ETHER;

/// @brief Field ATM offset 0
static ::System::Net::NetworkInformation::MacOsArpHardware const ATM;

/// @brief Field SLIP offset 0
static ::System::Net::NetworkInformation::MacOsArpHardware const SLIP;

/// @brief Field PPP offset 0
static ::System::Net::NetworkInformation::MacOsArpHardware const PPP;

/// @brief Field LOOPBACK offset 0
static ::System::Net::NetworkInformation::MacOsArpHardware const LOOPBACK;

/// @brief Field FDDI offset 0
static ::System::Net::NetworkInformation::MacOsArpHardware const FDDI;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::MacOsArpHardware, "System.Net.NetworkInformation", "MacOsArpHardware");
