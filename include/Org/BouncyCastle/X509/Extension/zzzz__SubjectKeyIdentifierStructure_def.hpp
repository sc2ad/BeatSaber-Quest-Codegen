#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__SubjectKeyIdentifier_def.hpp"
namespace {
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Extension {
class SubjectKeyIdentifierStructure;
}
// Type: Org.BouncyCastle.X509.Extension::SubjectKeyIdentifierStructure
namespace Org::BouncyCastle::X509::Extension {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(383))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1840))
// CS Name: Org.BouncyCastle.X509.Extension.SubjectKeyIdentifierStructure
class CORDL_TYPE SubjectKeyIdentifierStructure : public ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SubjectKeyIdentifierStructure() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubjectKeyIdentifierStructure", modifiers: " const&", def_value: None }]
constexpr SubjectKeyIdentifierStructure(SubjectKeyIdentifierStructure const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubjectKeyIdentifierStructure", modifiers: "&&", def_value: None }]
constexpr SubjectKeyIdentifierStructure(SubjectKeyIdentifierStructure&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubjectKeyIdentifierStructure(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier(ptr) {
}


  constexpr SubjectKeyIdentifierStructure& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubjectKeyIdentifierStructure& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubjectKeyIdentifierStructure& operator=(SubjectKeyIdentifierStructure&& o) noexcept = default;
  constexpr SubjectKeyIdentifierStructure& operator=(SubjectKeyIdentifierStructure const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "encodedValue", ty: "::Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }]
explicit SubjectKeyIdentifierStructure(::Org::BouncyCastle::Asn1::Asn1OctetString encodedValue) ;

/// @brief Method .ctor addr 0x10e41d8 size 0x94 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1OctetString encodedValue) ;

/// @brief Method FromPublicKey addr 0x10e426c size 0x1bc virtual false final false
static ::Org::BouncyCastle::Asn1::Asn1OctetString FromPublicKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey) ;

// Ctor Parameters [CppParam { name: "pubKey", ty: "::Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }]
explicit SubjectKeyIdentifierStructure(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey) ;

/// @brief Method .ctor addr 0x10e4428 size 0x24 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509::Extension
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Extension::SubjectKeyIdentifierStructure, "Org.BouncyCastle.X509.Extension", "SubjectKeyIdentifierStructure");
