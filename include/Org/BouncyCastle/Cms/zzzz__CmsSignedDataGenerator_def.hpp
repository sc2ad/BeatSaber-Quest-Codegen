#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Cms/zzzz__CmsSignedGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Cms {
class CmsSignedData;
}
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerator;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedHelper;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
namespace Org::BouncyCastle::Cms {
class SignerInfoGenerator;
}
namespace Org::BouncyCastle::Cms {
class SignerInformationStore;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Asn1::Cms {
class SignerIdentifier;
}
namespace Org::BouncyCastle::Cms {
class SignerInformation;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::Cms {
class SignerInfo;
}
namespace Org::BouncyCastle::Cms {
class CmsSignedGenerator;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsSignedDataGenerator;
}
namespace Org::BouncyCastle::Cms {
class ____Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf;
}
// Type: ::SignerInf
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(650))
// CS Name: Org.BouncyCastle.Cms.CmsSignedDataGenerator::SignerInf
class CORDL_TYPE ____Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~____Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf", modifiers: " const&", def_value: None }]
constexpr ____Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf(____Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf", modifiers: "&&", def_value: None }]
constexpr ____Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf(____Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf& operator=(____Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf&& o) noexcept = default;
  constexpr ____Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf& operator=(____Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Cms::CmsSignedGenerator __declspec(property(get=__get_outer, put=__set_outer))  outer;

constexpr void __set_outer(::Org::BouncyCastle::Cms::CmsSignedGenerator value) ;

constexpr ::Org::BouncyCastle::Cms::CmsSignedGenerator __get_outer() const;

 ::Org::BouncyCastle::Crypto::ISignatureFactory __declspec(property(get=__get_sigCalc, put=__set_sigCalc))  sigCalc;

constexpr void __set_sigCalc(::Org::BouncyCastle::Crypto::ISignatureFactory value) ;

constexpr ::Org::BouncyCastle::Crypto::ISignatureFactory __get_sigCalc() const;

 ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier __declspec(property(get=__get_signerIdentifier, put=__set_signerIdentifier))  signerIdentifier;

constexpr void __set_signerIdentifier(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier __get_signerIdentifier() const;

 ::StringW __declspec(property(get=__get_digestOID, put=__set_digestOID))  digestOID;

constexpr void __set_digestOID(::StringW value) ;

constexpr ::StringW __get_digestOID() const;

 ::StringW __declspec(property(get=__get_encOID, put=__set_encOID))  encOID;

constexpr void __set_encOID(::StringW value) ;

constexpr ::StringW __get_encOID() const;

 ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator __declspec(property(get=__get_sAttr, put=__set_sAttr))  sAttr;

constexpr void __set_sAttr(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator value) ;

constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator __get_sAttr() const;

 ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator __declspec(property(get=__get_unsAttr, put=__set_unsAttr))  unsAttr;

constexpr void __set_unsAttr(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator value) ;

constexpr ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator __get_unsAttr() const;

 ::Org::BouncyCastle::Asn1::Cms::AttributeTable __declspec(property(get=__get_baseSignedTable, put=__set_baseSignedTable))  baseSignedTable;

constexpr void __set_baseSignedTable(::Org::BouncyCastle::Asn1::Cms::AttributeTable value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::AttributeTable __get_baseSignedTable() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_DigestAlgorithmID))  DigestAlgorithmID;

 ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator __declspec(property(get=get_SignedAttributes))  SignedAttributes;

 ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator __declspec(property(get=get_UnsignedAttributes))  UnsignedAttributes;


// Methods

// Ctor Parameters [CppParam { name: "outer", ty: "::Org::BouncyCastle::Cms::CmsSignedGenerator", modifiers: "", def_value: None }, CppParam { name: "key", ty: "::Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }, CppParam { name: "signerIdentifier", ty: "::Org::BouncyCastle::Asn1::Cms::SignerIdentifier", modifiers: "", def_value: None }, CppParam { name: "digestOID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "encOID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sAttr", ty: "::Org::BouncyCastle::Cms::CmsAttributeTableGenerator", modifiers: "", def_value: None }, CppParam { name: "unsAttr", ty: "::Org::BouncyCastle::Cms::CmsAttributeTableGenerator", modifiers: "", def_value: None }, CppParam { name: "baseSignedTable", ty: "::Org::BouncyCastle::Asn1::Cms::AttributeTable", modifiers: "", def_value: None }]
explicit ____Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf(::Org::BouncyCastle::Cms::CmsSignedGenerator outer, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter key, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier signerIdentifier, ::StringW digestOID, ::StringW encOID, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator sAttr, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable baseSignedTable) ;

/// @brief Method .ctor addr 0x115fde0 size 0x14c virtual false final false
 void _ctor(::Org::BouncyCastle::Cms::CmsSignedGenerator outer, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter key, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier signerIdentifier, ::StringW digestOID, ::StringW encOID, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator sAttr, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable baseSignedTable) ;

// Ctor Parameters [CppParam { name: "outer", ty: "::Org::BouncyCastle::Cms::CmsSignedGenerator", modifiers: "", def_value: None }, CppParam { name: "sigCalc", ty: "::Org::BouncyCastle::Crypto::ISignatureFactory", modifiers: "", def_value: None }, CppParam { name: "signerIdentifier", ty: "::Org::BouncyCastle::Asn1::Cms::SignerIdentifier", modifiers: "", def_value: None }, CppParam { name: "sAttr", ty: "::Org::BouncyCastle::Cms::CmsAttributeTableGenerator", modifiers: "", def_value: None }, CppParam { name: "unsAttr", ty: "::Org::BouncyCastle::Cms::CmsAttributeTableGenerator", modifiers: "", def_value: None }, CppParam { name: "baseSignedTable", ty: "::Org::BouncyCastle::Asn1::Cms::AttributeTable", modifiers: "", def_value: None }]
explicit ____Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf(::Org::BouncyCastle::Cms::CmsSignedGenerator outer, ::Org::BouncyCastle::Crypto::ISignatureFactory sigCalc, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier signerIdentifier, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator sAttr, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable baseSignedTable) ;

/// @brief Method .ctor addr 0x115fba0 size 0x240 virtual false final false
 void _ctor(::Org::BouncyCastle::Cms::CmsSignedGenerator outer, ::Org::BouncyCastle::Crypto::ISignatureFactory sigCalc, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier signerIdentifier, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator sAttr, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable baseSignedTable) ;

/// @brief Method get_DigestAlgorithmID addr 0x1160e24 size 0xd4 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_DigestAlgorithmID() ;

/// @brief Method get_SignedAttributes addr 0x11623d8 size 0x8 virtual false final false
 ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator get_SignedAttributes() ;

/// @brief Method get_UnsignedAttributes addr 0x11623e0 size 0x8 virtual false final false
 ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator get_UnsignedAttributes() ;

/// @brief Method ToSignerInfo addr 0x1160ef8 size 0xb58 virtual false final false
 ::Org::BouncyCastle::Asn1::Cms::SignerInfo ToSignerInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier contentType, ::Org::BouncyCastle::Cms::CmsProcessable content, ::Org::BouncyCastle::Security::SecureRandom random) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
// Type: Org.BouncyCastle.Cms::CmsSignedDataGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(649))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(651))
// CS Name: Org.BouncyCastle.Cms.CmsSignedDataGenerator
class CORDL_TYPE CmsSignedDataGenerator : public ::Org::BouncyCastle::Cms::CmsSignedGenerator {
public:
// Declarations
using SignerInf = ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~CmsSignedDataGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsSignedDataGenerator", modifiers: " const&", def_value: None }]
constexpr CmsSignedDataGenerator(CmsSignedDataGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsSignedDataGenerator", modifiers: "&&", def_value: None }]
constexpr CmsSignedDataGenerator(CmsSignedDataGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsSignedDataGenerator(void* ptr) noexcept : ::Org::BouncyCastle::Cms::CmsSignedGenerator(ptr) {
}


  constexpr CmsSignedDataGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsSignedDataGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsSignedDataGenerator& operator=(CmsSignedDataGenerator&& o) noexcept = default;
  constexpr CmsSignedDataGenerator& operator=(CmsSignedDataGenerator const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Cms::CmsSignedHelper __declspec(property(get=__get_Helper, put=__set_Helper))  Helper;

static void __set_Helper(::Org::BouncyCastle::Cms::CmsSignedHelper value) ;

static ::Org::BouncyCastle::Cms::CmsSignedHelper __get_Helper() ;

 ::System::Collections::IList __declspec(property(get=__get_signerInfs, put=__set_signerInfs))  signerInfs;

constexpr void __set_signerInfs(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get_signerInfs() const;


// Methods

// Ctor Parameters []
explicit CmsSignedDataGenerator() ;

/// @brief Method .ctor addr 0x115e914 size 0x84 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "rand", ty: "::Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit CmsSignedDataGenerator(::Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x115e998 size 0x94 virtual false final false
 void _ctor(::Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method AddSigner addr 0x115ea2c size 0xa0 virtual false final false
 void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::Org::BouncyCastle::X509::X509Certificate cert, ::StringW digestOID) ;

/// @brief Method AddSigner addr 0x115efac size 0xd8 virtual false final false
 void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::Org::BouncyCastle::X509::X509Certificate cert, ::StringW encryptionOID, ::StringW digestOID) ;

/// @brief Method AddSigner addr 0x115f220 size 0xa0 virtual false final false
 void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW digestOID) ;

/// @brief Method AddSigner addr 0x115f2c0 size 0xd8 virtual false final false
 void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW encryptionOID, ::StringW digestOID) ;

/// @brief Method AddSigner addr 0x115f398 size 0xb8 virtual false final false
 void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::Org::BouncyCastle::X509::X509Certificate cert, ::StringW digestOID, ::Org::BouncyCastle::Asn1::Cms::AttributeTable signedAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable unsignedAttr) ;

/// @brief Method AddSigner addr 0x115f450 size 0x11c virtual false final false
 void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::Org::BouncyCastle::X509::X509Certificate cert, ::StringW encryptionOID, ::StringW digestOID, ::Org::BouncyCastle::Asn1::Cms::AttributeTable signedAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable unsignedAttr) ;

/// @brief Method AddSigner addr 0x115f5ec size 0xb8 virtual false final false
 void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW digestOID, ::Org::BouncyCastle::Asn1::Cms::AttributeTable signedAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable unsignedAttr) ;

/// @brief Method AddSigner addr 0x115f6a4 size 0x11c virtual false final false
 void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW encryptionOID, ::StringW digestOID, ::Org::BouncyCastle::Asn1::Cms::AttributeTable signedAttr, ::Org::BouncyCastle::Asn1::Cms::AttributeTable unsignedAttr) ;

/// @brief Method AddSigner addr 0x115f7c0 size 0xb8 virtual false final false
 void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::Org::BouncyCastle::X509::X509Certificate cert, ::StringW digestOID, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator signedAttrGen, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsignedAttrGen) ;

