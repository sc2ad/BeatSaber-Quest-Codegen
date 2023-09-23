#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientInfo;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class RecipientInfoGenerator;
}
// Type: Org.BouncyCastle.Cms::RecipientInfoGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(669))
// CS Name: Org.BouncyCastle.Cms.RecipientInfoGenerator
class CORDL_TYPE RecipientInfoGenerator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~RecipientInfoGenerator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RecipientInfoGenerator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Generate addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Asn1::Cms::RecipientInfo Generate(Org::BouncyCastle::Crypto::Parameters::KeyParameter contentEncryptionKey, Org::BouncyCastle::Security::SecureRandom random) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::RecipientInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::RecipientInfoGenerator, "Org.BouncyCastle.Cms", "RecipientInfoGenerator");
