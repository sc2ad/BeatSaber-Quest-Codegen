#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__HMAC_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography {
class HMACSHA1;
}
// Type: System.Security.Cryptography::HMACSHA1
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2930))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2933))
// CS Name: System.Security.Cryptography.HMACSHA1
class CORDL_TYPE HMACSHA1 : public System::Security::Cryptography::HMAC {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~HMACSHA1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMACSHA1", modifiers: " const&", def_value: None }]
constexpr HMACSHA1(HMACSHA1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMACSHA1", modifiers: "&&", def_value: None }]
constexpr HMACSHA1(HMACSHA1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMACSHA1(void* ptr) noexcept : System::Security::Cryptography::HMAC(ptr) {
}


  constexpr HMACSHA1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMACSHA1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMACSHA1& operator=(HMACSHA1&& o) noexcept = default;
  constexpr HMACSHA1& operator=(HMACSHA1 const& o) noexcept = default;
                


// Methods

static System::Security::Cryptography::HMACSHA1 New_ctor() ;

/// @brief Method .ctor addr 0x22f3370 size 0x28 virtual false final false
 void _ctor() ;

static System::Security::Cryptography::HMACSHA1 New_ctor(::ArrayW<uint8_t> key) ;

/// @brief Method .ctor addr 0x22f3a48 size 0x8 virtual false final false
 void _ctor(::ArrayW<uint8_t> key) ;

static System::Security::Cryptography::HMACSHA1 New_ctor(::ArrayW<uint8_t> key, bool useManagedSha1) ;

/// @brief Method .ctor addr 0x22f3a50 size 0xc0 virtual false final false
 void _ctor(::ArrayW<uint8_t> key, bool useManagedSha1) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
NEED_NO_BOX(System::Security::Cryptography::HMACSHA1);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::HMACSHA1, "System.Security.Cryptography", "HMACSHA1");
