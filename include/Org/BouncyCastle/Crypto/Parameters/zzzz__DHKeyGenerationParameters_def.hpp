#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DHKeyGenerationParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::DHKeyGenerationParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1018))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1019))
// CS Name: Org.BouncyCastle.Crypto.Parameters.DHKeyGenerationParameters
class CORDL_TYPE DHKeyGenerationParameters : public Org::BouncyCastle::Crypto::KeyGenerationParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DHKeyGenerationParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "DHKeyGenerationParameters", modifiers: " const&", def_value: None }]
constexpr DHKeyGenerationParameters(DHKeyGenerationParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DHKeyGenerationParameters", modifiers: "&&", def_value: None }]
constexpr DHKeyGenerationParameters(DHKeyGenerationParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DHKeyGenerationParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::KeyGenerationParameters(ptr) {
}


  constexpr DHKeyGenerationParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DHKeyGenerationParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DHKeyGenerationParameters& operator=(DHKeyGenerationParameters&& o) noexcept = default;
  constexpr DHKeyGenerationParameters& operator=(DHKeyGenerationParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(Org::BouncyCastle::Crypto::Parameters::DHParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::DHParameters __get_parameters() const;


// Properties

 Org::BouncyCastle::Crypto::Parameters::DHParameters __declspec(property(get=get_Parameters))  Parameters;


// Methods

// Ctor Parameters [CppParam { name: "random", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "Org::BouncyCastle::Crypto::Parameters::DHParameters", modifiers: "", def_value: None }]
explicit DHKeyGenerationParameters(Org::BouncyCastle::Security::SecureRandom random, Org::BouncyCastle::Crypto::Parameters::DHParameters parameters) ;

/// @brief Method .ctor addr 0xea31dc size 0x3c virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom random, Org::BouncyCastle::Crypto::Parameters::DHParameters parameters) ;

/// @brief Method get_Parameters addr 0xea324c size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Parameters::DHParameters get_Parameters() ;

/// @brief Method GetStrength addr 0xea3218 size 0x34 virtual false final false
static int32_t GetStrength(Org::BouncyCastle::Crypto::Parameters::DHParameters parameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters, "Org.BouncyCastle.Crypto.Parameters", "DHKeyGenerationParameters");
