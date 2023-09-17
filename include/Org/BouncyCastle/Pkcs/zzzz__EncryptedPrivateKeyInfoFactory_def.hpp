#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class EncryptedPrivateKeyInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class EncryptedPrivateKeyInfoFactory;
}
// Type: Org.BouncyCastle.Pkcs::EncryptedPrivateKeyInfoFactory
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1695))
// CS Name: Org.BouncyCastle.Pkcs.EncryptedPrivateKeyInfoFactory
class CORDL_TYPE EncryptedPrivateKeyInfoFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EncryptedPrivateKeyInfoFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptedPrivateKeyInfoFactory", modifiers: " const&", def_value: None }]
constexpr EncryptedPrivateKeyInfoFactory(EncryptedPrivateKeyInfoFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncryptedPrivateKeyInfoFactory", modifiers: "&&", def_value: None }]
constexpr EncryptedPrivateKeyInfoFactory(EncryptedPrivateKeyInfoFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncryptedPrivateKeyInfoFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EncryptedPrivateKeyInfoFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncryptedPrivateKeyInfoFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncryptedPrivateKeyInfoFactory& operator=(EncryptedPrivateKeyInfoFactory&& o) noexcept = default;
  constexpr EncryptedPrivateKeyInfoFactory& operator=(EncryptedPrivateKeyInfoFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit EncryptedPrivateKeyInfoFactory() ;

/// @brief Method .ctor addr 0x1049ee4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateEncryptedPrivateKeyInfo addr 0x1049eec size 0x54 virtual false final false
static ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo CreateEncryptedPrivateKeyInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier algorithm, ::ArrayW<char16_t> passPhrase, ::ArrayW<uint8_t> salt, int32_t iterationCount, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter key) ;

/// @brief Method CreateEncryptedPrivateKeyInfo addr 0x10490f4 size 0x4c virtual false final false
static ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo CreateEncryptedPrivateKeyInfo(::StringW algorithm, ::ArrayW<char16_t> passPhrase, ::ArrayW<uint8_t> salt, int32_t iterationCount, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter key) ;

/// @brief Method CreateEncryptedPrivateKeyInfo addr 0x1049f40 size 0x2a4 virtual false final false
static ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo CreateEncryptedPrivateKeyInfo(::StringW algorithm, ::ArrayW<char16_t> passPhrase, ::ArrayW<uint8_t> salt, int32_t iterationCount, ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo keyInfo) ;

/// @brief Method CreateEncryptedPrivateKeyInfo addr 0x104a1e4 size 0x64 virtual false final false
static ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo CreateEncryptedPrivateKeyInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier cipherAlgorithm, ::Org::BouncyCastle::Asn1::DerObjectIdentifier prfAlgorithm, ::ArrayW<char16_t> passPhrase, ::ArrayW<uint8_t> salt, int32_t iterationCount, ::Org::BouncyCastle::Security::SecureRandom random, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter key) ;

/// @brief Method CreateEncryptedPrivateKeyInfo addr 0x104a248 size 0x2f4 virtual false final false
static ::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo CreateEncryptedPrivateKeyInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier cipherAlgorithm, ::Org::BouncyCastle::Asn1::DerObjectIdentifier prfAlgorithm, ::ArrayW<char16_t> passPhrase, ::ArrayW<uint8_t> salt, int32_t iterationCount, ::Org::BouncyCastle::Security::SecureRandom random, ::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo keyInfo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkcs
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory, "Org.BouncyCastle.Pkcs", "EncryptedPrivateKeyInfoFactory");
