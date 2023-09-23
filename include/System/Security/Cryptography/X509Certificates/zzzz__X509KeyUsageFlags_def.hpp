#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyUsageFlags;
}
// Type: System.Security.Cryptography.X509Certificates::X509KeyUsageFlags
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7835))
// CS Name: System.Security.Cryptography.X509Certificates.X509KeyUsageFlags
struct CORDL_TYPE X509KeyUsageFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr X509KeyUsageFlags(int32_t value__) noexcept;


                    constexpr X509KeyUsageFlags(X509KeyUsageFlags const&) = default;
                    constexpr X509KeyUsageFlags(X509KeyUsageFlags&&) = default;
                    constexpr X509KeyUsageFlags& operator=(X509KeyUsageFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr X509KeyUsageFlags& operator=(X509KeyUsageFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit X509KeyUsageFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __X509KeyUsageFlags_Unwrapped : int32_t {
__None = 0,
__EncipherOnly = 1,
__CrlSign = 2,
__KeyCertSign = 4,
__KeyAgreement = 8,
__DataEncipherment = 16,
__KeyEncipherment = 32,
__NonRepudiation = 64,
__DigitalSignature = 128,
__DecipherOnly = 32768,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __X509KeyUsageFlags_Unwrapped () const noexcept {
return std::bit_cast<__X509KeyUsageFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const None;

/// @brief Field EncipherOnly offset 0
static System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const EncipherOnly;

/// @brief Field CrlSign offset 0
static System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const CrlSign;

/// @brief Field KeyCertSign offset 0
static System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const KeyCertSign;

/// @brief Field KeyAgreement offset 0
static System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const KeyAgreement;

/// @brief Field DataEncipherment offset 0
static System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const DataEncipherment;

/// @brief Field KeyEncipherment offset 0
static System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const KeyEncipherment;

/// @brief Field NonRepudiation offset 0
static System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const NonRepudiation;

/// @brief Field DigitalSignature offset 0
static System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const DigitalSignature;

/// @brief Field DecipherOnly offset 0
static System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const DecipherOnly;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509KeyUsageFlags, "System.Security.Cryptography.X509Certificates", "X509KeyUsageFlags");
