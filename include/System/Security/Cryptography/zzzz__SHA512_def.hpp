#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
// Forward declare root types
namespace System::Security::Cryptography {
class SHA512;
}
// Type: System.Security.Cryptography::SHA512
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2912))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2960))
// CS Name: System.Security.Cryptography.SHA512
class CORDL_TYPE SHA512 : public System::Security::Cryptography::HashAlgorithm {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SHA512() = default;

// Ctor Parameters [CppParam { name: "", ty: "SHA512", modifiers: " const&", def_value: None }]
constexpr SHA512(SHA512 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SHA512", modifiers: "&&", def_value: None }]
constexpr SHA512(SHA512&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SHA512(void* ptr) noexcept : System::Security::Cryptography::HashAlgorithm(ptr) {
}


  constexpr SHA512& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SHA512& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SHA512& operator=(SHA512&& o) noexcept = default;
  constexpr SHA512& operator=(SHA512 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit SHA512() ;

/// @brief Method .ctor addr 0x22fdfc4 size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method Create addr 0x22fdfe4 size 0x58 virtual false final false
static System::Security::Cryptography::SHA512 Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::SHA512);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::SHA512, "System.Security.Cryptography", "SHA512");
