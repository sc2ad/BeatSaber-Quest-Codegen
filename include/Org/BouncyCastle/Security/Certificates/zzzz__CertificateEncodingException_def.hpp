#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Security/Certificates/zzzz__CertificateException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security::Certificates {
class CertificateEncodingException;
}
// Type: Org.BouncyCastle.Security.Certificates::CertificateEncodingException
namespace Org::BouncyCastle::Security::Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1733))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1734))
// CS Name: Org.BouncyCastle.Security.Certificates.CertificateEncodingException
class CORDL_TYPE CertificateEncodingException : public Org::BouncyCastle::Security::Certificates::CertificateException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~CertificateEncodingException() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateEncodingException", modifiers: " const&", def_value: None }]
constexpr CertificateEncodingException(CertificateEncodingException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateEncodingException", modifiers: "&&", def_value: None }]
constexpr CertificateEncodingException(CertificateEncodingException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificateEncodingException(void* ptr) noexcept : Org::BouncyCastle::Security::Certificates::CertificateException(ptr) {
}


  constexpr CertificateEncodingException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificateEncodingException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificateEncodingException& operator=(CertificateEncodingException&& o) noexcept = default;
  constexpr CertificateEncodingException& operator=(CertificateEncodingException const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Security::Certificates::CertificateEncodingException New_ctor() ;

/// @brief Method .ctor addr 0x1091800 size 0x8 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Security::Certificates::CertificateEncodingException New_ctor(::StringW msg) ;

/// @brief Method .ctor addr 0x1091808 size 0x8 virtual false final false
 void _ctor(::StringW msg) ;

static Org::BouncyCastle::Security::Certificates::CertificateEncodingException New_ctor(::StringW msg, System::Exception e) ;

/// @brief Method .ctor addr 0x1091810 size 0x8 virtual false final false
 void _ctor(::StringW msg, System::Exception e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security::Certificates
NEED_NO_BOX(Org::BouncyCastle::Security::Certificates::CertificateEncodingException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::Certificates::CertificateEncodingException, "Org.BouncyCastle.Security.Certificates", "CertificateEncodingException");
