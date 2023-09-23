#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class KeccakDigest;
}
// Type: Org.BouncyCastle.Crypto.Digests::KeccakDigest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(755))
// CS Name: Org.BouncyCastle.Crypto.Digests.KeccakDigest
class CORDL_TYPE KeccakDigest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDigest
constexpr operator  Org::BouncyCastle::Crypto::IDigest() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Utilities::IMemoable
constexpr operator  Org::BouncyCastle::Utilities::IMemoable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~KeccakDigest() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeccakDigest", modifiers: " const&", def_value: None }]
constexpr KeccakDigest(KeccakDigest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeccakDigest", modifiers: "&&", def_value: None }]
constexpr KeccakDigest(KeccakDigest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeccakDigest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KeccakDigest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeccakDigest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeccakDigest& operator=(KeccakDigest&& o) noexcept = default;
  constexpr KeccakDigest& operator=(KeccakDigest const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint64_t> __declspec(property(get=__get_KeccakRoundConstants, put=__set_KeccakRoundConstants))  KeccakRoundConstants;

static void __set_KeccakRoundConstants(::ArrayW<uint64_t> value) ;

static ::ArrayW<uint64_t> __get_KeccakRoundConstants() ;

 ::ArrayW<uint64_t> __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_state() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_dataQueue, put=__set_dataQueue))  dataQueue;

constexpr void __set_dataQueue(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_dataQueue() const;

 int32_t __declspec(property(get=__get_rate, put=__set_rate))  rate;

constexpr void __set_rate(int32_t value) ;

constexpr int32_t __get_rate() const;

 int32_t __declspec(property(get=__get_bitsInQueue, put=__set_bitsInQueue))  bitsInQueue;

constexpr void __set_bitsInQueue(int32_t value) ;

constexpr int32_t __get_bitsInQueue() const;

 int32_t __declspec(property(get=__get_fixedOutputLength, put=__set_fixedOutputLength))  fixedOutputLength;

constexpr void __set_fixedOutputLength(int32_t value) ;

constexpr int32_t __get_fixedOutputLength() const;

 bool __declspec(property(get=__get_squeezing, put=__set_squeezing))  squeezing;

constexpr void __set_squeezing(bool value) ;

constexpr bool __get_squeezing() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters []
explicit KeccakDigest() ;

/// @brief Method .ctor addr 0x119a1ec size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "bitLength", ty: "int32_t", modifiers: "", def_value: None }]
explicit KeccakDigest(int32_t bitLength) ;

/// @brief Method .ctor addr 0x119a1f4 size 0x94 virtual false final false
 void _ctor(int32_t bitLength) ;

// Ctor Parameters [CppParam { name: "source", ty: "Org::BouncyCastle::Crypto::Digests::KeccakDigest", modifiers: "", def_value: None }]
explicit KeccakDigest(Org::BouncyCastle::Crypto::Digests::KeccakDigest source) ;

/// @brief Method .ctor addr 0x119a338 size 0x94 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Digests::KeccakDigest source) ;

/// @brief Method CopyIn addr 0x119a3cc size 0x7c virtual false final false
 void CopyIn(Org::BouncyCastle::Crypto::Digests::KeccakDigest source) ;

/// @brief Method get_AlgorithmName addr 0x119a448 size 0x84 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0x119a4cc size 0xc virtual true final false
 int32_t GetDigestSize() ;

/// @brief Method Update addr 0x119a4d8 size 0x4 virtual true final false
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0x119a5c0 size 0x4 virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) ;

/// @brief Method DoFinal addr 0x119a738 size 0x3c virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method DoFinal addr 0x119a8b8 size 0x70 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff, uint8_t partialByte, int32_t partialBits) ;

/// @brief Method Reset addr 0x119aa58 size 0x8 virtual true final false
 void Reset() ;

/// @brief Method GetByteLength addr 0x119aa60 size 0xc virtual true final false
 int32_t GetByteLength() ;

/// @brief Method Init addr 0x119a288 size 0xb0 virtual false final false
 void Init(int32_t bitLength) ;

/// @brief Method InitSponge addr 0x119aa6c size 0xfc virtual false final false
 void InitSponge(int32_t rate) ;

/// @brief Method Absorb addr 0x119a4dc size 0xe4 virtual false final false
 void Absorb(uint8_t data) ;

/// @brief Method Absorb addr 0x119a5c4 size 0x174 virtual false final false
 void Absorb(::ArrayW<uint8_t> data, int32_t off, int32_t len) ;

/// @brief Method AbsorbBits addr 0x119a928 size 0x130 virtual false final false
 void AbsorbBits(int32_t data, int32_t bits) ;

/// @brief Method PadAndSwitchToSqueezingPhase addr 0x119ac14 size 0x19c virtual false final false
 void PadAndSwitchToSqueezingPhase() ;

/// @brief Method Squeeze addr 0x119a774 size 0x144 virtual false final false
 void Squeeze(::ArrayW<uint8_t> output, int32_t offset, int64_t outputLength) ;

/// @brief Method KeccakAbsorb addr 0x119ab68 size 0xac virtual false final false
 void KeccakAbsorb(::ArrayW<uint8_t> data, int32_t off) ;

/// @brief Method KeccakExtract addr 0x119adb0 size 0x38 virtual false final false
 void KeccakExtract() ;

/// @brief Method KeccakPermutation addr 0x119ade8 size 0x618 virtual false final false
 void KeccakPermutation() ;

/// @brief Method Copy addr 0x119b400 size 0x60 virtual true final false
 Org::BouncyCastle::Utilities::IMemoable Copy() ;

/// @brief Method Reset addr 0x119b460 size 0x84 virtual true final false
 void Reset(Org::BouncyCastle::Utilities::IMemoable other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::KeccakDigest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::KeccakDigest, "Org.BouncyCastle.Crypto.Digests", "KeccakDigest");
