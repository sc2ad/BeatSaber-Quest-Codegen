#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::CryptoPro {
class Gost3410PublicKeyAlgParameters;
}
// Type: Org.BouncyCastle.Asn1.CryptoPro::Gost3410PublicKeyAlgParameters
namespace Org::BouncyCastle::Asn1::CryptoPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(131))
// CS Name: Org.BouncyCastle.Asn1.CryptoPro.Gost3410PublicKeyAlgParameters
class CORDL_TYPE Gost3410PublicKeyAlgParameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Gost3410PublicKeyAlgParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410PublicKeyAlgParameters", modifiers: " const&", def_value: None }]
constexpr Gost3410PublicKeyAlgParameters(Gost3410PublicKeyAlgParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410PublicKeyAlgParameters", modifiers: "&&", def_value: None }]
constexpr Gost3410PublicKeyAlgParameters(Gost3410PublicKeyAlgParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Gost3410PublicKeyAlgParameters(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr Gost3410PublicKeyAlgParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Gost3410PublicKeyAlgParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Gost3410PublicKeyAlgParameters& operator=(Gost3410PublicKeyAlgParameters&& o) noexcept = default;
  constexpr Gost3410PublicKeyAlgParameters& operator=(Gost3410PublicKeyAlgParameters const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_publicKeyParamSet, put=__set_publicKeyParamSet))  publicKeyParamSet;

constexpr void __set_publicKeyParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_publicKeyParamSet() const;

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_digestParamSet, put=__set_digestParamSet))  digestParamSet;

constexpr void __set_digestParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_digestParamSet() const;

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_encryptionParamSet, put=__set_encryptionParamSet))  encryptionParamSet;

constexpr void __set_encryptionParamSet(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_encryptionParamSet() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_PublicKeyParamSet))  PublicKeyParamSet;

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_DigestParamSet))  DigestParamSet;

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_EncryptionParamSet))  EncryptionParamSet;


// Methods

/// @brief Method GetInstance addr 0xdffcec size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xdffd04 size 0xa4 virtual false final false
static ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "publicKeyParamSet", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "digestParamSet", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
explicit Gost3410PublicKeyAlgParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet, ::Org::BouncyCastle::Asn1::DerObjectIdentifier digestParamSet) ;

/// @brief Method .ctor addr 0xdfff6c size 0x8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet, ::Org::BouncyCastle::Asn1::DerObjectIdentifier digestParamSet) ;

// Ctor Parameters [CppParam { name: "publicKeyParamSet", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "digestParamSet", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "encryptionParamSet", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
explicit Gost3410PublicKeyAlgParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet, ::Org::BouncyCastle::Asn1::DerObjectIdentifier digestParamSet, ::Org::BouncyCastle::Asn1::DerObjectIdentifier encryptionParamSet) ;

/// @brief Method .ctor addr 0xdfff74 size 0xb4 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier publicKeyParamSet, ::Org::BouncyCastle::Asn1::DerObjectIdentifier digestParamSet, ::Org::BouncyCastle::Asn1::DerObjectIdentifier encryptionParamSet) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit Gost3410PublicKeyAlgParameters(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdffda8 size 0x1c4 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_PublicKeyParamSet addr 0xe00028 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier get_PublicKeyParamSet() ;

/// @brief Method get_DigestParamSet addr 0xe00030 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier get_DigestParamSet() ;

/// @brief Method get_EncryptionParamSet addr 0xe00038 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier get_EncryptionParamSet() ;

/// @brief Method ToAsn1Object addr 0xe00040 size 0x174 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::CryptoPro
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters, "Org.BouncyCastle.Asn1.CryptoPro", "Gost3410PublicKeyAlgParameters");
