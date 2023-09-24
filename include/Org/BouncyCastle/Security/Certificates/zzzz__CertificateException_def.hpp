#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Security/zzzz__GeneralSecurityException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security::Certificates {
class CertificateException;
}
// Type: Org.BouncyCastle.Security.Certificates::CertificateException
namespace Org::BouncyCastle::Security::Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1717))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1733))
// CS Name: Org.BouncyCastle.Security.Certificates.CertificateException
class CORDL_TYPE CertificateException : public Org::BouncyCastle::Security::GeneralSecurityException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~CertificateException() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateException", modifiers: " const&", def_value: None }]
constexpr CertificateException(CertificateException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateException", modifiers: "&&", def_value: None }]
constexpr CertificateException(CertificateException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificateException(void* ptr) noexcept : Org::BouncyCastle::Security::GeneralSecurityException(ptr) {
}


  constexpr CertificateException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificateException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificateException& operator=(CertificateException&& o) noexcept = default;
  constexpr CertificateException& operator=(CertificateException const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Security::Certificates::CertificateException New_ctor() ;

/// @brief Method .ctor addr 0x10917e8 size 0x8 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Security::Certificates::CertificateException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x10917f0 size 0x8 virtual false final false
 void _ctor(::StringW message) ;

static Org::BouncyCastle::Security::Certificates::CertificateException New_ctor(::StringW message, System::Exception exception) ;

/// @brief Method .ctor addr 0x10917f8 size 0x8 virtual false final false
 void _ctor(::StringW message, System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security::Certificates
NEED_NO_BOX(Org::BouncyCastle::Security::Certificates::CertificateException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::Certificates::CertificateException, "Org.BouncyCastle.Security.Certificates", "CertificateException");
