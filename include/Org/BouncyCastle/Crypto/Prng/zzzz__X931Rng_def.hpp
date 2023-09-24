#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class X931Rng;
}
// Type: Org.BouncyCastle.Crypto.Prng::X931Rng
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1120))
// CS Name: Org.BouncyCastle.Crypto.Prng.X931Rng
class CORDL_TYPE X931Rng : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~X931Rng() = default;

// Ctor Parameters [CppParam { name: "", ty: "X931Rng", modifiers: " const&", def_value: None }]
constexpr X931Rng(X931Rng const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X931Rng", modifiers: "&&", def_value: None }]
constexpr X931Rng(X931Rng&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X931Rng(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X931Rng& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X931Rng& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X931Rng& operator=(X931Rng&& o) noexcept = default;
  constexpr X931Rng& operator=(X931Rng const& o) noexcept = default;
                


// Fields

/// @brief Field BLOCK64_RESEED_MAX offset 0
static constexpr int64_t  BLOCK64_RESEED_MAX{32768};

/// @brief Field BLOCK128_RESEED_MAX offset 0
static constexpr int64_t  BLOCK128_RESEED_MAX{8388608};

/// @brief Field BLOCK64_MAX_BITS_REQUEST offset 0
static constexpr int32_t  BLOCK64_MAX_BITS_REQUEST{4096};

/// @brief Field BLOCK128_MAX_BITS_REQUEST offset 0
static constexpr int32_t  BLOCK128_MAX_BITS_REQUEST{262144};

 Org::BouncyCastle::Crypto::IBlockCipher __declspec(property(get=__get_mEngine, put=__set_mEngine))  mEngine;

constexpr void __set_mEngine(Org::BouncyCastle::Crypto::IBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IBlockCipher __get_mEngine() const;

 Org::BouncyCastle::Crypto::IEntropySource __declspec(property(get=__get_mEntropySource, put=__set_mEntropySource))  mEntropySource;

constexpr void __set_mEntropySource(Org::BouncyCastle::Crypto::IEntropySource value) ;

constexpr Org::BouncyCastle::Crypto::IEntropySource __get_mEntropySource() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mDT, put=__set_mDT))  mDT;

constexpr void __set_mDT(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mDT() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mI, put=__set_mI))  mI;

constexpr void __set_mI(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mI() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mR, put=__set_mR))  mR;

constexpr void __set_mR(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mR() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mV, put=__set_mV))  mV;

constexpr void __set_mV(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mV() const;

 int64_t __declspec(property(get=__get_mReseedCounter, put=__set_mReseedCounter))  mReseedCounter;

constexpr void __set_mReseedCounter(int64_t value) ;

constexpr int64_t __get_mReseedCounter() const;


// Properties

 Org::BouncyCastle::Crypto::IEntropySource __declspec(property(get=get_EntropySource))  EntropySource;


// Methods

static Org::BouncyCastle::Crypto::Prng::X931Rng New_ctor(Org::BouncyCastle::Crypto::IBlockCipher engine, ::ArrayW<uint8_t> dateTimeVector, Org::BouncyCastle::Crypto::IEntropySource entropySource) ;

/// @brief Method .ctor addr 0xeb724c size 0x1f8 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher engine, ::ArrayW<uint8_t> dateTimeVector, Org::BouncyCastle::Crypto::IEntropySource entropySource) ;

/// @brief Method Generate addr 0xeb7444 size 0x488 virtual false final false
 int32_t Generate(::ArrayW<uint8_t> output, bool predictionResistant) ;

/// @brief Method Reseed addr 0xeb7a5c size 0x18c virtual false final false
 void Reseed() ;

/// @brief Method get_EntropySource addr 0xeb7be8 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::IEntropySource get_EntropySource() ;

/// @brief Method Process addr 0xeb78e0 size 0x134 virtual false final false
 void Process(::ArrayW<uint8_t> res, ::ArrayW<uint8_t> a, ::ArrayW<uint8_t> b) ;

/// @brief Method Increment addr 0xeb7a14 size 0x48 virtual false final false
 void Increment(::ArrayW<uint8_t> val) ;

/// @brief Method IsTooLarge addr 0xeb78cc size 0x14 virtual false final false
static bool IsTooLarge(::ArrayW<uint8_t> bytes, int32_t maxBytes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(Org::BouncyCastle::Crypto::Prng::X931Rng);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Prng::X931Rng, "Org.BouncyCastle.Crypto.Prng", "X931Rng");
