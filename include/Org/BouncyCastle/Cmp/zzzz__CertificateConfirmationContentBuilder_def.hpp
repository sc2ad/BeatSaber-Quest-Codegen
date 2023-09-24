#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Cms {
class DefaultSignatureAlgorithmIdentifierFinder;
}
namespace Org::BouncyCastle::Cmp {
class CertificateConfirmationContent;
}
namespace Org::BouncyCastle::Cms {
class DefaultDigestAlgorithmIdentifierFinder;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Cmp {
class CertificateConfirmationContentBuilder;
}
// Type: Org.BouncyCastle.Cmp::CertificateConfirmationContentBuilder
namespace Org::BouncyCastle::Cmp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(602))
// CS Name: Org.BouncyCastle.Cmp.CertificateConfirmationContentBuilder
class CORDL_TYPE CertificateConfirmationContentBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CertificateConfirmationContentBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateConfirmationContentBuilder", modifiers: " const&", def_value: None }]
constexpr CertificateConfirmationContentBuilder(CertificateConfirmationContentBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateConfirmationContentBuilder", modifiers: "&&", def_value: None }]
constexpr CertificateConfirmationContentBuilder(CertificateConfirmationContentBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificateConfirmationContentBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CertificateConfirmationContentBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificateConfirmationContentBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificateConfirmationContentBuilder& operator=(CertificateConfirmationContentBuilder&& o) noexcept = default;
  constexpr CertificateConfirmationContentBuilder& operator=(CertificateConfirmationContentBuilder const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder __declspec(property(get=__get_sigAlgFinder, put=__set_sigAlgFinder))  sigAlgFinder;

static void __set_sigAlgFinder(Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder value) ;

static Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder __get_sigAlgFinder() ;

 Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder __declspec(property(get=__get_digestAlgFinder, put=__set_digestAlgFinder))  digestAlgFinder;

constexpr void __set_digestAlgFinder(Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder value) ;

constexpr Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder __get_digestAlgFinder() const;

 System::Collections::IList __declspec(property(get=__get_acceptedCerts, put=__set_acceptedCerts))  acceptedCerts;

constexpr void __set_acceptedCerts(System::Collections::IList value) ;

constexpr System::Collections::IList __get_acceptedCerts() const;

 System::Collections::IList __declspec(property(get=__get_acceptedReqIds, put=__set_acceptedReqIds))  acceptedReqIds;

constexpr void __set_acceptedReqIds(System::Collections::IList value) ;

constexpr System::Collections::IList __get_acceptedReqIds() const;


// Methods

static Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder New_ctor() ;

/// @brief Method .ctor addr 0x114b388 size 0x64 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder New_ctor(Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder digestAlgFinder) ;

/// @brief Method .ctor addr 0x114b3ec size 0x84 virtual false final false
 void _ctor(Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder digestAlgFinder) ;

/// @brief Method AddAcceptedCertificate addr 0x114b470 size 0x128 virtual false final false
 Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder AddAcceptedCertificate(Org::BouncyCastle::X509::X509Certificate certHolder, Org::BouncyCastle::Math::BigInteger certReqId) ;

/// @brief Method Build addr 0x114b598 size 0x470 virtual false final false
 Org::BouncyCastle::Cmp::CertificateConfirmationContent Build() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cmp
NEED_NO_BOX(Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder, "Org.BouncyCastle.Cmp", "CertificateConfirmationContentBuilder");
