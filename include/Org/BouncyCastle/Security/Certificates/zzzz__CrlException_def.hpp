#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Security/zzzz__GeneralSecurityException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security::Certificates {
class CrlException;
}
// Type: Org.BouncyCastle.Security.Certificates::CrlException
namespace Org::BouncyCastle::Security::Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1717))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1738))
// CS Name: Org.BouncyCastle.Security.Certificates.CrlException
class CORDL_TYPE CrlException : public ::Org::BouncyCastle::Security::GeneralSecurityException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~CrlException() = default;

// Ctor Parameters [CppParam { name: "", ty: "CrlException", modifiers: " const&", def_value: None }]
constexpr CrlException(CrlException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CrlException", modifiers: "&&", def_value: None }]
constexpr CrlException(CrlException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CrlException(void* ptr) noexcept : ::Org::BouncyCastle::Security::GeneralSecurityException(ptr) {
}


  constexpr CrlException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CrlException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CrlException& operator=(CrlException&& o) noexcept = default;
  constexpr CrlException& operator=(CrlException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit CrlException() ;

/// @brief Method .ctor addr 0x1091860 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "msg", ty: "::StringW", modifiers: "", def_value: None }]
explicit CrlException(::StringW msg) ;

/// @brief Method .ctor addr 0x1091868 size 0x8 virtual false final false
 void _ctor(::StringW msg) ;

// Ctor Parameters [CppParam { name: "msg", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "e", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit CrlException(::StringW msg, ::System::Exception e) ;

/// @brief Method .ctor addr 0x1091870 size 0x8 virtual false final false
 void _ctor(::StringW msg, ::System::Exception e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security::Certificates
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Security::Certificates::CrlException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::Certificates::CrlException, "Org.BouncyCastle.Security.Certificates", "CrlException");
