#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class Cast5Engine;
}
// Type: Org.BouncyCastle.Crypto.Engines::Cast5Engine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(833))
// CS Name: Org.BouncyCastle.Crypto.Engines.Cast5Engine
class CORDL_TYPE Cast5Engine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Cast5Engine() = default;

// Ctor Parameters [CppParam { name: "", ty: "Cast5Engine", modifiers: " const&", def_value: None }]
constexpr Cast5Engine(Cast5Engine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Cast5Engine", modifiers: "&&", def_value: None }]
constexpr Cast5Engine(Cast5Engine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Cast5Engine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Cast5Engine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Cast5Engine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Cast5Engine& operator=(Cast5Engine&& o) noexcept = default;
  constexpr Cast5Engine& operator=(Cast5Engine const& o) noexcept = default;
                


// Fields

/// @brief Field BLOCK_SIZE offset 0
static constexpr int32_t  BLOCK_SIZE{8};

static ::ArrayW<uint32_t> __declspec(property(get=__get_S1, put=__set_S1))  S1;

static void __set_S1(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_S1() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_S2, put=__set_S2))  S2;

static void __set_S2(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_S2() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_S3, put=__set_S3))  S3;

static void __set_S3(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_S3() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_S4, put=__set_S4))  S4;

static void __set_S4(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_S4() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_S5, put=__set_S5))  S5;

static void __set_S5(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_S5() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_S6, put=__set_S6))  S6;

static void __set_S6(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_S6() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_S7, put=__set_S7))  S7;

static void __set_S7(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_S7() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_S8, put=__set_S8))  S8;

static void __set_S8(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_S8() ;

static int32_t __declspec(property(get=__get_MAX_ROUNDS, put=__set_MAX_ROUNDS))  MAX_ROUNDS;

static void __set_MAX_ROUNDS(int32_t value) ;

static int32_t __get_MAX_ROUNDS() ;

static int32_t __declspec(property(get=__get_RED_ROUNDS, put=__set_RED_ROUNDS))  RED_ROUNDS;

static void __set_RED_ROUNDS(int32_t value) ;

static int32_t __get_RED_ROUNDS() ;

 ::ArrayW<int32_t> __declspec(property(get=__get__Kr, put=__set__Kr))  _Kr;

constexpr void __set__Kr(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__Kr() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get__Km, put=__set__Km))  _Km;

constexpr void __set__Km(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get__Km() const;

 bool __declspec(property(get=__get__encrypting, put=__set__encrypting))  _encrypting;

constexpr void __set__encrypting(bool value) ;

constexpr bool __get__encrypting() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__workingKey, put=__set__workingKey))  _workingKey;

constexpr void __set__workingKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__workingKey() const;

 int32_t __declspec(property(get=__get__rounds, put=__set__rounds))  _rounds;

constexpr void __set__rounds(int32_t value) ;

constexpr int32_t __get__rounds() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

// Ctor Parameters []
explicit Cast5Engine() ;

/// @brief Method .ctor addr 0xe36bc4 size 0xb8 virtual false final false
 void _ctor() ;

/// @brief Method Init addr 0xe36c7c size 0x180 virtual true final false
 void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe36dfc size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe36e3c size 0x8 virtual true final false
 bool get_IsPartialBlockOkay() ;

/// @brief Method ProcessBlock addr 0xe36e44 size 0x16c virtual true final false
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe36fb0 size 0x4 virtual true final false
 void Reset() ;

/// @brief Method GetBlockSize addr 0xe36fb4 size 0x8 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method SetKey addr 0xe36fbc size 0x3234 virtual true final false
 void SetKey(::ArrayW<uint8_t> key) ;

/// @brief Method EncryptBlock addr 0xe3a2e0 size 0xfc virtual true final false
 int32_t EncryptBlock(::ArrayW<uint8_t> src, int32_t srcIndex, ::ArrayW<uint8_t> dst, int32_t dstIndex) ;

/// @brief Method DecryptBlock addr 0xe3a5f8 size 0xfc virtual true final false
 int32_t DecryptBlock(::ArrayW<uint8_t> src, int32_t srcIndex, ::ArrayW<uint8_t> dst, int32_t dstIndex) ;

/// @brief Method F1 addr 0xe3a938 size 0x108 virtual false final false
static uint32_t F1(uint32_t D, uint32_t Kmi, int32_t Kri) ;

/// @brief Method F2 addr 0xe3aa40 size 0x108 virtual false final false
static uint32_t F2(uint32_t D, uint32_t Kmi, int32_t Kri) ;

/// @brief Method F3 addr 0xe3ab48 size 0x108 virtual false final false
static uint32_t F3(uint32_t D, uint32_t Kmi, int32_t Kri) ;

/// @brief Method CAST_Encipher addr 0xe3a3dc size 0x21c virtual false final false
 void CAST_Encipher(uint32_t L0, uint32_t R0, ::ArrayW<uint32_t> result) ;

/// @brief Method CAST_Decipher addr 0xe3a6f4 size 0x244 virtual false final false
 void CAST_Decipher(uint32_t L16, uint32_t R16, ::ArrayW<uint32_t> result) ;

/// @brief Method Bits32ToInts addr 0xe3a268 size 0x78 virtual false final false
static void Bits32ToInts(uint32_t inData, ::ArrayW<int32_t> b, int32_t offset) ;

/// @brief Method IntsTo32bits addr 0xe3a1f0 size 0x78 virtual false final false
static uint32_t IntsTo32bits(::ArrayW<int32_t> b, int32_t i) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::Cast5Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::Cast5Engine, "Org.BouncyCastle.Crypto.Engines", "Cast5Engine");
