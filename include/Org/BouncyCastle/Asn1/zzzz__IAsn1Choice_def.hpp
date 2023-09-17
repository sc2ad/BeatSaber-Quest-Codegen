#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
// Type: Org.BouncyCastle.Asn1::IAsn1Choice
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13))
// CS Name: Org.BouncyCastle.Asn1.IAsn1Choice
class CORDL_TYPE IAsn1Choice : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IAsn1Choice() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAsn1Choice(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IAsn1Choice);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IAsn1Choice, "Org.BouncyCastle.Asn1", "IAsn1Choice");
