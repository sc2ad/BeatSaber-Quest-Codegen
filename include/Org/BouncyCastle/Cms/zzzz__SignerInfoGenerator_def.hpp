#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerator;
}
namespace Org::BouncyCastle::Asn1::Cms {
class SignerIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class SignerInfoGenerator;
}
// Type: Org.BouncyCastle.Cms::SignerInfoGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(689))
// CS Name: Org.BouncyCastle.Cms.SignerInfoGenerator
class CORDL_TYPE SignerInfoGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~SignerInfoGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerInfoGenerator", modifiers: " const&", def_value: None }]
constexpr SignerInfoGenerator(SignerInfoGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerInfoGenerator", modifiers: "&&", def_value: None }]
constexpr SignerInfoGenerator(SignerInfoGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignerInfoGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SignerInfoGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignerInfoGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignerInfoGenerator& operator=(SignerInfoGenerator&& o) noexcept = default;
  constexpr SignerInfoGenerator& operator=(SignerInfoGenerator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::X509::X509Certificate __declspec(property(get=__get_certificate, put=__set_certificate))  certificate;

constexpr void __set_certificate(Org::BouncyCastle::X509::X509Certificate value) ;

constexpr Org::BouncyCastle::X509::X509Certificate __get_certificate() const;

 Org::BouncyCastle::Crypto::ISignatureFactory __declspec(property(get=__get_contentSigner, put=__set_contentSigner))  contentSigner;

constexpr void __set_contentSigner(Org::BouncyCastle::Crypto::ISignatureFactory value) ;

constexpr Org::BouncyCastle::Crypto::ISignatureFactory __get_contentSigner() const;

 Org::BouncyCastle::Asn1::Cms::SignerIdentifier __declspec(property(get=__get_sigId, put=__set_sigId))  sigId;

constexpr void __set_sigId(Org::BouncyCastle::Asn1::Cms::SignerIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::Cms::SignerIdentifier __get_sigId() const;

 Org::BouncyCastle::Cms::CmsAttributeTableGenerator __declspec(property(get=__get_signedGen, put=__set_signedGen))  signedGen;

constexpr void __set_signedGen(Org::BouncyCastle::Cms::CmsAttributeTableGenerator value) ;

constexpr Org::BouncyCastle::Cms::CmsAttributeTableGenerator __get_signedGen() const;

 Org::BouncyCastle::Cms::CmsAttributeTableGenerator __declspec(property(get=__get_unsignedGen, put=__set_unsignedGen))  unsignedGen;

constexpr void __set_unsignedGen(Org::BouncyCastle::Cms::CmsAttributeTableGenerator value) ;

constexpr Org::BouncyCastle::Cms::CmsAttributeTableGenerator __get_unsignedGen() const;

 bool __declspec(property(get=__get_isDirectSignature, put=__set_isDirectSignature))  isDirectSignature;

constexpr void __set_isDirectSignature(bool value) ;

constexpr bool __get_isDirectSignature() const;


// Methods

// Ctor Parameters [CppParam { name: "sigId", ty: "Org::BouncyCastle::Asn1::Cms::SignerIdentifier", modifiers: "", def_value: None }, CppParam { name: "signerFactory", ty: "Org::BouncyCastle::Crypto::ISignatureFactory", modifiers: "", def_value: None }]
explicit SignerInfoGenerator(Org::BouncyCastle::Asn1::Cms::SignerIdentifier sigId, Org::BouncyCastle::Crypto::ISignatureFactory signerFactory) ;

/// @brief Method .ctor addr 0x117da30 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::SignerIdentifier sigId, Org::BouncyCastle::Crypto::ISignatureFactory signerFactory) ;

// Ctor Parameters [CppParam { name: "sigId", ty: "Org::BouncyCastle::Asn1::Cms::SignerIdentifier", modifiers: "", def_value: None }, CppParam { name: "signerFactory", ty: "Org::BouncyCastle::Crypto::ISignatureFactory", modifiers: "", def_value: None }, CppParam { name: "isDirectSignature", ty: "bool", modifiers: "", def_value: None }]
explicit SignerInfoGenerator(Org::BouncyCastle::Asn1::Cms::SignerIdentifier sigId, Org::BouncyCastle::Crypto::ISignatureFactory signerFactory, bool isDirectSignature) ;

/// @brief Method .ctor addr 0x117da38 size 0xa0 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::SignerIdentifier sigId, Org::BouncyCastle::Crypto::ISignatureFactory signerFactory, bool isDirectSignature) ;

// Ctor Parameters [CppParam { name: "sigId", ty: "Org::BouncyCastle::Asn1::Cms::SignerIdentifier", modifiers: "", def_value: None }, CppParam { name: "contentSigner", ty: "Org::BouncyCastle::Crypto::ISignatureFactory", modifiers: "", def_value: None }, CppParam { name: "signedGen", ty: "Org::BouncyCastle::Cms::CmsAttributeTableGenerator", modifiers: "", def_value: None }, CppParam { name: "unsignedGen", ty: "Org::BouncyCastle::Cms::CmsAttributeTableGenerator", modifiers: "", def_value: None }]
explicit SignerInfoGenerator(Org::BouncyCastle::Asn1::Cms::SignerIdentifier sigId, Org::BouncyCastle::Crypto::ISignatureFactory contentSigner, Org::BouncyCastle::Cms::CmsAttributeTableGenerator signedGen, Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsignedGen) ;

/// @brief Method .ctor addr 0x117dad8 size 0x44 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::SignerIdentifier sigId, Org::BouncyCastle::Crypto::ISignatureFactory contentSigner, Org::BouncyCastle::Cms::CmsAttributeTableGenerator signedGen, Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsignedGen) ;

/// @brief Method setAssociatedCertificate addr 0x117db1c size 0x8 virtual false final false
 void setAssociatedCertificate(Org::BouncyCastle::X509::X509Certificate certificate) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::SignerInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::SignerInfoGenerator, "Org.BouncyCastle.Cms", "SignerInfoGenerator");
