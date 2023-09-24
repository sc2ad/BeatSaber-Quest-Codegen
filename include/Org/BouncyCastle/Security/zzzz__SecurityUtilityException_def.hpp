#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class SecurityUtilityException;
}
// Type: Org.BouncyCastle.Security::SecurityUtilityException
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1757))
// CS Name: Org.BouncyCastle.Security.SecurityUtilityException
class CORDL_TYPE SecurityUtilityException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~SecurityUtilityException() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecurityUtilityException", modifiers: " const&", def_value: None }]
constexpr SecurityUtilityException(SecurityUtilityException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecurityUtilityException", modifiers: "&&", def_value: None }]
constexpr SecurityUtilityException(SecurityUtilityException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecurityUtilityException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr SecurityUtilityException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecurityUtilityException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecurityUtilityException& operator=(SecurityUtilityException&& o) noexcept = default;
  constexpr SecurityUtilityException& operator=(SecurityUtilityException const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Security::SecurityUtilityException New_ctor() ;

/// @brief Method .ctor addr 0x10b4d58 size 0x58 virtual false final false
 void _ctor() ;

static Org::BouncyCastle::Security::SecurityUtilityException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x10b4cf0 size 0x68 virtual false final false
 void _ctor(::StringW message) ;

static Org::BouncyCastle::Security::SecurityUtilityException New_ctor(::StringW message, System::Exception exception) ;

/// @brief Method .ctor addr 0x10b4db0 size 0x70 virtual false final false
 void _ctor(::StringW message, System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(Org::BouncyCastle::Security::SecurityUtilityException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::SecurityUtilityException, "Org.BouncyCastle.Security", "SecurityUtilityException");
