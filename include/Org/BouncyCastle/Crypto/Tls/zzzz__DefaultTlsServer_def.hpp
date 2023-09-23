#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsServer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class TlsEncryptionCredentials;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSignerCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DefaultTlsServer;
}
// Type: Org.BouncyCastle.Crypto.Tls::DefaultTlsServer
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1173))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1214))
// CS Name: Org.BouncyCastle.Crypto.Tls.DefaultTlsServer
class CORDL_TYPE DefaultTlsServer : public Org::BouncyCastle::Crypto::Tls::AbstractTlsServer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~DefaultTlsServer() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsServer", modifiers: " const&", def_value: None }]
constexpr DefaultTlsServer(DefaultTlsServer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsServer", modifiers: "&&", def_value: None }]
constexpr DefaultTlsServer(DefaultTlsServer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultTlsServer(void* ptr) noexcept : Org::BouncyCastle::Crypto::Tls::AbstractTlsServer(ptr) {
}


  constexpr DefaultTlsServer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultTlsServer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultTlsServer& operator=(DefaultTlsServer&& o) noexcept = default;
  constexpr DefaultTlsServer& operator=(DefaultTlsServer const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit DefaultTlsServer() ;

/// @brief Method .ctor addr 0xed61ac size 0x4 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "cipherFactory", ty: "Org::BouncyCastle::Crypto::Tls::TlsCipherFactory", modifiers: "", def_value: None }]
explicit DefaultTlsServer(Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory) ;

/// @brief Method .ctor addr 0xed61b0 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory) ;

/// @brief Method GetDsaSignerCredentials addr 0xed61d8 size 0x44 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials GetDsaSignerCredentials() ;

/// @brief Method GetECDsaSignerCredentials addr 0xed621c size 0x44 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials GetECDsaSignerCredentials() ;

/// @brief Method GetRsaEncryptionCredentials addr 0xed6260 size 0x44 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials GetRsaEncryptionCredentials() ;

/// @brief Method GetRsaSignerCredentials addr 0xed62a4 size 0x44 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials GetRsaSignerCredentials() ;

/// @brief Method GetDHParameters addr 0xed62e8 size 0x58 virtual true final false
 Org::BouncyCastle::Crypto::Parameters::DHParameters GetDHParameters() ;

/// @brief Method GetCipherSuites addr 0xed6340 size 0x70 virtual true final false
 ::ArrayW<int32_t> GetCipherSuites() ;

/// @brief Method GetCredentials addr 0xed63b0 size 0x134 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsCredentials GetCredentials() ;

/// @brief Method GetKeyExchange addr 0xed64e4 size 0x124 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsKeyExchange GetKeyExchange() ;

/// @brief Method CreateDHKeyExchange addr 0xed6608 size 0x9c virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsKeyExchange CreateDHKeyExchange(int32_t keyExchange) ;

/// @brief Method CreateDheKeyExchange addr 0xed66a4 size 0x9c virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsKeyExchange CreateDheKeyExchange(int32_t keyExchange) ;

/// @brief Method CreateECDHKeyExchange addr 0xed6740 size 0x94 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsKeyExchange CreateECDHKeyExchange(int32_t keyExchange) ;

/// @brief Method CreateECDheKeyExchange addr 0xed67d4 size 0x94 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsKeyExchange CreateECDheKeyExchange(int32_t keyExchange) ;

/// @brief Method CreateRsaKeyExchange addr 0xed6868 size 0x68 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsKeyExchange CreateRsaKeyExchange() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::DefaultTlsServer);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::DefaultTlsServer, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsServer");
