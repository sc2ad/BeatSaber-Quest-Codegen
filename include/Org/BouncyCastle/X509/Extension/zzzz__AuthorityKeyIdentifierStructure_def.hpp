#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AuthorityKeyIdentifier_def.hpp"
namespace {
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Extension {
class AuthorityKeyIdentifierStructure;
}
// Type: Org.BouncyCastle.X509.Extension::AuthorityKeyIdentifierStructure
namespace Org::BouncyCastle::X509::Extension {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(345))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1839))
// CS Name: Org.BouncyCastle.X509.Extension.AuthorityKeyIdentifierStructure
class CORDL_TYPE AuthorityKeyIdentifierStructure : public ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~AuthorityKeyIdentifierStructure() = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthorityKeyIdentifierStructure", modifiers: " const&", def_value: None }]
constexpr AuthorityKeyIdentifierStructure(AuthorityKeyIdentifierStructure const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthorityKeyIdentifierStructure", modifiers: "&&", def_value: None }]
constexpr AuthorityKeyIdentifierStructure(AuthorityKeyIdentifierStructure&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AuthorityKeyIdentifierStructure(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier(ptr) {
}


  constexpr AuthorityKeyIdentifierStructure& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AuthorityKeyIdentifierStructure& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AuthorityKeyIdentifierStructure& operator=(AuthorityKeyIdentifierStructure&& o) noexcept = default;
  constexpr AuthorityKeyIdentifierStructure& operator=(AuthorityKeyIdentifierStructure const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "encodedValue", ty: "::Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }]
explicit AuthorityKeyIdentifierStructure(::Org::BouncyCastle::Asn1::Asn1OctetString encodedValue) ;

/// @brief Method .ctor addr 0x10e3b34 size 0x94 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1OctetString encodedValue) ;

/// @brief Method FromCertificate addr 0x10e3bec size 0x404 virtual false final false
static ::Org::BouncyCastle::Asn1::Asn1Sequence FromCertificate(::Org::BouncyCastle::X509::X509Certificate certificate) ;

/// @brief Method FromKey addr 0x10e3ff0 size 0x1a0 virtual false final false
static ::Org::BouncyCastle::Asn1::Asn1Sequence FromKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey) ;

// Ctor Parameters [CppParam { name: "certificate", ty: "::Org::BouncyCastle::X509::X509Certificate", modifiers: "", def_value: None }]
explicit AuthorityKeyIdentifierStructure(::Org::BouncyCastle::X509::X509Certificate certificate) ;

/// @brief Method .ctor addr 0x10e4190 size 0x24 virtual false final false
 void _ctor(::Org::BouncyCastle::X509::X509Certificate certificate) ;

// Ctor Parameters [CppParam { name: "pubKey", ty: "::Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }]
explicit AuthorityKeyIdentifierStructure(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey) ;

/// @brief Method .ctor addr 0x10e41b4 size 0x24 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509::Extension
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Extension::AuthorityKeyIdentifierStructure, "Org.BouncyCastle.X509.Extension", "AuthorityKeyIdentifierStructure");
