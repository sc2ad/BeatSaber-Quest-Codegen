#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class ISP80090Drbg;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class CtrSP800Drbg;
}
// Type: Org.BouncyCastle.Crypto.Prng.Drbg::CtrSP800Drbg
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1095))
// CS Name: Org.BouncyCastle.Crypto.Prng.Drbg.CtrSP800Drbg
class CORDL_TYPE CtrSP800Drbg : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg
constexpr operator  Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~CtrSP800Drbg() = default;

// Ctor Parameters [CppParam { name: "", ty: "CtrSP800Drbg", modifiers: " const&", def_value: None }]
constexpr CtrSP800Drbg(CtrSP800Drbg const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CtrSP800Drbg", modifiers: "&&", def_value: None }]
constexpr CtrSP800Drbg(CtrSP800Drbg&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CtrSP800Drbg(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CtrSP800Drbg& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CtrSP800Drbg& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CtrSP800Drbg& operator=(CtrSP800Drbg&& o) noexcept = default;
  constexpr CtrSP800Drbg& operator=(CtrSP800Drbg const& o) noexcept = default;
                


// Fields

static int64_t __declspec(property(get=__get_TDEA_RESEED_MAX, put=__set_TDEA_RESEED_MAX))  TDEA_RESEED_MAX;

static void __set_TDEA_RESEED_MAX(int64_t value) ;

static int64_t __get_TDEA_RESEED_MAX() ;

static int64_t __declspec(property(get=__get_AES_RESEED_MAX, put=__set_AES_RESEED_MAX))  AES_RESEED_MAX;

static void __set_AES_RESEED_MAX(int64_t value) ;

static int64_t __get_AES_RESEED_MAX() ;

static int32_t __declspec(property(get=__get_TDEA_MAX_BITS_REQUEST, put=__set_TDEA_MAX_BITS_REQUEST))  TDEA_MAX_BITS_REQUEST;

static void __set_TDEA_MAX_BITS_REQUEST(int32_t value) ;

static int32_t __get_TDEA_MAX_BITS_REQUEST() ;

static int32_t __declspec(property(get=__get_AES_MAX_BITS_REQUEST, put=__set_AES_MAX_BITS_REQUEST))  AES_MAX_BITS_REQUEST;

static void __set_AES_MAX_BITS_REQUEST(int32_t value) ;

static int32_t __get_AES_MAX_BITS_REQUEST() ;

 Org::BouncyCastle::Crypto::IEntropySource __declspec(property(get=__get_mEntropySource, put=__set_mEntropySource))  mEntropySource;

constexpr void __set_mEntropySource(Org::BouncyCastle::Crypto::IEntropySource value) ;

constexpr Org::BouncyCastle::Crypto::IEntropySource __get_mEntropySource() const;

 Org::BouncyCastle::Crypto::IBlockCipher __declspec(property(get=__get_mEngine, put=__set_mEngine))  mEngine;

constexpr void __set_mEngine(Org::BouncyCastle::Crypto::IBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IBlockCipher __get_mEngine() const;

 int32_t __declspec(property(get=__get_mKeySizeInBits, put=__set_mKeySizeInBits))  mKeySizeInBits;

constexpr void __set_mKeySizeInBits(int32_t value) ;

constexpr int32_t __get_mKeySizeInBits() const;

 int32_t __declspec(property(get=__get_mSeedLength, put=__set_mSeedLength))  mSeedLength;

constexpr void __set_mSeedLength(int32_t value) ;

constexpr int32_t __get_mSeedLength() const;

 int32_t __declspec(property(get=__get_mSecurityStrength, put=__set_mSecurityStrength))  mSecurityStrength;

constexpr void __set_mSecurityStrength(int32_t value) ;

constexpr int32_t __get_mSecurityStrength() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mKey, put=__set_mKey))  mKey;

constexpr void __set_mKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mKey() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mV, put=__set_mV))  mV;

