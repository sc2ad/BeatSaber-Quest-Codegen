#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
// Forward declare root types
namespace Mono::Security::Cryptography {
class MD4;
}
// Type: Mono.Security.Cryptography::MD4
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2912))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2279))
// CS Name: Mono.Security.Cryptography.MD4
class CORDL_TYPE MD4 : public System::Security::Cryptography::HashAlgorithm {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MD4() = default;

// Ctor Parameters [CppParam { name: "", ty: "MD4", modifiers: " const&", def_value: None }]
constexpr MD4(MD4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MD4", modifiers: "&&", def_value: None }]
constexpr MD4(MD4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MD4(void* ptr) noexcept : System::Security::Cryptography::HashAlgorithm(ptr) {
}


  constexpr MD4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MD4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MD4& operator=(MD4&& o) noexcept = default;
  constexpr MD4& operator=(MD4 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit MD4() ;

/// @brief Method .ctor addr 0x22b38d4 size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method Create addr 0x22b38f4 size 0x58 virtual false final false
static Mono::Security::Cryptography::MD4 Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Cryptography
NEED_NO_BOX(Mono::Security::Cryptography::MD4);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::MD4, "Mono.Security.Cryptography", "MD4");
