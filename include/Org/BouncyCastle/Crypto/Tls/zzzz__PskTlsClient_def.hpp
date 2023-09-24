#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsClient_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsPskIdentity;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAuthentication;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDHVerifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class PskTlsClient;
}
// Type: Org.BouncyCastle.Crypto.Tls::PskTlsClient
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1165))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1261))
// CS Name: Org.BouncyCastle.Crypto.Tls.PskTlsClient
class CORDL_TYPE PskTlsClient : public Org::BouncyCastle::Crypto::Tls::AbstractTlsClient {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~PskTlsClient() = default;

// Ctor Parameters [CppParam { name: "", ty: "PskTlsClient", modifiers: " const&", def_value: None }]
constexpr PskTlsClient(PskTlsClient const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PskTlsClient", modifiers: "&&", def_value: None }]
constexpr PskTlsClient(PskTlsClient&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PskTlsClient(void* ptr) noexcept : Org::BouncyCastle::Crypto::Tls::AbstractTlsClient(ptr) {
}


  constexpr PskTlsClient& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PskTlsClient& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PskTlsClient& operator=(PskTlsClient&& o) noexcept = default;
  constexpr PskTlsClient& operator=(PskTlsClient const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Tls::TlsDHVerifier __declspec(property(get=__get_mDHVerifier, put=__set_mDHVerifier))  mDHVerifier;

constexpr void __set_mDHVerifier(Org::BouncyCastle::Crypto::Tls::TlsDHVerifier value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsDHVerifier __get_mDHVerifier() const;

 Org::BouncyCastle::Crypto::Tls::TlsPskIdentity __declspec(property(get=__get_mPskIdentity, put=__set_mPskIdentity))  mPskIdentity;

constexpr void __set_mPskIdentity(Org::BouncyCastle::Crypto::Tls::TlsPskIdentity value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsPskIdentity __get_mPskIdentity() const;


// Methods

static Org::BouncyCastle::Crypto::Tls::PskTlsClient New_ctor(Org::BouncyCastle::Crypto::Tls::TlsPskIdentity pskIdentity) ;

/// @brief Method .ctor addr 0xf05dcc size 0x74 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::TlsPskIdentity pskIdentity) ;

static Org::BouncyCastle::Crypto::Tls::PskTlsClient New_ctor(Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory, Org::BouncyCastle::Crypto::Tls::TlsPskIdentity pskIdentity) ;

/// @brief Method .ctor addr 0xf05e40 size 0x80 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory, Org::BouncyCastle::Crypto::Tls::TlsPskIdentity pskIdentity) ;

static Org::BouncyCastle::Crypto::Tls::PskTlsClient New_ctor(Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory, Org::BouncyCastle::Crypto::Tls::TlsDHVerifier dhVerifier, Org::BouncyCastle::Crypto::Tls::TlsPskIdentity pskIdentity) ;

/// @brief Method .ctor addr 0xf05ec0 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory, Org::BouncyCastle::Crypto::Tls::TlsDHVerifier dhVerifier, Org::BouncyCastle::Crypto::Tls::TlsPskIdentity pskIdentity) ;

/// @brief Method GetCipherSuites addr 0xf05eec size 0x74 virtual true final false
 ::ArrayW<int32_t> GetCipherSuites() ;

/// @brief Method GetKeyExchange addr 0xf05f60 size 0xc8 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsKeyExchange GetKeyExchange() ;

/// @brief Method GetAuthentication addr 0xf06028 size 0x44 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsAuthentication GetAuthentication() ;

/// @brief Method CreatePskKeyExchange addr 0xf0606c size 0xb0 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsKeyExchange CreatePskKeyExchange(int32_t keyExchange) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::PskTlsClient);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::PskTlsClient, "Org.BouncyCastle.Crypto.Tls", "PskTlsClient");
