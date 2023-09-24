#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class X448KeyGenerationParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::X448KeyGenerationParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1018))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1091))
// CS Name: Org.BouncyCastle.Crypto.Parameters.X448KeyGenerationParameters
class CORDL_TYPE X448KeyGenerationParameters : public Org::BouncyCastle::Crypto::KeyGenerationParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~X448KeyGenerationParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "X448KeyGenerationParameters", modifiers: " const&", def_value: None }]
constexpr X448KeyGenerationParameters(X448KeyGenerationParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X448KeyGenerationParameters", modifiers: "&&", def_value: None }]
constexpr X448KeyGenerationParameters(X448KeyGenerationParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X448KeyGenerationParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::KeyGenerationParameters(ptr) {
}


  constexpr X448KeyGenerationParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X448KeyGenerationParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X448KeyGenerationParameters& operator=(X448KeyGenerationParameters&& o) noexcept = default;
  constexpr X448KeyGenerationParameters& operator=(X448KeyGenerationParameters const& o) noexcept = default;
                


// Methods

static Org::BouncyCastle::Crypto::Parameters::X448KeyGenerationParameters New_ctor(Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method .ctor addr 0xeadff4 size 0xc virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom random) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::X448KeyGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::X448KeyGenerationParameters, "Org.BouncyCastle.Crypto.Parameters", "X448KeyGenerationParameters");
