#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography {
struct OidGroup;
}
// Type: System.Security.Cryptography::OidGroup
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7826))
// CS Name: System.Security.Cryptography.OidGroup
struct CORDL_TYPE OidGroup : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OidGroup(int32_t value__) noexcept;


                    constexpr OidGroup(OidGroup const&) = default;
                    constexpr OidGroup(OidGroup&&) = default;
                    constexpr OidGroup& operator=(OidGroup const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OidGroup& operator=(OidGroup&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OidGroup(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __OidGroup_Unwrapped : int32_t {
__All = 0,
__HashAlgorithm = 1,
__EncryptionAlgorithm = 2,
__PublicKeyAlgorithm = 3,
__SignatureAlgorithm = 4,
__Attribute = 5,
__ExtensionOrAttribute = 6,
__EnhancedKeyUsage = 7,
__Policy = 8,
__Template = 9,
__KeyDerivationFunction = 10,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OidGroup_Unwrapped () const noexcept {
return std::bit_cast<__OidGroup_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field All offset 0
static System::Security::Cryptography::OidGroup const All;

/// @brief Field HashAlgorithm offset 0
static System::Security::Cryptography::OidGroup const HashAlgorithm;

/// @brief Field EncryptionAlgorithm offset 0
static System::Security::Cryptography::OidGroup const EncryptionAlgorithm;

/// @brief Field PublicKeyAlgorithm offset 0
static System::Security::Cryptography::OidGroup const PublicKeyAlgorithm;

/// @brief Field SignatureAlgorithm offset 0
static System::Security::Cryptography::OidGroup const SignatureAlgorithm;

/// @brief Field Attribute offset 0
static System::Security::Cryptography::OidGroup const Attribute;

/// @brief Field ExtensionOrAttribute offset 0
static System::Security::Cryptography::OidGroup const ExtensionOrAttribute;

/// @brief Field EnhancedKeyUsage offset 0
static System::Security::Cryptography::OidGroup const EnhancedKeyUsage;

/// @brief Field Policy offset 0
static System::Security::Cryptography::OidGroup const Policy;

/// @brief Field Template offset 0
static System::Security::Cryptography::OidGroup const Template;

/// @brief Field KeyDerivationFunction offset 0
static System::Security::Cryptography::OidGroup const KeyDerivationFunction;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::OidGroup, "System.Security.Cryptography", "OidGroup");
