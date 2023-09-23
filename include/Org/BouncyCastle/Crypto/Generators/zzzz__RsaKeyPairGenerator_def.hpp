#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyGenerationParameters;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricCipherKeyPairGenerator;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class RsaKeyPairGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::RsaKeyPairGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(923))
// CS Name: Org.BouncyCastle.Crypto.Generators.RsaKeyPairGenerator
class CORDL_TYPE RsaKeyPairGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator
constexpr operator  Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RsaKeyPairGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaKeyPairGenerator", modifiers: " const&", def_value: None }]
constexpr RsaKeyPairGenerator(RsaKeyPairGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaKeyPairGenerator", modifiers: "&&", def_value: None }]
constexpr RsaKeyPairGenerator(RsaKeyPairGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RsaKeyPairGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RsaKeyPairGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RsaKeyPairGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RsaKeyPairGenerator& operator=(RsaKeyPairGenerator&& o) noexcept = default;
  constexpr RsaKeyPairGenerator& operator=(RsaKeyPairGenerator const& o) noexcept = default;
                


// Fields

/// @brief Field DefaultTests offset 0
static constexpr int32_t  DefaultTests{100};

static ::ArrayW<int32_t> __declspec(property(get=__get_SPECIAL_E_VALUES, put=__set_SPECIAL_E_VALUES))  SPECIAL_E_VALUES;

static void __set_SPECIAL_E_VALUES(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_SPECIAL_E_VALUES() ;

static int32_t __declspec(property(get=__get_SPECIAL_E_HIGHEST, put=__set_SPECIAL_E_HIGHEST))  SPECIAL_E_HIGHEST;

static void __set_SPECIAL_E_HIGHEST(int32_t value) ;

static int32_t __get_SPECIAL_E_HIGHEST() ;

static int32_t __declspec(property(get=__get_SPECIAL_E_BITS, put=__set_SPECIAL_E_BITS))  SPECIAL_E_BITS;

static void __set_SPECIAL_E_BITS(int32_t value) ;

static int32_t __get_SPECIAL_E_BITS() ;

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_One, put=__set_One))  One;

static void __set_One(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_One() ;

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_DefaultPublicExponent, put=__set_DefaultPublicExponent))  DefaultPublicExponent;

static void __set_DefaultPublicExponent(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_DefaultPublicExponent() ;

 Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::RsaKeyGenerationParameters __get_parameters() const;


// Methods

/// @brief Method Init addr 0xe79a00 size 0x114 virtual true final false
 void Init(Org::BouncyCastle::Crypto::KeyGenerationParameters parameters) ;

/// @brief Method GenerateKeyPair addr 0xe79b14 size 0x36c virtual true final false
 Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair GenerateKeyPair() ;

/// @brief Method ChooseRandomPrime addr 0xe79e80 size 0x230 virtual true final false
 Org::BouncyCastle::Math::BigInteger ChooseRandomPrime(int32_t bitlength, Org::BouncyCastle::Math::BigInteger e) ;

// Ctor Parameters []
explicit RsaKeyPairGenerator() ;

/// @brief Method .ctor addr 0xe7a1e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::RsaKeyPairGenerator, "Org.BouncyCastle.Crypto.Generators", "RsaKeyPairGenerator");
