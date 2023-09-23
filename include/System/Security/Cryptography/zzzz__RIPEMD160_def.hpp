#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
// Forward declare root types
namespace System::Security::Cryptography {
class RIPEMD160;
}
// Type: System.Security.Cryptography::RIPEMD160
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2912))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2949))
// CS Name: System.Security.Cryptography.RIPEMD160
class CORDL_TYPE RIPEMD160 : public System::Security::Cryptography::HashAlgorithm {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RIPEMD160() = default;

// Ctor Parameters [CppParam { name: "", ty: "RIPEMD160", modifiers: " const&", def_value: None }]
constexpr RIPEMD160(RIPEMD160 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RIPEMD160", modifiers: "&&", def_value: None }]
constexpr RIPEMD160(RIPEMD160&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RIPEMD160(void* ptr) noexcept : System::Security::Cryptography::HashAlgorithm(ptr) {
}


  constexpr RIPEMD160& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RIPEMD160& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RIPEMD160& operator=(RIPEMD160&& o) noexcept = default;
  constexpr RIPEMD160& operator=(RIPEMD160 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit RIPEMD160() ;

/// @brief Method .ctor addr 0x22f8898 size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method Create addr 0x22f88b8 size 0x58 virtual false final false
static System::Security::Cryptography::RIPEMD160 Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::RIPEMD160);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RIPEMD160, "System.Security.Cryptography", "RIPEMD160");
