#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsCredentials_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class TlsEncryptionCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AbstractTlsEncryptionCredentials;
}
// Type: Org.BouncyCastle.Crypto.Tls::AbstractTlsEncryptionCredentials
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1157))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1169))
// CS Name: Org.BouncyCastle.Crypto.Tls.AbstractTlsEncryptionCredentials
class CORDL_TYPE AbstractTlsEncryptionCredentials : public Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsEncryptionCredentials() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsCredentials
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsCredentials() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AbstractTlsEncryptionCredentials() = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTlsEncryptionCredentials", modifiers: " const&", def_value: None }]
constexpr AbstractTlsEncryptionCredentials(AbstractTlsEncryptionCredentials const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AbstractTlsEncryptionCredentials", modifiers: "&&", def_value: None }]
constexpr AbstractTlsEncryptionCredentials(AbstractTlsEncryptionCredentials&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AbstractTlsEncryptionCredentials(void* ptr) noexcept : Org::BouncyCastle::Crypto::Tls::AbstractTlsCredentials(ptr) {
}


  constexpr AbstractTlsEncryptionCredentials& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AbstractTlsEncryptionCredentials& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AbstractTlsEncryptionCredentials& operator=(AbstractTlsEncryptionCredentials&& o) noexcept = default;
  constexpr AbstractTlsEncryptionCredentials& operator=(AbstractTlsEncryptionCredentials const& o) noexcept = default;
                


// Methods

/// @brief Method DecryptPreMasterSecret addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> DecryptPreMasterSecret(::ArrayW<uint8_t> encryptedPreMasterSecret) ;

static Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials New_ctor() ;

/// @brief Method .ctor addr 0xecc3f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials, "Org.BouncyCastle.Crypto.Tls", "AbstractTlsEncryptionCredentials");
