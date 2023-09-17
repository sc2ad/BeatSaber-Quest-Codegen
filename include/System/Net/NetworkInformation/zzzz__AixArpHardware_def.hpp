#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Net::NetworkInformation {
struct AixArpHardware;
}
// Type: System.Net.NetworkInformation::AixArpHardware
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8113))
// CS Name: System.Net.NetworkInformation.AixArpHardware
struct CORDL_TYPE AixArpHardware : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AixArpHardware(int32_t value__) noexcept;


                    constexpr AixArpHardware(AixArpHardware const&) = default;
                    constexpr AixArpHardware(AixArpHardware&&) = default;
                    constexpr AixArpHardware& operator=(AixArpHardware const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AixArpHardware& operator=(AixArpHardware&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AixArpHardware(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AixArpHardware_Unwrapped : int32_t {
__ETHER = 6,
__ATM = 37,
__SLIP = 28,
__PPP = 23,
__LOOPBACK = 24,
__FDDI = 15,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AixArpHardware_Unwrapped () const noexcept {
return std::bit_cast<__AixArpHardware_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ETHER offset 0
static ::System::Net::NetworkInformation::AixArpHardware const ETHER;

/// @brief Field ATM offset 0
static ::System::Net::NetworkInformation::AixArpHardware const ATM;

/// @brief Field SLIP offset 0
static ::System::Net::NetworkInformation::AixArpHardware const SLIP;

/// @brief Field PPP offset 0
static ::System::Net::NetworkInformation::AixArpHardware const PPP;

/// @brief Field LOOPBACK offset 0
static ::System::Net::NetworkInformation::AixArpHardware const LOOPBACK;

/// @brief Field FDDI offset 0
static ::System::Net::NetworkInformation::AixArpHardware const FDDI;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixArpHardware, "System.Net.NetworkInformation", "AixArpHardware");
