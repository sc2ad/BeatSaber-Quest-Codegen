#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class AuthorityKeyIdentifier;
}
// Type: Org.BouncyCastle.Asn1.X509::AuthorityKeyIdentifier
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(345))
// CS Name: Org.BouncyCastle.Asn1.X509.AuthorityKeyIdentifier
class CORDL_TYPE AuthorityKeyIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~AuthorityKeyIdentifier() = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthorityKeyIdentifier", modifiers: " const&", def_value: None }]
constexpr AuthorityKeyIdentifier(AuthorityKeyIdentifier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthorityKeyIdentifier", modifiers: "&&", def_value: None }]
constexpr AuthorityKeyIdentifier(AuthorityKeyIdentifier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AuthorityKeyIdentifier(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr AuthorityKeyIdentifier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AuthorityKeyIdentifier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AuthorityKeyIdentifier& operator=(AuthorityKeyIdentifier&& o) noexcept = default;
  constexpr AuthorityKeyIdentifier& operator=(AuthorityKeyIdentifier const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_keyidentifier, put=__set_keyidentifier))  keyidentifier;

constexpr void __set_keyidentifier(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString __get_keyidentifier() const;

 ::Org::BouncyCastle::Asn1::X509::GeneralNames __declspec(property(get=__get_certissuer, put=__set_certissuer))  certissuer;

constexpr void __set_certissuer(::Org::BouncyCastle::Asn1::X509::GeneralNames value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames __get_certissuer() const;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_certserno, put=__set_certserno))  certserno;

constexpr void __set_certserno(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_certserno() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::GeneralNames __declspec(property(get=get_AuthorityCertIssuer))  AuthorityCertIssuer;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_AuthorityCertSerialNumber))  AuthorityCertSerialNumber;


// Methods

/// @brief Method GetInstance addr 0xff8904 size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xff891c size 0xf0 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method FromExtensions addr 0xff8db4 size 0x68 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit AuthorityKeyIdentifier(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xff8a0c size 0x3a8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "spki", ty: "::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo", modifiers: "", def_value: None }]
explicit AuthorityKeyIdentifier(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo spki) ;

/// @brief Method .ctor addr 0xff8e1c size 0xc virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo spki) ;

// Ctor Parameters [CppParam { name: "spki", ty: "::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::Org::BouncyCastle::Asn1::X509::GeneralNames", modifiers: "", def_value: None }, CppParam { name: "serialNumber", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit AuthorityKeyIdentifier(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo spki, ::Org::BouncyCastle::Asn1::X509::GeneralNames name, ::Org::BouncyCastle::Math::BigInteger serialNumber) ;

/// @brief Method .ctor addr 0xff8e28 size 0x288 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo spki, ::Org::BouncyCastle::Asn1::X509::GeneralNames name, ::Org::BouncyCastle::Math::BigInteger serialNumber) ;

// Ctor Parameters [CppParam { name: "name", ty: "::Org::BouncyCastle::Asn1::X509::GeneralNames", modifiers: "", def_value: None }, CppParam { name: "serialNumber", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit AuthorityKeyIdentifier(::Org::BouncyCastle::Asn1::X509::GeneralNames name, ::Org::BouncyCastle::Math::BigInteger serialNumber) ;

/// @brief Method .ctor addr 0xff90b0 size 0x10 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames name, ::Org::BouncyCastle::Math::BigInteger serialNumber) ;

// Ctor Parameters [CppParam { name: "keyIdentifier", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit AuthorityKeyIdentifier(::ArrayW<uint8_t> keyIdentifier) ;

/// @brief Method .ctor addr 0xff9198 size 0xc virtual false final false
 void _ctor(::ArrayW<uint8_t> keyIdentifier) ;

// Ctor Parameters [CppParam { name: "keyIdentifier", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::Org::BouncyCastle::Asn1::X509::GeneralNames", modifiers: "", def_value: None }, CppParam { name: "serialNumber", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit AuthorityKeyIdentifier(::ArrayW<uint8_t> keyIdentifier, ::Org::BouncyCastle::Asn1::X509::GeneralNames name, ::Org::BouncyCastle::Math::BigInteger serialNumber) ;

/// @brief Method .ctor addr 0xff90c0 size 0xd8 virtual false final false
 void _ctor(::ArrayW<uint8_t> keyIdentifier, ::Org::BouncyCastle::Asn1::X509::GeneralNames name, ::Org::BouncyCastle::Math::BigInteger serialNumber) ;

/// @brief Method GetKeyIdentifier addr 0xff91a4 size 0x18 virtual false final false
 ::ArrayW<uint8_t> GetKeyIdentifier() ;

/// @brief Method get_AuthorityCertIssuer addr 0xff91bc size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::GeneralNames get_AuthorityCertIssuer() ;

/// @brief Method get_AuthorityCertSerialNumber addr 0xff91c4 size 0x14 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_AuthorityCertSerialNumber() ;

/// @brief Method ToAsn1Object addr 0xff91d8 size 0xd8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method ToString addr 0xff92b0 size 0xcc virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::AuthorityKeyIdentifier, "Org.BouncyCastle.Asn1.X509", "AuthorityKeyIdentifier");
