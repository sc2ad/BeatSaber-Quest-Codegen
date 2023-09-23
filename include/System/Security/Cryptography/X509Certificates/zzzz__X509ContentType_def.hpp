#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X509ContentType;
}
// Type: System.Security.Cryptography.X509Certificates::X509ContentType
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2985))
// CS Name: System.Security.Cryptography.X509Certificates.X509ContentType
struct CORDL_TYPE X509ContentType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr X509ContentType(int32_t value__) noexcept;


                    constexpr X509ContentType(X509ContentType const&) = default;
                    constexpr X509ContentType(X509ContentType&&) = default;
                    constexpr X509ContentType& operator=(X509ContentType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr X509ContentType& operator=(X509ContentType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit X509ContentType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __X509ContentType_Unwrapped : int32_t {
__Unknown = 0,
__Cert = 1,
__SerializedCert = 2,
__Pfx = 3,
__Pkcs12 = 3,
__SerializedStore = 4,
__Pkcs7 = 5,
__Authenticode = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __X509ContentType_Unwrapped () const noexcept {
return std::bit_cast<__X509ContentType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static System::Security::Cryptography::X509Certificates::X509ContentType const Unknown;

/// @brief Field Cert offset 0
static System::Security::Cryptography::X509Certificates::X509ContentType const Cert;

/// @brief Field SerializedCert offset 0
static System::Security::Cryptography::X509Certificates::X509ContentType const SerializedCert;

/// @brief Field Pfx offset 0
static System::Security::Cryptography::X509Certificates::X509ContentType const Pfx;

/// @brief Field Pkcs12 offset 0
static System::Security::Cryptography::X509Certificates::X509ContentType const Pkcs12;

/// @brief Field SerializedStore offset 0
static System::Security::Cryptography::X509Certificates::X509ContentType const SerializedStore;

/// @brief Field Pkcs7 offset 0
static System::Security::Cryptography::X509Certificates::X509ContentType const Pkcs7;

/// @brief Field Authenticode offset 0
static System::Security::Cryptography::X509Certificates::X509ContentType const Authenticode;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509ContentType, "System.Security.Cryptography.X509Certificates", "X509ContentType");
