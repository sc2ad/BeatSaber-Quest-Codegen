#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class IAsn1ApplicationSpecificParser;
}
// Type: Org.BouncyCastle.Asn1::IAsn1ApplicationSpecificParser
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(473))
// CS Name: Org.BouncyCastle.Asn1.IAsn1ApplicationSpecificParser
class CORDL_TYPE IAsn1ApplicationSpecificParser : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Convertible
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Convertible() const noexcept;

~IAsn1ApplicationSpecificParser() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAsn1ApplicationSpecificParser(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ReadObject addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Asn1::IAsn1Convertible ReadObject() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::IAsn1ApplicationSpecificParser);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::IAsn1ApplicationSpecificParser, "Org.BouncyCastle.Asn1", "IAsn1ApplicationSpecificParser");
