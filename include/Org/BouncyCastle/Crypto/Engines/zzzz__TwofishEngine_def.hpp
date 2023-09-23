#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class TwofishEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::TwofishEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(881))
// CS Name: Org.BouncyCastle.Crypto.Engines.TwofishEngine
class CORDL_TYPE TwofishEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~TwofishEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "TwofishEngine", modifiers: " const&", def_value: None }]
constexpr TwofishEngine(TwofishEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TwofishEngine", modifiers: "&&", def_value: None }]
constexpr TwofishEngine(TwofishEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TwofishEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TwofishEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TwofishEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TwofishEngine& operator=(TwofishEngine&& o) noexcept = default;
  constexpr TwofishEngine& operator=(TwofishEngine const& o) noexcept = default;
                


// Fields

/// @brief Field P_00 offset 0
static constexpr int32_t  P_00{1};

/// @brief Field P_01 offset 0
static constexpr int32_t  P_01{0};

/// @brief Field P_02 offset 0
static constexpr int32_t  P_02{0};

/// @brief Field P_03 offset 0
static constexpr int32_t  P_03{1};

/// @brief Field P_04 offset 0
static constexpr int32_t  P_04{1};

/// @brief Field P_10 offset 0
static constexpr int32_t  P_10{0};

/// @brief Field P_11 offset 0
static constexpr int32_t  P_11{0};

/// @brief Field P_12 offset 0
static constexpr int32_t  P_12{1};

/// @brief Field P_13 offset 0
static constexpr int32_t  P_13{1};

/// @brief Field P_14 offset 0
static constexpr int32_t  P_14{0};

/// @brief Field P_20 offset 0
static constexpr int32_t  P_20{1};

/// @brief Field P_21 offset 0
static constexpr int32_t  P_21{1};

/// @brief Field P_22 offset 0
static constexpr int32_t  P_22{0};

/// @brief Field P_23 offset 0
static constexpr int32_t  P_23{0};

/// @brief Field P_24 offset 0
static constexpr int32_t  P_24{0};

/// @brief Field P_30 offset 0
static constexpr int32_t  P_30{0};

/// @brief Field P_31 offset 0
static constexpr int32_t  P_31{1};

/// @brief Field P_32 offset 0
static constexpr int32_t  P_32{1};

/// @brief Field P_33 offset 0
static constexpr int32_t  P_33{0};

/// @brief Field P_34 offset 0
static constexpr int32_t  P_34{1};

/// @brief Field GF256_FDBK offset 0
static constexpr int32_t  GF256_FDBK{361};

/// @brief Field GF256_FDBK_2 offset 0
static constexpr int32_t  GF256_FDBK_2{180};

/// @brief Field GF256_FDBK_4 offset 0
static constexpr int32_t  GF256_FDBK_4{90};

/// @brief Field RS_GF_FDBK offset 0
static constexpr int32_t  RS_GF_FDBK{333};

/// @brief Field ROUNDS offset 0
static constexpr int32_t  ROUNDS{16};

/// @brief Field MAX_ROUNDS offset 0
static constexpr int32_t  MAX_ROUNDS{16};

/// @brief Field BLOCK_SIZE offset 0
static constexpr int32_t  BLOCK_SIZE{16};

/// @brief Field MAX_KEY_BITS offset 0
static constexpr int32_t  MAX_KEY_BITS{256};

/// @brief Field INPUT_WHITEN offset 0
static constexpr int32_t  INPUT_WHITEN{0};

/// @brief Field OUTPUT_WHITEN offset 0
static constexpr int32_t  OUTPUT_WHITEN{4};

/// @brief Field ROUND_SUBKEYS offset 0
static constexpr int32_t  ROUND_SUBKEYS{8};

/// @brief Field TOTAL_SUBKEYS offset 0
static constexpr int32_t  TOTAL_SUBKEYS{40};

/// @brief Field SK_STEP offset 0
static constexpr int32_t  SK_STEP{33686018};

/// @brief Field SK_BUMP offset 0
static constexpr int32_t  SK_BUMP{16843009};

/// @brief Field SK_ROTL offset 0
static constexpr int32_t  SK_ROTL{9};

static /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 49, ty: Array, byref: false, pinned: false, valuetype: false } */ __declspec(property(get=__get_P, put=__set_P))  P;

static void __set_P(/* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 49, ty: Array, byref: false, pinned: false, valuetype: false } */ value) ;

static /* UNKNOWN TYPE! Il2CppType { data: ArrayType, attrs: 49, ty: Array, byref: false, pinned: false, valuetype: false } */ __get_P() ;

 bool __declspec(property(get=__get_encrypting, put=__set_encrypting))  encrypting;

constexpr void __set_encrypting(bool value) ;

constexpr bool __get_encrypting() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_gMDS0, put=__set_gMDS0))  gMDS0;

