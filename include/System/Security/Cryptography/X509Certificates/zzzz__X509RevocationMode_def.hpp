#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X509RevocationMode;
}
// Type: System.Security.Cryptography.X509Certificates::X509RevocationMode
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7838))
// CS Name: System.Security.Cryptography.X509Certificates.X509RevocationMode
struct CORDL_TYPE X509RevocationMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr X509RevocationMode(int32_t value__) noexcept;


                    constexpr X509RevocationMode(X509RevocationMode const&) = default;
                    constexpr X509RevocationMode(X509RevocationMode&&) = default;
                    constexpr X509RevocationMode& operator=(X509RevocationMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr X509RevocationMode& operator=(X509RevocationMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit X509RevocationMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __X509RevocationMode_Unwrapped : int32_t {
__NoCheck = 0,
__Online = 1,
__Offline = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __X509RevocationMode_Unwrapped () const noexcept {
return std::bit_cast<__X509RevocationMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NoCheck offset 0
static ::System::Security::Cryptography::X509Certificates::X509RevocationMode const NoCheck;

/// @brief Field Online offset 0
static ::System::Security::Cryptography::X509Certificates::X509RevocationMode const Online;

/// @brief Field Offline offset 0
static ::System::Security::Cryptography::X509Certificates::X509RevocationMode const Offline;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509RevocationMode, "System.Security.Cryptography.X509Certificates", "X509RevocationMode");
