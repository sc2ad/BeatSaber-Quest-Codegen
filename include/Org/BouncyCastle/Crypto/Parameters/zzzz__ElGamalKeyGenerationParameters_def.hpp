#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ElGamalKeyGenerationParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::ElGamalKeyGenerationParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1018))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1046))
// CS Name: Org.BouncyCastle.Crypto.Parameters.ElGamalKeyGenerationParameters
class CORDL_TYPE ElGamalKeyGenerationParameters : public Org::BouncyCastle::Crypto::KeyGenerationParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ElGamalKeyGenerationParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalKeyGenerationParameters", modifiers: " const&", def_value: None }]
constexpr ElGamalKeyGenerationParameters(ElGamalKeyGenerationParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalKeyGenerationParameters", modifiers: "&&", def_value: None }]
constexpr ElGamalKeyGenerationParameters(ElGamalKeyGenerationParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ElGamalKeyGenerationParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::KeyGenerationParameters(ptr) {
}


  constexpr ElGamalKeyGenerationParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ElGamalKeyGenerationParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ElGamalKeyGenerationParameters& operator=(ElGamalKeyGenerationParameters&& o) noexcept = default;
  constexpr ElGamalKeyGenerationParameters& operator=(ElGamalKeyGenerationParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Parameters::ElGamalParameters __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(Org::BouncyCastle::Crypto::Parameters::ElGamalParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::ElGamalParameters __get_parameters() const;


// Properties

 Org::BouncyCastle::Crypto::Parameters::ElGamalParameters __declspec(property(get=get_Parameters))  Parameters;


// Methods

static Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters New_ctor(Org::BouncyCastle::Security::SecureRandom random, Org::BouncyCastle::Crypto::Parameters::ElGamalParameters parameters) ;

/// @brief Method .ctor addr 0xea8498 size 0x3c virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom random, Org::BouncyCastle::Crypto::Parameters::ElGamalParameters parameters) ;

/// @brief Method get_Parameters addr 0xea8508 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Parameters::ElGamalParameters get_Parameters() ;

/// @brief Method GetStrength addr 0xea84d4 size 0x34 virtual false final false
static int32_t GetStrength(Org::BouncyCastle::Crypto::Parameters::ElGamalParameters parameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ElGamalKeyGenerationParameters, "Org.BouncyCastle.Crypto.Parameters", "ElGamalKeyGenerationParameters");
