#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsServer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPskIdentityManager;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsEncryptionCredentials;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class PskTlsServer;
}
// Type: Org.BouncyCastle.Crypto.Tls::PskTlsServer
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1173))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1262))
// CS Name: Org.BouncyCastle.Crypto.Tls.PskTlsServer
class CORDL_TYPE PskTlsServer : public Org::BouncyCastle::Crypto::Tls::AbstractTlsServer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~PskTlsServer() = default;

// Ctor Parameters [CppParam { name: "", ty: "PskTlsServer", modifiers: " const&", def_value: None }]
constexpr PskTlsServer(PskTlsServer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PskTlsServer", modifiers: "&&", def_value: None }]
constexpr PskTlsServer(PskTlsServer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PskTlsServer(void* ptr) noexcept : Org::BouncyCastle::Crypto::Tls::AbstractTlsServer(ptr) {
}


  constexpr PskTlsServer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PskTlsServer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PskTlsServer& operator=(PskTlsServer&& o) noexcept = default;
  constexpr PskTlsServer& operator=(PskTlsServer const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager __declspec(property(get=__get_mPskIdentityManager, put=__set_mPskIdentityManager))  mPskIdentityManager;

constexpr void __set_mPskIdentityManager(Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager __get_mPskIdentityManager() const;


// Methods

// Ctor Parameters [CppParam { name: "pskIdentityManager", ty: "Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager", modifiers: "", def_value: None }]
explicit PskTlsServer(Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager pskIdentityManager) ;

/// @brief Method .ctor addr 0xf0611c size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager pskIdentityManager) ;

// Ctor Parameters [CppParam { name: "cipherFactory", ty: "Org::BouncyCastle::Crypto::Tls::TlsCipherFactory", modifiers: "", def_value: None }, CppParam { name: "pskIdentityManager", ty: "Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager", modifiers: "", def_value: None }]
explicit PskTlsServer(Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory, Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager pskIdentityManager) ;

/// @brief Method .ctor addr 0xf06198 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory, Org::BouncyCastle::Crypto::Tls::TlsPskIdentityManager pskIdentityManager) ;

/// @brief Method GetRsaEncryptionCredentials addr 0xf061c0 size 0x44 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials GetRsaEncryptionCredentials() ;

/// @brief Method GetDHParameters addr 0xf06204 size 0x58 virtual true final false
 Org::BouncyCastle::Crypto::Parameters::DHParameters GetDHParameters() ;

/// @brief Method GetCipherSuites addr 0xf0625c size 0x70 virtual true final false
 ::ArrayW<int32_t> GetCipherSuites() ;

/// @brief Method GetCredentials addr 0xf062cc size 0xdc virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsCredentials GetCredentials() ;

/// @brief Method GetKeyExchange addr 0xf063a8 size 0xc8 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsKeyExchange GetKeyExchange() ;

/// @brief Method CreatePskKeyExchange addr 0xf06470 size 0xd0 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsKeyExchange CreatePskKeyExchange(int32_t keyExchange) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::PskTlsServer);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::PskTlsServer, "Org.BouncyCastle.Crypto.Tls", "PskTlsServer");
