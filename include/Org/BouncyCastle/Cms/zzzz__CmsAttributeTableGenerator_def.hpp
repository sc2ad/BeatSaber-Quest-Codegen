#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerator;
}
// Type: Org.BouncyCastle.Cms::CmsAttributeTableGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(615))
// CS Name: Org.BouncyCastle.Cms.CmsAttributeTableGenerator
class CORDL_TYPE CmsAttributeTableGenerator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~CmsAttributeTableGenerator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsAttributeTableGenerator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetAttributes addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Asn1::Cms::AttributeTable GetAttributes(::System::Collections::IDictionary parameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator, "Org.BouncyCastle.Cms", "CmsAttributeTableGenerator");