/// @brief Method AddSigner addr 0x115f878 size 0xb4 virtual false final false
 void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::Org::BouncyCastle::X509::X509Certificate cert, ::StringW encryptionOID, ::StringW digestOID, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator signedAttrGen, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsignedAttrGen) ;

/// @brief Method AddSigner addr 0x115f92c size 0xb8 virtual false final false
 void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW digestOID, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator signedAttrGen, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsignedAttrGen) ;

/// @brief Method AddSigner addr 0x115f9e4 size 0xb4 virtual false final false
 void AddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> subjectKeyID, ::StringW encryptionOID, ::StringW digestOID, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator signedAttrGen, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsignedAttrGen) ;

/// @brief Method AddSignerInfoGenerator addr 0x115fa98 size 0x108 virtual false final false
 void AddSignerInfoGenerator(::Org::BouncyCastle::Cms::SignerInfoGenerator signerInfoGenerator) ;

/// @brief Method doAddSigner addr 0x115f0ec size 0x134 virtual false final false
 void doAddSigner(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier signerIdentifier, ::StringW encryptionOID, ::StringW digestOID, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator signedAttrGen, ::Org::BouncyCastle::Cms::CmsAttributeTableGenerator unsignedAttrGen, ::Org::BouncyCastle::Asn1::Cms::AttributeTable baseSignedTable) ;

