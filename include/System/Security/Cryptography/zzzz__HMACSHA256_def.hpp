#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__HMAC_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography {
class HMACSHA256;
}
// Type: System.Security.Cryptography::HMACSHA256
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2930))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2934))
// CS Name: System.Security.Cryptography.HMACSHA256
class CORDL_TYPE HMACSHA256 : public System::Security::Cryptography::HMAC {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~HMACSHA256() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMACSHA256", modifiers: " const&", def_value: None }]
constexpr HMACSHA256(HMACSHA256 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMACSHA256", modifiers: "&&", def_value: None }]
constexpr HMACSHA256(HMACSHA256&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMACSHA256(void* ptr) noexcept : System::Security::Cryptography::HMAC(ptr) {
}


  constexpr HMACSHA256& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMACSHA256& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMACSHA256& operator=(HMACSHA256&& o) noexcept = default;
  constexpr HMACSHA256& operator=(HMACSHA256 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit HMACSHA256() ;

/// @brief Method .ctor addr 0x22f3c34 size 0x24 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "key", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit HMACSHA256(::ArrayW<uint8_t> key) ;

/// @brief Method .ctor addr 0x22f3c58 size 0xc0 virtual false final false
 void _ctor(::ArrayW<uint8_t> key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::HMACSHA256);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::HMACSHA256, "System.Security.Cryptography", "HMACSHA256");
