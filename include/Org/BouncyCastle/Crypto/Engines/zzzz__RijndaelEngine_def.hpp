#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class RijndaelEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::RijndaelEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(861))
// CS Name: Org.BouncyCastle.Crypto.Engines.RijndaelEngine
class CORDL_TYPE RijndaelEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~RijndaelEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "RijndaelEngine", modifiers: " const&", def_value: None }]
constexpr RijndaelEngine(RijndaelEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RijndaelEngine", modifiers: "&&", def_value: None }]
constexpr RijndaelEngine(RijndaelEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RijndaelEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RijndaelEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RijndaelEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RijndaelEngine& operator=(RijndaelEngine&& o) noexcept = default;
  constexpr RijndaelEngine& operator=(RijndaelEngine const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_MAXROUNDS, put=__set_MAXROUNDS))  MAXROUNDS;

static void __set_MAXROUNDS(int32_t value) ;

static int32_t __get_MAXROUNDS() ;

static int32_t __declspec(property(get=__get_MAXKC, put=__set_MAXKC))  MAXKC;

static void __set_MAXKC(int32_t value) ;

static int32_t __get_MAXKC() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_Logtable, put=__set_Logtable))  Logtable;

static void __set_Logtable(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_Logtable() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_Alogtable, put=__set_Alogtable))  Alogtable;

static void __set_Alogtable(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_Alogtable() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_S, put=__set_S))  S;

static void __set_S(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_S() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_Si, put=__set_Si))  Si;

static void __set_Si(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_Si() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_rcon, put=__set_rcon))  rcon;

static void __set_rcon(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_rcon() ;

static ::ArrayW<::ArrayW<uint8_t>> __declspec(property(get=__get_shifts0, put=__set_shifts0))  shifts0;

static void __set_shifts0(::ArrayW<::ArrayW<uint8_t>> value) ;

static ::ArrayW<::ArrayW<uint8_t>> __get_shifts0() ;

static ::ArrayW<::ArrayW<uint8_t>> __declspec(property(get=__get_shifts1, put=__set_shifts1))  shifts1;

static void __set_shifts1(::ArrayW<::ArrayW<uint8_t>> value) ;

static ::ArrayW<::ArrayW<uint8_t>> __get_shifts1() ;

 int32_t __declspec(property(get=__get_BC, put=__set_BC))  BC;

constexpr void __set_BC(int32_t value) ;

constexpr int32_t __get_BC() const;

 int64_t __declspec(property(get=__get_BC_MASK, put=__set_BC_MASK))  BC_MASK;

constexpr void __set_BC_MASK(int64_t value) ;

constexpr int64_t __get_BC_MASK() const;

 int32_t __declspec(property(get=__get_ROUNDS, put=__set_ROUNDS))  ROUNDS;

constexpr void __set_ROUNDS(int32_t value) ;

constexpr int32_t __get_ROUNDS() const;

 int32_t __declspec(property(get=__get_blockBits, put=__set_blockBits))  blockBits;

constexpr void __set_blockBits(int32_t value) ;

constexpr int32_t __get_blockBits() const;

 ::ArrayW<::ArrayW<int64_t>> __declspec(property(get=__get_workingKey, put=__set_workingKey))  workingKey;

constexpr void __set_workingKey(::ArrayW<::ArrayW<int64_t>> value) ;

constexpr ::ArrayW<::ArrayW<int64_t>> __get_workingKey() const;

 int64_t __declspec(property(get=__get_A0, put=__set_A0))  A0;

constexpr void __set_A0(int64_t value) ;

constexpr int64_t __get_A0() const;

 int64_t __declspec(property(get=__get_A1, put=__set_A1))  A1;

constexpr void __set_A1(int64_t value) ;

constexpr int64_t __get_A1() const;

 int64_t __declspec(property(get=__get_A2, put=__set_A2))  A2;

constexpr void __set_A2(int64_t value) ;

constexpr int64_t __get_A2() const;

 int64_t __declspec(property(get=__get_A3, put=__set_A3))  A3;

constexpr void __set_A3(int64_t value) ;

constexpr int64_t __get_A3() const;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_shifts0SC, put=__set_shifts0SC))  shifts0SC;

