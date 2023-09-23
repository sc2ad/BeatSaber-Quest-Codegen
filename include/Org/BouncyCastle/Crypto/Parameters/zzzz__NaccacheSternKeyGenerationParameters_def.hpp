#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__KeyGenerationParameters_def.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class NaccacheSternKeyGenerationParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::NaccacheSternKeyGenerationParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1018))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1068))
// CS Name: Org.BouncyCastle.Crypto.Parameters.NaccacheSternKeyGenerationParameters
class CORDL_TYPE NaccacheSternKeyGenerationParameters : public Org::BouncyCastle::Crypto::KeyGenerationParameters {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~NaccacheSternKeyGenerationParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "NaccacheSternKeyGenerationParameters", modifiers: " const&", def_value: None }]
constexpr NaccacheSternKeyGenerationParameters(NaccacheSternKeyGenerationParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NaccacheSternKeyGenerationParameters", modifiers: "&&", def_value: None }]
constexpr NaccacheSternKeyGenerationParameters(NaccacheSternKeyGenerationParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NaccacheSternKeyGenerationParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::KeyGenerationParameters(ptr) {
}


  constexpr NaccacheSternKeyGenerationParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NaccacheSternKeyGenerationParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NaccacheSternKeyGenerationParameters& operator=(NaccacheSternKeyGenerationParameters&& o) noexcept = default;
  constexpr NaccacheSternKeyGenerationParameters& operator=(NaccacheSternKeyGenerationParameters const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_certainty, put=__set_certainty))  certainty;

constexpr void __set_certainty(int32_t value) ;

constexpr int32_t __get_certainty() const;

 int32_t __declspec(property(get=__get_countSmallPrimes, put=__set_countSmallPrimes))  countSmallPrimes;

constexpr void __set_countSmallPrimes(int32_t value) ;

constexpr int32_t __get_countSmallPrimes() const;


// Properties

 int32_t __declspec(property(get=get_Certainty))  Certainty;

 int32_t __declspec(property(get=get_CountSmallPrimes))  CountSmallPrimes;

 bool __declspec(property(get=get_IsDebug))  IsDebug;


// Methods

// Ctor Parameters [CppParam { name: "random", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }, CppParam { name: "strength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "certainty", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "countSmallPrimes", ty: "int32_t", modifiers: "", def_value: None }]
explicit NaccacheSternKeyGenerationParameters(Org::BouncyCastle::Security::SecureRandom random, int32_t strength, int32_t certainty, int32_t countSmallPrimes) ;

/// @brief Method .ctor addr 0xeaab30 size 0xbc virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom random, int32_t strength, int32_t certainty, int32_t countSmallPrimes) ;

// Ctor Parameters [CppParam { name: "random", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }, CppParam { name: "strength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "certainty", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "countSmallPrimes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "debug", ty: "bool", modifiers: "", def_value: None }]
explicit NaccacheSternKeyGenerationParameters(Org::BouncyCastle::Security::SecureRandom random, int32_t strength, int32_t certainty, int32_t countSmallPrimes, bool debug) ;

/// @brief Method .ctor addr 0xeaabec size 0x4 virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom random, int32_t strength, int32_t certainty, int32_t countSmallPrimes, bool debug) ;

/// @brief Method get_Certainty addr 0xeaabf0 size 0x8 virtual false final false
 int32_t get_Certainty() ;

/// @brief Method get_CountSmallPrimes addr 0xeaabf8 size 0x8 virtual false final false
 int32_t get_CountSmallPrimes() ;

/// @brief Method get_IsDebug addr 0xeaac00 size 0x8 virtual false final false
 bool get_IsDebug() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters, "Org.BouncyCastle.Crypto.Parameters", "NaccacheSternKeyGenerationParameters");
