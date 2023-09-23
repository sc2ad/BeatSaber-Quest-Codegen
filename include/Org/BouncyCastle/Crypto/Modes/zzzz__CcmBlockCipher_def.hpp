#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadCipher;
}
namespace System::IO {
class MemoryStream;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
class CcmBlockCipher;
}
// Type: Org.BouncyCastle.Crypto.Modes::CcmBlockCipher
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(960))
// CS Name: Org.BouncyCastle.Crypto.Modes.CcmBlockCipher
class CORDL_TYPE CcmBlockCipher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Crypto::Modes::IAeadCipher
constexpr operator  Org::BouncyCastle::Crypto::Modes::IAeadCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~CcmBlockCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "CcmBlockCipher", modifiers: " const&", def_value: None }]
constexpr CcmBlockCipher(CcmBlockCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CcmBlockCipher", modifiers: "&&", def_value: None }]
constexpr CcmBlockCipher(CcmBlockCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CcmBlockCipher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CcmBlockCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CcmBlockCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CcmBlockCipher& operator=(CcmBlockCipher&& o) noexcept = default;
  constexpr CcmBlockCipher& operator=(CcmBlockCipher const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_BlockSize, put=__set_BlockSize))  BlockSize;

static void __set_BlockSize(int32_t value) ;

static int32_t __get_BlockSize() ;

 Org::BouncyCastle::Crypto::IBlockCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(Org::BouncyCastle::Crypto::IBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IBlockCipher __get_cipher() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_macBlock, put=__set_macBlock))  macBlock;

constexpr void __set_macBlock(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_macBlock() const;

 bool __declspec(property(get=__get_forEncryption, put=__set_forEncryption))  forEncryption;

constexpr void __set_forEncryption(bool value) ;

constexpr bool __get_forEncryption() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_nonce, put=__set_nonce))  nonce;

constexpr void __set_nonce(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_nonce() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_initialAssociatedText, put=__set_initialAssociatedText))  initialAssociatedText;

constexpr void __set_initialAssociatedText(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_initialAssociatedText() const;

 int32_t __declspec(property(get=__get_macSize, put=__set_macSize))  macSize;

constexpr void __set_macSize(int32_t value) ;

constexpr int32_t __get_macSize() const;

 Org::BouncyCastle::Crypto::ICipherParameters __declspec(property(get=__get_keyParam, put=__set_keyParam))  keyParam;

constexpr void __set_keyParam(Org::BouncyCastle::Crypto::ICipherParameters value) ;

constexpr Org::BouncyCastle::Crypto::ICipherParameters __get_keyParam() const;

 System::IO::MemoryStream __declspec(property(get=__get_associatedText, put=__set_associatedText))  associatedText;

constexpr void __set_associatedText(System::IO::MemoryStream value) ;

constexpr System::IO::MemoryStream __get_associatedText() const;

 System::IO::MemoryStream __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(System::IO::MemoryStream value) ;

constexpr System::IO::MemoryStream __get_data() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }]
explicit CcmBlockCipher(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method .ctor addr 0xe893c4 size 0x22c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher cipher) ;

/// @brief Method GetUnderlyingCipher addr 0xe895f0 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::IBlockCipher GetUnderlyingCipher() ;

/// @brief Method Init addr 0xe895f8 size 0x1d8 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe89840 size 0xc0 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetBlockSize addr 0xe89900 size 0xa4 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method ProcessAadByte addr 0xe899a4 size 0x24 virtual true final false
 void ProcessAadByte(uint8_t input) ;

/// @brief Method ProcessAadBytes addr 0xe899c8 size 0x24 virtual true final false
 void ProcessAadBytes(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t len) ;

/// @brief Method ProcessByte addr 0xe899ec size 0x2c virtual true final false
 int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method ProcessBytes addr 0xe89a18 size 0xa0 virtual true final false
 int32_t ProcessBytes(::ArrayW<uint8_t> inBytes, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method DoFinal addr 0xe89ab8 size 0xa4 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> outBytes, int32_t outOff) ;

/// @brief Method Reset addr 0xe89b5c size 0xdc virtual true final false
 void Reset() ;

/// @brief Method GetMac addr 0xe89c38 size 0x68 virtual true final false
 ::ArrayW<uint8_t> GetMac() ;

/// @brief Method GetUpdateOutputSize addr 0xe89ca0 size 0x8 virtual true final false
 int32_t GetUpdateOutputSize(int32_t len) ;

/// @brief Method GetOutputSize addr 0xe89ca8 size 0x54 virtual true final false
 int32_t GetOutputSize(int32_t len) ;

/// @brief Method ProcessPacket addr 0xe89cfc size 0xfc virtual true final false
 ::ArrayW<uint8_t> ProcessPacket(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen) ;

/// @brief Method ProcessPacket addr 0xe89df8 size 0x8cc virtual true final false
 int32_t ProcessPacket(::ArrayW<uint8_t> input, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method CalculateMac addr 0xe8a6c4 size 0x88c virtual false final false
 int32_t CalculateMac(::ArrayW<uint8_t> data, int32_t dataOff, int32_t dataLen, ::ArrayW<uint8_t> macBlock) ;

/// @brief Method GetMacSize addr 0xe897d0 size 0x70 virtual false final false
 int32_t GetMacSize(bool forEncryption, int32_t requestedMacBits) ;

/// @brief Method GetAssociatedTextLength addr 0xe8af68 size 0x38 virtual false final false
 int32_t GetAssociatedTextLength() ;

/// @brief Method HasAssociatedText addr 0xe8af50 size 0x18 virtual false final false
 bool HasAssociatedText() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Modes
NEED_NO_BOX(Org::BouncyCastle::Crypto::Modes::CcmBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::CcmBlockCipher, "Org.BouncyCastle.Crypto.Modes", "CcmBlockCipher");
