#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class Dstu7624Engine;
}
// Type: Org.BouncyCastle.Crypto.Engines::Dstu7624Engine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(842))
// CS Name: Org.BouncyCastle.Crypto.Engines.Dstu7624Engine
class CORDL_TYPE Dstu7624Engine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Dstu7624Engine() = default;

// Ctor Parameters [CppParam { name: "", ty: "Dstu7624Engine", modifiers: " const&", def_value: None }]
constexpr Dstu7624Engine(Dstu7624Engine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Dstu7624Engine", modifiers: "&&", def_value: None }]
constexpr Dstu7624Engine(Dstu7624Engine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Dstu7624Engine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Dstu7624Engine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Dstu7624Engine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Dstu7624Engine& operator=(Dstu7624Engine&& o) noexcept = default;
  constexpr Dstu7624Engine& operator=(Dstu7624Engine const& o) noexcept = default;
                


// Fields

/// @brief Field ROUNDS_128 offset 0
static constexpr int32_t  ROUNDS_128{10};

/// @brief Field ROUNDS_256 offset 0
static constexpr int32_t  ROUNDS_256{14};

/// @brief Field ROUNDS_512 offset 0
static constexpr int32_t  ROUNDS_512{18};

/// @brief Field mdsMatrix offset 0
static constexpr uint64_t  mdsMatrix{290207332435296513u};

/// @brief Field mdsInvMatrix offset 0
static constexpr uint64_t  mdsInvMatrix{14616231584692868525u};

 ::ArrayW<uint64_t> __declspec(property(get=__get_internalState, put=__set_internalState))  internalState;

constexpr void __set_internalState(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_internalState() const;

 ::ArrayW<uint64_t> __declspec(property(get=__get_workingKey, put=__set_workingKey))  workingKey;

constexpr void __set_workingKey(::ArrayW<uint64_t> value) ;

constexpr ::ArrayW<uint64_t> __get_workingKey() const;

 ::ArrayW<::ArrayW<uint64_t>> __declspec(property(get=__get_roundKeys, put=__set_roundKeys))  roundKeys;

constexpr void __set_roundKeys(::ArrayW<::ArrayW<uint64_t>> value) ;

constexpr ::ArrayW<::ArrayW<uint64_t>> __get_roundKeys() const;

 int32_t __declspec(property(get=__get_wordsInBlock, put=__set_wordsInBlock))  wordsInBlock;

constexpr void __set_wordsInBlock(int32_t value) ;

constexpr int32_t __get_wordsInBlock() const;

 int32_t __declspec(property(get=__get_wordsInKey, put=__set_wordsInKey))  wordsInKey;

constexpr void __set_wordsInKey(int32_t value) ;

constexpr int32_t __get_wordsInKey() const;

 int32_t __declspec(property(get=__get_roundsAmount, put=__set_roundsAmount))  roundsAmount;

constexpr void __set_roundsAmount(int32_t value) ;

constexpr int32_t __get_roundsAmount() const;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;

static ::ArrayW<uint8_t> __declspec(property(get=__get_S0, put=__set_S0))  S0;

static void __set_S0(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_S0() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_S1, put=__set_S1))  S1;

static void __set_S1(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_S1() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_S2, put=__set_S2))  S2;

static void __set_S2(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_S2() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_S3, put=__set_S3))  S3;

static void __set_S3(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_S3() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_T0, put=__set_T0))  T0;

static void __set_T0(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_T0() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_T1, put=__set_T1))  T1;

static void __set_T1(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_T1() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_T2, put=__set_T2))  T2;

static void __set_T2(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_T2() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_T3, put=__set_T3))  T3;

static void __set_T3(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_T3() ;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

static Org::BouncyCastle::Crypto::Engines::Dstu7624Engine New_ctor(int32_t blockSizeBits) ;

/// @brief Method .ctor addr 0xe40858 size 0xc8 virtual false final false
 void _ctor(int32_t blockSizeBits) ;

/// @brief Method Init addr 0xe40920 size 0x324 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method WorkingKeyExpandKT addr 0xe40c44 size 0x270 virtual false final false
 void WorkingKeyExpandKT(::ArrayW<uint64_t> workingKey, ::ArrayW<uint64_t> tempKeys) ;

/// @brief Method WorkingKeyExpandEven addr 0xe40eb4 size 0x494 virtual false final false
 void WorkingKeyExpandEven(::ArrayW<uint64_t> workingKey, ::ArrayW<uint64_t> tempKey) ;

/// @brief Method WorkingKeyExpandOdd addr 0xe41348 size 0x74 virtual false final false
 void WorkingKeyExpandOdd() ;

/// @brief Method ProcessBlock addr 0xe415e8 size 0x24c virtual true final false
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method EncryptionRound addr 0xe413bc size 0x20 virtual false final false
 void EncryptionRound() ;

/// @brief Method DecryptionRound addr 0xe42058 size 0x20 virtual false final false
 void DecryptionRound() ;

/// @brief Method DecryptBlock_128 addr 0xe41c88 size 0x348 virtual false final false
 void DecryptBlock_128(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method EncryptBlock_128 addr 0xe41834 size 0x344 virtual false final false
 void EncryptBlock_128(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method SubBytes addr 0xe42078 size 0x1ac virtual false final false
 void SubBytes() ;

/// @brief Method InvSubBytes addr 0xe42844 size 0x1ac virtual false final false
 void InvSubBytes() ;

/// @brief Method ShiftRows addr 0xe42224 size 0x254 virtual false final false
 void ShiftRows() ;

/// @brief Method InvShiftRows addr 0xe425f0 size 0x254 virtual false final false
 void InvShiftRows() ;

/// @brief Method AddRoundKey addr 0xe41b78 size 0x88 virtual false final false
 void AddRoundKey(int32_t round) ;

/// @brief Method SubRoundKey addr 0xe41fd0 size 0x88 virtual false final false
 void SubRoundKey(int32_t round) ;

/// @brief Method XorRoundKey addr 0xe41c00 size 0x88 virtual false final false
 void XorRoundKey(int32_t round) ;

/// @brief Method MixColumn addr 0xe42b40 size 0xb4 virtual false final false
static uint64_t MixColumn(uint64_t c) ;

/// @brief Method MixColumns addr 0xe42478 size 0xbc virtual false final false
 void MixColumns() ;

/// @brief Method MixColumnInv addr 0xe429f0 size 0x150 virtual false final false
static uint64_t MixColumnInv(uint64_t c) ;

/// @brief Method MixColumnsInv addr 0xe42534 size 0xbc virtual false final false
 void MixColumnsInv() ;

/// @brief Method MulX addr 0xe42bf4 size 0x20 virtual false final false
static uint64_t MulX(uint64_t n) ;

/// @brief Method MulX2 addr 0xe42c1c size 0x2c virtual false final false
static uint64_t MulX2(uint64_t n) ;

/// @brief Method Rotate addr 0xe42c14 size 0x8 virtual false final false
static uint64_t Rotate(int32_t n, uint64_t x) ;

/// @brief Method RotateLeft addr 0xe413dc size 0x20c virtual false final false
 void RotateLeft(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method get_AlgorithmName addr 0xe42c48 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetBlockSize addr 0xe42c88 size 0xc virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe42c94 size 0x8 virtual true final false
 bool get_IsPartialBlockOkay() ;

/// @brief Method Reset addr 0xe42c9c size 0x24 virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::Dstu7624Engine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::Dstu7624Engine, "Org.BouncyCastle.Crypto.Engines", "Dstu7624Engine");
