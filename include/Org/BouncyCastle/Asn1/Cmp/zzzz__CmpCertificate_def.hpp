#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AttributeCertificate;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CmpCertificate;
}
// Type: Org.BouncyCastle.Asn1.Cmp::CmpCertificate
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(19))
// CS Name: Org.BouncyCastle.Asn1.Cmp.CmpCertificate
class CORDL_TYPE CmpCertificate : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Choice
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CmpCertificate() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmpCertificate", modifiers: " const&", def_value: None }]
constexpr CmpCertificate(CmpCertificate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmpCertificate", modifiers: "&&", def_value: None }]
constexpr CmpCertificate(CmpCertificate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmpCertificate(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CmpCertificate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmpCertificate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmpCertificate& operator=(CmpCertificate&& o) noexcept = default;
  constexpr CmpCertificate& operator=(CmpCertificate const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::X509CertificateStructure __declspec(property(get=__get_x509v3PKCert, put=__set_x509v3PKCert))  x509v3PKCert;

constexpr void __set_x509v3PKCert(Org::BouncyCastle::Asn1::X509::X509CertificateStructure value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509CertificateStructure __get_x509v3PKCert() const;

 Org::BouncyCastle::Asn1::X509::AttributeCertificate __declspec(property(get=__get_x509v2AttrCert, put=__set_x509v2AttrCert))  x509v2AttrCert;

constexpr void __set_x509v2AttrCert(Org::BouncyCastle::Asn1::X509::AttributeCertificate value) ;

constexpr Org::BouncyCastle::Asn1::X509::AttributeCertificate __get_x509v2AttrCert() const;


// Properties

 bool __declspec(property(get=get_IsX509v3PKCert))  IsX509v3PKCert;

 Org::BouncyCastle::Asn1::X509::X509CertificateStructure __declspec(property(get=get_X509v3PKCert))  X509v3PKCert;

 Org::BouncyCastle::Asn1::X509::AttributeCertificate __declspec(property(get=get_X509v2AttrCert))  X509v2AttrCert;


// Methods

static Org::BouncyCastle::Asn1::Cmp::CmpCertificate New_ctor(Org::BouncyCastle::Asn1::X509::AttributeCertificate x509v2AttrCert) ;

/// @brief Method .ctor addr 0xdd936c size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AttributeCertificate x509v2AttrCert) ;

static Org::BouncyCastle::Asn1::Cmp::CmpCertificate New_ctor(Org::BouncyCastle::Asn1::X509::X509CertificateStructure x509v3PKCert) ;

/// @brief Method .ctor addr 0xdd9394 size 0xa4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::X509CertificateStructure x509v3PKCert) ;

/// @brief Method GetInstance addr 0xdd6dd8 size 0x1dc virtual false final false
static Org::BouncyCastle::Asn1::Cmp::CmpCertificate GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_IsX509v3PKCert addr 0xdd9438 size 0x10 virtual true final false
 bool get_IsX509v3PKCert() ;

/// @brief Method get_X509v3PKCert addr 0xdd9448 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::X509CertificateStructure get_X509v3PKCert() ;

/// @brief Method get_X509v2AttrCert addr 0xdd9450 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::AttributeCertificate get_X509v2AttrCert() ;

/// @brief Method ToAsn1Object addr 0xdd9458 size 0x90 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::CmpCertificate);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::CmpCertificate, "Org.BouncyCastle.Asn1.Cmp", "CmpCertificate");
