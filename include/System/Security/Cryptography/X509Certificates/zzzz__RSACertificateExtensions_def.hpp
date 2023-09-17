#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography {
class RSA;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class RSACertificateExtensions;
}
// Type: System.Security.Cryptography.X509Certificates::RSACertificateExtensions
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14534))
// CS Name: System.Security.Cryptography.X509Certificates.RSACertificateExtensions
class CORDL_TYPE RSACertificateExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RSACertificateExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "RSACertificateExtensions", modifiers: " const&", def_value: None }]
constexpr RSACertificateExtensions(RSACertificateExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RSACertificateExtensions", modifiers: "&&", def_value: None }]
constexpr RSACertificateExtensions(RSACertificateExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RSACertificateExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RSACertificateExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RSACertificateExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RSACertificateExtensions& operator=(RSACertificateExtensions&& o) noexcept = default;
  constexpr RSACertificateExtensions& operator=(RSACertificateExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method GetRSAPublicKey addr 0x2680a50 size 0xe4 virtual false final false
static ::System::Security::Cryptography::RSA GetRSAPublicKey(::System::Security::Cryptography::X509Certificates::X509Certificate2 certificate) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::RSACertificateExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::RSACertificateExtensions, "System.Security.Cryptography.X509Certificates", "RSACertificateExtensions");
