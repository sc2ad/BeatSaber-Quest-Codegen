#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Collection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
// Forward declare root types
namespace System::Net::Security {
class CertificateHelper;
}
// Type: System.Net.Security::CertificateHelper
namespace System::Net::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8212))
// CS Name: System.Net.Security.CertificateHelper
class CORDL_TYPE CertificateHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CertificateHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateHelper", modifiers: " const&", def_value: None }]
constexpr CertificateHelper(CertificateHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateHelper", modifiers: "&&", def_value: None }]
constexpr CertificateHelper(CertificateHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificateHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CertificateHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificateHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificateHelper& operator=(CertificateHelper&& o) noexcept = default;
  constexpr CertificateHelper& operator=(CertificateHelper const& o) noexcept = default;
                


// Methods

/// @brief Method GetEligibleClientCertificate addr 0x276c724 size 0x1ac virtual false final false
static System::Security::Cryptography::X509Certificates::X509Certificate2 GetEligibleClientCertificate() ;

/// @brief Method GetEligibleClientCertificate addr 0x276ca54 size 0x94 virtual false final false
static System::Security::Cryptography::X509Certificates::X509Certificate2 GetEligibleClientCertificate(System::Security::Cryptography::X509Certificates::X509CertificateCollection candidateCerts) ;

/// @brief Method GetEligibleClientCertificate addr 0x276c8d0 size 0x184 virtual false final false
static System::Security::Cryptography::X509Certificates::X509Certificate2 GetEligibleClientCertificate(System::Security::Cryptography::X509Certificates::X509Certificate2Collection candidateCerts) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Security
NEED_NO_BOX(System::Net::Security::CertificateHelper);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Security::CertificateHelper, "System.Net.Security", "CertificateHelper");
