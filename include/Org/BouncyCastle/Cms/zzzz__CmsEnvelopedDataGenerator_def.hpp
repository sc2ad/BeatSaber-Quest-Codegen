#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class CipherKeyGenerator;
}
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedData;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class ICipherBuilderWithKey;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedDataGenerator;
}
// Type: Org.BouncyCastle.Cms::CmsEnvelopedDataGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(617))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(634))
// CS Name: Org.BouncyCastle.Cms.CmsEnvelopedDataGenerator
class CORDL_TYPE CmsEnvelopedDataGenerator : public Org::BouncyCastle::Cms::CmsEnvelopedGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CmsEnvelopedDataGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedDataGenerator", modifiers: " const&", def_value: None }]
constexpr CmsEnvelopedDataGenerator(CmsEnvelopedDataGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedDataGenerator", modifiers: "&&", def_value: None }]
constexpr CmsEnvelopedDataGenerator(CmsEnvelopedDataGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsEnvelopedDataGenerator(void* ptr) noexcept : Org::BouncyCastle::Cms::CmsEnvelopedGenerator(ptr) {
}


  constexpr CmsEnvelopedDataGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsEnvelopedDataGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsEnvelopedDataGenerator& operator=(CmsEnvelopedDataGenerator&& o) noexcept = default;
  constexpr CmsEnvelopedDataGenerator& operator=(CmsEnvelopedDataGenerator const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator New_ctor() ;

/// @brief Method .ctor addr 0x11537e0 size 0x54 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator New_ctor(Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x1153834 size 0x64 virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method Generate addr 0x1153898 size 0xbfc virtual false final false
 Org::BouncyCastle::Cms::CmsEnvelopedData Generate(Org::BouncyCastle::Cms::CmsProcessable content, ::StringW encryptionOid, Org::BouncyCastle::Crypto::CipherKeyGenerator keyGen) ;

/// @brief Method Generate addr 0x1154494 size 0x1b4 virtual false final false
 Org::BouncyCastle::Cms::CmsEnvelopedData Generate(Org::BouncyCastle::Cms::CmsProcessable content, ::StringW encryptionOid) ;

/// @brief Method Generate addr 0x1154648 size 0xc80 virtual false final false
 Org::BouncyCastle::Cms::CmsEnvelopedData Generate(Org::BouncyCastle::Cms::CmsProcessable content, Org::BouncyCastle::Crypto::ICipherBuilderWithKey cipherBuilder) ;

/// @brief Method Generate addr 0x11552c8 size 0x1b0 virtual false final false
 Org::BouncyCastle::Cms::CmsEnvelopedData Generate(Org::BouncyCastle::Cms::CmsProcessable content, ::StringW encryptionOid, int32_t keySize) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsEnvelopedDataGenerator, "Org.BouncyCastle.Cms", "CmsEnvelopedDataGenerator");
