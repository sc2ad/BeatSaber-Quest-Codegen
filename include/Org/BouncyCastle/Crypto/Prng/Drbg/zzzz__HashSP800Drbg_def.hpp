#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class ISP80090Drbg;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class HashSP800Drbg;
}
// Type: Org.BouncyCastle.Crypto.Prng.Drbg::HashSP800Drbg
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1097))
// CS Name: Org.BouncyCastle.Crypto.Prng.Drbg.HashSP800Drbg
class CORDL_TYPE HashSP800Drbg : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg
constexpr operator  Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~HashSP800Drbg() = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSP800Drbg", modifiers: " const&", def_value: None }]
constexpr HashSP800Drbg(HashSP800Drbg const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HashSP800Drbg", modifiers: "&&", def_value: None }]
constexpr HashSP800Drbg(HashSP800Drbg&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HashSP800Drbg(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HashSP800Drbg& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HashSP800Drbg& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HashSP800Drbg& operator=(HashSP800Drbg&& o) noexcept = default;
  constexpr HashSP800Drbg& operator=(HashSP800Drbg const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_ONE, put=__set_ONE))  ONE;

static void __set_ONE(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_ONE() ;

static int64_t __declspec(property(get=__get_RESEED_MAX, put=__set_RESEED_MAX))  RESEED_MAX;

static void __set_RESEED_MAX(int64_t value) ;

static int64_t __get_RESEED_MAX() ;

static int32_t __declspec(property(get=__get_MAX_BITS_REQUEST, put=__set_MAX_BITS_REQUEST))  MAX_BITS_REQUEST;

static void __set_MAX_BITS_REQUEST(int32_t value) ;

static int32_t __get_MAX_BITS_REQUEST() ;

static System::Collections::IDictionary __declspec(property(get=__get_seedlens, put=__set_seedlens))  seedlens;

static void __set_seedlens(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_seedlens() ;

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_mDigest, put=__set_mDigest))  mDigest;

constexpr void __set_mDigest(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_mDigest() const;

 Org::BouncyCastle::Crypto::IEntropySource __declspec(property(get=__get_mEntropySource, put=__set_mEntropySource))  mEntropySource;

constexpr void __set_mEntropySource(Org::BouncyCastle::Crypto::IEntropySource value) ;

constexpr Org::BouncyCastle::Crypto::IEntropySource __get_mEntropySource() const;

 int32_t __declspec(property(get=__get_mSecurityStrength, put=__set_mSecurityStrength))  mSecurityStrength;

constexpr void __set_mSecurityStrength(int32_t value) ;

constexpr int32_t __get_mSecurityStrength() const;

 int32_t __declspec(property(get=__get_mSeedLength, put=__set_mSeedLength))  mSeedLength;

constexpr void __set_mSeedLength(int32_t value) ;

constexpr int32_t __get_mSeedLength() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mV, put=__set_mV))  mV;

constexpr void __set_mV(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mV() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mC, put=__set_mC))  mC;

constexpr void __set_mC(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mC() const;

 int64_t __declspec(property(get=__get_mReseedCounter, put=__set_mReseedCounter))  mReseedCounter;

constexpr void __set_mReseedCounter(int64_t value) ;

constexpr int64_t __get_mReseedCounter() const;


// Properties

 int32_t __declspec(property(get=get_BlockSize))  BlockSize;


// Methods

// Ctor Parameters [CppParam { name: "digest", ty: "Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }, CppParam { name: "securityStrength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "entropySource", ty: "Org::BouncyCastle::Crypto::IEntropySource", modifiers: "", def_value: None }, CppParam { name: "personalizationString", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "nonce", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit HashSP800Drbg(Org::BouncyCastle::Crypto::IDigest digest, int32_t securityStrength, Org::BouncyCastle::Crypto::IEntropySource entropySource, ::ArrayW<uint8_t> personalizationString, ::ArrayW<uint8_t> nonce) ;

/// @brief Method .ctor addr 0xeb1918 size 0x470 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IDigest digest, int32_t securityStrength, Org::BouncyCastle::Crypto::IEntropySource entropySource, ::ArrayW<uint8_t> personalizationString, ::ArrayW<uint8_t> nonce) ;

/// @brief Method get_BlockSize addr 0xeb1ea0 size 0xac virtual true final true
 int32_t get_BlockSize() ;

/// @brief Method Generate addr 0xeb1f4c size 0x354 virtual true final true
 int32_t Generate(::ArrayW<uint8_t> output, ::ArrayW<uint8_t> additionalInput, bool predictionResistant) ;

/// @brief Method GetEntropy addr 0xeb1d88 size 0x118 virtual false final false
 ::ArrayW<uint8_t> GetEntropy() ;

/// @brief Method AddTo addr 0xeb25d4 size 0xcc virtual false final false
 void AddTo(::ArrayW<uint8_t> longer, ::ArrayW<uint8_t> shorter) ;

/// @brief Method Reseed addr 0xeb22a0 size 0x244 virtual true final true
 void Reseed(::ArrayW<uint8_t> additionalInput) ;

/// @brief Method Hash addr 0xeb24e4 size 0xf0 virtual false final false
 ::ArrayW<uint8_t> Hash(::ArrayW<uint8_t> input) ;

/// @brief Method DoHash addr 0xeb28e0 size 0x13c virtual false final false
 void DoHash(::ArrayW<uint8_t> input, ::ArrayW<uint8_t> output) ;

/// @brief Method hashgen addr 0xeb26a0 size 0x240 virtual false final false
 ::ArrayW<uint8_t> hashgen(::ArrayW<uint8_t> input, int32_t lengthInBits) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng::Drbg
NEED_NO_BOX(Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Prng::Drbg::HashSP800Drbg, "Org.BouncyCastle.Crypto.Prng.Drbg", "HashSP800Drbg");
