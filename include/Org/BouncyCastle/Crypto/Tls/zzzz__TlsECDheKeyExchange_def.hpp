#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsECDHKeyExchange_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSignerCredentials;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace System::IO {
class Stream;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SecurityParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSigner;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsECDheKeyExchange;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsECDheKeyExchange
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1304))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1305))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsECDheKeyExchange
class CORDL_TYPE TlsECDheKeyExchange : public ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~TlsECDheKeyExchange() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsECDheKeyExchange", modifiers: " const&", def_value: None }]
constexpr TlsECDheKeyExchange(TlsECDheKeyExchange const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsECDheKeyExchange", modifiers: "&&", def_value: None }]
constexpr TlsECDheKeyExchange(TlsECDheKeyExchange&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsECDheKeyExchange(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Tls::TlsECDHKeyExchange(ptr) {
}


  constexpr TlsECDheKeyExchange& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsECDheKeyExchange& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsECDheKeyExchange& operator=(TlsECDheKeyExchange&& o) noexcept = default;
  constexpr TlsECDheKeyExchange& operator=(TlsECDheKeyExchange const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials __declspec(property(get=__get_mServerCredentials, put=__set_mServerCredentials))  mServerCredentials;

constexpr void __set_mServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials __get_mServerCredentials() const;


// Methods

// Ctor Parameters [CppParam { name: "keyExchange", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "supportedSignatureAlgorithms", ty: "::System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "namedCurves", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "clientECPointFormats", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "serverECPointFormats", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit TlsECDheKeyExchange(int32_t keyExchange, ::System::Collections::IList supportedSignatureAlgorithms, ::ArrayW<int32_t> namedCurves, ::ArrayW<uint8_t> clientECPointFormats, ::ArrayW<uint8_t> serverECPointFormats) ;

/// @brief Method .ctor addr 0xf1dd90 size 0x8 virtual false final false
 void _ctor(int32_t keyExchange, ::System::Collections::IList supportedSignatureAlgorithms, ::ArrayW<int32_t> namedCurves, ::ArrayW<uint8_t> clientECPointFormats, ::ArrayW<uint8_t> serverECPointFormats) ;

/// @brief Method ProcessServerCredentials addr 0xf1dd98 size 0x168 virtual true final false
 void ProcessServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials serverCredentials) ;

/// @brief Method GenerateServerKeyExchange addr 0xf1df00 size 0x404 virtual true final false
 ::ArrayW<uint8_t> GenerateServerKeyExchange() ;

/// @brief Method ProcessServerKeyExchange addr 0xf1e4dc size 0x304 virtual true final false
 void ProcessServerKeyExchange(::System::IO::Stream input) ;

/// @brief Method ValidateCertificateRequest addr 0xf1e7e0 size 0x9c virtual true final false
 void ValidateCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest certificateRequest) ;

/// @brief Method ProcessClientCredentials addr 0xf1e87c size 0x8c virtual true final false
 void ProcessClientCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials clientCredentials) ;

/// @brief Method InitVerifyer addr 0xf1e908 size 0x1d0 virtual true final false
 ::Org::BouncyCastle::Crypto::ISigner InitVerifyer(::Org::BouncyCastle::Crypto::Tls::TlsSigner tlsSigner, ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, ::Org::BouncyCastle::Crypto::Tls::SecurityParameters securityParameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsECDheKeyExchange, "Org.BouncyCastle.Crypto.Tls", "TlsECDheKeyExchange");
