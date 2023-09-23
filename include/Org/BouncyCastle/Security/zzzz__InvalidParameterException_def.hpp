#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Security/zzzz__KeyException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class InvalidParameterException;
}
// Type: Org.BouncyCastle.Security::InvalidParameterException
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1748))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1750))
// CS Name: Org.BouncyCastle.Security.InvalidParameterException
class CORDL_TYPE InvalidParameterException : public Org::BouncyCastle::Security::KeyException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~InvalidParameterException() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidParameterException", modifiers: " const&", def_value: None }]
constexpr InvalidParameterException(InvalidParameterException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidParameterException", modifiers: "&&", def_value: None }]
constexpr InvalidParameterException(InvalidParameterException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvalidParameterException(void* ptr) noexcept : Org::BouncyCastle::Security::KeyException(ptr) {
}


  constexpr InvalidParameterException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvalidParameterException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvalidParameterException& operator=(InvalidParameterException&& o) noexcept = default;
  constexpr InvalidParameterException& operator=(InvalidParameterException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit InvalidParameterException() ;

/// @brief Method .ctor addr 0x10a2cf0 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit InvalidParameterException(::StringW message) ;

/// @brief Method .ctor addr 0x10a2cf8 size 0x8 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "exception", ty: "System::Exception", modifiers: "", def_value: None }]
explicit InvalidParameterException(::StringW message, System::Exception exception) ;

/// @brief Method .ctor addr 0x10a2d00 size 0x8 virtual false final false
 void _ctor(::StringW message, System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(Org::BouncyCastle::Security::InvalidParameterException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::InvalidParameterException, "Org.BouncyCastle.Security", "InvalidParameterException");
