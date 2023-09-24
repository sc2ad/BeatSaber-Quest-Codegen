#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
// Forward declare root types
namespace crypto {
class Security;
}
// Type: crypto::Security
namespace crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1353))
// CS Name: crypto.Security
class CORDL_TYPE Security : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Security() = default;

// Ctor Parameters [CppParam { name: "", ty: "Security", modifiers: " const&", def_value: None }]
constexpr Security(Security const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Security", modifiers: "&&", def_value: None }]
constexpr Security(Security&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Security(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Security& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Security& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Security& operator=(Security&& o) noexcept = default;
  constexpr Security& operator=(Security const& o) noexcept = default;
                


// Methods

/// @brief Method ComputeHash addr 0xf3880c size 0x164 virtual false final false
static ::StringW ComputeHash(::StringW text, ::StringW salt) ;

/// @brief Method Decrypt addr 0xf38970 size 0x108 virtual false final false
static ::StringW Decrypt(::StringW cipherText, ::StringW key, ::StringW iv) ;

/// @brief Method Encrypt addr 0xf38c98 size 0xf4 virtual false final false
static ::StringW Encrypt(::StringW plainText, ::StringW key, ::StringW iv) ;

/// @brief Method GenerateText addr 0xf38d8c size 0xc4 virtual false final false
static ::StringW GenerateText(int32_t size) ;

/// @brief Method CreateCipher addr 0xf38a78 size 0x220 virtual false final false
static Org::BouncyCastle::Crypto::IBufferedCipher CreateCipher(bool isEncryption, ::StringW key, ::StringW iv) ;

static crypto::Security New_ctor() ;

/// @brief Method .ctor addr 0xf38e50 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def crypto
NEED_NO_BOX(crypto::Security);
DEFINE_IL2CPP_ARG_TYPE(crypto::Security, "crypto", "Security");
