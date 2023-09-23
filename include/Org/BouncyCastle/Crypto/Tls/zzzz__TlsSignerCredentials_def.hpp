#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSignerCredentials;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsSignerCredentials
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1176))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsSignerCredentials
class CORDL_TYPE TlsSignerCredentials : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCredentials
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsCredentials() const noexcept;

~TlsSignerCredentials() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsSignerCredentials(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm __declspec(property(get=get_SignatureAndHashAlgorithm))  SignatureAndHashAlgorithm;


// Methods

/// @brief Method GenerateCertificateSignature addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GenerateCertificateSignature(::ArrayW<uint8_t> hash) ;

/// @brief Method get_SignatureAndHashAlgorithm addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm get_SignatureAndHashAlgorithm() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials, "Org.BouncyCastle.Crypto.Tls", "TlsSignerCredentials");
