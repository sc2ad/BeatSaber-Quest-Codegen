#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ECPublicBcpgKey_def.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class ECDHPublicBcpgKey;
}
// Type: Org.BouncyCastle.Bcpg::ECDHPublicBcpgKey
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(565))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(566))
// CS Name: Org.BouncyCastle.Bcpg.ECDHPublicBcpgKey
class CORDL_TYPE ECDHPublicBcpgKey : public ::Org::BouncyCastle::Bcpg::ECPublicBcpgKey {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ECDHPublicBcpgKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECDHPublicBcpgKey", modifiers: " const&", def_value: None }]
constexpr ECDHPublicBcpgKey(ECDHPublicBcpgKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECDHPublicBcpgKey", modifiers: "&&", def_value: None }]
constexpr ECDHPublicBcpgKey(ECDHPublicBcpgKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECDHPublicBcpgKey(void* ptr) noexcept : ::Org::BouncyCastle::Bcpg::ECPublicBcpgKey(ptr) {
}


  constexpr ECDHPublicBcpgKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECDHPublicBcpgKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECDHPublicBcpgKey& operator=(ECDHPublicBcpgKey&& o) noexcept = default;
  constexpr ECDHPublicBcpgKey& operator=(ECDHPublicBcpgKey const& o) noexcept = default;
                


// Fields

 uint8_t __declspec(property(get=__get_reserved, put=__set_reserved))  reserved;

constexpr void __set_reserved(uint8_t value) ;

constexpr uint8_t __get_reserved() const;

 ::Org::BouncyCastle::Bcpg::HashAlgorithmTag __declspec(property(get=__get_hashFunctionId, put=__set_hashFunctionId))  hashFunctionId;

constexpr void __set_hashFunctionId(::Org::BouncyCastle::Bcpg::HashAlgorithmTag value) ;

constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag __get_hashFunctionId() const;

 ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag __declspec(property(get=__get_symAlgorithmId, put=__set_symAlgorithmId))  symAlgorithmId;

constexpr void __set_symAlgorithmId(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag value) ;

constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag __get_symAlgorithmId() const;


// Properties

 uint8_t __declspec(property(get=get_Reserved))  Reserved;

 ::Org::BouncyCastle::Bcpg::HashAlgorithmTag __declspec(property(get=get_HashAlgorithm))  HashAlgorithm;

 ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag __declspec(property(get=get_SymmetricKeyAlgorithm))  SymmetricKeyAlgorithm;


// Methods

// Ctor Parameters [CppParam { name: "bcpgIn", ty: "::Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit ECDHPublicBcpgKey(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x1146fbc size 0x128 virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

// Ctor Parameters [CppParam { name: "oid", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "point", ty: "::Org::BouncyCastle::Math::EC::ECPoint", modifiers: "", def_value: None }, CppParam { name: "hashAlgorithm", ty: "::Org::BouncyCastle::Bcpg::HashAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "symmetricKeyAlgorithm", ty: "::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag", modifiers: "", def_value: None }]
explicit ECDHPublicBcpgKey(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::Org::BouncyCastle::Math::EC::ECPoint point, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag symmetricKeyAlgorithm) ;

/// @brief Method .ctor addr 0x11471b4 size 0x3c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::Org::BouncyCastle::Math::EC::ECPoint point, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag symmetricKeyAlgorithm) ;

/// @brief Method get_Reserved addr 0x11471f0 size 0x8 virtual true final false
 uint8_t get_Reserved() ;

/// @brief Method get_HashAlgorithm addr 0x11471f8 size 0x8 virtual true final false
 ::Org::BouncyCastle::Bcpg::HashAlgorithmTag get_HashAlgorithm() ;

/// @brief Method get_SymmetricKeyAlgorithm addr 0x1147200 size 0x8 virtual true final false
 ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag get_SymmetricKeyAlgorithm() ;

/// @brief Method Encode addr 0x1147208 size 0x84 virtual true final false
 void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

/// @brief Method VerifyHashAlgorithm addr 0x11470e4 size 0x68 virtual false final false
 void VerifyHashAlgorithm() ;

/// @brief Method VerifySymmetricKeyAlgorithm addr 0x114714c size 0x68 virtual false final false
 void VerifySymmetricKeyAlgorithm() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::ECDHPublicBcpgKey, "Org.BouncyCastle.Bcpg", "ECDHPublicBcpgKey");
