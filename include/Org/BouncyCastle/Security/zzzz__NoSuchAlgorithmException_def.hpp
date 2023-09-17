#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Security/zzzz__GeneralSecurityException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class NoSuchAlgorithmException;
}
// Type: Org.BouncyCastle.Security::NoSuchAlgorithmException
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1717))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1752))
// CS Name: Org.BouncyCastle.Security.NoSuchAlgorithmException
class CORDL_TYPE NoSuchAlgorithmException : public ::Org::BouncyCastle::Security::GeneralSecurityException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~NoSuchAlgorithmException() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoSuchAlgorithmException", modifiers: " const&", def_value: None }]
constexpr NoSuchAlgorithmException(NoSuchAlgorithmException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoSuchAlgorithmException", modifiers: "&&", def_value: None }]
constexpr NoSuchAlgorithmException(NoSuchAlgorithmException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoSuchAlgorithmException(void* ptr) noexcept : ::Org::BouncyCastle::Security::GeneralSecurityException(ptr) {
}


  constexpr NoSuchAlgorithmException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoSuchAlgorithmException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoSuchAlgorithmException& operator=(NoSuchAlgorithmException&& o) noexcept = default;
  constexpr NoSuchAlgorithmException& operator=(NoSuchAlgorithmException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit NoSuchAlgorithmException() ;

/// @brief Method .ctor addr 0x10a5988 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit NoSuchAlgorithmException(::StringW message) ;

/// @brief Method .ctor addr 0x10a5990 size 0x8 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "exception", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit NoSuchAlgorithmException(::StringW message, ::System::Exception exception) ;

/// @brief Method .ctor addr 0x10a5998 size 0x8 virtual false final false
 void _ctor(::StringW message, ::System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Security::NoSuchAlgorithmException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::NoSuchAlgorithmException, "Org.BouncyCastle.Security", "NoSuchAlgorithmException");
