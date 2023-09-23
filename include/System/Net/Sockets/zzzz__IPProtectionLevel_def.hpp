#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::Sockets {
struct IPProtectionLevel;
}
// Type: System.Net.Sockets::IPProtectionLevel
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8191))
// CS Name: System.Net.Sockets.IPProtectionLevel
struct CORDL_TYPE IPProtectionLevel : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr IPProtectionLevel(int32_t value__) noexcept;


                    constexpr IPProtectionLevel(IPProtectionLevel const&) = default;
                    constexpr IPProtectionLevel(IPProtectionLevel&&) = default;
                    constexpr IPProtectionLevel& operator=(IPProtectionLevel const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IPProtectionLevel& operator=(IPProtectionLevel&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IPProtectionLevel(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __IPProtectionLevel_Unwrapped : int32_t {
__Unspecified = -1,
__Unrestricted = 10,
__EdgeRestricted = 20,
__Restricted = 30,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __IPProtectionLevel_Unwrapped () const noexcept {
return std::bit_cast<__IPProtectionLevel_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unspecified offset 0
static System::Net::Sockets::IPProtectionLevel const Unspecified;

/// @brief Field Unrestricted offset 0
static System::Net::Sockets::IPProtectionLevel const Unrestricted;

/// @brief Field EdgeRestricted offset 0
static System::Net::Sockets::IPProtectionLevel const EdgeRestricted;

/// @brief Field Restricted offset 0
static System::Net::Sockets::IPProtectionLevel const Restricted;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::IPProtectionLevel, "System.Net.Sockets", "IPProtectionLevel");
