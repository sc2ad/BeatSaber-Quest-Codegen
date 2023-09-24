#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Security/Certificates/zzzz__CertificateException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security::Certificates {
class CertificateParsingException;
}
// Type: Org.BouncyCastle.Security.Certificates::CertificateParsingException
namespace Org::BouncyCastle::Security::Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1733))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1737))
// CS Name: Org.BouncyCastle.Security.Certificates.CertificateParsingException
class CORDL_TYPE CertificateParsingException : public Org::BouncyCastle::Security::Certificates::CertificateException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~CertificateParsingException() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateParsingException", modifiers: " const&", def_value: None }]
constexpr CertificateParsingException(CertificateParsingException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateParsingException", modifiers: "&&", def_value: None }]
constexpr CertificateParsingException(CertificateParsingException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificateParsingException(void* ptr) noexcept : Org::BouncyCastle::Security::Certificates::CertificateException(ptr) {
}


  constexpr CertificateParsingException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificateParsingException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificateParsingException& operator=(CertificateParsingException&& o) noexcept = default;
  constexpr CertificateParsingException& operator=(CertificateParsingException const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Security::Certificates::CertificateParsingException New_ctor() ;

/// @brief Method .ctor addr 0x1091848 size 0x8 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Security::Certificates::CertificateParsingException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x1091850 size 0x8 virtual false final false
 void _ctor(::StringW message) ;

static Org::BouncyCastle::Security::Certificates::CertificateParsingException New_ctor(::StringW message, System::Exception exception) ;

/// @brief Method .ctor addr 0x1091858 size 0x8 virtual false final false
 void _ctor(::StringW message, System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security::Certificates
NEED_NO_BOX(Org::BouncyCastle::Security::Certificates::CertificateParsingException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::Certificates::CertificateParsingException, "Org.BouncyCastle.Security.Certificates", "CertificateParsingException");
