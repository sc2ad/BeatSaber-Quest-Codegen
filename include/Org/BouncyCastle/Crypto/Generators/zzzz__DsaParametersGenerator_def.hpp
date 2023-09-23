#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaParameterGenerationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class DsaParametersGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::DsaParametersGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(898))
// CS Name: Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator
class CORDL_TYPE DsaParametersGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~DsaParametersGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaParametersGenerator", modifiers: " const&", def_value: None }]
constexpr DsaParametersGenerator(DsaParametersGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaParametersGenerator", modifiers: "&&", def_value: None }]
constexpr DsaParametersGenerator(DsaParametersGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DsaParametersGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DsaParametersGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DsaParametersGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DsaParametersGenerator& operator=(DsaParametersGenerator&& o) noexcept = default;
  constexpr DsaParametersGenerator& operator=(DsaParametersGenerator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_digest, put=__set_digest))  digest;

constexpr void __set_digest(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_digest() const;

 int32_t __declspec(property(get=__get_L, put=__set_L))  L;

constexpr void __set_L(int32_t value) ;

constexpr int32_t __get_L() const;

 int32_t __declspec(property(get=__get_N, put=__set_N))  N;

constexpr void __set_N(int32_t value) ;

constexpr int32_t __get_N() const;

 int32_t __declspec(property(get=__get_certainty, put=__set_certainty))  certainty;

constexpr void __set_certainty(int32_t value) ;

constexpr int32_t __get_certainty() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_random() const;

 bool __declspec(property(get=__get_use186_3, put=__set_use186_3))  use186_3;

constexpr void __set_use186_3(bool value) ;

constexpr bool __get_use186_3() const;

 int32_t __declspec(property(get=__get_usageIndex, put=__set_usageIndex))  usageIndex;

constexpr void __set_usageIndex(int32_t value) ;

constexpr int32_t __get_usageIndex() const;


// Methods

// Ctor Parameters []
explicit DsaParametersGenerator() ;

/// @brief Method .ctor addr 0xe6c3d4 size 0x6c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "digest", ty: "Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit DsaParametersGenerator(Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method .ctor addr 0xe6c440 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IDigest digest) ;

/// @brief Method Init addr 0xe6c468 size 0x9c virtual true final false
 void Init(int32_t size, int32_t certainty, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method Init addr 0xe6c534 size 0x29c virtual true final false
 void Init(Org::BouncyCastle::Crypto::Parameters::DsaParameterGenerationParameters parameters) ;

/// @brief Method GenerateParameters addr 0xe6c7d0 size 0x1c virtual true final false
 Org::BouncyCastle::Crypto::Parameters::DsaParameters GenerateParameters() ;

/// @brief Method GenerateParameters_FIPS186_2 addr 0xe6c7ec size 0x538 virtual true final false
 Org::BouncyCastle::Crypto::Parameters::DsaParameters GenerateParameters_FIPS186_2() ;

/// @brief Method CalculateGenerator_FIPS186_2 addr 0xe6ce94 size 0x114 virtual true final false
 Org::BouncyCastle::Math::BigInteger CalculateGenerator_FIPS186_2(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Security::SecureRandom r) ;

/// @brief Method GenerateParameters_FIPS186_3 addr 0xe6cfa8 size 0x58c virtual true final false
 Org::BouncyCastle::Crypto::Parameters::DsaParameters GenerateParameters_FIPS186_3() ;

/// @brief Method CalculateGenerator_FIPS186_3_Unverifiable addr 0xe6d534 size 0xc virtual true final false
 Org::BouncyCastle::Math::BigInteger CalculateGenerator_FIPS186_3_Unverifiable(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Security::SecureRandom r) ;

/// @brief Method CalculateGenerator_FIPS186_3_Verifiable addr 0xe6d540 size 0x2b0 virtual true final false
 Org::BouncyCastle::Math::BigInteger CalculateGenerator_FIPS186_3_Verifiable(Org::BouncyCastle::Crypto::IDigest d, Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger q, ::ArrayW<uint8_t> seed, int32_t index) ;

/// @brief Method IsValidDsaStrength addr 0xe6c504 size 0x1c virtual false final false
static bool IsValidDsaStrength(int32_t strength) ;

/// @brief Method Hash addr 0xe6cd24 size 0x128 virtual false final false
static void Hash(Org::BouncyCastle::Crypto::IDigest d, ::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) ;

/// @brief Method GetDefaultN addr 0xe6c520 size 0x14 virtual false final false
static int32_t GetDefaultN(int32_t L) ;

/// @brief Method Inc addr 0xe6ce4c size 0x48 virtual false final false
static void Inc(::ArrayW<uint8_t> buf) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Generators::DsaParametersGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::DsaParametersGenerator, "Org.BouncyCastle.Crypto.Generators", "DsaParametersGenerator");
