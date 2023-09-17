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
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsMac;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsNullCipher;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsNullCipher
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1313))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsNullCipher
class CORDL_TYPE TlsNullCipher : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Tls::TlsCipher
constexpr operator  ::Org::BouncyCastle::Crypto::Tls::TlsCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TlsNullCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsNullCipher", modifiers: " const&", def_value: None }]
constexpr TlsNullCipher(TlsNullCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsNullCipher", modifiers: "&&", def_value: None }]
constexpr TlsNullCipher(TlsNullCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsNullCipher(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TlsNullCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsNullCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsNullCipher& operator=(TlsNullCipher&& o) noexcept = default;
  constexpr TlsNullCipher& operator=(TlsNullCipher const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::Tls::TlsContext __declspec(property(get=__get_context, put=__set_context))  context;

constexpr void __set_context(::Org::BouncyCastle::Crypto::Tls::TlsContext value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext __get_context() const;

 ::Org::BouncyCastle::Crypto::Tls::TlsMac __declspec(property(get=__get_writeMac, put=__set_writeMac))  writeMac;

constexpr void __set_writeMac(::Org::BouncyCastle::Crypto::Tls::TlsMac value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac __get_writeMac() const;

 ::Org::BouncyCastle::Crypto::Tls::TlsMac __declspec(property(get=__get_readMac, put=__set_readMac))  readMac;

constexpr void __set_readMac(::Org::BouncyCastle::Crypto::Tls::TlsMac value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsMac __get_readMac() const;


// Methods

// Ctor Parameters [CppParam { name: "context", ty: "::Org::BouncyCastle::Crypto::Tls::TlsContext", modifiers: "", def_value: None }]
explicit TlsNullCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext context) ;

/// @brief Method .ctor addr 0xf21ba4 size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext context) ;

// Ctor Parameters [CppParam { name: "context", ty: "::Org::BouncyCastle::Crypto::Tls::TlsContext", modifiers: "", def_value: None }, CppParam { name: "clientWriteDigest", ty: "::Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }, CppParam { name: "serverWriteDigest", ty: "::Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }]
explicit TlsNullCipher(::Org::BouncyCastle::Crypto::Tls::TlsContext context, ::Org::BouncyCastle::Crypto::IDigest clientWriteDigest, ::Org::BouncyCastle::Crypto::IDigest serverWriteDigest) ;

/// @brief Method .ctor addr 0xf21bd0 size 0x458 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext context, ::Org::BouncyCastle::Crypto::IDigest clientWriteDigest, ::Org::BouncyCastle::Crypto::IDigest serverWriteDigest) ;

/// @brief Method GetPlaintextLimit addr 0xf221c8 size 0x2c virtual true final false
 int32_t GetPlaintextLimit(int32_t ciphertextLimit) ;

/// @brief Method EncodePlaintext addr 0xf221f4 size 0x130 virtual true final false
 ::ArrayW<uint8_t> EncodePlaintext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> plaintext, int32_t offset, int32_t len) ;

/// @brief Method DecodeCiphertext addr 0xf22324 size 0x194 virtual true final false
 ::ArrayW<uint8_t> DecodeCiphertext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> ciphertext, int32_t offset, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsNullCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsNullCipher, "Org.BouncyCastle.Crypto.Tls", "TlsNullCipher");
