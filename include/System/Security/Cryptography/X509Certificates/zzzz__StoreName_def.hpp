#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct StoreName;
}
// Type: System.Security.Cryptography.X509Certificates::StoreName
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7831))
// CS Name: System.Security.Cryptography.X509Certificates.StoreName
struct CORDL_TYPE StoreName : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StoreName(int32_t value__) noexcept;


                    constexpr StoreName(StoreName const&) = default;
                    constexpr StoreName(StoreName&&) = default;
                    constexpr StoreName& operator=(StoreName const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StoreName& operator=(StoreName&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StoreName(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __StoreName_Unwrapped : int32_t {
__AddressBook = 1,
__AuthRoot = 2,
__CertificateAuthority = 3,
__Disallowed = 4,
__My = 5,
__Root = 6,
__TrustedPeople = 7,
__TrustedPublisher = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StoreName_Unwrapped () const noexcept {
return std::bit_cast<__StoreName_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AddressBook offset 0
static System::Security::Cryptography::X509Certificates::StoreName const AddressBook;

/// @brief Field AuthRoot offset 0
static System::Security::Cryptography::X509Certificates::StoreName const AuthRoot;

/// @brief Field CertificateAuthority offset 0
static System::Security::Cryptography::X509Certificates::StoreName const CertificateAuthority;

/// @brief Field Disallowed offset 0
static System::Security::Cryptography::X509Certificates::StoreName const Disallowed;

/// @brief Field My offset 0
static System::Security::Cryptography::X509Certificates::StoreName const My;

/// @brief Field Root offset 0
static System::Security::Cryptography::X509Certificates::StoreName const Root;

/// @brief Field TrustedPeople offset 0
static System::Security::Cryptography::X509Certificates::StoreName const TrustedPeople;

/// @brief Field TrustedPublisher offset 0
static System::Security::Cryptography::X509Certificates::StoreName const TrustedPublisher;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::StoreName, "System.Security.Cryptography.X509Certificates", "StoreName");
