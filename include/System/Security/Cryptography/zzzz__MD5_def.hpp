#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
// Forward declare root types
namespace System::Security::Cryptography {
class MD5;
}
// Type: System.Security.Cryptography::MD5
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2912))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2941))
// CS Name: System.Security.Cryptography.MD5
class CORDL_TYPE MD5 : public System::Security::Cryptography::HashAlgorithm {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MD5() = default;

// Ctor Parameters [CppParam { name: "", ty: "MD5", modifiers: " const&", def_value: None }]
constexpr MD5(MD5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MD5", modifiers: "&&", def_value: None }]
constexpr MD5(MD5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MD5(void* ptr) noexcept : System::Security::Cryptography::HashAlgorithm(ptr) {
}


  constexpr MD5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MD5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MD5& operator=(MD5&& o) noexcept = default;
  constexpr MD5& operator=(MD5 const& o) noexcept = default;
                


// Methods

static System::Security::Cryptography::MD5 New_ctor() ;

/// @brief Method .ctor addr 0x22f4ca4 size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method Create addr 0x22f4cc4 size 0x5c virtual false final false
static System::Security::Cryptography::MD5 Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::MD5);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::MD5, "System.Security.Cryptography", "MD5");
