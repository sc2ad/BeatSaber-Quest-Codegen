#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateRequest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAuthentication;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ServerOnlyTlsAuthentication;
}
// Type: Org.BouncyCastle.Crypto.Tls::ServerOnlyTlsAuthentication
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1270))
// CS Name: Org.BouncyCastle.Crypto.Tls.ServerOnlyTlsAuthentication
class CORDL_TYPE ServerOnlyTlsAuthentication : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication
constexpr operator  ::Org::BouncyCastle::Crypto::Tls::TlsAuthentication() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ServerOnlyTlsAuthentication() = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerOnlyTlsAuthentication", modifiers: " const&", def_value: None }]
constexpr ServerOnlyTlsAuthentication(ServerOnlyTlsAuthentication const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerOnlyTlsAuthentication", modifiers: "&&", def_value: None }]
constexpr ServerOnlyTlsAuthentication(ServerOnlyTlsAuthentication&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ServerOnlyTlsAuthentication(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ServerOnlyTlsAuthentication& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ServerOnlyTlsAuthentication& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ServerOnlyTlsAuthentication& operator=(ServerOnlyTlsAuthentication&& o) noexcept = default;
  constexpr ServerOnlyTlsAuthentication& operator=(ServerOnlyTlsAuthentication const& o) noexcept = default;
                


// Methods

/// @brief Method NotifyServerCertificate addr 0x0 size 0xffffffffffffffff virtual true final false
 void NotifyServerCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate serverCertificate) ;

/// @brief Method GetClientCredentials addr 0xf08910 size 0x8 virtual true final true
 ::Org::BouncyCastle::Crypto::Tls::TlsCredentials GetClientCredentials(::Org::BouncyCastle::Crypto::Tls::CertificateRequest certificateRequest) ;

// Ctor Parameters []
explicit ServerOnlyTlsAuthentication() ;

/// @brief Method .ctor addr 0xf08918 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ServerOnlyTlsAuthentication, "Org.BouncyCastle.Crypto.Tls", "ServerOnlyTlsAuthentication");
