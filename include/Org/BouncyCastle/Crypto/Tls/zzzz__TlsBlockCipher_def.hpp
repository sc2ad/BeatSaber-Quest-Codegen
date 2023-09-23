#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsMac;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsBlockCipher;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsBlockCipher
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1288))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsBlockCipher
class CORDL_TYPE TlsBlockCipher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCipher
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~TlsBlockCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsBlockCipher", modifiers: " const&", def_value: None }]
constexpr TlsBlockCipher(TlsBlockCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsBlockCipher", modifiers: "&&", def_value: None }]
constexpr TlsBlockCipher(TlsBlockCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsBlockCipher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TlsBlockCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsBlockCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsBlockCipher& operator=(TlsBlockCipher&& o) noexcept = default;
  constexpr TlsBlockCipher& operator=(TlsBlockCipher const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Tls::TlsContext __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(Org::BouncyCastle::Crypto::Tls::TlsContext value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsContext __get_context() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_randomData, put=__set_randomData))  randomData;

constexpr void __set_randomData(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_randomData() const;

 bool __declspec(property(get=__get_useExplicitIV, put=__set_useExplicitIV))  useExplicitIV;

constexpr void __set_useExplicitIV(bool value) ;

constexpr bool __get_useExplicitIV() const;

 bool __declspec(property(get=__get_encryptThenMac, put=__set_encryptThenMac))  encryptThenMac;

constexpr void __set_encryptThenMac(bool value) ;

constexpr bool __get_encryptThenMac() const;

 Org::BouncyCastle::Crypto::IBlockCipher __declspec(property(get=__get_encryptCipher, put=__set_encryptCipher))  encryptCipher;

constexpr void __set_encryptCipher(Org::BouncyCastle::Crypto::IBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IBlockCipher __get_encryptCipher() const;

 Org::BouncyCastle::Crypto::IBlockCipher __declspec(property(get=__get_decryptCipher, put=__set_decryptCipher))  decryptCipher;

constexpr void __set_decryptCipher(Org::BouncyCastle::Crypto::IBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IBlockCipher __get_decryptCipher() const;

 Org::BouncyCastle::Crypto::Tls::TlsMac __declspec(property(get=__get_mWriteMac, put=__set_mWriteMac))  mWriteMac;

constexpr void __set_mWriteMac(Org::BouncyCastle::Crypto::Tls::TlsMac value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsMac __get_mWriteMac() const;

 Org::BouncyCastle::Crypto::Tls::TlsMac __declspec(property(get=__get_mReadMac, put=__set_mReadMac))  mReadMac;

constexpr void __set_mReadMac(Org::BouncyCastle::Crypto::Tls::TlsMac value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsMac __get_mReadMac() const;


// Properties

 Org::BouncyCastle::Crypto::Tls::TlsMac __declspec(property(get=get_WriteMac))  WriteMac;

 Org::BouncyCastle::Crypto::Tls::TlsMac __declspec(property(get=get_ReadMac))  ReadMac;


// Methods

/// @brief Method get_WriteMac addr 0xf0cbbc size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsMac get_WriteMac() ;

/// @brief Method get_ReadMac addr 0xf0cbc4 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsMac get_ReadMac() ;

// Ctor Parameters [CppParam { name: "context", ty: "Org::BouncyCastle::Crypto::Tls::TlsContext", modifiers: "", def_value: None }, CppParam { name: "clientWriteCipher", ty: "Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }, CppParam { name: "serverWriteCipher", ty: "Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }, CppParam { name: "clientWriteDigest", ty: "Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }, CppParam { name: "serverWriteDigest", ty: "Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }, CppParam { name: "cipherKeySize", ty: "int32_t", modifiers: "", def_value: None }]
explicit TlsBlockCipher(Org::BouncyCastle::Crypto::Tls::TlsContext context, Org::BouncyCastle::Crypto::IBlockCipher clientWriteCipher, Org::BouncyCastle::Crypto::IBlockCipher serverWriteCipher, Org::BouncyCastle::Crypto::IDigest clientWriteDigest, Org::BouncyCastle::Crypto::IDigest serverWriteDigest, int32_t cipherKeySize) ;

/// @brief Method .ctor addr 0xf0cbcc size 0xb9c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::TlsContext context, Org::BouncyCastle::Crypto::IBlockCipher clientWriteCipher, Org::BouncyCastle::Crypto::IBlockCipher serverWriteCipher, Org::BouncyCastle::Crypto::IDigest clientWriteDigest, Org::BouncyCastle::Crypto::IDigest serverWriteDigest, int32_t cipherKeySize) ;

/// @brief Method GetPlaintextLimit addr 0xf0d768 size 0x100 virtual true final false
 int32_t GetPlaintextLimit(int32_t ciphertextLimit) ;

/// @brief Method EncodePlaintext addr 0xf0d868 size 0x654 virtual true final false
 ::ArrayW<uint8_t> EncodePlaintext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> plaintext, int32_t offset, int32_t len) ;

/// @brief Method DecodeCiphertext addr 0xf0debc size 0x4b0 virtual true final false
 ::ArrayW<uint8_t> DecodeCiphertext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> ciphertext, int32_t offset, int32_t len) ;

/// @brief Method CheckPaddingConstantTime addr 0xf0e36c size 0x16c virtual true final false
 int32_t CheckPaddingConstantTime(::ArrayW<uint8_t> buf, int32_t off, int32_t len, int32_t blockSize, int32_t macSize) ;

/// @brief Method ChooseExtraPadBlocks addr 0xf0e4d8 size 0xa8 virtual true final false
 int32_t ChooseExtraPadBlocks(Org::BouncyCastle::Security::SecureRandom r, int32_t max) ;

/// @brief Method LowestBitSet addr 0xf0e580 size 0x28 virtual true final false
 int32_t LowestBitSet(int32_t x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsBlockCipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsBlockCipher, "Org.BouncyCastle.Crypto.Tls", "TlsBlockCipher");
