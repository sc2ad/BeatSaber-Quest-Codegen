#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_def.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class OnePassSignaturePacket;
}
// Type: Org.BouncyCastle.Bcpg::OnePassSignaturePacket
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(577))
// CS Name: Org.BouncyCastle.Bcpg.OnePassSignaturePacket
class CORDL_TYPE OnePassSignaturePacket : public ::Org::BouncyCastle::Bcpg::ContainedPacket {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~OnePassSignaturePacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "OnePassSignaturePacket", modifiers: " const&", def_value: None }]
constexpr OnePassSignaturePacket(OnePassSignaturePacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OnePassSignaturePacket", modifiers: "&&", def_value: None }]
constexpr OnePassSignaturePacket(OnePassSignaturePacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OnePassSignaturePacket(void* ptr) noexcept : ::Org::BouncyCastle::Bcpg::ContainedPacket(ptr) {
}


  constexpr OnePassSignaturePacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OnePassSignaturePacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OnePassSignaturePacket& operator=(OnePassSignaturePacket&& o) noexcept = default;
  constexpr OnePassSignaturePacket& operator=(OnePassSignaturePacket const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(int32_t value) ;

constexpr int32_t __get_version() const;

 int32_t __declspec(property(get=__get_sigType, put=__set_sigType))  sigType;

constexpr void __set_sigType(int32_t value) ;

constexpr int32_t __get_sigType() const;

 ::Org::BouncyCastle::Bcpg::HashAlgorithmTag __declspec(property(get=__get_hashAlgorithm, put=__set_hashAlgorithm))  hashAlgorithm;

constexpr void __set_hashAlgorithm(::Org::BouncyCastle::Bcpg::HashAlgorithmTag value) ;

constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag __get_hashAlgorithm() const;

 ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag __declspec(property(get=__get_keyAlgorithm, put=__set_keyAlgorithm))  keyAlgorithm;

constexpr void __set_keyAlgorithm(::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag value) ;

constexpr ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag __get_keyAlgorithm() const;

 int64_t __declspec(property(get=__get_keyId, put=__set_keyId))  keyId;

constexpr void __set_keyId(int64_t value) ;

constexpr int64_t __get_keyId() const;

 int32_t __declspec(property(get=__get_nested, put=__set_nested))  nested;

constexpr void __set_nested(int32_t value) ;

constexpr int32_t __get_nested() const;


// Properties

 int32_t __declspec(property(get=get_SignatureType))  SignatureType;

 ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag __declspec(property(get=get_KeyAlgorithm))  KeyAlgorithm;

 ::Org::BouncyCastle::Bcpg::HashAlgorithmTag __declspec(property(get=get_HashAlgorithm))  HashAlgorithm;

 int64_t __declspec(property(get=get_KeyId))  KeyId;


// Methods

// Ctor Parameters [CppParam { name: "bcpgIn", ty: "::Org::BouncyCastle::Bcpg::BcpgInputStream", modifiers: "", def_value: None }]
explicit OnePassSignaturePacket(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method .ctor addr 0x11442c8 size 0x198 virtual false final false
 void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

// Ctor Parameters [CppParam { name: "sigType", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "hashAlgorithm", ty: "::Org::BouncyCastle::Bcpg::HashAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "keyAlgorithm", ty: "::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "keyId", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "isNested", ty: "bool", modifiers: "", def_value: None }]
explicit OnePassSignaturePacket(int32_t sigType, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, int64_t keyId, bool isNested) ;

/// @brief Method .ctor addr 0x1147dfc size 0x68 virtual false final false
 void _ctor(int32_t sigType, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, int64_t keyId, bool isNested) ;

/// @brief Method get_SignatureType addr 0x1147e64 size 0x8 virtual false final false
 int32_t get_SignatureType() ;

/// @brief Method get_KeyAlgorithm addr 0x1147e6c size 0x8 virtual false final false
 ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag get_KeyAlgorithm() ;

/// @brief Method get_HashAlgorithm addr 0x1147e74 size 0x8 virtual false final false
 ::Org::BouncyCastle::Bcpg::HashAlgorithmTag get_HashAlgorithm() ;

/// @brief Method get_KeyId addr 0x1147e7c size 0x8 virtual false final false
 int64_t get_KeyId() ;

/// @brief Method Encode addr 0x1147e84 size 0x16c virtual true final false
 void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream bcpgOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OnePassSignaturePacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OnePassSignaturePacket, "Org.BouncyCastle.Bcpg", "OnePassSignaturePacket");
