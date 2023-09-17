#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsClient_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDHVerifier;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DefaultTlsClient;
}
// Type: Org.BouncyCastle.Crypto.Tls::DefaultTlsClient
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1165))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1210))
// CS Name: Org.BouncyCastle.Crypto.Tls.DefaultTlsClient
class CORDL_TYPE DefaultTlsClient : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~DefaultTlsClient() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsClient", modifiers: " const&", def_value: None }]
constexpr DefaultTlsClient(DefaultTlsClient const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsClient", modifiers: "&&", def_value: None }]
constexpr DefaultTlsClient(DefaultTlsClient&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultTlsClient(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient(ptr) {
}


  constexpr DefaultTlsClient& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultTlsClient& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultTlsClient& operator=(DefaultTlsClient&& o) noexcept = default;
  constexpr DefaultTlsClient& operator=(DefaultTlsClient const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier __declspec(property(get=__get_mDHVerifier, put=__set_mDHVerifier))  mDHVerifier;

constexpr void __set_mDHVerifier(::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier __get_mDHVerifier() const;


// Methods

// Ctor Parameters []
explicit DefaultTlsClient() ;

/// @brief Method .ctor addr 0xed51b4 size 0x64 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "cipherFactory", ty: "::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory", modifiers: "", def_value: None }]
explicit DefaultTlsClient(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory) ;

/// @brief Method .ctor addr 0xed5218 size 0x78 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory) ;

// Ctor Parameters [CppParam { name: "cipherFactory", ty: "::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory", modifiers: "", def_value: None }, CppParam { name: "dhVerifier", ty: "::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier", modifiers: "", def_value: None }]
explicit DefaultTlsClient(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier dhVerifier) ;

/// @brief Method .ctor addr 0xed52f0 size 0x30 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsDHVerifier dhVerifier) ;

/// @brief Method GetCipherSuites addr 0xed5320 size 0x70 virtual true final false
 ::ArrayW<int32_t> GetCipherSuites() ;

/// @brief Method GetKeyExchange addr 0xed5390 size 0x124 virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange GetKeyExchange() ;

/// @brief Method CreateDHKeyExchange addr 0xed54b4 size 0x84 virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange CreateDHKeyExchange(int32_t keyExchange) ;

/// @brief Method CreateDheKeyExchange addr 0xed5538 size 0x84 virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange CreateDheKeyExchange(int32_t keyExchange) ;

/// @brief Method CreateECDHKeyExchange addr 0xed55bc size 0x90 virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange CreateECDHKeyExchange(int32_t keyExchange) ;

/// @brief Method CreateECDheKeyExchange addr 0xed564c size 0x90 virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange CreateECDheKeyExchange(int32_t keyExchange) ;

/// @brief Method CreateRsaKeyExchange addr 0xed56dc size 0x68 virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange CreateRsaKeyExchange() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DefaultTlsClient, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsClient");
