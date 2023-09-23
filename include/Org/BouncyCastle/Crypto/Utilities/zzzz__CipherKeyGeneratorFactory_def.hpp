#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class CipherKeyGenerator;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Utilities {
class CipherKeyGeneratorFactory;
}
// Type: Org.BouncyCastle.Crypto.Utilities::CipherKeyGeneratorFactory
namespace Org::BouncyCastle::Crypto::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1338))
// CS Name: Org.BouncyCastle.Crypto.Utilities.CipherKeyGeneratorFactory
class CORDL_TYPE CipherKeyGeneratorFactory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CipherKeyGeneratorFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "CipherKeyGeneratorFactory", modifiers: " const&", def_value: None }]
constexpr CipherKeyGeneratorFactory(CipherKeyGeneratorFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CipherKeyGeneratorFactory", modifiers: "&&", def_value: None }]
constexpr CipherKeyGeneratorFactory(CipherKeyGeneratorFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CipherKeyGeneratorFactory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CipherKeyGeneratorFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CipherKeyGeneratorFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CipherKeyGeneratorFactory& operator=(CipherKeyGeneratorFactory&& o) noexcept = default;
  constexpr CipherKeyGeneratorFactory& operator=(CipherKeyGeneratorFactory const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit CipherKeyGeneratorFactory() ;

/// @brief Method .ctor addr 0xf34198 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateKeyGenerator addr 0xf341a0 size 0x434 virtual false final false
static Org::BouncyCastle::Crypto::CipherKeyGenerator CreateKeyGenerator(Org::BouncyCastle::Asn1::DerObjectIdentifier algorithm, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method CreateCipherKeyGenerator addr 0xf345d4 size 0xb0 virtual false final false
static Org::BouncyCastle::Crypto::CipherKeyGenerator CreateCipherKeyGenerator(Org::BouncyCastle::Security::SecureRandom random, int32_t keySize) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Utilities
NEED_NO_BOX(Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Utilities::CipherKeyGeneratorFactory, "Org.BouncyCastle.Crypto.Utilities", "CipherKeyGeneratorFactory");
