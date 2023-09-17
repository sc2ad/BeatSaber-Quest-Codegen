#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Org::BouncyCastle::Cms {
class CmsCompressedData;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsCompressedDataGenerator;
}
// Type: Org.BouncyCastle.Cms::CmsCompressedDataGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(629))
// CS Name: Org.BouncyCastle.Cms.CmsCompressedDataGenerator
class CORDL_TYPE CmsCompressedDataGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CmsCompressedDataGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsCompressedDataGenerator", modifiers: " const&", def_value: None }]
constexpr CmsCompressedDataGenerator(CmsCompressedDataGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsCompressedDataGenerator", modifiers: "&&", def_value: None }]
constexpr CmsCompressedDataGenerator(CmsCompressedDataGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsCompressedDataGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CmsCompressedDataGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsCompressedDataGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsCompressedDataGenerator& operator=(CmsCompressedDataGenerator&& o) noexcept = default;
  constexpr CmsCompressedDataGenerator& operator=(CmsCompressedDataGenerator const& o) noexcept = default;
                


// Fields

/// @brief Field ZLib offset 0
static constexpr ::ConstString  ZLib{u"1.2.840.113549.1.9.16.3.8"};


// Methods

// Ctor Parameters []
explicit CmsCompressedDataGenerator() ;

/// @brief Method .ctor addr 0x1152990 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Generate addr 0x1152998 size 0x3ec virtual false final false
 ::Org::BouncyCastle::Cms::CmsCompressedData Generate(::Org::BouncyCastle::Cms::CmsProcessable content, ::StringW compressionOid) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsCompressedDataGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsCompressedDataGenerator, "Org.BouncyCastle.Cms", "CmsCompressedDataGenerator");
