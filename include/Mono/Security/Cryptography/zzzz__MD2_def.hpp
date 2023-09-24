#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
// Forward declare root types
namespace Mono::Security::Cryptography {
class MD2;
}
// Type: Mono.Security.Cryptography::MD2
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2912))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14001))
// CS Name: Mono.Security.Cryptography.MD2
class CORDL_TYPE MD2 : public System::Security::Cryptography::HashAlgorithm {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MD2() = default;

// Ctor Parameters [CppParam { name: "", ty: "MD2", modifiers: " const&", def_value: None }]
constexpr MD2(MD2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MD2", modifiers: "&&", def_value: None }]
constexpr MD2(MD2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MD2(void* ptr) noexcept : System::Security::Cryptography::HashAlgorithm(ptr) {
}


  constexpr MD2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MD2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MD2& operator=(MD2&& o) noexcept = default;
  constexpr MD2& operator=(MD2 const& o) noexcept = default;
                


// Methods

static Mono::Security::Cryptography::MD2 New_ctor() ;

/// @brief Method .ctor addr 0x22971f8 size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method Create addr 0x2297218 size 0x58 virtual false final false
static Mono::Security::Cryptography::MD2 Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Cryptography
NEED_NO_BOX(Mono::Security::Cryptography::MD2);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::MD2, "Mono.Security.Cryptography", "MD2");