/// @brief Method Generate addr 0x115ff2c size 0x8 virtual false final false
 ::Org::BouncyCastle::Cms::CmsSignedData Generate(::Org::BouncyCastle::Cms::CmsProcessable content) ;

/// @brief Method Generate addr 0x115ffac size 0xe78 virtual false final false
 ::Org::BouncyCastle::Cms::CmsSignedData Generate(::StringW signedContentType, ::Org::BouncyCastle::Cms::CmsProcessable content, bool encapsulate) ;

/// @brief Method Generate addr 0x115ff34 size 0x78 virtual false final false
 ::Org::BouncyCastle::Cms::CmsSignedData Generate(::Org::BouncyCastle::Cms::CmsProcessable content, bool encapsulate) ;

/// @brief Method GenerateCounterSigners addr 0x1161de0 size 0x8c virtual false final false
 ::Org::BouncyCastle::Cms::SignerInformationStore GenerateCounterSigners(::Org::BouncyCastle::Cms::SignerInformation signer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsSignedDataGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsSignedDataGenerator, "Org.BouncyCastle.Cms", "CmsSignedDataGenerator");
NEED_NO_BOX(::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsSignedDataGenerator__SignerInf, "Org.BouncyCastle.Cms", "CmsSignedDataGenerator/SignerInf");
