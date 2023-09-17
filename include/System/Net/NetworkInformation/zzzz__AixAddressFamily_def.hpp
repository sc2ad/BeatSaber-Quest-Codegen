#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Net::NetworkInformation {
struct AixAddressFamily;
}
// Type: System.Net.NetworkInformation::AixAddressFamily
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8114))
// CS Name: System.Net.NetworkInformation.AixAddressFamily
struct CORDL_TYPE AixAddressFamily : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AixAddressFamily(int32_t value__) noexcept;


                    constexpr AixAddressFamily(AixAddressFamily const&) = default;
                    constexpr AixAddressFamily(AixAddressFamily&&) = default;
                    constexpr AixAddressFamily& operator=(AixAddressFamily const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AixAddressFamily& operator=(AixAddressFamily&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AixAddressFamily(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AixAddressFamily_Unwrapped : int32_t {
__AF_INET = 2,
__AF_INET6 = 24,
__AF_LINK = 18,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AixAddressFamily_Unwrapped () const noexcept {
return std::bit_cast<__AixAddressFamily_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AF_INET offset 0
static ::System::Net::NetworkInformation::AixAddressFamily const AF_INET;

/// @brief Field AF_INET6 offset 0
static ::System::Net::NetworkInformation::AixAddressFamily const AF_INET6;

/// @brief Field AF_LINK offset 0
static ::System::Net::NetworkInformation::AixAddressFamily const AF_LINK;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixAddressFamily, "System.Net.NetworkInformation", "AixAddressFamily");
