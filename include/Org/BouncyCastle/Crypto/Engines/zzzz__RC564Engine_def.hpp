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
class RC564Engine;
}
// Type: Org.BouncyCastle.Crypto.Engines::RC564Engine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(858))
// CS Name: Org.BouncyCastle.Crypto.Engines.RC564Engine
class CORDL_TYPE RC564Engine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RC564Engine() = default;

// Ctor Parameters [CppParam { name: "", ty: "RC564Engine", modifiers: " const&", def_value: None }]
constexpr RC564Engine(RC564Engine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RC564Engine", modifiers: "&&", def_value: None }]
constexpr RC564Engine(RC564Engine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RC564Engine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RC564Engine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RC564Engine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RC564Engine& operator=(RC564Engine&& o) noexcept = default;
  constexpr RC564Engine& operator=(RC564Engine const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_wordSize, put=__set_wordSize))  wordSize;

static void __set_wordSize(int32_t value) ;

static int32_t __get_wordSize() ;

static int32_t __declspec(property(get=__get_bytesPerWord, put=__set_bytesPerWord))  bytesPerWord;

static void __set_bytesPerWord(int32_t value) ;

static int32_t __get_bytesPerWord() ;

 int32_t __declspec(property(get=__get__noRounds, put=__set__noRounds))  _noRounds;

constexpr void __set__noRounds(int32_t value) ;

constexpr int32_t __get__noRounds() const;

 ::ArrayW<int64_t> __declspec(property(get=__get__S, put=__set__S))  _S;

constexpr void __set__S(::ArrayW<int64_t> value) ;

constexpr ::ArrayW<int64_t> __get__S() const;

static int64_t __declspec(property(get=__get_P64, put=__set_P64))  P64;

static void __set_P64(int64_t value) ;

static int64_t __get_P64() ;

static int64_t __declspec(property(get=__get_Q64, put=__set_Q64))  Q64;

static void __set_Q64(int64_t value) ;

static int64_t __get_Q64() ;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

// Ctor Parameters []
explicit RC564Engine() ;

/// @brief Method .ctor addr 0xe4f38c size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method get_AlgorithmName addr 0xe4f3ac size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe4f3ec size 0x8 virtual true final false
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe4f3f4 size 0x5c virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method Init addr 0xe4f450 size 0x1a0 virtual true final false
 void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method ProcessBlock addr 0xe4f8c0 size 0x10 virtual true final false
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe4fc20 size 0x4 virtual true final false
 void Reset() ;

/// @brief Method SetKey addr 0xe4f5f0 size 0x2d0 virtual false final false
 void SetKey(::ArrayW<uint8_t> key) ;

/// @brief Method EncryptBlock addr 0xe4fa74 size 0x1ac virtual false final false
 int32_t EncryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method DecryptBlock addr 0xe4f8d0 size 0x1a4 virtual false final false
 int32_t DecryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method RotateLeft addr 0xe4fc24 size 0x80 virtual false final false
 int64_t RotateLeft(int64_t x, int64_t y) ;

/// @brief Method RotateRight addr 0xe4fe14 size 0x80 virtual false final false
 int64_t RotateRight(int64_t x, int64_t y) ;

/// @brief Method BytesToWord addr 0xe4fca4 size 0xb0 virtual false final false
 int64_t BytesToWord(::ArrayW<uint8_t> src, int32_t srcOff) ;

/// @brief Method WordToBytes addr 0xe4fd54 size 0xc0 virtual false final false
 void WordToBytes(int64_t word, ::ArrayW<uint8_t> dst, int32_t dstOff) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RC564Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RC564Engine, "Org.BouncyCastle.Crypto.Engines", "RC564Engine");
