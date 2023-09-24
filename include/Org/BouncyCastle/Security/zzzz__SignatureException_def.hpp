#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Security/zzzz__GeneralSecurityException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class SignatureException;
}
// Type: Org.BouncyCastle.Security::SignatureException
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1717))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1758))
// CS Name: Org.BouncyCastle.Security.SignatureException
class CORDL_TYPE SignatureException : public Org::BouncyCastle::Security::GeneralSecurityException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~SignatureException() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureException", modifiers: " const&", def_value: None }]
constexpr SignatureException(SignatureException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignatureException", modifiers: "&&", def_value: None }]
constexpr SignatureException(SignatureException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignatureException(void* ptr) noexcept : Org::BouncyCastle::Security::GeneralSecurityException(ptr) {
}


  constexpr SignatureException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignatureException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignatureException& operator=(SignatureException&& o) noexcept = default;
  constexpr SignatureException& operator=(SignatureException const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Security::SignatureException New_ctor() ;

/// @brief Method .ctor addr 0x10b4e20 size 0x8 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Security::SignatureException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x10b4e28 size 0x8 virtual false final false
 void _ctor(::StringW message) ;

static Org::BouncyCastle::Security::SignatureException New_ctor(::StringW message, System::Exception exception) ;

/// @brief Method .ctor addr 0x10b4e30 size 0x8 virtual false final false
 void _ctor(::StringW message, System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(Org::BouncyCastle::Security::SignatureException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::SignatureException, "Org.BouncyCastle.Security", "SignatureException");
