#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto::Engines {
class ChaCha7539Engine;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class Chacha20Poly1305;
}
// Type: Org.BouncyCastle.Crypto.Tls::Chacha20Poly1305
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1195))
// CS Name: Org.BouncyCastle.Crypto.Tls.Chacha20Poly1305
class CORDL_TYPE Chacha20Poly1305 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCipher
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Chacha20Poly1305() = default;

// Ctor Parameters [CppParam { name: "", ty: "Chacha20Poly1305", modifiers: " const&", def_value: None }]
constexpr Chacha20Poly1305(Chacha20Poly1305 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Chacha20Poly1305", modifiers: "&&", def_value: None }]
constexpr Chacha20Poly1305(Chacha20Poly1305&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Chacha20Poly1305(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Chacha20Poly1305& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Chacha20Poly1305& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Chacha20Poly1305& operator=(Chacha20Poly1305&& o) noexcept = default;
  constexpr Chacha20Poly1305& operator=(Chacha20Poly1305 const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_Zeroes, put=__set_Zeroes))  Zeroes;

static void __set_Zeroes(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_Zeroes() ;

 Org::BouncyCastle::Crypto::Tls::TlsContext __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(Org::BouncyCastle::Crypto::Tls::TlsContext value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsContext __get_context() const;

 Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine __declspec(property(get=__get_encryptCipher, put=__set_encryptCipher))  encryptCipher;

constexpr void __set_encryptCipher(Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine value) ;

constexpr Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine __get_encryptCipher() const;

 Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine __declspec(property(get=__get_decryptCipher, put=__set_decryptCipher))  decryptCipher;

constexpr void __set_decryptCipher(Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine value) ;

constexpr Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine __get_decryptCipher() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_encryptIV, put=__set_encryptIV))  encryptIV;

constexpr void __set_encryptIV(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_encryptIV() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_decryptIV, put=__set_decryptIV))  decryptIV;

constexpr void __set_decryptIV(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_decryptIV() const;


// Methods

static Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305 New_ctor(Org::BouncyCastle::Crypto::Tls::TlsContext context) ;

/// @brief Method .ctor addr 0xed1d18 size 0x324 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::TlsContext context) ;

/// @brief Method GetPlaintextLimit addr 0xed203c size 0x8 virtual true final false
 int32_t GetPlaintextLimit(int32_t ciphertextLimit) ;

/// @brief Method EncodePlaintext addr 0xed2044 size 0x13c virtual true final false
 ::ArrayW<uint8_t> EncodePlaintext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> plaintext, int32_t offset, int32_t len) ;

/// @brief Method DecodeCiphertext addr 0xed2180 size 0x1f0 virtual true final false
 ::ArrayW<uint8_t> DecodeCiphertext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> ciphertext, int32_t offset, int32_t len) ;

/// @brief Method InitRecord addr 0xed2370 size 0x130 virtual true final false
 Org::BouncyCastle::Crypto::Parameters::KeyParameter InitRecord(Org::BouncyCastle::Crypto::IStreamCipher cipher, bool forEncryption, int64_t seqNo, ::ArrayW<uint8_t> iv) ;

/// @brief Method CalculateNonce addr 0xed24a0 size 0xec virtual true final false
 ::ArrayW<uint8_t> CalculateNonce(int64_t seqNo, ::ArrayW<uint8_t> iv) ;

/// @brief Method GenerateRecordMacKey addr 0xed258c size 0x15c virtual true final false
 Org::BouncyCastle::Crypto::Parameters::KeyParameter GenerateRecordMacKey(Org::BouncyCastle::Crypto::IStreamCipher cipher) ;

/// @brief Method CalculateRecordMac addr 0xed26e8 size 0x1a8 virtual true final false
 ::ArrayW<uint8_t> CalculateRecordMac(Org::BouncyCastle::Crypto::Parameters::KeyParameter macKey, ::ArrayW<uint8_t> additionalData, ::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method UpdateRecordMacLength addr 0xed2890 size 0xc8 virtual true final false
 void UpdateRecordMacLength(Org::BouncyCastle::Crypto::IMac mac, int32_t len) ;

/// @brief Method UpdateRecordMacText addr 0xed2958 size 0x188 virtual true final false
 void UpdateRecordMacText(Org::BouncyCastle::Crypto::IMac mac, ::ArrayW<uint8_t> buf, int32_t off, int32_t len) ;

/// @brief Method GetAdditionalData addr 0xed2ae0 size 0x160 virtual true final false
 ::ArrayW<uint8_t> GetAdditionalData(int64_t seqNo, uint8_t type, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::Chacha20Poly1305, "Org.BouncyCastle.Crypto.Tls", "Chacha20Poly1305");
