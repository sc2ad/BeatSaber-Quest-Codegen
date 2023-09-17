#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
// Type: Org.BouncyCastle.Crypto::KeyGenerationParameters
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1018))
// CS Name: Org.BouncyCastle.Crypto.KeyGenerationParameters
class CORDL_TYPE KeyGenerationParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~KeyGenerationParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyGenerationParameters", modifiers: " const&", def_value: None }]
constexpr KeyGenerationParameters(KeyGenerationParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyGenerationParameters", modifiers: "&&", def_value: None }]
constexpr KeyGenerationParameters(KeyGenerationParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyGenerationParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KeyGenerationParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyGenerationParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyGenerationParameters& operator=(KeyGenerationParameters&& o) noexcept = default;
  constexpr KeyGenerationParameters& operator=(KeyGenerationParameters const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom value) ;

constexpr ::Org::BouncyCastle::Security::SecureRandom __get_random() const;

 int32_t __declspec(property(get=__get_strength, put=__set_strength))  strength;

constexpr void __set_strength(int32_t value) ;

constexpr int32_t __get_strength() const;


// Properties

 ::Org::BouncyCastle::Security::SecureRandom __declspec(property(get=get_Random))  Random;

 int32_t __declspec(property(get=get_Strength))  Strength;


// Methods

// Ctor Parameters [CppParam { name: "random", ty: "::Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }, CppParam { name: "strength", ty: "int32_t", modifiers: "", def_value: None }]
explicit KeyGenerationParameters(::Org::BouncyCastle::Security::SecureRandom random, int32_t strength) ;

/// @brief Method .ctor addr 0xea30f8 size 0xd4 virtual false final false
 void _ctor(::Org::BouncyCastle::Security::SecureRandom random, int32_t strength) ;

/// @brief Method get_Random addr 0xea31cc size 0x8 virtual false final false
 ::Org::BouncyCastle::Security::SecureRandom get_Random() ;

/// @brief Method get_Strength addr 0xea31d4 size 0x8 virtual false final false
 int32_t get_Strength() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::KeyGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::KeyGenerationParameters, "Org.BouncyCastle.Crypto", "KeyGenerationParameters");
