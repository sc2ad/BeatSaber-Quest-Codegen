#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAeadCipher;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsAeadCipher
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1287))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsAeadCipher
class CORDL_TYPE TlsAeadCipher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCipher
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~TlsAeadCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsAeadCipher", modifiers: " const&", def_value: None }]
constexpr TlsAeadCipher(TlsAeadCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsAeadCipher", modifiers: "&&", def_value: None }]
constexpr TlsAeadCipher(TlsAeadCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsAeadCipher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TlsAeadCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsAeadCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsAeadCipher& operator=(TlsAeadCipher&& o) noexcept = default;
  constexpr TlsAeadCipher& operator=(TlsAeadCipher const& o) noexcept = default;
                


// Fields

/// @brief Field NONCE_RFC5288 offset 0
static constexpr int32_t  NONCE_RFC5288{1};

/// @brief Field NONCE_DRAFT_CHACHA20_POLY1305 offset 0
static constexpr int32_t  NONCE_DRAFT_CHACHA20_POLY1305{2};

 Org::BouncyCastle::Crypto::Tls::TlsContext __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(Org::BouncyCastle::Crypto::Tls::TlsContext value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsContext __get_context() const;

 int32_t __declspec(property(get=__get_macSize, put=__set_macSize))  macSize;

constexpr void __set_macSize(int32_t value) ;

constexpr int32_t __get_macSize() const;

 int32_t __declspec(property(get=__get_record_iv_length, put=__set_record_iv_length))  record_iv_length;

constexpr void __set_record_iv_length(int32_t value) ;

constexpr int32_t __get_record_iv_length() const;

 Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher __declspec(property(get=__get_encryptCipher, put=__set_encryptCipher))  encryptCipher;

constexpr void __set_encryptCipher(Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher __get_encryptCipher() const;

 Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher __declspec(property(get=__get_decryptCipher, put=__set_decryptCipher))  decryptCipher;

constexpr void __set_decryptCipher(Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher __get_decryptCipher() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_encryptImplicitNonce, put=__set_encryptImplicitNonce))  encryptImplicitNonce;

constexpr void __set_encryptImplicitNonce(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_encryptImplicitNonce() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_decryptImplicitNonce, put=__set_decryptImplicitNonce))  decryptImplicitNonce;

constexpr void __set_decryptImplicitNonce(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_decryptImplicitNonce() const;

 int32_t __declspec(property(get=__get_nonceMode, put=__set_nonceMode))  nonceMode;

constexpr void __set_nonceMode(int32_t value) ;

constexpr int32_t __get_nonceMode() const;


// Methods

static Org::BouncyCastle::Crypto::Tls::TlsAeadCipher New_ctor(Org::BouncyCastle::Crypto::Tls::TlsContext context, Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher clientWriteCipher, Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher serverWriteCipher, int32_t cipherKeySize, int32_t macSize) ;

/// @brief Method .ctor addr 0xf0baa0 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::TlsContext context, Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher clientWriteCipher, Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher serverWriteCipher, int32_t cipherKeySize, int32_t macSize) ;

static Org::BouncyCastle::Crypto::Tls::TlsAeadCipher New_ctor(Org::BouncyCastle::Crypto::Tls::TlsContext context, Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher clientWriteCipher, Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher serverWriteCipher, int32_t cipherKeySize, int32_t macSize, int32_t nonceMode) ;

/// @brief Method .ctor addr 0xf0baa8 size 0x4c8 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::TlsContext context, Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher clientWriteCipher, Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher serverWriteCipher, int32_t cipherKeySize, int32_t macSize, int32_t nonceMode) ;

/// @brief Method GetPlaintextLimit addr 0xf0bf70 size 0x10 virtual true final false
 int32_t GetPlaintextLimit(int32_t ciphertextLimit) ;

/// @brief Method EncodePlaintext addr 0xf0bf80 size 0x574 virtual true final false
 ::ArrayW<uint8_t> EncodePlaintext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> plaintext, int32_t offset, int32_t len) ;

/// @brief Method DecodeCiphertext addr 0xf0c4f4 size 0x568 virtual true final false
 ::ArrayW<uint8_t> DecodeCiphertext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> ciphertext, int32_t offset, int32_t len) ;

/// @brief Method GetAdditionalData addr 0xf0ca5c size 0x160 virtual true final false
 ::ArrayW<uint8_t> GetAdditionalData(int64_t seqNo, uint8_t type, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsAeadCipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsAeadCipher, "Org.BouncyCastle.Crypto.Tls", "TlsAeadCipher");
