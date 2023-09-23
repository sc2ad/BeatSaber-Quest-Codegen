#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
// Forward declare root types
namespace System::Security::Cryptography {
class SHA1;
}
// Type: System.Security.Cryptography::SHA1
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2912))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2954))
// CS Name: System.Security.Cryptography.SHA1
class CORDL_TYPE SHA1 : public System::Security::Cryptography::HashAlgorithm {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SHA1() = default;

// Ctor Parameters [CppParam { name: "", ty: "SHA1", modifiers: " const&", def_value: None }]
constexpr SHA1(SHA1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SHA1", modifiers: "&&", def_value: None }]
constexpr SHA1(SHA1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SHA1(void* ptr) noexcept : System::Security::Cryptography::HashAlgorithm(ptr) {
}


  constexpr SHA1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SHA1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SHA1& operator=(SHA1&& o) noexcept = default;
  constexpr SHA1& operator=(SHA1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit SHA1() ;

/// @brief Method .ctor addr 0x22fb96c size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method Create addr 0x22fb98c size 0x5c virtual false final false
static System::Security::Cryptography::SHA1 Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::SHA1);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::SHA1, "System.Security.Cryptography", "SHA1");
