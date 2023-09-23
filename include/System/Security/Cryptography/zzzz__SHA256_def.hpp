#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
// Forward declare root types
namespace System::Security::Cryptography {
class SHA256;
}
// Type: System.Security.Cryptography::SHA256
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2912))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2956))
// CS Name: System.Security.Cryptography.SHA256
class CORDL_TYPE SHA256 : public System::Security::Cryptography::HashAlgorithm {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SHA256() = default;

// Ctor Parameters [CppParam { name: "", ty: "SHA256", modifiers: " const&", def_value: None }]
constexpr SHA256(SHA256 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SHA256", modifiers: "&&", def_value: None }]
constexpr SHA256(SHA256&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SHA256(void* ptr) noexcept : System::Security::Cryptography::HashAlgorithm(ptr) {
}


  constexpr SHA256& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SHA256& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SHA256& operator=(SHA256&& o) noexcept = default;
  constexpr SHA256& operator=(SHA256 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit SHA256() ;

/// @brief Method .ctor addr 0x22fc20c size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method Create addr 0x22fc22c size 0x58 virtual false final false
static System::Security::Cryptography::SHA256 Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::SHA256);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::SHA256, "System.Security.Cryptography", "SHA256");
