#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
// Forward declare root types
namespace System::Security::Cryptography {
class SHA384;
}
// Type: System.Security.Cryptography::SHA384
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2912))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2958))
// CS Name: System.Security.Cryptography.SHA384
class CORDL_TYPE SHA384 : public System::Security::Cryptography::HashAlgorithm {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SHA384() = default;

// Ctor Parameters [CppParam { name: "", ty: "SHA384", modifiers: " const&", def_value: None }]
constexpr SHA384(SHA384 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SHA384", modifiers: "&&", def_value: None }]
constexpr SHA384(SHA384&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SHA384(void* ptr) noexcept : System::Security::Cryptography::HashAlgorithm(ptr) {
}


  constexpr SHA384& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SHA384& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SHA384& operator=(SHA384&& o) noexcept = default;
  constexpr SHA384& operator=(SHA384 const& o) noexcept = default;
                


// Methods

static System::Security::Cryptography::SHA384 New_ctor() ;

/// @brief Method .ctor addr 0x22fcf48 size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method Create addr 0x22fcf68 size 0x58 virtual false final false
static System::Security::Cryptography::SHA384 Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::SHA384);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::SHA384, "System.Security.Cryptography", "SHA384");
