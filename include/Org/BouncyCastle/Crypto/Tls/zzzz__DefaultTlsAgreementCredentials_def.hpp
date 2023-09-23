#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsAgreementCredentials_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class Certificate;
}
namespace Org::BouncyCastle::Crypto {
class IBasicAgreement;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DefaultTlsAgreementCredentials;
}
// Type: Org.BouncyCastle.Crypto.Tls::DefaultTlsAgreementCredentials
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1159))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1208))
// CS Name: Org.BouncyCastle.Crypto.Tls.DefaultTlsAgreementCredentials
class CORDL_TYPE DefaultTlsAgreementCredentials : public Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DefaultTlsAgreementCredentials() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsAgreementCredentials", modifiers: " const&", def_value: None }]
constexpr DefaultTlsAgreementCredentials(DefaultTlsAgreementCredentials const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsAgreementCredentials", modifiers: "&&", def_value: None }]
constexpr DefaultTlsAgreementCredentials(DefaultTlsAgreementCredentials&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultTlsAgreementCredentials(void* ptr) noexcept : Org::BouncyCastle::Crypto::Tls::AbstractTlsAgreementCredentials(ptr) {
}


  constexpr DefaultTlsAgreementCredentials& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultTlsAgreementCredentials& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultTlsAgreementCredentials& operator=(DefaultTlsAgreementCredentials&& o) noexcept = default;
  constexpr DefaultTlsAgreementCredentials& operator=(DefaultTlsAgreementCredentials const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Tls::Certificate __declspec(property(get=__get_mCertificate, put=__set_mCertificate))  mCertificate;

constexpr void __set_mCertificate(Org::BouncyCastle::Crypto::Tls::Certificate value) ;

constexpr Org::BouncyCastle::Crypto::Tls::Certificate __get_mCertificate() const;

 Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=__get_mPrivateKey, put=__set_mPrivateKey))  mPrivateKey;

constexpr void __set_mPrivateKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter value) ;

constexpr Org::BouncyCastle::Crypto::AsymmetricKeyParameter __get_mPrivateKey() const;

 Org::BouncyCastle::Crypto::IBasicAgreement __declspec(property(get=__get_mBasicAgreement, put=__set_mBasicAgreement))  mBasicAgreement;

constexpr void __set_mBasicAgreement(Org::BouncyCastle::Crypto::IBasicAgreement value) ;

constexpr Org::BouncyCastle::Crypto::IBasicAgreement __get_mBasicAgreement() const;

 bool __declspec(property(get=__get_mTruncateAgreement, put=__set_mTruncateAgreement))  mTruncateAgreement;

constexpr void __set_mTruncateAgreement(bool value) ;

constexpr bool __get_mTruncateAgreement() const;


// Properties

 Org::BouncyCastle::Crypto::Tls::Certificate __declspec(property(get=get_Certificate))  Certificate;


// Methods

// Ctor Parameters [CppParam { name: "certificate", ty: "Org::BouncyCastle::Crypto::Tls::Certificate", modifiers: "", def_value: None }, CppParam { name: "privateKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }]
explicit DefaultTlsAgreementCredentials(Org::BouncyCastle::Crypto::Tls::Certificate certificate, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey) ;

/// @brief Method .ctor addr 0xed3ba0 size 0x2d4 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::Certificate certificate, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey) ;

/// @brief Method get_Certificate addr 0xed3e74 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::Tls::Certificate get_Certificate() ;

/// @brief Method GenerateAgreement addr 0xed3e7c size 0x1b0 virtual true final false
 ::ArrayW<uint8_t> GenerateAgreement(Org::BouncyCastle::Crypto::AsymmetricKeyParameter peerPublicKey) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::DefaultTlsAgreementCredentials, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsAgreementCredentials");