constexpr void __set_gMDS0(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_gMDS0() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_gMDS1, put=__set_gMDS1))  gMDS1;

constexpr void __set_gMDS1(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_gMDS1() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_gMDS2, put=__set_gMDS2))  gMDS2;

constexpr void __set_gMDS2(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_gMDS2() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_gMDS3, put=__set_gMDS3))  gMDS3;

constexpr void __set_gMDS3(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_gMDS3() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_gSubKeys, put=__set_gSubKeys))  gSubKeys;

constexpr void __set_gSubKeys(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_gSubKeys() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_gSBox, put=__set_gSBox))  gSBox;

constexpr void __set_gSBox(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_gSBox() const;

 int32_t __declspec(property(get=__get_k64Cnt, put=__set_k64Cnt))  k64Cnt;

constexpr void __set_k64Cnt(int32_t value) ;

constexpr int32_t __get_k64Cnt() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_workingKey, put=__set_workingKey))  workingKey;

constexpr void __set_workingKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_workingKey() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

// Ctor Parameters []
explicit TwofishEngine() ;

/// @brief Method .ctor addr 0xe66460 size 0x2f0 virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0xe667ac size 0x164 virtual true final true
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe67120 size 0x40 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe67160 size 0x8 virtual true final true
 bool get_IsPartialBlockOkay() ;

/// @brief Method ProcessBlock addr 0xe67168 size 0x138 virtual true final true
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe67790 size 0x10 virtual true final true
 void Reset() ;

/// @brief Method GetBlockSize addr 0xe677a0 size 0x8 virtual true final true
 int32_t GetBlockSize() ;

/// @brief Method SetKey addr 0xe66910 size 0x810 virtual false final false
 void SetKey(::ArrayW<uint8_t> key) ;

/// @brief Method EncryptBlock addr 0xe672a0 size 0x278 virtual false final false
 void EncryptBlock(::ArrayW<uint8_t> src, int32_t srcIndex, ::ArrayW<uint8_t> dst, int32_t dstIndex) ;

/// @brief Method DecryptBlock addr 0xe67518 size 0x278 virtual false final false
 void DecryptBlock(::ArrayW<uint8_t> src, int32_t srcIndex, ::ArrayW<uint8_t> dst, int32_t dstIndex) ;

/// @brief Method F32 addr 0xe678b8 size 0x458 virtual false final false
 int32_t F32(int32_t x, ::ArrayW<int32_t> k32) ;

/// @brief Method RS_MDS_Encode addr 0xe67818 size 0xa0 virtual false final false
 int32_t RS_MDS_Encode(int32_t k0, int32_t k1) ;

/// @brief Method RS_rem addr 0xe67ed0 size 0x40 virtual false final false
 int32_t RS_rem(int32_t x) ;

/// @brief Method LFSR1 addr 0xe67f10 size 0x14 virtual false final false
 int32_t LFSR1(int32_t x) ;

/// @brief Method LFSR2 addr 0xe67f24 size 0x24 virtual false final false
 int32_t LFSR2(int32_t x) ;

/// @brief Method Mx_X addr 0xe66750 size 0x28 virtual false final false
 int32_t Mx_X(int32_t x) ;

/// @brief Method Mx_Y addr 0xe66778 size 0x34 virtual false final false
 int32_t Mx_Y(int32_t x) ;

/// @brief Method M_b0 addr 0xe67d10 size 0x8 virtual false final false
 int32_t M_b0(int32_t x) ;

/// @brief Method M_b1 addr 0xe67d18 size 0x8 virtual false final false
 int32_t M_b1(int32_t x) ;

/// @brief Method M_b2 addr 0xe67d20 size 0x8 virtual false final false
 int32_t M_b2(int32_t x) ;

/// @brief Method M_b3 addr 0xe67d28 size 0x8 virtual false final false
 int32_t M_b3(int32_t x) ;

/// @brief Method Fe32_0 addr 0xe67d30 size 0x8c virtual false final false
 int32_t Fe32_0(int32_t x) ;

/// @brief Method Fe32_3 addr 0xe67dbc size 0x94 virtual false final false
 int32_t Fe32_3(int32_t x) ;

/// @brief Method BytesTo32Bits addr 0xe677a8 size 0x70 virtual false final false
 int32_t BytesTo32Bits(::ArrayW<uint8_t> b, int32_t p) ;

/// @brief Method Bits32ToBytes addr 0xe67e50 size 0x80 virtual false final false
 void Bits32ToBytes(int32_t inData, ::ArrayW<uint8_t> b, int32_t offset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::TwofishEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::TwofishEngine, "Org.BouncyCastle.Crypto.Engines", "TwofishEngine");
