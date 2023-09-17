#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObjectParser;
}
// Type: Org.BouncyCastle.Asn1::Asn1TaggedObjectParser
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(468))
// CS Name: Org.BouncyCastle.Asn1.Asn1TaggedObjectParser
class CORDL_TYPE Asn1TaggedObjectParser : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Asn1::IAsn1Convertible
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Convertible() const noexcept;

~Asn1TaggedObjectParser() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Asn1TaggedObjectParser(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_TagNo))  TagNo;


// Methods

/// @brief Method get_TagNo addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_TagNo() ;

/// @brief Method GetObjectParser addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Asn1::IAsn1Convertible GetObjectParser(int32_t tag, bool isExplicit) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1TaggedObjectParser, "Org.BouncyCastle.Asn1", "Asn1TaggedObjectParser");
