#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Security/Certificates/zzzz__CertificateException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security::Certificates {
class CertificateNotYetValidException;
}
// Type: Org.BouncyCastle.Security.Certificates::CertificateNotYetValidException
namespace Org::BouncyCastle::Security::Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1733))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1736))
// CS Name: Org.BouncyCastle.Security.Certificates.CertificateNotYetValidException
class CORDL_TYPE CertificateNotYetValidException : public Org::BouncyCastle::Security::Certificates::CertificateException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~CertificateNotYetValidException() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateNotYetValidException", modifiers: " const&", def_value: None }]
constexpr CertificateNotYetValidException(CertificateNotYetValidException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateNotYetValidException", modifiers: "&&", def_value: None }]
constexpr CertificateNotYetValidException(CertificateNotYetValidException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificateNotYetValidException(void* ptr) noexcept : Org::BouncyCastle::Security::Certificates::CertificateException(ptr) {
}


  constexpr CertificateNotYetValidException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificateNotYetValidException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificateNotYetValidException& operator=(CertificateNotYetValidException&& o) noexcept = default;
  constexpr CertificateNotYetValidException& operator=(CertificateNotYetValidException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit CertificateNotYetValidException() ;

/// @brief Method .ctor addr 0x1091830 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit CertificateNotYetValidException(::StringW message) ;

/// @brief Method .ctor addr 0x1091838 size 0x8 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "exception", ty: "System::Exception", modifiers: "", def_value: None }]
explicit CertificateNotYetValidException(::StringW message, System::Exception exception) ;

/// @brief Method .ctor addr 0x1091840 size 0x8 virtual false final false
 void _ctor(::StringW message, System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security::Certificates
NEED_NO_BOX(Org::BouncyCastle::Security::Certificates::CertificateNotYetValidException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::Certificates::CertificateNotYetValidException, "Org.BouncyCastle.Security.Certificates", "CertificateNotYetValidException");
