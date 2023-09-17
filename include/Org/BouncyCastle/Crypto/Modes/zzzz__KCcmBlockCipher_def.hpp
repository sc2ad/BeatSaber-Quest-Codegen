#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::IO {
class MemoryStream;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadCipher;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class KCcmBlockCipher;
}
// Type: Org.BouncyCastle.Crypto.Modes::KCcmBlockCipher
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(972))
// CS Name: Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher
class CORDL_TYPE KCcmBlockCipher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher
constexpr operator  ::Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher() const noexcept;

/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Modes::IAeadCipher
constexpr operator  ::Org::BouncyCastle::Crypto::Modes::IAeadCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~KCcmBlockCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "KCcmBlockCipher", modifiers: " const&", def_value: None }]
constexpr KCcmBlockCipher(KCcmBlockCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KCcmBlockCipher", modifiers: "&&", def_value: None }]
constexpr KCcmBlockCipher(KCcmBlockCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KCcmBlockCipher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KCcmBlockCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KCcmBlockCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KCcmBlockCipher& operator=(KCcmBlockCipher&& o) noexcept = default;
  constexpr KCcmBlockCipher& operator=(KCcmBlockCipher const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_BYTES_IN_INT, put=__set_BYTES_IN_INT))  BYTES_IN_INT;

static void __set_BYTES_IN_INT(int32_t value) ;

static int32_t __get_BYTES_IN_INT() ;

static int32_t __declspec(property(get=__get_BITS_IN_BYTE, put=__set_BITS_IN_BYTE))  BITS_IN_BYTE;

static void __set_BITS_IN_BYTE(int32_t value) ;

static int32_t __get_BITS_IN_BYTE() ;

static int32_t __declspec(property(get=__get_MAX_MAC_BIT_LENGTH, put=__set_MAX_MAC_BIT_LENGTH))  MAX_MAC_BIT_LENGTH;

static void __set_MAX_MAC_BIT_LENGTH(int32_t value) ;

static int32_t __get_MAX_MAC_BIT_LENGTH() ;

static int32_t __declspec(property(get=__get_MIN_MAC_BIT_LENGTH, put=__set_MIN_MAC_BIT_LENGTH))  MIN_MAC_BIT_LENGTH;

static void __set_MIN_MAC_BIT_LENGTH(int32_t value) ;

static int32_t __get_MIN_MAC_BIT_LENGTH() ;

 ::Org::BouncyCastle::Crypto::IBlockCipher __declspec(property(get=__get_engine, put=__set_engine))  engine;

constexpr void __set_engine(::Org::BouncyCastle::Crypto::IBlockCipher value) ;

constexpr ::Org::BouncyCastle::Crypto::IBlockCipher __get_engine() const;

 int32_t __declspec(property(get=__get_macSize, put=__set_macSize))  macSize;

constexpr void __set_macSize(int32_t value) ;

constexpr int32_t __get_macSize() const;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_initialAssociatedText, put=__set_initialAssociatedText))  initialAssociatedText;

constexpr void __set_initialAssociatedText(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_initialAssociatedText() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mac, put=__set_mac))  mac;

constexpr void __set_mac(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mac() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_macBlock, put=__set_macBlock))  macBlock;

constexpr void __set_macBlock(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_macBlock() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_nonce, put=__set_nonce))  nonce;

constexpr void __set_nonce(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_nonce() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_G1, put=__set_G1))  G1;

constexpr void __set_G1(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_G1() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_buffer() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_s, put=__set_s))  s;

constexpr void __set_s(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_s() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_counter, put=__set_counter))  counter;

constexpr void __set_counter(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_counter() const;

 ::System::IO::MemoryStream __declspec(property(get=__get_associatedText, put=__set_associatedText))  associatedText;

constexpr void __set_associatedText(::System::IO::MemoryStream value) ;

constexpr ::System::IO::MemoryStream __get_associatedText() const;

 ::System::IO::MemoryStream __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::System::IO::MemoryStream value) ;

constexpr ::System::IO::MemoryStream __get_data() const;

 int32_t __declspec(property(get=__get_Nb_, put=__set_Nb_))  Nb_;

constexpr void __set_Nb_(int32_t value) ;

constexpr int32_t __get_Nb_() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method setNb addr 0xe93c1c size 0x78 virtual false final false
 void setNb(int32_t Nb) ;

// Ctor Parameters [CppParam { name: "engine", ty: "::Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }]
explicit KCcmBlockCipher(::Org::BouncyCastle::Crypto::IBlockCipher engine) ;

/// @brief Method .ctor addr 0xe93c94 size 0x8 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher engine) ;

// Ctor Parameters [CppParam { name: "engine", ty: "::Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }, CppParam { name: "Nb", ty: "int32_t", modifiers: "", def_value: None }]
explicit KCcmBlockCipher(::Org::BouncyCastle::Crypto::IBlockCipher engine, int32_t Nb) ;

/// @brief Method .ctor addr 0xe93c9c size 0x4b8 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher engine, int32_t Nb) ;

/// @brief Method Init addr 0xe94154 size 0x408 virtual true final false
 void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe9455c size 0xc0 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetBlockSize addr 0xe9461c size 0xa4 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method GetUnderlyingCipher addr 0xe946c0 size 0x8 virtual true final false
 ::Org::BouncyCastle::Crypto::IBlockCipher GetUnderlyingCipher() ;

/// @brief Method ProcessAadByte addr 0xe946c8 size 0x24 virtual true final false
 void ProcessAadByte(uint8_t input) ;

/// @brief Method ProcessAadBytes addr 0xe946ec size 0x24 virtual true final false
 void ProcessAadBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) ;

/// @brief Method ProcessAAD addr 0xe94710 size 0x8b0 virtual false final false
 void ProcessAAD(::ArrayW<uint8_t> assocText, int32_t assocOff, int32_t assocLen, int32_t dataLen) ;

/// @brief Method ProcessByte addr 0xe95284 size 0x2c virtual true final false
 int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method ProcessBytes addr 0xe952b0 size 0xa0 virtual true final false
 int32_t ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method ProcessPacket addr 0xe95350 size 0xb60 virtual false final false
 int32_t ProcessPacket(::ArrayW<uint8_t> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method ProcessBlock addr 0xe96138 size 0x218 virtual false final false
 void ProcessBlock(::ArrayW<uint8_t> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method CalculateMac addr 0xe95eb0 size 0x288 virtual false final false
 void CalculateMac(::ArrayW<uint8_t> authText, int32_t authOff, int32_t len) ;

/// @brief Method DoFinal addr 0xe96350 size 0x98 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method GetMac addr 0xe963e8 size 0x5c virtual true final false
 ::ArrayW<uint8_t> GetMac() ;

/// @brief Method GetUpdateOutputSize addr 0xe96444 size 0x8 virtual true final false
 int32_t GetUpdateOutputSize(int32_t len) ;

/// @brief Method GetOutputSize addr 0xe9644c size 0xc virtual true final false
 int32_t GetOutputSize(int32_t len) ;

/// @brief Method Reset addr 0xe96458 size 0x118 virtual true final false
 void Reset() ;

/// @brief Method intToBytes addr 0xe94fc0 size 0x80 virtual false final false
 void intToBytes(int32_t num, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method getFlag addr 0xe95040 size 0x244 virtual false final false
 uint8_t getFlag(bool authTextPresents, int32_t macSize) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::KCcmBlockCipher, "Org.BouncyCastle.Crypto.Modes", "KCcmBlockCipher");
