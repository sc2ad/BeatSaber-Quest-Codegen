#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Bcpg {
class PublicKeyPacket;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPrivateKey;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpPrivateKey
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1658))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpPrivateKey
class CORDL_TYPE PgpPrivateKey : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PgpPrivateKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpPrivateKey", modifiers: " const&", def_value: None }]
constexpr PgpPrivateKey(PgpPrivateKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpPrivateKey", modifiers: "&&", def_value: None }]
constexpr PgpPrivateKey(PgpPrivateKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpPrivateKey(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PgpPrivateKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpPrivateKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpPrivateKey& operator=(PgpPrivateKey&& o) noexcept = default;
  constexpr PgpPrivateKey& operator=(PgpPrivateKey const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get_keyID, put=__set_keyID))  keyID;

constexpr void __set_keyID(int64_t value) ;

constexpr int64_t __get_keyID() const;

 ::Org::BouncyCastle::Bcpg::PublicKeyPacket __declspec(property(get=__get_publicKeyPacket, put=__set_publicKeyPacket))  publicKeyPacket;

constexpr void __set_publicKeyPacket(::Org::BouncyCastle::Bcpg::PublicKeyPacket value) ;

constexpr ::Org::BouncyCastle::Bcpg::PublicKeyPacket __get_publicKeyPacket() const;

 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=__get_privateKey, put=__set_privateKey))  privateKey;

constexpr void __set_privateKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter value) ;

constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter __get_privateKey() const;


// Properties

 int64_t __declspec(property(get=get_KeyId))  KeyId;

 ::Org::BouncyCastle::Bcpg::PublicKeyPacket __declspec(property(get=get_PublicKeyPacket))  PublicKeyPacket;

 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter __declspec(property(get=get_Key))  Key;


// Methods

// Ctor Parameters [CppParam { name: "keyID", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "publicKeyPacket", ty: "::Org::BouncyCastle::Bcpg::PublicKeyPacket", modifiers: "", def_value: None }, CppParam { name: "privateKey", ty: "::Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }]
explicit PgpPrivateKey(int64_t keyID, ::Org::BouncyCastle::Bcpg::PublicKeyPacket publicKeyPacket, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey) ;

/// @brief Method .ctor addr 0x1021c48 size 0xac virtual false final false
 void _ctor(int64_t keyID, ::Org::BouncyCastle::Bcpg::PublicKeyPacket publicKeyPacket, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey) ;

/// @brief Method get_KeyId addr 0x1026c78 size 0x8 virtual false final false
 int64_t get_KeyId() ;

/// @brief Method get_PublicKeyPacket addr 0x1026c80 size 0x8 virtual false final false
 ::Org::BouncyCastle::Bcpg::PublicKeyPacket get_PublicKeyPacket() ;

/// @brief Method get_Key addr 0x1026c88 size 0x8 virtual false final false
 ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter get_Key() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpPrivateKey");
