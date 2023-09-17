#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class IssuerAndSerialNumber;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::IssuerAndSerialNumber
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(237))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.IssuerAndSerialNumber
class CORDL_TYPE IssuerAndSerialNumber : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~IssuerAndSerialNumber() = default;

// Ctor Parameters [CppParam { name: "", ty: "IssuerAndSerialNumber", modifiers: " const&", def_value: None }]
constexpr IssuerAndSerialNumber(IssuerAndSerialNumber const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IssuerAndSerialNumber", modifiers: "&&", def_value: None }]
constexpr IssuerAndSerialNumber(IssuerAndSerialNumber&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IssuerAndSerialNumber(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr IssuerAndSerialNumber& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IssuerAndSerialNumber& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IssuerAndSerialNumber& operator=(IssuerAndSerialNumber&& o) noexcept = default;
  constexpr IssuerAndSerialNumber& operator=(IssuerAndSerialNumber const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::Org::BouncyCastle::Asn1::X509::X509Name value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::X509Name __get_name() const;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_certSerialNumber, put=__set_certSerialNumber))  certSerialNumber;

constexpr void __set_certSerialNumber(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_certSerialNumber() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=get_Name))  Name;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_CertificateSerialNumber))  CertificateSerialNumber;


// Methods

/// @brief Method GetInstance addr 0xefa8cc size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit IssuerAndSerialNumber(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xefaa54 size 0x130 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "name", ty: "::Org::BouncyCastle::Asn1::X509::X509Name", modifiers: "", def_value: None }, CppParam { name: "certSerialNumber", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit IssuerAndSerialNumber(::Org::BouncyCastle::Asn1::X509::X509Name name, ::Org::BouncyCastle::Math::BigInteger certSerialNumber) ;

/// @brief Method .ctor addr 0xefab84 size 0x84 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name name, ::Org::BouncyCastle::Math::BigInteger certSerialNumber) ;

// Ctor Parameters [CppParam { name: "name", ty: "::Org::BouncyCastle::Asn1::X509::X509Name", modifiers: "", def_value: None }, CppParam { name: "certSerialNumber", ty: "::Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }]
explicit IssuerAndSerialNumber(::Org::BouncyCastle::Asn1::X509::X509Name name, ::Org::BouncyCastle::Asn1::DerInteger certSerialNumber) ;

/// @brief Method .ctor addr 0xefac08 size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name name, ::Org::BouncyCastle::Asn1::DerInteger certSerialNumber) ;

/// @brief Method get_Name addr 0xefac34 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::X509Name get_Name() ;

/// @brief Method get_CertificateSerialNumber addr 0xefac3c size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerInteger get_CertificateSerialNumber() ;

/// @brief Method ToAsn1Object addr 0xefac44 size 0xf0 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::IssuerAndSerialNumber, "Org.BouncyCastle.Asn1.Pkcs", "IssuerAndSerialNumber");
