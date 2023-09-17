#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsCredentials_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSignerCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsSignerCredentials;
}
// Type: Org.BouncyCastle.Crypto.Tls::AbstractTlsSignerCredentials
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1157))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1177))
// CS Name: Org.BouncyCastle.Crypto.Tls.AbstractTlsSignerCredentials
class CORDL_TYPE AbstractTlsSignerCredentials : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials
constexpr operator  ::Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials() const noexcept;

/// @brief Convert operator to ::Org::BouncyCastle::Crypto::Tls::TlsCredentials
constexpr operator  ::Org::BouncyCastle::Crypto::Tls::TlsCredentials() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AbstractTlsSignerCredentials() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTlsSignerCredentials", modifiers: " const&", def_value: None }]
constexpr AbstractTlsSignerCredentials(AbstractTlsSignerCredentials const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTlsSignerCredentials", modifiers: "&&", def_value: None }]
constexpr AbstractTlsSignerCredentials(AbstractTlsSignerCredentials&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbstractTlsSignerCredentials(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials(ptr) {
}


  constexpr AbstractTlsSignerCredentials& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbstractTlsSignerCredentials& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbstractTlsSignerCredentials& operator=(AbstractTlsSignerCredentials&& o) noexcept = default;
  constexpr AbstractTlsSignerCredentials& operator=(AbstractTlsSignerCredentials const& o) noexcept = default;
                


// Properties

 ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm __declspec(property(get=get_SignatureAndHashAlgorithm))  SignatureAndHashAlgorithm;


// Methods

/// @brief Method GenerateCertificateSignature addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GenerateCertificateSignature(::ArrayW<uint8_t> hash) ;

/// @brief Method get_SignatureAndHashAlgorithm addr 0xecd870 size 0x50 virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm get_SignatureAndHashAlgorithm() ;

// Ctor Parameters []
explicit AbstractTlsSignerCredentials() ;

/// @brief Method .ctor addr 0xecd8c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::AbstractTlsSignerCredentials, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsSignerCredentials");
