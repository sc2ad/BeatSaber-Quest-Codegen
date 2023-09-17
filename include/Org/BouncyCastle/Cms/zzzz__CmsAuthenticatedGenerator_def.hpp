#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsEnvelopedGenerator_def.hpp"
namespace {
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAuthenticatedGenerator;
}
// Type: Org.BouncyCastle.Cms::CmsAuthenticatedGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(617))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(618))
// CS Name: Org.BouncyCastle.Cms.CmsAuthenticatedGenerator
class CORDL_TYPE CmsAuthenticatedGenerator : public ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CmsAuthenticatedGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedGenerator", modifiers: " const&", def_value: None }]
constexpr CmsAuthenticatedGenerator(CmsAuthenticatedGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsAuthenticatedGenerator", modifiers: "&&", def_value: None }]
constexpr CmsAuthenticatedGenerator(CmsAuthenticatedGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsAuthenticatedGenerator(void* ptr) noexcept : ::Org::BouncyCastle::Cms::CmsEnvelopedGenerator(ptr) {
}


  constexpr CmsAuthenticatedGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsAuthenticatedGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsAuthenticatedGenerator& operator=(CmsAuthenticatedGenerator&& o) noexcept = default;
  constexpr CmsAuthenticatedGenerator& operator=(CmsAuthenticatedGenerator const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit CmsAuthenticatedGenerator() ;

/// @brief Method .ctor addr 0x114f5e0 size 0x54 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "rand", ty: "::Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit CmsAuthenticatedGenerator(::Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x114f634 size 0x64 virtual false final false
 void _ctor(::Org::BouncyCastle::Security::SecureRandom rand) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAuthenticatedGenerator, "Org.BouncyCastle.Cms", "CmsAuthenticatedGenerator");
