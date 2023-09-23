#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetStringParser;
}
// Type: Org.BouncyCastle.Asn1::Asn1OctetStringParser
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(455))
// CS Name: Org.BouncyCastle.Asn1.Asn1OctetStringParser
class CORDL_TYPE Asn1OctetStringParser : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Convertible
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Convertible() const noexcept;

~Asn1OctetStringParser() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Asn1OctetStringParser(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetOctetStream addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IO::Stream GetOctetStream() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::Asn1OctetStringParser);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1OctetStringParser, "Org.BouncyCastle.Asn1", "Asn1OctetStringParser");
