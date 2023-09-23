#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class PasswordException;
}
// Type: Org.BouncyCastle.Security::PasswordException
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1683))
// CS Name: Org.BouncyCastle.Security.PasswordException
class CORDL_TYPE PasswordException : public System::IO::IOException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~PasswordException() = default;

// Ctor Parameters [CppParam { name: "", ty: "PasswordException", modifiers: " const&", def_value: None }]
constexpr PasswordException(PasswordException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PasswordException", modifiers: "&&", def_value: None }]
constexpr PasswordException(PasswordException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PasswordException(void* ptr) noexcept : System::IO::IOException(ptr) {
}


  constexpr PasswordException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PasswordException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PasswordException& operator=(PasswordException&& o) noexcept = default;
  constexpr PasswordException& operator=(PasswordException const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit PasswordException(::StringW message) ;

/// @brief Method .ctor addr 0x10453d8 size 0x8 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "exception", ty: "System::Exception", modifiers: "", def_value: None }]
explicit PasswordException(::StringW message, System::Exception exception) ;

/// @brief Method .ctor addr 0x10453e0 size 0x8 virtual false final false
 void _ctor(::StringW message, System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(Org::BouncyCastle::Security::PasswordException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::PasswordException, "Org.BouncyCastle.Security", "PasswordException");
