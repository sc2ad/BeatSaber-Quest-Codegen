#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaKeyGenerationParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::DsaKeyGenerationParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1018))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1026))
// CS Name: Org.BouncyCastle.Crypto.Parameters.DsaKeyGenerationParameters
class CORDL_TYPE DsaKeyGenerationParameters : public Org::BouncyCastle::Crypto::KeyGenerationParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DsaKeyGenerationParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaKeyGenerationParameters", modifiers: " const&", def_value: None }]
constexpr DsaKeyGenerationParameters(DsaKeyGenerationParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaKeyGenerationParameters", modifiers: "&&", def_value: None }]
constexpr DsaKeyGenerationParameters(DsaKeyGenerationParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DsaKeyGenerationParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::KeyGenerationParameters(ptr) {
}


  constexpr DsaKeyGenerationParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DsaKeyGenerationParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DsaKeyGenerationParameters& operator=(DsaKeyGenerationParameters&& o) noexcept = default;
  constexpr DsaKeyGenerationParameters& operator=(DsaKeyGenerationParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Parameters::DsaParameters __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(Org::BouncyCastle::Crypto::Parameters::DsaParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::DsaParameters __get_parameters() const;


// Properties

 Org::BouncyCastle::Crypto::Parameters::DsaParameters __declspec(property(get=get_Parameters))  Parameters;


// Methods

static Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters New_ctor(Org::BouncyCastle::Security::SecureRandom random, Org::BouncyCastle::Crypto::Parameters::DsaParameters parameters) ;

/// @brief Method .ctor addr 0xea4770 size 0x4c virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom random, Org::BouncyCastle::Crypto::Parameters::DsaParameters parameters) ;

/// @brief Method get_Parameters addr 0xea47bc size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Parameters::DsaParameters get_Parameters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::DsaKeyGenerationParameters, "Org.BouncyCastle.Crypto.Parameters", "DsaKeyGenerationParameters");
