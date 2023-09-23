#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class CertID;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Ocsp {
class CertificateID;
}
// Type: Org.BouncyCastle.Ocsp::CertificateID
namespace Org::BouncyCastle::Ocsp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1610))
// CS Name: Org.BouncyCastle.Ocsp.CertificateID
class CORDL_TYPE CertificateID : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CertificateID() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateID", modifiers: " const&", def_value: None }]
constexpr CertificateID(CertificateID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateID", modifiers: "&&", def_value: None }]
constexpr CertificateID(CertificateID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificateID(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CertificateID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificateID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificateID& operator=(CertificateID&& o) noexcept = default;
  constexpr CertificateID& operator=(CertificateID const& o) noexcept = default;
                


// Fields

/// @brief Field HashSha1 offset 0
static constexpr ::ConstString  HashSha1{u"1.3.14.3.2.26"};

 Org::BouncyCastle::Asn1::Ocsp::CertID __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(Org::BouncyCastle::Asn1::Ocsp::CertID value) ;

constexpr Org::BouncyCastle::Asn1::Ocsp::CertID __get_id() const;


// Properties

 ::StringW __declspec(property(get=get_HashAlgOid))  HashAlgOid;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_SerialNumber))  SerialNumber;


// Methods

// Ctor Parameters [CppParam { name: "id", ty: "Org::BouncyCastle::Asn1::Ocsp::CertID", modifiers: "", def_value: None }]
explicit CertificateID(Org::BouncyCastle::Asn1::Ocsp::CertID id) ;

/// @brief Method .ctor addr 0x1012c40 size 0x78 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Ocsp::CertID id) ;

// Ctor Parameters [CppParam { name: "hashAlgorithm", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "issuerCert", ty: "Org::BouncyCastle::X509::X509Certificate", modifiers: "", def_value: None }, CppParam { name: "serialNumber", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit CertificateID(::StringW hashAlgorithm, Org::BouncyCastle::X509::X509Certificate issuerCert, Org::BouncyCastle::Math::BigInteger serialNumber) ;

/// @brief Method .ctor addr 0x1012cb8 size 0x130 virtual false final false
 void _ctor(::StringW hashAlgorithm, Org::BouncyCastle::X509::X509Certificate issuerCert, Org::BouncyCastle::Math::BigInteger serialNumber) ;

/// @brief Method get_HashAlgOid addr 0x10130ac size 0x34 virtual false final false
 ::StringW get_HashAlgOid() ;

/// @brief Method GetIssuerNameHash addr 0x10130e0 size 0x28 virtual false final false
 ::ArrayW<uint8_t> GetIssuerNameHash() ;

/// @brief Method GetIssuerKeyHash addr 0x1013108 size 0x28 virtual false final false
 ::ArrayW<uint8_t> GetIssuerKeyHash() ;

/// @brief Method get_SerialNumber addr 0x1013130 size 0x24 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_SerialNumber() ;

/// @brief Method MatchesIssuer addr 0x1013154 size 0x34 virtual false final false
 bool MatchesIssuer(Org::BouncyCastle::X509::X509Certificate issuerCert) ;

/// @brief Method ToAsn1Object addr 0x1013188 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Ocsp::CertID ToAsn1Object() ;

/// @brief Method Equals addr 0x1013190 size 0xdc virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x101326c size 0x2c virtual true final false
 int32_t GetHashCode() ;

/// @brief Method DeriveCertificateID addr 0x1013298 size 0xf4 virtual false final false
static Org::BouncyCastle::Ocsp::CertificateID DeriveCertificateID(Org::BouncyCastle::Ocsp::CertificateID original, Org::BouncyCastle::Math::BigInteger newSerialNumber) ;

/// @brief Method CreateCertID addr 0x1012de8 size 0x2c4 virtual false final false
static Org::BouncyCastle::Asn1::Ocsp::CertID CreateCertID(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier hashAlg, Org::BouncyCastle::X509::X509Certificate issuerCert, Org::BouncyCastle::Asn1::DerInteger serialNumber) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Ocsp::CertificateID);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Ocsp::CertificateID, "Org.BouncyCastle.Ocsp", "CertificateID");
