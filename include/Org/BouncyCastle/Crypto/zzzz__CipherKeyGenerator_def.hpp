#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class CipherKeyGenerator;
}
// Type: Org.BouncyCastle.Crypto::CipherKeyGenerator
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(888))
// CS Name: Org.BouncyCastle.Crypto.CipherKeyGenerator
class CORDL_TYPE CipherKeyGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CipherKeyGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "CipherKeyGenerator", modifiers: " const&", def_value: None }]
constexpr CipherKeyGenerator(CipherKeyGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CipherKeyGenerator", modifiers: "&&", def_value: None }]
constexpr CipherKeyGenerator(CipherKeyGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CipherKeyGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CipherKeyGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CipherKeyGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CipherKeyGenerator& operator=(CipherKeyGenerator&& o) noexcept = default;
  constexpr CipherKeyGenerator& operator=(CipherKeyGenerator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_random() const;

 int32_t __declspec(property(get=__get_strength, put=__set_strength))  strength;

constexpr void __set_strength(int32_t value) ;

constexpr int32_t __get_strength() const;

 bool __declspec(property(get=__get_uninitialised, put=__set_uninitialised))  uninitialised;

constexpr void __set_uninitialised(bool value) ;

constexpr bool __get_uninitialised() const;

 int32_t __declspec(property(get=__get_defaultStrength, put=__set_defaultStrength))  defaultStrength;

constexpr void __set_defaultStrength(int32_t value) ;

constexpr int32_t __get_defaultStrength() const;


// Properties

 int32_t __declspec(property(get=get_DefaultStrength))  DefaultStrength;


// Methods

// Ctor Parameters []
explicit CipherKeyGenerator() ;

/// @brief Method .ctor addr 0xe6a970 size 0x10 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "defaultStrength", ty: "int32_t", modifiers: "", def_value: None }]
explicit CipherKeyGenerator(int32_t defaultStrength) ;

/// @brief Method .ctor addr 0xe6a980 size 0x98 virtual false final false
 void _ctor(int32_t defaultStrength) ;

/// @brief Method get_DefaultStrength addr 0xe6aa18 size 0x8 virtual false final false
 int32_t get_DefaultStrength() ;

/// @brief Method Init addr 0xe6aa20 size 0x68 virtual false final false
 void Init(Org::BouncyCastle::Crypto::KeyGenerationParameters parameters) ;

/// @brief Method engineInit addr 0xe6aa88 size 0x38 virtual true final false
 void engineInit(Org::BouncyCastle::Crypto::KeyGenerationParameters parameters) ;

/// @brief Method GenerateKey addr 0xe6aac0 size 0x120 virtual false final false
 ::ArrayW<uint8_t> GenerateKey() ;

/// @brief Method engineGenerateKey addr 0xe6abe0 size 0x64 virtual true final false
 ::ArrayW<uint8_t> engineGenerateKey() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::CipherKeyGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::CipherKeyGenerator, "Org.BouncyCastle.Crypto", "CipherKeyGenerator");
