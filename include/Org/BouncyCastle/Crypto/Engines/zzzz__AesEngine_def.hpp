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
class AesEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::AesEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(823))
// CS Name: Org.BouncyCastle.Crypto.Engines.AesEngine
class CORDL_TYPE AesEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~AesEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "AesEngine", modifiers: " const&", def_value: None }]
constexpr AesEngine(AesEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AesEngine", modifiers: "&&", def_value: None }]
constexpr AesEngine(AesEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AesEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AesEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AesEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AesEngine& operator=(AesEngine&& o) noexcept = default;
  constexpr AesEngine& operator=(AesEngine const& o) noexcept = default;
                


// Fields

/// @brief Field m1 offset 0
static constexpr uint32_t  m1{2155905152u};

/// @brief Field m2 offset 0
static constexpr uint32_t  m2{2139062143u};

/// @brief Field m3 offset 0
static constexpr uint32_t  m3{27u};

/// @brief Field m4 offset 0
static constexpr uint32_t  m4{3233857728u};

/// @brief Field m5 offset 0
static constexpr uint32_t  m5{1061109567u};

/// @brief Field BLOCK_SIZE offset 0
static constexpr int32_t  BLOCK_SIZE{16};

static ::ArrayW<uint8_t> __declspec(property(get=__get_S, put=__set_S))  S;

static void __set_S(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_S() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_Si, put=__set_Si))  Si;

static void __set_Si(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_Si() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_rcon, put=__set_rcon))  rcon;

static void __set_rcon(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_rcon() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_T0, put=__set_T0))  T0;

static void __set_T0(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_T0() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_Tinv0, put=__set_Tinv0))  Tinv0;

static void __set_Tinv0(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_Tinv0() ;

 int32_t __declspec(property(get=__get_ROUNDS, put=__set_ROUNDS))  ROUNDS;

constexpr void __set_ROUNDS(int32_t value) ;

constexpr int32_t __get_ROUNDS() const;

 ::ArrayW<::ArrayW<uint32_t>> __declspec(property(get=__get_WorkingKey, put=__set_WorkingKey))  WorkingKey;

constexpr void __set_WorkingKey(::ArrayW<::ArrayW<uint32_t>> value) ;

constexpr ::ArrayW<::ArrayW<uint32_t>> __get_WorkingKey() const;

 uint32_t __declspec(property(get=__get_C0, put=__set_C0))  C0;

constexpr void __set_C0(uint32_t value) ;

constexpr uint32_t __get_C0() const;

 uint32_t __declspec(property(get=__get_C1, put=__set_C1))  C1;

constexpr void __set_C1(uint32_t value) ;

constexpr uint32_t __get_C1() const;

 uint32_t __declspec(property(get=__get_C2, put=__set_C2))  C2;

constexpr void __set_C2(uint32_t value) ;

constexpr uint32_t __get_C2() const;

 uint32_t __declspec(property(get=__get_C3, put=__set_C3))  C3;

constexpr void __set_C3(uint32_t value) ;

constexpr uint32_t __get_C3() const;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_s, put=__set_s))  s;

constexpr void __set_s(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_s() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

/// @brief Method Shift addr 0xe292e8 size 0x8 virtual false final false
static uint32_t Shift(uint32_t r, int32_t shift) ;

/// @brief Method FFmulX addr 0xe292f0 size 0x20 virtual false final false
static uint32_t FFmulX(uint32_t x) ;

/// @brief Method FFmulX2 addr 0xe29310 size 0x1c virtual false final false
static uint32_t FFmulX2(uint32_t x) ;

/// @brief Method Inv_Mcol addr 0xe2932c size 0x98 virtual false final false
static uint32_t Inv_Mcol(uint32_t x) ;

/// @brief Method SubWord addr 0xe293c4 size 0xc4 virtual false final false
static uint32_t SubWord(uint32_t x) ;

/// @brief Method GenerateWorkingKey addr 0xe29488 size 0xb18 virtual false final false
 ::ArrayW<::ArrayW<uint32_t>> GenerateWorkingKey(::ArrayW<uint8_t> key, bool forEncryption) ;

// Ctor Parameters []
explicit AesEngine() ;

/// @brief Method .ctor addr 0xe29fa0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0xe29fa8 size 0x19c virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe2a144 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe2a184 size 0x8 virtual true final false
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe2a18c size 0x8 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xe2a194 size 0x138 virtual true final false
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe2b318 size 0x4 virtual true final false
 void Reset() ;

/// @brief Method UnPackBlock addr 0xe2a2cc size 0x70 virtual false final false
 void UnPackBlock(::ArrayW<uint8_t> bytes, int32_t off) ;

/// @brief Method PackBlock addr 0xe2b2b4 size 0x64 virtual false final false
 void PackBlock(::ArrayW<uint8_t> bytes, int32_t off) ;

/// @brief Method EncryptBlock addr 0xe2a33c size 0x6a8 virtual false final false
 void EncryptBlock(::ArrayW<::ArrayW<uint32_t>> KW) ;

/// @brief Method DecryptBlock addr 0xe2a9e4 size 0x8d0 virtual false final false
 void DecryptBlock(::ArrayW<::ArrayW<uint32_t>> KW) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::AesEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::AesEngine, "Org.BouncyCastle.Crypto.Engines", "AesEngine");
