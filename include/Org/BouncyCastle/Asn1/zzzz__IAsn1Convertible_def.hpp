#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
// Type: Org.BouncyCastle.Asn1::IAsn1Convertible
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6))
// CS Name: Org.BouncyCastle.Asn1.IAsn1Convertible
class CORDL_TYPE IAsn1Convertible : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IAsn1Convertible() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAsn1Convertible(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ToAsn1Object addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::IAsn1Convertible);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::IAsn1Convertible, "Org.BouncyCastle.Asn1", "IAsn1Convertible");
