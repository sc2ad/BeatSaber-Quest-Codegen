#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class GeneralSecurityException;
}
// Type: Org.BouncyCastle.Security::GeneralSecurityException
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1717))
// CS Name: Org.BouncyCastle.Security.GeneralSecurityException
class CORDL_TYPE GeneralSecurityException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~GeneralSecurityException() = default;

// Ctor Parameters [CppParam { name: "", ty: "GeneralSecurityException", modifiers: " const&", def_value: None }]
constexpr GeneralSecurityException(GeneralSecurityException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GeneralSecurityException", modifiers: "&&", def_value: None }]
constexpr GeneralSecurityException(GeneralSecurityException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GeneralSecurityException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr GeneralSecurityException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GeneralSecurityException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GeneralSecurityException& operator=(GeneralSecurityException&& o) noexcept = default;
  constexpr GeneralSecurityException& operator=(GeneralSecurityException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GeneralSecurityException() ;

/// @brief Method .ctor addr 0x1067cc8 size 0x58 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit GeneralSecurityException(::StringW message) ;

/// @brief Method .ctor addr 0x1067d20 size 0x68 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "exception", ty: "System::Exception", modifiers: "", def_value: None }]
explicit GeneralSecurityException(::StringW message, System::Exception exception) ;

/// @brief Method .ctor addr 0x1067d88 size 0x70 virtual false final false
 void _ctor(::StringW message, System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(Org::BouncyCastle::Security::GeneralSecurityException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::GeneralSecurityException, "Org.BouncyCastle.Security", "GeneralSecurityException");
