#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
}
// Type: Org.BouncyCastle.Asn1.X509::IssuerSerial
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(366))
// CS Name: Org.BouncyCastle.Asn1.X509.IssuerSerial
class CORDL_TYPE IssuerSerial : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~IssuerSerial() = default;

// Ctor Parameters [CppParam { name: "", ty: "IssuerSerial", modifiers: " const&", def_value: None }]
constexpr IssuerSerial(IssuerSerial const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IssuerSerial", modifiers: "&&", def_value: None }]
constexpr IssuerSerial(IssuerSerial&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IssuerSerial(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr IssuerSerial& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IssuerSerial& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IssuerSerial& operator=(IssuerSerial&& o) noexcept = default;
  constexpr IssuerSerial& operator=(IssuerSerial const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::GeneralNames __declspec(property(get=__get_issuer, put=__set_issuer))  issuer;

constexpr void __set_issuer(Org::BouncyCastle::Asn1::X509::GeneralNames value) ;

constexpr Org::BouncyCastle::Asn1::X509::GeneralNames __get_issuer() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_serial, put=__set_serial))  serial;

constexpr void __set_serial(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_serial() const;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_issuerUid, put=__set_issuerUid))  issuerUid;

constexpr void __set_issuerUid(Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr Org::BouncyCastle::Asn1::DerBitString __get_issuerUid() const;


// Properties

 Org::BouncyCastle::Asn1::X509::GeneralNames __declspec(property(get=get_Issuer))  Issuer;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Serial))  Serial;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=get_IssuerUid))  IssuerUid;


// Methods

/// @brief Method GetInstance addr 0x1106d90 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::X509::IssuerSerial GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0x1106054 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::X509::IssuerSerial GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit IssuerSerial(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x1106f18 size 0x1c0 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "issuer", ty: "Org::BouncyCastle::Asn1::X509::GeneralNames", modifiers: "", def_value: None }, CppParam { name: "serial", ty: "Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }]
explicit IssuerSerial(Org::BouncyCastle::Asn1::X509::GeneralNames issuer, Org::BouncyCastle::Asn1::DerInteger serial) ;

/// @brief Method .ctor addr 0x11070d8 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::GeneralNames issuer, Org::BouncyCastle::Asn1::DerInteger serial) ;

/// @brief Method get_Issuer addr 0x1107104 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::GeneralNames get_Issuer() ;

/// @brief Method get_Serial addr 0x110710c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_Serial() ;

/// @brief Method get_IssuerUid addr 0x1107114 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerBitString get_IssuerUid() ;

/// @brief Method ToAsn1Object addr 0x110711c size 0x174 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::IssuerSerial);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::IssuerSerial, "Org.BouncyCastle.Asn1.X509", "IssuerSerial");