constexpr void __set_mV(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mV() const;

 int64_t __declspec(property(get=__get_mReseedCounter, put=__set_mReseedCounter))  mReseedCounter;

constexpr void __set_mReseedCounter(int64_t value) ;

constexpr int64_t __get_mReseedCounter() const;

 bool __declspec(property(get=__get_mIsTdea, put=__set_mIsTdea))  mIsTdea;

constexpr void __set_mIsTdea(bool value) ;

constexpr bool __get_mIsTdea() const;

static ::ArrayW<uint8_t> __declspec(property(get=__get_K_BITS, put=__set_K_BITS))  K_BITS;

static void __set_K_BITS(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_K_BITS() ;


// Properties

 int32_t __declspec(property(get=get_BlockSize))  BlockSize;


// Methods

static Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg New_ctor(Org::BouncyCastle::Crypto::IBlockCipher engine, int32_t keySizeInBits, int32_t securityStrength, Org::BouncyCastle::Crypto::IEntropySource entropySource, ::ArrayW<uint8_t> personalizationString, ::ArrayW<uint8_t> nonce) ;

/// @brief Method .ctor addr 0xeae824 size 0x254 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher engine, int32_t keySizeInBits, int32_t securityStrength, Org::BouncyCastle::Crypto::IEntropySource entropySource, ::ArrayW<uint8_t> personalizationString, ::ArrayW<uint8_t> nonce) ;

/// @brief Method CTR_DRBG_Instantiate_algorithm addr 0xeaedcc size 0x21c virtual false final false
 void CTR_DRBG_Instantiate_algorithm(::ArrayW<uint8_t> entropy, ::ArrayW<uint8_t> nonce, ::ArrayW<uint8_t> personalisationString) ;

/// @brief Method CTR_DRBG_Update addr 0xeaf4c0 size 0x348 virtual false final false
 void CTR_DRBG_Update(::ArrayW<uint8_t> seed, ::ArrayW<uint8_t> key, ::ArrayW<uint8_t> v) ;

/// @brief Method CTR_DRBG_Reseed_algorithm addr 0xeaf9a8 size 0xa4 virtual false final false
 void CTR_DRBG_Reseed_algorithm(::ArrayW<uint8_t> additionalInput) ;

/// @brief Method XOR addr 0xeaf914 size 0x94 virtual false final false
 void XOR(::ArrayW<uint8_t> output, ::ArrayW<uint8_t> a, ::ArrayW<uint8_t> b, int32_t bOff) ;

/// @brief Method AddOneTo addr 0xeaf8ac size 0x68 virtual false final false
 void AddOneTo(::ArrayW<uint8_t> longer) ;

/// @brief Method GetEntropy addr 0xeaecb4 size 0x118 virtual false final false
 ::ArrayW<uint8_t> GetEntropy() ;

/// @brief Method Block_Cipher_df addr 0xeaefe8 size 0x4d8 virtual false final false
 ::ArrayW<uint8_t> Block_Cipher_df(::ArrayW<uint8_t> inputString, int32_t bitLength) ;

/// @brief Method BCC addr 0xeafacc size 0x30c virtual false final false
 void BCC(::ArrayW<uint8_t> bccOut, ::ArrayW<uint8_t> k, ::ArrayW<uint8_t> iV, ::ArrayW<uint8_t> data) ;

/// @brief Method copyIntToByteArray addr 0xeafa4c size 0x80 virtual false final false
 void copyIntToByteArray(::ArrayW<uint8_t> buf, int32_t value, int32_t offSet) ;

/// @brief Method get_BlockSize addr 0xeafdd8 size 0x20 virtual true final true
 int32_t get_BlockSize() ;

/// @brief Method Generate addr 0xeafdf8 size 0x4a4 virtual true final true
 int32_t Generate(::ArrayW<uint8_t> output, ::ArrayW<uint8_t> additionalInput, bool predictionResistant) ;

/// @brief Method Reseed addr 0xeb02b0 size 0x4 virtual true final true
 void Reseed(::ArrayW<uint8_t> additionalInput) ;

/// @brief Method IsTdea addr 0xeaeb64 size 0x150 virtual false final false
 bool IsTdea(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method GetMaxSecurityStrength addr 0xeaea78 size 0xec virtual false final false
 int32_t GetMaxSecurityStrength(Org::BouncyCastle::Crypto::IBlockCipher cipher, int32_t keySizeInBits) ;

/// @brief Method ExpandKey addr 0xeaf808 size 0xa4 virtual false final false
 ::ArrayW<uint8_t> ExpandKey(::ArrayW<uint8_t> key) ;

/// @brief Method PadKey addr 0xeb02b4 size 0x290 virtual false final false
 void PadKey(::ArrayW<uint8_t> keyMaster, int32_t keyOff, ::ArrayW<uint8_t> tmp, int32_t tmpOff) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng::Drbg
NEED_NO_BOX(Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Prng::Drbg::CtrSP800Drbg, "Org.BouncyCastle.Crypto.Prng.Drbg", "CtrSP800Drbg");