constexpr void __set_shifts0SC(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_shifts0SC() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_shifts1SC, put=__set_shifts1SC))  shifts1SC;

constexpr void __set_shifts1SC(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_shifts1SC() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

/// @brief Method Mul0x2 addr 0xe516a4 size 0xa8 virtual false final false
 uint8_t Mul0x2(int32_t b) ;

/// @brief Method Mul0x3 addr 0xe5174c size 0xa8 virtual false final false
 uint8_t Mul0x3(int32_t b) ;

/// @brief Method Mul0x9 addr 0xe517f4 size 0x8c virtual false final false
 uint8_t Mul0x9(int32_t b) ;

/// @brief Method Mul0xb addr 0xe51880 size 0x8c virtual false final false
 uint8_t Mul0xb(int32_t b) ;

/// @brief Method Mul0xd addr 0xe5190c size 0x8c virtual false final false
 uint8_t Mul0xd(int32_t b) ;

/// @brief Method Mul0xe addr 0xe51998 size 0x8c virtual false final false
 uint8_t Mul0xe(int32_t b) ;

/// @brief Method KeyAddition addr 0xe51a24 size 0x78 virtual false final false
 void KeyAddition(::ArrayW<int64_t> rk) ;

/// @brief Method Shift addr 0xe51a9c size 0x2c virtual false final false
 int64_t Shift(int64_t r, int32_t shift) ;

/// @brief Method ShiftRow addr 0xe51ac8 size 0xc0 virtual false final false
 void ShiftRow(::ArrayW<uint8_t> shiftsSC) ;

/// @brief Method ApplyS addr 0xe51b88 size 0x68 virtual false final false
 int64_t ApplyS(int64_t r, ::ArrayW<uint8_t> box) ;

/// @brief Method Substitution addr 0xe51bf0 size 0x6c virtual false final false
 void Substitution(::ArrayW<uint8_t> box) ;

/// @brief Method MixColumn addr 0xe51c5c size 0x184 virtual false final false
 void MixColumn() ;

/// @brief Method InvMixColumn addr 0xe51de0 size 0x318 virtual false final false
 void InvMixColumn() ;

/// @brief Method GenerateWorkingKey addr 0xe520f8 size 0x7a0 virtual false final false
 ::ArrayW<::ArrayW<int64_t>> GenerateWorkingKey(::ArrayW<uint8_t> key) ;

// Ctor Parameters []
explicit RijndaelEngine() ;

/// @brief Method .ctor addr 0xe52898 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "blockBits", ty: "int32_t", modifiers: "", def_value: None }]
explicit RijndaelEngine(int32_t blockBits) ;

/// @brief Method .ctor addr 0xe528a0 size 0x2b4 virtual false final false
 void _ctor(int32_t blockBits) ;

/// @brief Method Init addr 0xe52b54 size 0x198 virtual true final false
 void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe52cec size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe52d2c size 0x8 virtual true final false
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe52d34 size 0x14 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xe52d48 size 0x15c virtual true final false
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe532a8 size 0x4 virtual true final false
 void Reset() ;

/// @brief Method UnPackBlock addr 0xe52ea4 size 0x11c virtual false final false
 void UnPackBlock(::ArrayW<uint8_t> bytes, int32_t off) ;

/// @brief Method PackBlock addr 0xe531e8 size 0xc0 virtual false final false
 void PackBlock(::ArrayW<uint8_t> bytes, int32_t off) ;

/// @brief Method EncryptBlock addr 0xe52fc0 size 0xfc virtual false final false
 void EncryptBlock(::ArrayW<::ArrayW<int64_t>> rk) ;

/// @brief Method DecryptBlock addr 0xe530bc size 0x12c virtual false final false
 void DecryptBlock(::ArrayW<::ArrayW<int64_t>> rk) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RijndaelEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RijndaelEngine, "Org.BouncyCastle.Crypto.Engines", "RijndaelEngine");
