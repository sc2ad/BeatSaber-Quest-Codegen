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
class CamelliaLightEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::CamelliaLightEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(831))
// CS Name: Org.BouncyCastle.Crypto.Engines.CamelliaLightEngine
class CORDL_TYPE CamelliaLightEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~CamelliaLightEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "CamelliaLightEngine", modifiers: " const&", def_value: None }]
constexpr CamelliaLightEngine(CamelliaLightEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CamelliaLightEngine", modifiers: "&&", def_value: None }]
constexpr CamelliaLightEngine(CamelliaLightEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CamelliaLightEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CamelliaLightEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CamelliaLightEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CamelliaLightEngine& operator=(CamelliaLightEngine&& o) noexcept = default;
  constexpr CamelliaLightEngine& operator=(CamelliaLightEngine const& o) noexcept = default;
                


// Fields

/// @brief Field BLOCK_SIZE offset 0
static constexpr int32_t  BLOCK_SIZE{16};

 bool __declspec(property(get=__get_initialised, put=__set_initialised))  initialised;

constexpr void __set_initialised(bool value) ;

constexpr bool __get_initialised() const;

 bool __declspec(property(get=__get__keyis128, put=__set__keyis128))  _keyis128;

constexpr void __set__keyis128(bool value) ;

constexpr bool __get__keyis128() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_subkey, put=__set_subkey))  subkey;

constexpr void __set_subkey(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_subkey() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_kw, put=__set_kw))  kw;

constexpr void __set_kw(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_kw() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_ke, put=__set_ke))  ke;

constexpr void __set_ke(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_ke() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_state() const;

static ::ArrayW<uint32_t> __declspec(property(get=__get_SIGMA, put=__set_SIGMA))  SIGMA;

static void __set_SIGMA(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_SIGMA() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_SBOX1, put=__set_SBOX1))  SBOX1;

static void __set_SBOX1(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_SBOX1() ;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

/// @brief Method rightRotate addr 0xe34780 size 0x14 virtual false final false
static uint32_t rightRotate(uint32_t x, int32_t s) ;

/// @brief Method leftRotate addr 0xe34794 size 0x14 virtual false final false
static uint32_t leftRotate(uint32_t x, int32_t s) ;

/// @brief Method roldq addr 0xe347a8 size 0x128 virtual false final false
static void roldq(int32_t rot, ::ArrayW<uint32_t> ki, int32_t ioff, ::ArrayW<uint32_t> ko, int32_t ooff) ;

/// @brief Method decroldq addr 0xe348d0 size 0x128 virtual false final false
static void decroldq(int32_t rot, ::ArrayW<uint32_t> ki, int32_t ioff, ::ArrayW<uint32_t> ko, int32_t ooff) ;

/// @brief Method roldqo32 addr 0xe349f8 size 0x128 virtual false final false
static void roldqo32(int32_t rot, ::ArrayW<uint32_t> ki, int32_t ioff, ::ArrayW<uint32_t> ko, int32_t ooff) ;

/// @brief Method decroldqo32 addr 0xe34b20 size 0x128 virtual false final false
static void decroldqo32(int32_t rot, ::ArrayW<uint32_t> ki, int32_t ioff, ::ArrayW<uint32_t> ko, int32_t ooff) ;

/// @brief Method bytes2uint addr 0xe34c48 size 0x60 virtual false final false
static uint32_t bytes2uint(::ArrayW<uint8_t> src, int32_t offset) ;

/// @brief Method uint2bytes addr 0xe34ca8 size 0x48 virtual false final false
static void uint2bytes(uint32_t word, ::ArrayW<uint8_t> dst, int32_t offset) ;

/// @brief Method lRot8 addr 0xe34cf0 size 0x1c virtual false final false
 uint8_t lRot8(uint8_t v, int32_t rot) ;

/// @brief Method sbox2 addr 0xe34d0c size 0x88 virtual false final false
 uint32_t sbox2(int32_t x) ;

/// @brief Method sbox3 addr 0xe34d94 size 0x88 virtual false final false
 uint32_t sbox3(int32_t x) ;

/// @brief Method sbox4 addr 0xe34e1c size 0x88 virtual false final false
 uint32_t sbox4(int32_t x) ;

/// @brief Method camelliaF2 addr 0xe34ea4 size 0x2e8 virtual false final false
 void camelliaF2(::ArrayW<uint32_t> s, ::ArrayW<uint32_t> skey, int32_t keyoff) ;

/// @brief Method camelliaFLs addr 0xe3518c size 0x134 virtual false final false
 void camelliaFLs(::ArrayW<uint32_t> s, ::ArrayW<uint32_t> fkey, int32_t keyoff) ;

/// @brief Method setKey addr 0xe352c0 size 0xf0c virtual false final false
 void setKey(bool forEncryption, ::ArrayW<uint8_t> key) ;

/// @brief Method processBlock128 addr 0xe361cc size 0x2b0 virtual false final false
 int32_t processBlock128(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method processBlock192or256 addr 0xe3647c size 0x2ec virtual false final false
 int32_t processBlock192or256(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

static Org::BouncyCastle::Crypto::Engines::CamelliaLightEngine New_ctor() ;

/// @brief Method .ctor addr 0xe36768 size 0x90 virtual false final false
 void _ctor() ;

/// @brief Method get_AlgorithmName addr 0xe367f8 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe36838 size 0x8 virtual true final false
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe36840 size 0x8 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method Init addr 0xe36848 size 0xf0 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method ProcessBlock addr 0xe36938 size 0x138 virtual true final false
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe36a70 size 0x4 virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::CamelliaLightEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::CamelliaLightEngine, "Org.BouncyCastle.Crypto.Engines", "CamelliaLightEngine");
