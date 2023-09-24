#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::NetworkInformation {
struct OperationalStatus;
}
// Type: System.Net.NetworkInformation::OperationalStatus
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8105))
// CS Name: System.Net.NetworkInformation.OperationalStatus
struct CORDL_TYPE OperationalStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OperationalStatus(int32_t value__) noexcept;


                    constexpr OperationalStatus(OperationalStatus const&) = default;
                    constexpr OperationalStatus(OperationalStatus&&) = default;
                    constexpr OperationalStatus& operator=(OperationalStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OperationalStatus& operator=(OperationalStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OperationalStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __OperationalStatus_Unwrapped : int32_t {
__Up = 1,
__Down = 2,
__Testing = 3,
__Unknown = 4,
__Dormant = 5,
__NotPresent = 6,
__LowerLayerDown = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OperationalStatus_Unwrapped () const noexcept {
return std::bit_cast<__OperationalStatus_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Up offset 0
static System::Net::NetworkInformation::OperationalStatus const Up;

/// @brief Field Down offset 0
static System::Net::NetworkInformation::OperationalStatus const Down;

/// @brief Field Testing offset 0
static System::Net::NetworkInformation::OperationalStatus const Testing;

/// @brief Field Unknown offset 0
static System::Net::NetworkInformation::OperationalStatus const Unknown;

/// @brief Field Dormant offset 0
static System::Net::NetworkInformation::OperationalStatus const Dormant;

/// @brief Field NotPresent offset 0
static System::Net::NetworkInformation::OperationalStatus const NotPresent;

/// @brief Field LowerLayerDown offset 0
static System::Net::NetworkInformation::OperationalStatus const LowerLayerDown;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::OperationalStatus, "System.Net.NetworkInformation", "OperationalStatus");
