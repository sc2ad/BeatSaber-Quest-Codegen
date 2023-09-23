#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__HMAC_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography {
class HMACMD5;
}
// Type: System.Security.Cryptography::HMACMD5
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2930))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2931))
// CS Name: System.Security.Cryptography.HMACMD5
class CORDL_TYPE HMACMD5 : public System::Security::Cryptography::HMAC {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~HMACMD5() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMACMD5", modifiers: " const&", def_value: None }]
constexpr HMACMD5(HMACMD5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMACMD5", modifiers: "&&", def_value: None }]
constexpr HMACMD5(HMACMD5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMACMD5(void* ptr) noexcept : System::Security::Cryptography::HMAC(ptr) {
}


  constexpr HMACMD5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMACMD5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMACMD5& operator=(HMACMD5&& o) noexcept = default;
  constexpr HMACMD5& operator=(HMACMD5 const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit HMACMD5() ;

/// @brief Method .ctor addr 0x22f3754 size 0x24 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "key", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit HMACMD5(::ArrayW<uint8_t> key) ;

/// @brief Method .ctor addr 0x22f3778 size 0xc8 virtual false final false
 void _ctor(::ArrayW<uint8_t> key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::HMACMD5);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::HMACMD5, "System.Security.Cryptography", "HMACMD5");
