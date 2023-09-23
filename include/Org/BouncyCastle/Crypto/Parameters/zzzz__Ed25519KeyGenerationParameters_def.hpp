#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class Ed25519KeyGenerationParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::Ed25519KeyGenerationParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1018))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1040))
// CS Name: Org.BouncyCastle.Crypto.Parameters.Ed25519KeyGenerationParameters
class CORDL_TYPE Ed25519KeyGenerationParameters : public Org::BouncyCastle::Crypto::KeyGenerationParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Ed25519KeyGenerationParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "Ed25519KeyGenerationParameters", modifiers: " const&", def_value: None }]
constexpr Ed25519KeyGenerationParameters(Ed25519KeyGenerationParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Ed25519KeyGenerationParameters", modifiers: "&&", def_value: None }]
constexpr Ed25519KeyGenerationParameters(Ed25519KeyGenerationParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Ed25519KeyGenerationParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::KeyGenerationParameters(ptr) {
}


  constexpr Ed25519KeyGenerationParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Ed25519KeyGenerationParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Ed25519KeyGenerationParameters& operator=(Ed25519KeyGenerationParameters&& o) noexcept = default;
  constexpr Ed25519KeyGenerationParameters& operator=(Ed25519KeyGenerationParameters const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "random", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit Ed25519KeyGenerationParameters(Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method .ctor addr 0xea6e94 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom random) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::Ed25519KeyGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::Ed25519KeyGenerationParameters, "Org.BouncyCastle.Crypto.Parameters", "Ed25519KeyGenerationParameters");
