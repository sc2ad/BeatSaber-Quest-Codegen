#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsCipher
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1194))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsCipher
class CORDL_TYPE TlsCipher : public ::cordl_internals::InterfaceW {
public:
// Declarations
~TlsCipher() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsCipher(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetPlaintextLimit addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetPlaintextLimit(int32_t ciphertextLimit) ;

/// @brief Method EncodePlaintext addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> EncodePlaintext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> plaintext, int32_t offset, int32_t len) ;

/// @brief Method DecodeCiphertext addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> DecodeCiphertext(int64_t seqNo, uint8_t type, ::ArrayW<uint8_t> ciphertext, int32_t offset, int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsCipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsCipher, "Org.BouncyCastle.Crypto.Tls", "TlsCipher");
