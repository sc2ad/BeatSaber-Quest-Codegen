#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class PrivateKeyInfo;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::PrivateKeyInfo
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(246))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.PrivateKeyInfo
class CORDL_TYPE PrivateKeyInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~PrivateKeyInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrivateKeyInfo", modifiers: " const&", def_value: None }]
constexpr PrivateKeyInfo(PrivateKeyInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrivateKeyInfo", modifiers: "&&", def_value: None }]
constexpr PrivateKeyInfo(PrivateKeyInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrivateKeyInfo(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PrivateKeyInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrivateKeyInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrivateKeyInfo& operator=(PrivateKeyInfo&& o) noexcept = default;
  constexpr PrivateKeyInfo& operator=(PrivateKeyInfo const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_privateKeyAlgorithm, put=__set_privateKeyAlgorithm))  privateKeyAlgorithm;

constexpr void __set_privateKeyAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_privateKeyAlgorithm() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_privateKey, put=__set_privateKey))  privateKey;

constexpr void __set_privateKey(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_privateKey() const;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_attributes, put=__set_attributes))  attributes;

constexpr void __set_attributes(Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Set __get_attributes() const;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_publicKey, put=__set_publicKey))  publicKey;

constexpr void __set_publicKey(Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr Org::BouncyCastle::Asn1::DerBitString __get_publicKey() const;


// Properties

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_Attributes))  Attributes;

 bool __declspec(property(get=get_HasPublicKey))  HasPublicKey;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_PrivateKeyAlgorithm))  PrivateKeyAlgorithm;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_PrivateKeyData))  PrivateKeyData;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=get_PublicKeyData))  PublicKeyData;


// Methods

/// @brief Method GetInstance addr 0xefebb4 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xefebcc size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetVersionValue addr 0xefef94 size 0x124 virtual false final false
static int32_t GetVersionValue(Org::BouncyCastle::Asn1::DerInteger version) ;

// Ctor Parameters [CppParam { name: "privateKeyAlgorithm", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "privateKey", ty: "Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit PrivateKeyInfo(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier privateKeyAlgorithm, Org::BouncyCastle::Asn1::Asn1Encodable privateKey) ;

/// @brief Method .ctor addr 0xeff0b8 size 0xc virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier privateKeyAlgorithm, Org::BouncyCastle::Asn1::Asn1Encodable privateKey) ;

// Ctor Parameters [CppParam { name: "privateKeyAlgorithm", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "privateKey", ty: "Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }, CppParam { name: "attributes", ty: "Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }]
explicit PrivateKeyInfo(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier privateKeyAlgorithm, Org::BouncyCastle::Asn1::Asn1Encodable privateKey, Org::BouncyCastle::Asn1::Asn1Set attributes) ;

/// @brief Method .ctor addr 0xeff214 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier privateKeyAlgorithm, Org::BouncyCastle::Asn1::Asn1Encodable privateKey, Org::BouncyCastle::Asn1::Asn1Set attributes) ;

// Ctor Parameters [CppParam { name: "privateKeyAlgorithm", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "privateKey", ty: "Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }, CppParam { name: "attributes", ty: "Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }, CppParam { name: "publicKey", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit PrivateKeyInfo(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier privateKeyAlgorithm, Org::BouncyCastle::Asn1::Asn1Encodable privateKey, Org::BouncyCastle::Asn1::Asn1Set attributes, ::ArrayW<uint8_t> publicKey) ;

/// @brief Method .ctor addr 0xeff0c4 size 0x150 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier privateKeyAlgorithm, Org::BouncyCastle::Asn1::Asn1Encodable privateKey, Org::BouncyCastle::Asn1::Asn1Set attributes, ::ArrayW<uint8_t> publicKey) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit PrivateKeyInfo(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xefec70 size 0x324 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_Version addr 0xeff21c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method get_Attributes addr 0xeff224 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Set get_Attributes() ;

/// @brief Method get_HasPublicKey addr 0xeff22c size 0x10 virtual true final false
 bool get_HasPublicKey() ;

/// @brief Method get_PrivateKeyAlgorithm addr 0xeff23c size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_PrivateKeyAlgorithm() ;

/// @brief Method get_PrivateKeyData addr 0xeff244 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1OctetString get_PrivateKeyData() ;

/// @brief Method ParsePrivateKey addr 0xeff24c size 0x28 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ParsePrivateKey() ;

/// @brief Method ParsePublicKey addr 0xeff274 size 0x2c virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ParsePublicKey() ;

/// @brief Method get_PublicKeyData addr 0xeff2a0 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerBitString get_PublicKeyData() ;

/// @brief Method ToAsn1Object addr 0xeff2a8 size 0x184 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo, "Org.BouncyCastle.Asn1.Pkcs", "PrivateKeyInfo");
