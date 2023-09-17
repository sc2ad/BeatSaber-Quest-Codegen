#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsClient_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAuthentication;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpGroupVerifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class SrpTlsClient;
}
// Type: Org.BouncyCastle.Crypto.Tls::SrpTlsClient
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1165))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1280))
// CS Name: Org.BouncyCastle.Crypto.Tls.SrpTlsClient
class CORDL_TYPE SrpTlsClient : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~SrpTlsClient() = default;

// Ctor Parameters [CppParam { name: "", ty: "SrpTlsClient", modifiers: " const&", def_value: None }]
constexpr SrpTlsClient(SrpTlsClient const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SrpTlsClient", modifiers: "&&", def_value: None }]
constexpr SrpTlsClient(SrpTlsClient&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SrpTlsClient(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Tls::AbstractTlsClient(ptr) {
}


  constexpr SrpTlsClient& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SrpTlsClient& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SrpTlsClient& operator=(SrpTlsClient&& o) noexcept = default;
  constexpr SrpTlsClient& operator=(SrpTlsClient const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier __declspec(property(get=__get_mGroupVerifier, put=__set_mGroupVerifier))  mGroupVerifier;

constexpr void __set_mGroupVerifier(::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier __get_mGroupVerifier() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mIdentity, put=__set_mIdentity))  mIdentity;

constexpr void __set_mIdentity(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mIdentity() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mPassword, put=__set_mPassword))  mPassword;

constexpr void __set_mPassword(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mPassword() const;


// Properties

 bool __declspec(property(get=get_RequireSrpServerExtension))  RequireSrpServerExtension;


// Methods

// Ctor Parameters [CppParam { name: "identity", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit SrpTlsClient(::ArrayW<uint8_t> identity, ::ArrayW<uint8_t> password) ;

/// @brief Method .ctor addr 0xf0a1b0 size 0xac virtual false final false
 void _ctor(::ArrayW<uint8_t> identity, ::ArrayW<uint8_t> password) ;

// Ctor Parameters [CppParam { name: "cipherFactory", ty: "::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory", modifiers: "", def_value: None }, CppParam { name: "identity", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit SrpTlsClient(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory, ::ArrayW<uint8_t> identity, ::ArrayW<uint8_t> password) ;

/// @brief Method .ctor addr 0xf0a300 size 0x8c virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory, ::ArrayW<uint8_t> identity, ::ArrayW<uint8_t> password) ;

// Ctor Parameters [CppParam { name: "cipherFactory", ty: "::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory", modifiers: "", def_value: None }, CppParam { name: "groupVerifier", ty: "::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier", modifiers: "", def_value: None }, CppParam { name: "identity", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit SrpTlsClient(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier groupVerifier, ::ArrayW<uint8_t> identity, ::ArrayW<uint8_t> password) ;

/// @brief Method .ctor addr 0xf0a25c size 0xa4 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory, ::Org::BouncyCastle::Crypto::Tls::TlsSrpGroupVerifier groupVerifier, ::ArrayW<uint8_t> identity, ::ArrayW<uint8_t> password) ;

/// @brief Method get_RequireSrpServerExtension addr 0xf0a38c size 0x8 virtual true final false
 bool get_RequireSrpServerExtension() ;

/// @brief Method GetCipherSuites addr 0xf0a394 size 0x64 virtual true final false
 ::ArrayW<int32_t> GetCipherSuites() ;

/// @brief Method GetClientExtensions addr 0xf0a3f8 size 0x34 virtual true final false
 ::System::Collections::IDictionary GetClientExtensions() ;

/// @brief Method ProcessServerExtensions addr 0xf0a42c size 0xd8 virtual true final false
 void ProcessServerExtensions(::System::Collections::IDictionary serverExtensions) ;

/// @brief Method GetKeyExchange addr 0xf0a504 size 0xc0 virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange GetKeyExchange() ;

/// @brief Method GetAuthentication addr 0xf0a5c4 size 0x44 virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication GetAuthentication() ;

/// @brief Method CreateSrpKeyExchange addr 0xf0a608 size 0x94 virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange CreateSrpKeyExchange(int32_t keyExchange) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::SrpTlsClient);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::SrpTlsClient, "Org.BouncyCastle.Crypto.Tls", "SrpTlsClient");
