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
class BlowfishEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::BlowfishEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(829))
// CS Name: Org.BouncyCastle.Crypto.Engines.BlowfishEngine
class CORDL_TYPE BlowfishEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~BlowfishEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "BlowfishEngine", modifiers: " const&", def_value: None }]
constexpr BlowfishEngine(BlowfishEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BlowfishEngine", modifiers: "&&", def_value: None }]
constexpr BlowfishEngine(BlowfishEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BlowfishEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BlowfishEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BlowfishEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BlowfishEngine& operator=(BlowfishEngine&& o) noexcept = default;
  constexpr BlowfishEngine& operator=(BlowfishEngine const& o) noexcept = default;
                


// Fields

/// @brief Field BLOCK_SIZE offset 0
static constexpr int32_t  BLOCK_SIZE{8};

static ::ArrayW<uint32_t> __declspec(property(get=__get_KP, put=__set_KP))  KP;

static void __set_KP(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_KP() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_KS0, put=__set_KS0))  KS0;

static void __set_KS0(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_KS0() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_KS1, put=__set_KS1))  KS1;

static void __set_KS1(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_KS1() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_KS2, put=__set_KS2))  KS2;

static void __set_KS2(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_KS2() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_KS3, put=__set_KS3))  KS3;

static void __set_KS3(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_KS3() ;

static int32_t __declspec(property(get=__get_ROUNDS, put=__set_ROUNDS))  ROUNDS;

static void __set_ROUNDS(int32_t value) ;

static int32_t __get_ROUNDS() ;

static int32_t __declspec(property(get=__get_SBOX_SK, put=__set_SBOX_SK))  SBOX_SK;

static void __set_SBOX_SK(int32_t value) ;

static int32_t __get_SBOX_SK() ;

static int32_t __declspec(property(get=__get_P_SZ, put=__set_P_SZ))  P_SZ;

static void __set_P_SZ(int32_t value) ;

static int32_t __get_P_SZ() ;

 ::ArrayW<uint32_t> __declspec(property(get=__get_S0, put=__set_S0))  S0;

constexpr void __set_S0(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_S0() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_S1, put=__set_S1))  S1;

constexpr void __set_S1(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_S1() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_S2, put=__set_S2))  S2;

constexpr void __set_S2(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_S2() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_S3, put=__set_S3))  S3;

constexpr void __set_S3(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_S3() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get_P, put=__set_P))  P;

constexpr void __set_P(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_P() const;

 bool __declspec(property(get=__get_encrypting, put=__set_encrypting))  encrypting;

constexpr void __set_encrypting(bool value) ;

constexpr bool __get_encrypting() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_workingKey, put=__set_workingKey))  workingKey;

constexpr void __set_workingKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_workingKey() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

// Ctor Parameters []
explicit BlowfishEngine() ;

/// @brief Method .ctor addr 0xe316cc size 0xe8 virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0xe317b4 size 0x144 virtual true final true
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe31c00 size 0x40 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe31c40 size 0x8 virtual true final true
 bool get_IsPartialBlockOkay() ;

/// @brief Method ProcessBlock addr 0xe31c48 size 0x138 virtual true final true
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe320b4 size 0x4 virtual true final true
 void Reset() ;

/// @brief Method GetBlockSize addr 0xe320b8 size 0x8 virtual true final true
 int32_t GetBlockSize() ;

/// @brief Method F addr 0xe320c0 size 0xa0 virtual false final false
 uint32_t F(uint32_t x) ;

/// @brief Method ProcessTable addr 0xe32160 size 0x1a8 virtual false final false
 void ProcessTable(uint32_t xl, uint32_t xr, ::ArrayW<uint32_t> table) ;

/// @brief Method SetKey addr 0xe318f8 size 0x308 virtual false final false
 void SetKey(::ArrayW<uint8_t> key) ;

/// @brief Method EncryptBlock addr 0xe31d80 size 0x1a4 virtual false final false
 void EncryptBlock(::ArrayW<uint8_t> src, int32_t srcIndex, ::ArrayW<uint8_t> dst, int32_t dstIndex) ;

/// @brief Method DecryptBlock addr 0xe31f24 size 0x190 virtual false final false
 void DecryptBlock(::ArrayW<uint8_t> src, int32_t srcIndex, ::ArrayW<uint8_t> dst, int32_t dstIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::BlowfishEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::BlowfishEngine, "Org.BouncyCastle.Crypto.Engines", "BlowfishEngine");
