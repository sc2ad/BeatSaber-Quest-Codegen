#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class PublicKeyPacket;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class Rfc6637Utilities;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::Rfc6637Utilities
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1675))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.Rfc6637Utilities
class CORDL_TYPE Rfc6637Utilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Rfc6637Utilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "Rfc6637Utilities", modifiers: " const&", def_value: None }]
constexpr Rfc6637Utilities(Rfc6637Utilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Rfc6637Utilities", modifiers: "&&", def_value: None }]
constexpr Rfc6637Utilities(Rfc6637Utilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Rfc6637Utilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Rfc6637Utilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Rfc6637Utilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Rfc6637Utilities& operator=(Rfc6637Utilities&& o) noexcept = default;
  constexpr Rfc6637Utilities& operator=(Rfc6637Utilities const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_ANONYMOUS_SENDER, put=__set_ANONYMOUS_SENDER))  ANONYMOUS_SENDER;

static void __set_ANONYMOUS_SENDER(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_ANONYMOUS_SENDER() ;


// Methods

// Ctor Parameters []
explicit Rfc6637Utilities() ;

/// @brief Method .ctor addr 0x1043134 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method GetAgreementAlgorithm addr 0x104313c size 0x174 virtual false final false
static ::StringW GetAgreementAlgorithm(::Org::BouncyCastle::Bcpg::PublicKeyPacket pubKeyData) ;

/// @brief Method GetKeyEncryptionOID addr 0x10432b0 size 0x128 virtual false final false
static ::Org::BouncyCastle::Asn1::DerObjectIdentifier GetKeyEncryptionOID(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algID) ;

/// @brief Method GetKeyLength addr 0x10433d8 size 0x98 virtual false final false
static int32_t GetKeyLength(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag algID) ;

/// @brief Method CreateKey addr 0x102d984 size 0x108 virtual false final false
static ::ArrayW<uint8_t> CreateKey(::Org::BouncyCastle::Bcpg::PublicKeyPacket pubKeyData, ::Org::BouncyCastle::Math::EC::ECPoint s) ;

/// @brief Method CreateUserKeyingMaterial addr 0x1043470 size 0x268 virtual false final false
static ::ArrayW<uint8_t> CreateUserKeyingMaterial(::Org::BouncyCastle::Bcpg::PublicKeyPacket pubKeyData) ;

/// @brief Method Kdf addr 0x10436d8 size 0x37c virtual false final false
static ::ArrayW<uint8_t> Kdf(::Org::BouncyCastle::Bcpg::HashAlgorithmTag digestAlg, ::Org::BouncyCastle::Math::EC::ECPoint s, int32_t keyLen, ::ArrayW<uint8_t> parameters) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::Rfc6637Utilities, "Org.BouncyCastle.Bcpg.OpenPgp", "Rfc6637Utilities");
