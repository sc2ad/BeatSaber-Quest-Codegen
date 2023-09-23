#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class ISP80090Drbg;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class HMacSP800Drbg;
}
// Type: Org.BouncyCastle.Crypto.Prng.Drbg::HMacSP800Drbg
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1098))
// CS Name: Org.BouncyCastle.Crypto.Prng.Drbg.HMacSP800Drbg
class CORDL_TYPE HMacSP800Drbg : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg
constexpr operator  Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~HMacSP800Drbg() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMacSP800Drbg", modifiers: " const&", def_value: None }]
constexpr HMacSP800Drbg(HMacSP800Drbg const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMacSP800Drbg", modifiers: "&&", def_value: None }]
constexpr HMacSP800Drbg(HMacSP800Drbg&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMacSP800Drbg(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMacSP800Drbg& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMacSP800Drbg& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMacSP800Drbg& operator=(HMacSP800Drbg&& o) noexcept = default;
  constexpr HMacSP800Drbg& operator=(HMacSP800Drbg const& o) noexcept = default;
                


// Fields

static int64_t __declspec(property(get=__get_RESEED_MAX, put=__set_RESEED_MAX))  RESEED_MAX;

static void __set_RESEED_MAX(int64_t value) ;

static int64_t __get_RESEED_MAX() ;

static int32_t __declspec(property(get=__get_MAX_BITS_REQUEST, put=__set_MAX_BITS_REQUEST))  MAX_BITS_REQUEST;

static void __set_MAX_BITS_REQUEST(int32_t value) ;

static int32_t __get_MAX_BITS_REQUEST() ;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mK, put=__set_mK))  mK;

constexpr void __set_mK(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mK() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mV, put=__set_mV))  mV;

constexpr void __set_mV(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mV() const;

 Org::BouncyCastle::Crypto::IEntropySource __declspec(property(get=__get_mEntropySource, put=__set_mEntropySource))  mEntropySource;

constexpr void __set_mEntropySource(Org::BouncyCastle::Crypto::IEntropySource value) ;

constexpr Org::BouncyCastle::Crypto::IEntropySource __get_mEntropySource() const;

 Org::BouncyCastle::Crypto::IMac __declspec(property(get=__get_mHMac, put=__set_mHMac))  mHMac;

constexpr void __set_mHMac(Org::BouncyCastle::Crypto::IMac value) ;

constexpr Org::BouncyCastle::Crypto::IMac __get_mHMac() const;

 int32_t __declspec(property(get=__get_mSecurityStrength, put=__set_mSecurityStrength))  mSecurityStrength;

constexpr void __set_mSecurityStrength(int32_t value) ;

constexpr int32_t __get_mSecurityStrength() const;

 int64_t __declspec(property(get=__get_mReseedCounter, put=__set_mReseedCounter))  mReseedCounter;

constexpr void __set_mReseedCounter(int64_t value) ;

constexpr int64_t __get_mReseedCounter() const;


// Properties

 int32_t __declspec(property(get=get_BlockSize))  BlockSize;


// Methods

// Ctor Parameters [CppParam { name: "hMac", ty: "Org::BouncyCastle::Crypto::IMac", modifiers: "", def_value: None }, CppParam { name: "securityStrength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "entropySource", ty: "Org::BouncyCastle::Crypto::IEntropySource", modifiers: "", def_value: None }, CppParam { name: "personalizationString", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "nonce", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit HMacSP800Drbg(Org::BouncyCastle::Crypto::IMac hMac, int32_t securityStrength, Org::BouncyCastle::Crypto::IEntropySource entropySource, ::ArrayW<uint8_t> personalizationString, ::ArrayW<uint8_t> nonce) ;

/// @brief Method .ctor addr 0xeb2a1c size 0x354 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IMac hMac, int32_t securityStrength, Org::BouncyCastle::Crypto::IEntropySource entropySource, ::ArrayW<uint8_t> personalizationString, ::ArrayW<uint8_t> nonce) ;

/// @brief Method hmac_DRBG_Update addr 0xeb2e88 size 0x40 virtual false final false
 void hmac_DRBG_Update(::ArrayW<uint8_t> seedMaterial) ;

/// @brief Method hmac_DRBG_Update_Func addr 0xeb2ec8 size 0x434 virtual false final false
 void hmac_DRBG_Update_Func(::ArrayW<uint8_t> seedMaterial, uint8_t vValue) ;

/// @brief Method get_BlockSize addr 0xeb32fc size 0x20 virtual true final true
 int32_t get_BlockSize() ;

/// @brief Method Generate addr 0xeb331c size 0x510 virtual true final true
 int32_t Generate(::ArrayW<uint8_t> output, ::ArrayW<uint8_t> additionalInput, bool predictionResistant) ;

/// @brief Method Reseed addr 0xeb382c size 0x90 virtual true final true
 void Reseed(::ArrayW<uint8_t> additionalInput) ;

/// @brief Method GetEntropy addr 0xeb2d70 size 0x118 virtual false final false
 ::ArrayW<uint8_t> GetEntropy() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng::Drbg
NEED_NO_BOX(Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Prng::Drbg::HMacSP800Drbg, "Org.BouncyCastle.Crypto.Prng.Drbg", "HMacSP800Drbg");
