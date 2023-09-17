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
class RC6Engine;
}
// Type: Org.BouncyCastle.Crypto.Engines::RC6Engine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(859))
// CS Name: Org.BouncyCastle.Crypto.Engines.RC6Engine
class CORDL_TYPE RC6Engine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RC6Engine() = default;

// Ctor Parameters [CppParam { name: "", ty: "RC6Engine", modifiers: " const&", def_value: None }]
constexpr RC6Engine(RC6Engine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RC6Engine", modifiers: "&&", def_value: None }]
constexpr RC6Engine(RC6Engine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RC6Engine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RC6Engine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RC6Engine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RC6Engine& operator=(RC6Engine&& o) noexcept = default;
  constexpr RC6Engine& operator=(RC6Engine const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_wordSize, put=__set_wordSize))  wordSize;

static void __set_wordSize(int32_t value) ;

static int32_t __get_wordSize() ;

static int32_t __declspec(property(get=__get_bytesPerWord, put=__set_bytesPerWord))  bytesPerWord;

static void __set_bytesPerWord(int32_t value) ;

static int32_t __get_bytesPerWord() ;

static int32_t __declspec(property(get=__get__noRounds, put=__set__noRounds))  _noRounds;

static void __set__noRounds(int32_t value) ;

static int32_t __get__noRounds() ;

 ::ArrayW<int32_t> __declspec(property(get=__get__S, put=__set__S))  _S;

constexpr void __set__S(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__S() const;

static int32_t __declspec(property(get=__get_P32, put=__set_P32))  P32;

static void __set_P32(int32_t value) ;

static int32_t __get_P32() ;

static int32_t __declspec(property(get=__get_Q32, put=__set_Q32))  Q32;

static void __set_Q32(int32_t value) ;

static int32_t __get_Q32() ;

static int32_t __declspec(property(get=__get_LGW, put=__set_LGW))  LGW;

static void __set_LGW(int32_t value) ;

static int32_t __get_LGW() ;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

// Ctor Parameters []
explicit RC6Engine() ;

/// @brief Method .ctor addr 0xe4fef0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_AlgorithmName addr 0xe4fef8 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe4ff38 size 0x8 virtual true final false
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe4ff40 size 0x5c virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method Init addr 0xe4ff9c size 0x140 virtual true final false
 void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method ProcessBlock addr 0xe50390 size 0x150 virtual true final false
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe50a90 size 0x4 virtual true final false
 void Reset() ;

/// @brief Method SetKey addr 0xe500dc size 0x2b4 virtual false final false
 void SetKey(::ArrayW<uint8_t> key) ;

/// @brief Method EncryptBlock addr 0xe507b4 size 0x2dc virtual false final false
 int32_t EncryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method DecryptBlock addr 0xe504e0 size 0x2d4 virtual false final false
 int32_t DecryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method RotateLeft addr 0xe50a94 size 0x80 virtual false final false
 int32_t RotateLeft(int32_t x, int32_t y) ;

/// @brief Method RotateRight addr 0xe50c84 size 0x80 virtual false final false
 int32_t RotateRight(int32_t x, int32_t y) ;

/// @brief Method BytesToWord addr 0xe50b14 size 0xb0 virtual false final false
 int32_t BytesToWord(::ArrayW<uint8_t> src, int32_t srcOff) ;

/// @brief Method WordToBytes addr 0xe50bc4 size 0xc0 virtual false final false
 void WordToBytes(int32_t word, ::ArrayW<uint8_t> dst, int32_t dstOff) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RC6Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RC6Engine, "Org.BouncyCastle.Crypto.Engines", "RC6Engine");
