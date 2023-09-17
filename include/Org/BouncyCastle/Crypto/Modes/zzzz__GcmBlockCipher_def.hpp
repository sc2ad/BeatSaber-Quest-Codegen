#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadCipher;
}
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class IGcmExponentiator;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class IGcmMultiplier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class GcmBlockCipher;
}
// Type: Org.BouncyCastle.Crypto.Modes::GcmBlockCipher
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(970))
// CS Name: Org.BouncyCastle.Crypto.Modes.GcmBlockCipher
class CORDL_TYPE GcmBlockCipher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher
constexpr operator  ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher() const noexcept;

/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Modes::IAeadCipher
constexpr operator  ::Org::BouncyCastle::Crypto::Modes::IAeadCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~GcmBlockCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "GcmBlockCipher", modifiers: " const&", def_value: None }]
constexpr GcmBlockCipher(GcmBlockCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GcmBlockCipher", modifiers: "&&", def_value: None }]
constexpr GcmBlockCipher(GcmBlockCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GcmBlockCipher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GcmBlockCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GcmBlockCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GcmBlockCipher& operator=(GcmBlockCipher&& o) noexcept = default;
  constexpr GcmBlockCipher& operator=(GcmBlockCipher const& o) noexcept = default;
                


// Fields

/// @brief Field BlockSize offset 0
static constexpr int32_t  BlockSize{16};

 ::Org::BouncyCastle::Crypto::IBlockCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(::Org::BouncyCastle::Crypto::IBlockCipher value) ;

constexpr ::Org::BouncyCastle::Crypto::IBlockCipher __get_cipher() const;

 ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier __declspec(property(get=__get_multiplier, put=__set_multiplier))  multiplier;

constexpr void __set_multiplier(::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier value) ;

constexpr ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier __get_multiplier() const;

 ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator __declspec(property(get=__get_exp, put=__set_exp))  exp;

constexpr void __set_exp(::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator value) ;

constexpr ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator __get_exp() const;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;

 bool __declspec(property(get=__get_initialised, put=__set_initialised))  initialised;

constexpr void __set_initialised(bool value) ;

constexpr bool __get_initialised() const;

 int32_t __declspec(property(get=__get_macSize, put=__set_macSize))  macSize;

constexpr void __set_macSize(int32_t value) ;

constexpr int32_t __get_macSize() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_lastKey, put=__set_lastKey))  lastKey;

constexpr void __set_lastKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_lastKey() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_nonce, put=__set_nonce))  nonce;

constexpr void __set_nonce(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_nonce() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_initialAssociatedText, put=__set_initialAssociatedText))  initialAssociatedText;

constexpr void __set_initialAssociatedText(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_initialAssociatedText() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_H, put=__set_H))  H;

constexpr void __set_H(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_H() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_J0, put=__set_J0))  J0;

constexpr void __set_J0(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_J0() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_bufBlock, put=__set_bufBlock))  bufBlock;

constexpr void __set_bufBlock(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_bufBlock() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_macBlock, put=__set_macBlock))  macBlock;

constexpr void __set_macBlock(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_macBlock() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_S, put=__set_S))  S;

constexpr void __set_S(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_S() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_S_at, put=__set_S_at))  S_at;

constexpr void __set_S_at(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_S_at() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_S_atPre, put=__set_S_atPre))  S_atPre;

constexpr void __set_S_atPre(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_S_atPre() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_counter, put=__set_counter))  counter;

constexpr void __set_counter(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_counter() const;

 uint32_t __declspec(property(get=__get_blocksRemaining, put=__set_blocksRemaining))  blocksRemaining;

constexpr void __set_blocksRemaining(uint32_t value) ;

constexpr uint32_t __get_blocksRemaining() const;

 int32_t __declspec(property(get=__get_bufOff, put=__set_bufOff))  bufOff;

constexpr void __set_bufOff(int32_t value) ;

constexpr int32_t __get_bufOff() const;

 uint64_t __declspec(property(get=__get_totalLength, put=__set_totalLength))  totalLength;

constexpr void __set_totalLength(uint64_t value) ;

constexpr uint64_t __get_totalLength() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_atBlock, put=__set_atBlock))  atBlock;

