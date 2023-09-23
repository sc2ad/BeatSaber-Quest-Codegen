#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsEncryptionCredentials;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsEncryptionCredentials
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1168))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsEncryptionCredentials
class CORDL_TYPE TlsEncryptionCredentials : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCredentials
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsCredentials() const noexcept;

~TlsEncryptionCredentials() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsEncryptionCredentials(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method DecryptPreMasterSecret addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> DecryptPreMasterSecret(::ArrayW<uint8_t> encryptedPreMasterSecret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials, "Org.BouncyCastle.Crypto.Tls", "TlsEncryptionCredentials");
