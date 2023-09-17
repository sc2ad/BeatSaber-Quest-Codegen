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
class RC532Engine;
}
// Type: Org.BouncyCastle.Crypto.Engines::RC532Engine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(857))
// CS Name: Org.BouncyCastle.Crypto.Engines.RC532Engine
class CORDL_TYPE RC532Engine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::IBlockCipher
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RC532Engine() = default;

// Ctor Parameters [CppParam { name: "", ty: "RC532Engine", modifiers: " const&", def_value: None }]
constexpr RC532Engine(RC532Engine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RC532Engine", modifiers: "&&", def_value: None }]
constexpr RC532Engine(RC532Engine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RC532Engine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RC532Engine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RC532Engine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RC532Engine& operator=(RC532Engine&& o) noexcept = default;
  constexpr RC532Engine& operator=(RC532Engine const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__noRounds, put=__set__noRounds))  _noRounds;

constexpr void __set__noRounds(int32_t value) ;

constexpr int32_t __get__noRounds() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__S, put=__set__S))  _S;

constexpr void __set__S(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__S() const;

static int32_t __declspec(property(get=__get_P32, put=__set_P32))  P32;

static void __set_P32(int32_t value) ;

static int32_t __get_P32() ;

static int32_t __declspec(property(get=__get_Q32, put=__set_Q32))  Q32;

static void __set_Q32(int32_t value) ;

static int32_t __get_Q32() ;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;

 bool __declspec(property(get=get_IsPartialBlockOkay))  IsPartialBlockOkay;


// Methods

// Ctor Parameters []
explicit RC532Engine() ;

/// @brief Method .ctor addr 0xe4eb00 size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method get_AlgorithmName addr 0xe4eb20 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xe4eb60 size 0x8 virtual true final false
 bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xe4eb68 size 0x8 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method Init addr 0xe4eb70 size 0x234 virtual true final false
 void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method ProcessBlock addr 0xe4eff4 size 0x24 virtual true final false
 int32_t ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe4f234 size 0x4 virtual true final false
 void Reset() ;

/// @brief Method SetKey addr 0xe4eda4 size 0x250 virtual false final false
 void SetKey(::ArrayW<uint8_t> key) ;

/// @brief Method EncryptBlock addr 0xe4f124 size 0x110 virtual false final false
 int32_t EncryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method DecryptBlock addr 0xe4f018 size 0x10c virtual false final false
 int32_t DecryptBlock(::ArrayW<uint8_t> input, int32_t inOff, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method RotateLeft addr 0xe4f238 size 0xc virtual false final false
 int32_t RotateLeft(int32_t x, int32_t y) ;

/// @brief Method RotateRight addr 0xe4f334 size 0x8 virtual false final false
 int32_t RotateRight(int32_t x, int32_t y) ;

/// @brief Method BytesToWord addr 0xe4f244 size 0x70 virtual false final false
 int32_t BytesToWord(::ArrayW<uint8_t> src, int32_t srcOff) ;

/// @brief Method WordToBytes addr 0xe4f2b4 size 0x80 virtual false final false
 void WordToBytes(int32_t word, ::ArrayW<uint8_t> dst, int32_t dstOff) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RC532Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RC532Engine, "Org.BouncyCastle.Crypto.Engines", "RC532Engine");
