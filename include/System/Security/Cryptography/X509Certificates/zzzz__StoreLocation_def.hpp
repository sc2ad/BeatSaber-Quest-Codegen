#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct StoreLocation;
}
// Type: System.Security.Cryptography.X509Certificates::StoreLocation
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7830))
// CS Name: System.Security.Cryptography.X509Certificates.StoreLocation
struct CORDL_TYPE StoreLocation : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StoreLocation(int32_t value__) noexcept;


                    constexpr StoreLocation(StoreLocation const&) = default;
                    constexpr StoreLocation(StoreLocation&&) = default;
                    constexpr StoreLocation& operator=(StoreLocation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StoreLocation& operator=(StoreLocation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StoreLocation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __StoreLocation_Unwrapped : int32_t {
__CurrentUser = 1,
__LocalMachine = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StoreLocation_Unwrapped () const noexcept {
return std::bit_cast<__StoreLocation_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field CurrentUser offset 0
static System::Security::Cryptography::X509Certificates::StoreLocation const CurrentUser;

/// @brief Field LocalMachine offset 0
static System::Security::Cryptography::X509Certificates::StoreLocation const LocalMachine;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::StoreLocation, "System.Security.Cryptography.X509Certificates", "StoreLocation");
