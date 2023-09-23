#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
// Forward declare root types
namespace Mono::Unity {
class CertHelper;
}
// Type: Mono.Unity::CertHelper
namespace Mono::Unity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7607))
// CS Name: Mono.Unity.CertHelper
class CORDL_TYPE CertHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CertHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertHelper", modifiers: " const&", def_value: None }]
constexpr CertHelper(CertHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertHelper", modifiers: "&&", def_value: None }]
constexpr CertHelper(CertHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CertHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertHelper& operator=(CertHelper&& o) noexcept = default;
  constexpr CertHelper& operator=(CertHelper const& o) noexcept = default;
                


// Methods

/// @brief Method AddCertificatesToNativeChain addr 0x2685c8c size 0x1d8 virtual false final false
static void AddCertificatesToNativeChain(void* nativeCertificateChain, System::Security::Cryptography::X509Certificates::X509CertificateCollection certificates, void* errorState) ;

/// @brief Method AddCertificateToNativeChain addr 0x2685e64 size 0x1c0 virtual false final false
static void AddCertificateToNativeChain(void* nativeCertificateChain, System::Security::Cryptography::X509Certificates::X509Certificate certificate, void* errorState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Unity
NEED_NO_BOX(Mono::Unity::CertHelper);
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::CertHelper, "Mono.Unity", "CertHelper");
