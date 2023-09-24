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
class SerpentEngineBase;
}
// Type: Org.BouncyCastle.Crypto.Engines::SerpentEngineBase
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(869))
// CS Name: Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
class CORDL_TYPE SerpentEngineBase : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SerpentEngineBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "SerpentEngineBase", modifiers: " const&", def_value: None }]
constexpr SerpentEngineBase(SerpentEngineBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SerpentEngineBase", modifiers: "&&", def_value: None }]
constexpr SerpentEngineBase(SerpentEngineBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SerpentEngineBase(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SerpentEngineBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SerpentEngineBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SerpentEngineBase& operator=(SerpentEngineBase&& o) noexcept = default;
  constexpr SerpentEngineBase& operator=(SerpentEngineBase const& o) noexcept = default;
                


// Fields

/// @brief Field ROUNDS offset 0
static constexpr int32_t  ROUNDS{32};

/// @brief Field PHI offset 0
static constexpr int32_t  PHI{-1640531527};

static int32_t __declspec(property(get=__get_BlockSize, put=__set_BlockSize))  BlockSize;

static void __set_BlockSize(int32_t value) ;

static int32_t __get_BlockSize() ;

 bool __declspec(property(get=__get_encrypting, put=__set_encrypting))  encrypting;

constexpr void __set_encrypting(bool value) ;

constexpr bool __get_encrypting() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_wKey, put=__set_wKey))  wKey;

constexpr void __set_wKey(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_wKey() const;

 int32_t __declspec(property(get=__get_X0, put=__set_X0))  X0;

constexpr void __set_X0(int32_t value) ;

constexpr int32_t __get_X0() const;

 int32_t __declspec(property(get=__get_X1, put=__set_X1))  X1;

constexpr void __set_X1(int32_t value) ;

constexpr int32_t __get_X1() const;

 int32_t __declspec(property(get=__get_X2, put=__set_X2))  X2;

constexpr void __set_X2(int32_t value) ;

constexpr int32_t __get_X2() const;

 int32_t __declspec(property(get=__get_X3, put=__set_X3))  X3;

constexpr void __set_X3(int32_t value) ;

constexpr int32_t __get_X3() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

static Org::BouncyCastle::Crypto::Engines::SerpentEngineBase New_ctor() ;

/// @brief Method .ctor addr 0xe56988 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0xe56990 size 0x184 virtual true final false
 void Init(bool encrypting, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe56b14 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe56b54 size 0x8 virtual true final false
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe56b5c size 0x58 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xe56bb4 size 0x1b0 virtual true final true
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe56d64 size 0x4 virtual true final false
 void Reset() ;

/// @brief Method RotateLeft addr 0xe56d68 size 0xc virtual false final false
static int32_t RotateLeft(int32_t x, int32_t bits) ;

/// @brief Method RotateRight addr 0xe56d74 size 0x8 virtual false final false
static int32_t RotateRight(int32_t x, int32_t bits) ;

/// @brief Method Sb0 addr 0xe56d7c size 0x40 virtual false final false
 void Sb0(int32_t a, int32_t b, int32_t c, int32_t d) ;

/// @brief Method Ib0 addr 0xe56dbc size 0x44 virtual false final false
 void Ib0(int32_t a, int32_t b, int32_t c, int32_t d) ;

/// @brief Method Sb1 addr 0xe56e00 size 0x40 virtual false final false
 void Sb1(int32_t a, int32_t b, int32_t c, int32_t d) ;

/// @brief Method Ib1 addr 0xe56e40 size 0x40 virtual false final false
 void Ib1(int32_t a, int32_t b, int32_t c, int32_t d) ;

/// @brief Method Sb2 addr 0xe56e80 size 0x48 virtual false final false
 void Sb2(int32_t a, int32_t b, int32_t c, int32_t d) ;

/// @brief Method Ib2 addr 0xe56ec8 size 0x44 virtual false final false
 void Ib2(int32_t a, int32_t b, int32_t c, int32_t d) ;

/// @brief Method Sb3 addr 0xe56f0c size 0x4c virtual false final false
 void Sb3(int32_t a, int32_t b, int32_t c, int32_t d) ;

/// @brief Method Ib3 addr 0xe56f58 size 0x48 virtual false final false
 void Ib3(int32_t a, int32_t b, int32_t c, int32_t d) ;

/// @brief Method Sb4 addr 0xe56fa0 size 0x44 virtual false final false
 void Sb4(int32_t a, int32_t b, int32_t c, int32_t d) ;

/// @brief Method Ib4 addr 0xe56fe4 size 0x44 virtual false final false
 void Ib4(int32_t a, int32_t b, int32_t c, int32_t d) ;

/// @brief Method Sb5 addr 0xe57028 size 0x48 virtual false final false
 void Sb5(int32_t a, int32_t b, int32_t c, int32_t d) ;

/// @brief Method Ib5 addr 0xe57070 size 0x48 virtual false final false
 void Ib5(int32_t a, int32_t b, int32_t c, int32_t d) ;

/// @brief Method Sb6 addr 0xe570b8 size 0x40 virtual false final false
 void Sb6(int32_t a, int32_t b, int32_t c, int32_t d) ;

/// @brief Method Ib6 addr 0xe570f8 size 0x44 virtual false final false
 void Ib6(int32_t a, int32_t b, int32_t c, int32_t d) ;

/// @brief Method Sb7 addr 0xe5713c size 0x48 virtual false final false
 void Sb7(int32_t a, int32_t b, int32_t c, int32_t d) ;

/// @brief Method Ib7 addr 0xe57184 size 0x4c virtual false final false
 void Ib7(int32_t a, int32_t b, int32_t c, int32_t d) ;

/// @brief Method LT addr 0xe571d0 size 0x9c virtual false final false
 void LT() ;

/// @brief Method InverseLT addr 0xe5726c size 0x8c virtual false final false
 void InverseLT() ;

/// @brief Method MakeWorkingKey addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<int32_t> MakeWorkingKey(::ArrayW<uint8_t> key) ;

/// @brief Method EncryptBlock addr 0x0 size 0xffffffffffffffff virtual true final false
 void EncryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method DecryptBlock addr 0x0 size 0xffffffffffffffff virtual true final false
 void DecryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase, "Org.BouncyCastle.Crypto.Engines", "SerpentEngineBase");
