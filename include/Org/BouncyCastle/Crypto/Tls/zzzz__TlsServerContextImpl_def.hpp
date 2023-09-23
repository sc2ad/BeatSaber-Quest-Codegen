#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsContext_def.hpp"
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Tls {
class SecurityParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServerContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsServerContextImpl;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsServerContextImpl
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1167))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1322))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsServerContextImpl
class CORDL_TYPE TlsServerContextImpl : public Org::BouncyCastle::Crypto::Tls::AbstractTlsContext {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsServerContext
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsServerContext() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsContext
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsContext() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~TlsServerContextImpl() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsServerContextImpl", modifiers: " const&", def_value: None }]
constexpr TlsServerContextImpl(TlsServerContextImpl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsServerContextImpl", modifiers: "&&", def_value: None }]
constexpr TlsServerContextImpl(TlsServerContextImpl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsServerContextImpl(void* ptr) noexcept : Org::BouncyCastle::Crypto::Tls::AbstractTlsContext(ptr) {
}


  constexpr TlsServerContextImpl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsServerContextImpl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsServerContextImpl& operator=(TlsServerContextImpl&& o) noexcept = default;
  constexpr TlsServerContextImpl& operator=(TlsServerContextImpl const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_IsServer))  IsServer;


// Methods

// Ctor Parameters [CppParam { name: "secureRandom", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }, CppParam { name: "securityParameters", ty: "Org::BouncyCastle::Crypto::Tls::SecurityParameters", modifiers: "", def_value: None }]
explicit TlsServerContextImpl(Org::BouncyCastle::Security::SecureRandom secureRandom, Org::BouncyCastle::Crypto::Tls::SecurityParameters securityParameters) ;

/// @brief Method .ctor addr 0xf2562c size 0x70 virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom secureRandom, Org::BouncyCastle::Crypto::Tls::SecurityParameters securityParameters) ;

/// @brief Method get_IsServer addr 0xf2569c size 0x8 virtual true final false
 bool get_IsServer() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl, "Org.BouncyCastle.Crypto.Tls", "TlsServerContextImpl");
