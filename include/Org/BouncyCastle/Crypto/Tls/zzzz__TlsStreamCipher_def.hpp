#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsMac;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCipher;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsStreamCipher;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsStreamCipher
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1331))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsStreamCipher
class CORDL_TYPE TlsStreamCipher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Tls::TlsCipher
constexpr operator  ::Org::BouncyCastle::Crypto::Tls::TlsCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~TlsStreamCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsStreamCipher", modifiers: " const&", def_value: None }]
constexpr TlsStreamCipher(TlsStreamCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsStreamCipher", modifiers: "&&", def_value: None }]
constexpr TlsStreamCipher(TlsStreamCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsStreamCipher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TlsStreamCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsStreamCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsStreamCipher& operator=(TlsStreamCipher&& o) noexcept = default;
  constexpr TlsStreamCipher& operator=(TlsStreamCipher const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::Tls::TlsContext __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(::Org::BouncyCastle::Crypto::Tls::TlsContext value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext __get_context() const;

 ::Org::BouncyCastle::Crypto::IStreamCipher __declspec(property(get=__get_encryptCipher, put=__set_encryptCipher))  encryptCipher;

constexpr void __set_encryptCipher(::Org::BouncyCastle::Crypto::IStreamCipher value) ;

constexpr ::Org::BouncyCastle::Crypto::IStreamCipher __get_encryptCipher() const;

 ::Org::BouncyCastle::Crypto::IStreamCipher __declspec(property(get=__get_decryptCipher, put=__set_decryptCipher))  decryptCipher;

constexpr void __set_decryptCipher(::Org::BouncyCastle::Crypto::IStreamCipher value) ;

constexpr ::Org::BouncyCastle::Crypto::IStreamCipher __get_decryptCipher() const;

 ::Org::BouncyCastle::Crypto::Tls::TlsMac __declspec(property(get=__get_writeMac, put=__set_writeMac))  writeMac;

constexpr void __set_writeMac(::Org::BouncyCastle::Crypto::Tls::TlsMac value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac __get_writeMac() const;

 ::Org::BouncyCastle::Crypto::Tls::TlsMac __declspec(property(get=__get_readMac, put=__set_readMac))  readMac;

constexpr void __set_readMac(::Org::BouncyCastle::Crypto::Tls::TlsMac value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac __get_readMac() const;

 bool __declspec(property(get=__get_usesNonce, put=__set_usesNonce))  usesNonce;

constexpr void __set_usesNonce(bool value) ;

constexpr bool __get_usesNonce() const;


// Methods

// Ctor Parameters [CppParam { name: "context", ty: "::Org::BouncyCastle::Crypto::Tls::TlsContext", modifiers: "", def_value: None }, CppParam { name: "clientWriteCipher", ty: "::Org::BouncyCastle::Crypto::IStreamCipher", modifiers: "", def_value: None }, CppParam { name: "serverWriteCipher", ty: "::Org::BouncyCastle::Crypto::IStreamCipher", modifiers: "", def_value: None }, CppParam { name: "clientWriteDigest", ty: "::Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }, CppParam { name: "serverWriteDigest", ty: "::Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }, CppParam { name: "cipherKeySize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "usesNonce", ty: "bool", modifiers: "", def_value: None }]
explicit TlsStreamCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext context, ::Org::BouncyCastle::Crypto::IStreamCipher clientWriteCipher, ::Org::BouncyCastle::Crypto::IStreamCipher serverWriteCipher, ::Org::BouncyCastle::Crypto::IDigest clientWriteDigest, ::Org::BouncyCastle::Crypto::IDigest serverWriteDigest, int32_t cipherKeySize, bool usesNonce) ;

/// @brief Method .ctor addr 0xf2c60c size 0x6a0 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext context, ::Org::BouncyCastle::Crypto::IStreamCipher clientWriteCipher, ::Org::BouncyCastle::Crypto::IStreamCipher serverWriteCipher, ::Org::BouncyCastle::Crypto::IDigest clientWriteDigest, ::Org::BouncyCastle::Crypto::IDigest serverWriteDigest, int32_t cipherKeySize, bool usesNonce) ;

/// @brief Method GetPlaintextLimit addr 0xf2ccac size 0x2c virtual true final false
 int32_t GetPlaintextLimit(int32_t ciphertextLimit) ;

/// @brief Method EncodePlaintext addr 0xf2ccd8 size 0x1f8 virtual true final false
 ::ArrayW<uint8_t> EncodePlaintext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> plaintext, int32_t offset, int32_t len) ;

/// @brief Method DecodeCiphertext addr 0xf2ced0 size 0x208 virtual true final false
 ::ArrayW<uint8_t> DecodeCiphertext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> ciphertext, int32_t offset, int32_t len) ;

/// @brief Method CheckMac addr 0xf2d0d8 size 0x124 virtual true final false
 void CheckMac(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> recBuf, int32_t recStart, int32_t recEnd, ::ArrayW<uint8_t> calcBuf, int32_t calcOff, int32_t calcLen) ;

/// @brief Method UpdateIV addr 0xf2d1fc size 0x150 virtual true final false
 void UpdateIV(::Org::BouncyCastle::Crypto::IStreamCipher cipher, bool forEncryption, int64_t seqNo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsStreamCipher, "Org.BouncyCastle.Crypto.Tls", "TlsStreamCipher");
