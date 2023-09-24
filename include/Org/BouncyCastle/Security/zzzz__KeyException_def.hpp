#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Security/zzzz__GeneralSecurityException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class KeyException;
}
// Type: Org.BouncyCastle.Security::KeyException
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1717))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1748))
// CS Name: Org.BouncyCastle.Security.KeyException
class CORDL_TYPE KeyException : public Org::BouncyCastle::Security::GeneralSecurityException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~KeyException() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyException", modifiers: " const&", def_value: None }]
constexpr KeyException(KeyException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyException", modifiers: "&&", def_value: None }]
constexpr KeyException(KeyException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyException(void* ptr) noexcept : Org::BouncyCastle::Security::GeneralSecurityException(ptr) {
}


  constexpr KeyException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyException& operator=(KeyException&& o) noexcept = default;
  constexpr KeyException& operator=(KeyException const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Security::KeyException New_ctor() ;

/// @brief Method .ctor addr 0x10a2cc0 size 0x8 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Security::KeyException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x10a2cc8 size 0x8 virtual false final false
 void _ctor(::StringW message) ;

static Org::BouncyCastle::Security::KeyException New_ctor(::StringW message, System::Exception exception) ;

/// @brief Method .ctor addr 0x10a2cd0 size 0x8 virtual false final false
 void _ctor(::StringW message, System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(Org::BouncyCastle::Security::KeyException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::KeyException, "Org.BouncyCastle.Security", "KeyException");
