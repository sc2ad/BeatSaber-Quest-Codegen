#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsEncryptionCredentials_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DefaultTlsEncryptionCredentials;
}
// Type: Org.BouncyCastle.Crypto.Tls::DefaultTlsEncryptionCredentials
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1169))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1213))
// CS Name: Org.BouncyCastle.Crypto.Tls.DefaultTlsEncryptionCredentials
class CORDL_TYPE DefaultTlsEncryptionCredentials : public ::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DefaultTlsEncryptionCredentials() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsEncryptionCredentials", modifiers: " const&", def_value: None }]
constexpr DefaultTlsEncryptionCredentials(DefaultTlsEncryptionCredentials const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsEncryptionCredentials", modifiers: "&&", def_value: None }]
constexpr DefaultTlsEncryptionCredentials(DefaultTlsEncryptionCredentials&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultTlsEncryptionCredentials(void* ptr) noexcept : ::Org::BouncyCastle::Crypto::Tls::AbstractTlsEncryptionCredentials(ptr) {
}


  constexpr DefaultTlsEncryptionCredentials& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultTlsEncryptionCredentials& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultTlsEncryptionCredentials& operator=(DefaultTlsEncryptionCredentials&& o) noexcept = default;
  constexpr DefaultTlsEncryptionCredentials& operator=(DefaultTlsEncryptionCredentials const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Crypto::Tls::TlsContext __declspec(property(get=__get_mContext, put=__set_mContext))  mContext;

constexpr void __set_mContext(::Org::BouncyCastle::Crypto::Tls::TlsContext value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsContext __get_mContext() const;

 ::Org::BouncyCastle::Crypto::Tls::Certificate __declspec(property(get=__get_mCertificate, put=__set_mCertificate))  mCertificate;

constexpr void __set_mCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate value) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::Certificate __get_mCertificate() const;

 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=__get_mPrivateKey, put=__set_mPrivateKey))  mPrivateKey;

constexpr void __set_mPrivateKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter value) ;

constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter __get_mPrivateKey() const;


// Properties

 ::Org::BouncyCastle::Crypto::Tls::Certificate __declspec(property(get=get_Certificate))  Certificate;


// Methods

// Ctor Parameters [CppParam { name: "context", ty: "::Org::BouncyCastle::Crypto::Tls::TlsContext", modifiers: "", def_value: None }, CppParam { name: "certificate", ty: "::Org::BouncyCastle::Crypto::Tls::Certificate", modifiers: "", def_value: None }, CppParam { name: "privateKey", ty: "::Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }]
explicit DefaultTlsEncryptionCredentials(::Org::BouncyCastle::Crypto::Tls::TlsContext context, ::Org::BouncyCastle::Crypto::Tls::Certificate certificate, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey) ;

/// @brief Method .ctor addr 0xed5ee0 size 0x234 virtual false final false
 void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsContext context, ::Org::BouncyCastle::Crypto::Tls::Certificate certificate, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey) ;

/// @brief Method get_Certificate addr 0xed6114 size 0x8 virtual true final false
 ::Org::BouncyCastle::Crypto::Tls::Certificate get_Certificate() ;

/// @brief Method DecryptPreMasterSecret addr 0xed611c size 0x90 virtual true final false
 ::ArrayW<uint8_t> DecryptPreMasterSecret(::ArrayW<uint8_t> encryptedPreMasterSecret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DefaultTlsEncryptionCredentials, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsEncryptionCredentials");
