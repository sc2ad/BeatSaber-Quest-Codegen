#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Cms {
class DefaultSignatureAlgorithmIdentifierFinder;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class CertStatus;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Cms {
class DefaultDigestAlgorithmIdentifierFinder;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Cmp {
class CertificateStatus;
}
// Type: Org.BouncyCastle.Cmp::CertificateStatus
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(603))
// CS Name: Org.BouncyCastle.Cmp.CertificateStatus
class CORDL_TYPE CertificateStatus : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CertificateStatus() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateStatus", modifiers: " const&", def_value: None }]
constexpr CertificateStatus(CertificateStatus const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateStatus", modifiers: "&&", def_value: None }]
constexpr CertificateStatus(CertificateStatus&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificateStatus(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CertificateStatus& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificateStatus& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificateStatus& operator=(CertificateStatus&& o) noexcept = default;
  constexpr CertificateStatus& operator=(CertificateStatus const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder __declspec(property(get=__get_sigAlgFinder, put=__set_sigAlgFinder))  sigAlgFinder;

static void __set_sigAlgFinder(Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder value) ;

static Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder __get_sigAlgFinder() ;

 Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder __declspec(property(get=__get_digestAlgFinder, put=__set_digestAlgFinder))  digestAlgFinder;

constexpr void __set_digestAlgFinder(Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder value) ;

constexpr Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder __get_digestAlgFinder() const;

 Org::BouncyCastle::Asn1::Cmp::CertStatus __declspec(property(get=__get_certStatus, put=__set_certStatus))  certStatus;

constexpr void __set_certStatus(Org::BouncyCastle::Asn1::Cmp::CertStatus value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::CertStatus __get_certStatus() const;


// Properties

 Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo __declspec(property(get=get_PkiStatusInfo))  PkiStatusInfo;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_CertRequestId))  CertRequestId;


// Methods

static Org::BouncyCastle::Cmp::CertificateStatus New_ctor(Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder digestAlgFinder, Org::BouncyCastle::Asn1::Cmp::CertStatus certStatus) ;

/// @brief Method .ctor addr 0x114b35c size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder digestAlgFinder, Org::BouncyCastle::Asn1::Cmp::CertStatus certStatus) ;

/// @brief Method get_PkiStatusInfo addr 0x114bae8 size 0x20 virtual false final false
 Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo get_PkiStatusInfo() ;

/// @brief Method get_CertRequestId addr 0x114bb08 size 0x2c virtual false final false
 Org::BouncyCastle::Math::BigInteger get_CertRequestId() ;

/// @brief Method IsVerified addr 0x114bb34 size 0x1f0 virtual false final false
 bool IsVerified(Org::BouncyCastle::X509::X509Certificate cert) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cmp
NEED_NO_BOX(Org::BouncyCastle::Cmp::CertificateStatus);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cmp::CertificateStatus, "Org.BouncyCastle.Cmp", "CertificateStatus");
