#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsAuthenticatedGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Crypto {
class CipherKeyGenerator;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Cms {
class CmsAuthenticatedData;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAuthenticatedDataGenerator;
}
// Type: Org.BouncyCastle.Cms::CmsAuthenticatedDataGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(618))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(619))
// CS Name: Org.BouncyCastle.Cms.CmsAuthenticatedDataGenerator
class CORDL_TYPE CmsAuthenticatedDataGenerator : public Org::BouncyCastle::Cms::CmsAuthenticatedGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CmsAuthenticatedDataGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedDataGenerator", modifiers: " const&", def_value: None }]
constexpr CmsAuthenticatedDataGenerator(CmsAuthenticatedDataGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedDataGenerator", modifiers: "&&", def_value: None }]
constexpr CmsAuthenticatedDataGenerator(CmsAuthenticatedDataGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsAuthenticatedDataGenerator(void* ptr) noexcept : Org::BouncyCastle::Cms::CmsAuthenticatedGenerator(ptr) {
}


  constexpr CmsAuthenticatedDataGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsAuthenticatedDataGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsAuthenticatedDataGenerator& operator=(CmsAuthenticatedDataGenerator&& o) noexcept = default;
  constexpr CmsAuthenticatedDataGenerator& operator=(CmsAuthenticatedDataGenerator const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator New_ctor() ;

/// @brief Method .ctor addr 0x114f698 size 0x4 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator New_ctor(Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x114f69c size 0x4 virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method Generate addr 0x114f6a0 size 0xb40 virtual false final false
 Org::BouncyCastle::Cms::CmsAuthenticatedData Generate(Org::BouncyCastle::Cms::CmsProcessable content, ::StringW macOid, Org::BouncyCastle::Crypto::CipherKeyGenerator keyGen) ;

/// @brief Method Generate addr 0x11501e0 size 0x1b4 virtual false final false
 Org::BouncyCastle::Cms::CmsAuthenticatedData Generate(Org::BouncyCastle::Cms::CmsProcessable content, ::StringW encryptionOid) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsAuthenticatedDataGenerator, "Org.BouncyCastle.Cms", "CmsAuthenticatedDataGenerator");
