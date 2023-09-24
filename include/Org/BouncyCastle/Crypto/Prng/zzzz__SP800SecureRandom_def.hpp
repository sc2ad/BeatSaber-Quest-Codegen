#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class ISP80090Drbg;
}
namespace Org::BouncyCastle::Crypto::Prng {
class IDrbgProvider;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class SP800SecureRandom;
}
// Type: Org.BouncyCastle.Crypto.Prng::SP800SecureRandom
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1111))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1112))
// CS Name: Org.BouncyCastle.Crypto.Prng.SP800SecureRandom
class CORDL_TYPE SP800SecureRandom : public Org::BouncyCastle::Security::SecureRandom {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~SP800SecureRandom() = default;

// Ctor Parameters [CppParam { name: "", ty: "SP800SecureRandom", modifiers: " const&", def_value: None }]
constexpr SP800SecureRandom(SP800SecureRandom const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SP800SecureRandom", modifiers: "&&", def_value: None }]
constexpr SP800SecureRandom(SP800SecureRandom&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SP800SecureRandom(void* ptr) noexcept : Org::BouncyCastle::Security::SecureRandom(ptr) {
}


  constexpr SP800SecureRandom& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SP800SecureRandom& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SP800SecureRandom& operator=(SP800SecureRandom&& o) noexcept = default;
  constexpr SP800SecureRandom& operator=(SP800SecureRandom const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Prng::IDrbgProvider __declspec(property(get=__get_mDrbgProvider, put=__set_mDrbgProvider))  mDrbgProvider;

constexpr void __set_mDrbgProvider(Org::BouncyCastle::Crypto::Prng::IDrbgProvider value) ;

constexpr Org::BouncyCastle::Crypto::Prng::IDrbgProvider __get_mDrbgProvider() const;

 bool __declspec(property(get=__get_mPredictionResistant, put=__set_mPredictionResistant))  mPredictionResistant;

constexpr void __set_mPredictionResistant(bool value) ;

constexpr bool __get_mPredictionResistant() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_mRandomSource, put=__set_mRandomSource))  mRandomSource;

constexpr void __set_mRandomSource(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_mRandomSource() const;

 Org::BouncyCastle::Crypto::IEntropySource __declspec(property(get=__get_mEntropySource, put=__set_mEntropySource))  mEntropySource;

constexpr void __set_mEntropySource(Org::BouncyCastle::Crypto::IEntropySource value) ;

constexpr Org::BouncyCastle::Crypto::IEntropySource __get_mEntropySource() const;

 Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg __declspec(property(get=__get_mDrbg, put=__set_mDrbg))  mDrbg;

constexpr void __set_mDrbg(Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg value) ;

constexpr Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg __get_mDrbg() const;


// Methods

static Org::BouncyCastle::Crypto::Prng::SP800SecureRandom New_ctor(Org::BouncyCastle::Security::SecureRandom randomSource, Org::BouncyCastle::Crypto::IEntropySource entropySource, Org::BouncyCastle::Crypto::Prng::IDrbgProvider drbgProvider, bool predictionResistant) ;

/// @brief Method .ctor addr 0xeb5b4c size 0x88 virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom randomSource, Org::BouncyCastle::Crypto::IEntropySource entropySource, Org::BouncyCastle::Crypto::Prng::IDrbgProvider drbgProvider, bool predictionResistant) ;

/// @brief Method SetSeed addr 0xeb5bd4 size 0xb4 virtual true final false
 void SetSeed(::ArrayW<uint8_t> seed) ;

/// @brief Method SetSeed addr 0xeb5c88 size 0xb4 virtual true final false
 void SetSeed(int64_t seed) ;

/// @brief Method NextBytes addr 0xeb5d3c size 0x2e0 virtual true final false
 void NextBytes(::ArrayW<uint8_t> bytes) ;

/// @brief Method NextBytes addr 0xeb601c size 0x98 virtual true final false
 void NextBytes(::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method GenerateSeed addr 0xeb60b4 size 0x8 virtual true final false
 ::ArrayW<uint8_t> GenerateSeed(int32_t numBytes) ;

/// @brief Method Reseed addr 0xeb60bc size 0x1d4 virtual true final false
 void Reseed(::ArrayW<uint8_t> additionalInput) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(Org::BouncyCastle::Crypto::Prng::SP800SecureRandom);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Prng::SP800SecureRandom, "Org.BouncyCastle.Crypto.Prng", "SP800SecureRandom");