constexpr void __set_atBlock(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_atBlock() const;

 int32_t __declspec(property(get=__get_atBlockPos, put=__set_atBlockPos))  atBlockPos;

constexpr void __set_atBlockPos(int32_t value) ;

constexpr int32_t __get_atBlockPos() const;

 uint64_t __declspec(property(get=__get_atLength, put=__set_atLength))  atLength;

constexpr void __set_atLength(uint64_t value) ;

constexpr uint64_t __get_atLength() const;

 uint64_t __declspec(property(get=__get_atLengthPre, put=__set_atLengthPre))  atLengthPre;

constexpr void __set_atLengthPre(uint64_t value) ;

constexpr uint64_t __get_atLengthPre() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "c", ty: "::Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }]
explicit GcmBlockCipher(::Org::BouncyCastle::Crypto::IBlockCipher c) ;

/// @brief Method .ctor addr 0xe91300 size 0x8 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher c) ;

// Ctor Parameters [CppParam { name: "c", ty: "::Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }, CppParam { name: "m", ty: "::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier", modifiers: "", def_value: None }]
explicit GcmBlockCipher(::Org::BouncyCastle::Crypto::IBlockCipher c, ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier m) ;

/// @brief Method .ctor addr 0xe91308 size 0x190 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher c, ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier m) ;

/// @brief Method get_AlgorithmName addr 0xe91498 size 0xc0 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetUnderlyingCipher addr 0xe91558 size 0x8 virtual true final true
 ::Org::BouncyCastle::Crypto::IBlockCipher GetUnderlyingCipher() ;

/// @brief Method GetBlockSize addr 0xe91560 size 0x8 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method Init addr 0xe91568 size 0x6bc virtual true final false
 void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetMac addr 0xe91e3c size 0x88 virtual true final false
 ::ArrayW<uint8_t> GetMac() ;

/// @brief Method GetOutputSize addr 0xe91ec4 size 0x28 virtual true final false
 int32_t GetOutputSize(int32_t len) ;

/// @brief Method GetUpdateOutputSize addr 0xe91eec size 0x38 virtual true final false
 int32_t GetUpdateOutputSize(int32_t len) ;

/// @brief Method ProcessAadByte addr 0xe91f24 size 0x7c virtual true final false
 void ProcessAadByte(uint8_t input) ;

/// @brief Method ProcessAadBytes addr 0xe92020 size 0xc0 virtual true final false
 void ProcessAadBytes(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t len) ;

/// @brief Method InitCipher addr 0xe920e0 size 0x94 virtual false final false
 void InitCipher() ;

/// @brief Method ProcessByte addr 0xe92278 size 0xc8 virtual true final false
 int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method ProcessBytes addr 0xe924b8 size 0x24c virtual true final false
 int32_t ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method DoFinal addr 0xe92704 size 0x52c virtual true final true
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe92f4c size 0x8 virtual true final false
 void Reset() ;

/// @brief Method Reset addr 0xe92d88 size 0x1c4 virtual false final false
 void Reset(bool clearMac) ;

/// @brief Method ProcessBlock addr 0xe92340 size 0x178 virtual false final false
 void ProcessBlock(::ArrayW<uint8_t> buf, int32_t bufOff, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method ProcessPartial addr 0xe92c30 size 0x158 virtual false final false
 void ProcessPartial(::ArrayW<uint8_t> buf, int32_t off, int32_t len, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method gHASH addr 0xe91c9c size 0xb4 virtual false final false
 void gHASH(::ArrayW<uint8_t> Y, ::ArrayW<uint8_t> b, int32_t len) ;

/// @brief Method gHASHBlock addr 0xe91d50 size 0xec virtual false final false
 void gHASHBlock(::ArrayW<uint8_t> Y, ::ArrayW<uint8_t> b) ;

/// @brief Method gHASHBlock addr 0xe930f8 size 0xfc virtual false final false
 void gHASHBlock(::ArrayW<uint8_t> Y, ::ArrayW<uint8_t> b, int32_t off) ;

/// @brief Method gHASHPartial addr 0xe92174 size 0x104 virtual false final false
 void gHASHPartial(::ArrayW<uint8_t> Y, ::ArrayW<uint8_t> b, int32_t off, int32_t len) ;

/// @brief Method GetNextCtrBlock addr 0xe92f54 size 0x1a4 virtual false final false
 void GetNextCtrBlock(::ArrayW<uint8_t> block) ;

/// @brief Method CheckStatus addr 0xe91fa0 size 0x80 virtual false final false
 void CheckStatus() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::GcmBlockCipher, "Org.BouncyCastle.Crypto.Modes", "GcmBlockCipher");
