#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsCredentials_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAgreementCredentials;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsAgreementCredentials;
}
// Type: Org.BouncyCastle.Crypto.Tls::AbstractTlsAgreementCredentials
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1157))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1159))
// CS Name: Org.BouncyCastle.Crypto.Tls.AbstractTlsAgreementCredentials
class CORDL_TYPE AbstractTlsAgreementCredentials : public Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsAgreementCredentials() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCredentials
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsCredentials() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AbstractTlsAgreementCredentials() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTlsAgreementCredentials", modifiers: " const&", def_value: None }]
constexpr AbstractTlsAgreementCredentials(AbstractTlsAgreementCredentials const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTlsAgreementCredentials", modifiers: "&&", def_value: None }]
constexpr AbstractTlsAgreementCredentials(AbstractTlsAgreementCredentials&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbstractTlsAgreementCredentials(void* ptr) noexcept : Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials(ptr) {
}


  constexpr AbstractTlsAgreementCredentials& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbstractTlsAgreementCredentials& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbstractTlsAgreementCredentials& operator=(AbstractTlsAgreementCredentials&& o) noexcept = default;
  constexpr AbstractTlsAgreementCredentials& operator=(AbstractTlsAgreementCredentials const& o) noexcept = default;
                


// Methods

/// @brief Method GenerateAgreement addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GenerateAgreement(Org::BouncyCastle::Crypto::AsymmetricKeyParameter peerPublicKey) ;

// Ctor Parameters []
explicit AbstractTlsAgreementCredentials() ;

/// @brief Method .ctor addr 0xecb1a0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsAgreementCredentials");
