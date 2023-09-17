#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class IAsn1String;
}
// Type: Org.BouncyCastle.Asn1::IAsn1String
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(32))
// CS Name: Org.BouncyCastle.Asn1.IAsn1String
class CORDL_TYPE IAsn1String : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IAsn1String() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAsn1String(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW GetString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IAsn1String);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IAsn1String, "Org.BouncyCastle.Asn1", "IAsn1String");
