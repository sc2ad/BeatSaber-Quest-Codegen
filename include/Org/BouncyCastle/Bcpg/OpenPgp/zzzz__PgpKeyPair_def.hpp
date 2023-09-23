#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPrivateKey;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpKeyPair;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpKeyPair
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1646))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpKeyPair
class CORDL_TYPE PgpKeyPair : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PgpKeyPair() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpKeyPair", modifiers: " const&", def_value: None }]
constexpr PgpKeyPair(PgpKeyPair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpKeyPair", modifiers: "&&", def_value: None }]
constexpr PgpKeyPair(PgpKeyPair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpKeyPair(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PgpKeyPair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpKeyPair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpKeyPair& operator=(PgpKeyPair&& o) noexcept = default;
  constexpr PgpKeyPair& operator=(PgpKeyPair const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey __declspec(property(get=__get_pub, put=__set_pub))  pub;

constexpr void __set_pub(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey value) ;

constexpr Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey __get_pub() const;

 Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey __declspec(property(get=__get_priv, put=__set_priv))  priv;

constexpr void __set_priv(Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey value) ;

constexpr Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey __get_priv() const;


// Properties

 int64_t __declspec(property(get=get_KeyId))  KeyId;

 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey __declspec(property(get=get_PublicKey))  PublicKey;

 Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey __declspec(property(get=get_PrivateKey))  PrivateKey;


// Methods

// Ctor Parameters [CppParam { name: "algorithm", ty: "Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "keyPair", ty: "Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair", modifiers: "", def_value: None }, CppParam { name: "time", ty: "System::DateTime", modifiers: "", def_value: None }]
explicit PgpKeyPair(Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair keyPair, System::DateTime time) ;

/// @brief Method .ctor addr 0x1021664 size 0x20 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair keyPair, System::DateTime time) ;

// Ctor Parameters [CppParam { name: "algorithm", ty: "Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "pubKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }, CppParam { name: "privKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }, CppParam { name: "time", ty: "System::DateTime", modifiers: "", def_value: None }]
explicit PgpKeyPair(Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privKey, System::DateTime time) ;

/// @brief Method .ctor addr 0x1021684 size 0xd4 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privKey, System::DateTime time) ;

// Ctor Parameters [CppParam { name: "pub", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey", modifiers: "", def_value: None }, CppParam { name: "priv", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey", modifiers: "", def_value: None }]
explicit PgpKeyPair(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pub, Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey priv) ;

/// @brief Method .ctor addr 0x1021cf4 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pub, Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey priv) ;

/// @brief Method get_KeyId addr 0x1021d20 size 0x1c virtual false final false
 int64_t get_KeyId() ;

/// @brief Method get_PublicKey addr 0x1021d3c size 0x8 virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey get_PublicKey() ;

/// @brief Method get_PrivateKey addr 0x1021d44 size 0x8 virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey get_PrivateKey() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpKeyPair");
