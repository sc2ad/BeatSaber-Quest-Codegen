#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::NetworkInformation {
struct NetworkInterfaceType;
}
// Type: System.Net.NetworkInformation::NetworkInterfaceType
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8109))
// CS Name: System.Net.NetworkInformation.NetworkInterfaceType
struct CORDL_TYPE NetworkInterfaceType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NetworkInterfaceType(int32_t value__) noexcept;


                    constexpr NetworkInterfaceType(NetworkInterfaceType const&) = default;
                    constexpr NetworkInterfaceType(NetworkInterfaceType&&) = default;
                    constexpr NetworkInterfaceType& operator=(NetworkInterfaceType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NetworkInterfaceType& operator=(NetworkInterfaceType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NetworkInterfaceType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NetworkInterfaceType_Unwrapped : int32_t {
__Unknown = 1,
__Ethernet = 6,
__TokenRing = 9,
__Fddi = 15,
__BasicIsdn = 20,
__PrimaryIsdn = 21,
__Ppp = 23,
__Loopback = 24,
__Ethernet3Megabit = 26,
__Slip = 28,
__Atm = 37,
__GenericModem = 48,
__FastEthernetT = 62,
__Isdn = 63,
__FastEthernetFx = 69,
__Wireless80211 = 71,
__AsymmetricDsl = 94,
__RateAdaptDsl = 95,
__SymmetricDsl = 96,
__VeryHighSpeedDsl = 97,
__IPOverAtm = 114,
__GigabitEthernet = 117,
__Tunnel = 131,
__MultiRateSymmetricDsl = 143,
__HighPerformanceSerialBus = 144,
__Wman = 237,
__Wwanpp = 243,
__Wwanpp2 = 244,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkInterfaceType_Unwrapped () const noexcept {
return std::bit_cast<__NetworkInterfaceType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const Unknown;

/// @brief Field Ethernet offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const Ethernet;

/// @brief Field TokenRing offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const TokenRing;

/// @brief Field Fddi offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const Fddi;

/// @brief Field BasicIsdn offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const BasicIsdn;

/// @brief Field PrimaryIsdn offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const PrimaryIsdn;

/// @brief Field Ppp offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const Ppp;

/// @brief Field Loopback offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const Loopback;

/// @brief Field Ethernet3Megabit offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const Ethernet3Megabit;

/// @brief Field Slip offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const Slip;

/// @brief Field Atm offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const Atm;

/// @brief Field GenericModem offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const GenericModem;

/// @brief Field FastEthernetT offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const FastEthernetT;

/// @brief Field Isdn offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const Isdn;

/// @brief Field FastEthernetFx offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const FastEthernetFx;

/// @brief Field Wireless80211 offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const Wireless80211;

/// @brief Field AsymmetricDsl offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const AsymmetricDsl;

/// @brief Field RateAdaptDsl offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const RateAdaptDsl;

/// @brief Field SymmetricDsl offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const SymmetricDsl;

/// @brief Field VeryHighSpeedDsl offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const VeryHighSpeedDsl;

/// @brief Field IPOverAtm offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const IPOverAtm;

/// @brief Field GigabitEthernet offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const GigabitEthernet;

/// @brief Field Tunnel offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const Tunnel;

/// @brief Field MultiRateSymmetricDsl offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const MultiRateSymmetricDsl;

/// @brief Field HighPerformanceSerialBus offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const HighPerformanceSerialBus;

/// @brief Field Wman offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const Wman;

/// @brief Field Wwanpp offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const Wwanpp;

/// @brief Field Wwanpp2 offset 0
static System::Net::NetworkInformation::NetworkInterfaceType const Wwanpp2;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::NetworkInterfaceType, "System.Net.NetworkInformation", "NetworkInterfaceType");
