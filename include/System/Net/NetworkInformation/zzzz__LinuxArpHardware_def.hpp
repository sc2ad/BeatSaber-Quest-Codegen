#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::NetworkInformation {
struct LinuxArpHardware;
}
// Type: System.Net.NetworkInformation::LinuxArpHardware
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8127))
// CS Name: System.Net.NetworkInformation.LinuxArpHardware
struct CORDL_TYPE LinuxArpHardware : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LinuxArpHardware(int32_t value__) noexcept;


                    constexpr LinuxArpHardware(LinuxArpHardware const&) = default;
                    constexpr LinuxArpHardware(LinuxArpHardware&&) = default;
                    constexpr LinuxArpHardware& operator=(LinuxArpHardware const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LinuxArpHardware& operator=(LinuxArpHardware&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LinuxArpHardware(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __LinuxArpHardware_Unwrapped : int32_t {
__ETHER = 1,
__EETHER = 2,
__PRONET = 4,
__ATM = 19,
__SLIP = 256,
__CSLIP = 257,
__SLIP6 = 258,
__CSLIP6 = 259,
__PPP = 512,
__LOOPBACK = 772,
__FDDI = 774,
__TUNNEL = 768,
__TUNNEL6 = 769,
__SIT = 776,
__IPDDP = 777,
__IPGRE = 778,
__IP6GRE = 823,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LinuxArpHardware_Unwrapped () const noexcept {
return std::bit_cast<__LinuxArpHardware_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ETHER offset 0
static System::Net::NetworkInformation::LinuxArpHardware const ETHER;

/// @brief Field EETHER offset 0
static System::Net::NetworkInformation::LinuxArpHardware const EETHER;

/// @brief Field PRONET offset 0
static System::Net::NetworkInformation::LinuxArpHardware const PRONET;

/// @brief Field ATM offset 0
static System::Net::NetworkInformation::LinuxArpHardware const ATM;

/// @brief Field SLIP offset 0
static System::Net::NetworkInformation::LinuxArpHardware const SLIP;

/// @brief Field CSLIP offset 0
static System::Net::NetworkInformation::LinuxArpHardware const CSLIP;

/// @brief Field SLIP6 offset 0
static System::Net::NetworkInformation::LinuxArpHardware const SLIP6;

/// @brief Field CSLIP6 offset 0
static System::Net::NetworkInformation::LinuxArpHardware const CSLIP6;

/// @brief Field PPP offset 0
static System::Net::NetworkInformation::LinuxArpHardware const PPP;

/// @brief Field LOOPBACK offset 0
static System::Net::NetworkInformation::LinuxArpHardware const LOOPBACK;

/// @brief Field FDDI offset 0
static System::Net::NetworkInformation::LinuxArpHardware const FDDI;

/// @brief Field TUNNEL offset 0
static System::Net::NetworkInformation::LinuxArpHardware const TUNNEL;

/// @brief Field TUNNEL6 offset 0
static System::Net::NetworkInformation::LinuxArpHardware const TUNNEL6;

/// @brief Field SIT offset 0
static System::Net::NetworkInformation::LinuxArpHardware const SIT;

/// @brief Field IPDDP offset 0
static System::Net::NetworkInformation::LinuxArpHardware const IPDDP;

/// @brief Field IPGRE offset 0
static System::Net::NetworkInformation::LinuxArpHardware const IPGRE;

/// @brief Field IP6GRE offset 0
static System::Net::NetworkInformation::LinuxArpHardware const IP6GRE;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::LinuxArpHardware, "System.Net.NetworkInformation", "LinuxArpHardware");
