#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X509RevocationFlag;
}
// Type: System.Security.Cryptography.X509Certificates::X509RevocationFlag
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7837))
// CS Name: System.Security.Cryptography.X509Certificates.X509RevocationFlag
struct CORDL_TYPE X509RevocationFlag : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr X509RevocationFlag(int32_t value__) noexcept;


                    constexpr X509RevocationFlag(X509RevocationFlag const&) = default;
                    constexpr X509RevocationFlag(X509RevocationFlag&&) = default;
                    constexpr X509RevocationFlag& operator=(X509RevocationFlag const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr X509RevocationFlag& operator=(X509RevocationFlag&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit X509RevocationFlag(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __X509RevocationFlag_Unwrapped : int32_t {
__EndCertificateOnly = 0,
__EntireChain = 1,
__ExcludeRoot = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __X509RevocationFlag_Unwrapped () const noexcept {
return std::bit_cast<__X509RevocationFlag_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field EndCertificateOnly offset 0
static ::System::Security::Cryptography::X509Certificates::X509RevocationFlag const EndCertificateOnly;

/// @brief Field EntireChain offset 0
static ::System::Security::Cryptography::X509Certificates::X509RevocationFlag const EntireChain;

/// @brief Field ExcludeRoot offset 0
static ::System::Security::Cryptography::X509Certificates::X509RevocationFlag const ExcludeRoot;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509RevocationFlag, "System.Security.Cryptography.X509Certificates", "X509RevocationFlag");
