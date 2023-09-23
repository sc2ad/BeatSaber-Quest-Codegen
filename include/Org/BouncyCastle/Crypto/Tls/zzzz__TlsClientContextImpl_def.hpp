#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsContext_def.hpp"
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SecurityParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClientContext;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsClientContextImpl;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsClientContextImpl
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1167))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1290))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsClientContextImpl
class CORDL_TYPE TlsClientContextImpl : public Org::BouncyCastle::Crypto::Tls::AbstractTlsContext {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsClientContext
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsClientContext() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsContext
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsContext() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~TlsClientContextImpl() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsClientContextImpl", modifiers: " const&", def_value: None }]
constexpr TlsClientContextImpl(TlsClientContextImpl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsClientContextImpl", modifiers: "&&", def_value: None }]
constexpr TlsClientContextImpl(TlsClientContextImpl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsClientContextImpl(void* ptr) noexcept : Org::BouncyCastle::Crypto::Tls::AbstractTlsContext(ptr) {
}


  constexpr TlsClientContextImpl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsClientContextImpl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsClientContextImpl& operator=(TlsClientContextImpl&& o) noexcept = default;
  constexpr TlsClientContextImpl& operator=(TlsClientContextImpl const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_IsServer))  IsServer;


// Methods

// Ctor Parameters [CppParam { name: "secureRandom", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }, CppParam { name: "securityParameters", ty: "Org::BouncyCastle::Crypto::Tls::SecurityParameters", modifiers: "", def_value: None }]
explicit TlsClientContextImpl(Org::BouncyCastle::Security::SecureRandom secureRandom, Org::BouncyCastle::Crypto::Tls::SecurityParameters securityParameters) ;

/// @brief Method .ctor addr 0xf0e5a8 size 0x70 virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom secureRandom, Org::BouncyCastle::Crypto::Tls::SecurityParameters securityParameters) ;

/// @brief Method get_IsServer addr 0xf0e618 size 0x8 virtual true final false
 bool get_IsServer() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsClientContextImpl, "Org.BouncyCastle.Crypto.Tls", "TlsClientContextImpl");
