#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Cms {
class SignerInformation;
}
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::Cms {
class SignerIdentifier;
}
namespace Org::BouncyCastle::Cms {
class SignerInformationStore;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsSignedGenerator;
}
// Type: Org.BouncyCastle.Cms::CmsSignedGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(649))
// CS Name: Org.BouncyCastle.Cms.CmsSignedGenerator
class CORDL_TYPE CmsSignedGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~CmsSignedGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsSignedGenerator", modifiers: " const&", def_value: None }]
constexpr CmsSignedGenerator(CmsSignedGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsSignedGenerator", modifiers: "&&", def_value: None }]
constexpr CmsSignedGenerator(CmsSignedGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsSignedGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CmsSignedGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsSignedGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsSignedGenerator& operator=(CmsSignedGenerator&& o) noexcept = default;
  constexpr CmsSignedGenerator& operator=(CmsSignedGenerator const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_Data, put=__set_Data))  Data;

static void __set_Data(::StringW value) ;

static ::StringW __get_Data() ;

static ::StringW __declspec(property(get=__get_DigestSha1, put=__set_DigestSha1))  DigestSha1;

static void __set_DigestSha1(::StringW value) ;

static ::StringW __get_DigestSha1() ;

static ::StringW __declspec(property(get=__get_DigestSha224, put=__set_DigestSha224))  DigestSha224;

static void __set_DigestSha224(::StringW value) ;

static ::StringW __get_DigestSha224() ;

static ::StringW __declspec(property(get=__get_DigestSha256, put=__set_DigestSha256))  DigestSha256;

static void __set_DigestSha256(::StringW value) ;

static ::StringW __get_DigestSha256() ;

static ::StringW __declspec(property(get=__get_DigestSha384, put=__set_DigestSha384))  DigestSha384;

static void __set_DigestSha384(::StringW value) ;

static ::StringW __get_DigestSha384() ;

static ::StringW __declspec(property(get=__get_DigestSha512, put=__set_DigestSha512))  DigestSha512;

static void __set_DigestSha512(::StringW value) ;

static ::StringW __get_DigestSha512() ;

static ::StringW __declspec(property(get=__get_DigestMD5, put=__set_DigestMD5))  DigestMD5;

static void __set_DigestMD5(::StringW value) ;

static ::StringW __get_DigestMD5() ;

static ::StringW __declspec(property(get=__get_DigestGost3411, put=__set_DigestGost3411))  DigestGost3411;

static void __set_DigestGost3411(::StringW value) ;

static ::StringW __get_DigestGost3411() ;

static ::StringW __declspec(property(get=__get_DigestRipeMD128, put=__set_DigestRipeMD128))  DigestRipeMD128;

static void __set_DigestRipeMD128(::StringW value) ;

static ::StringW __get_DigestRipeMD128() ;

static ::StringW __declspec(property(get=__get_DigestRipeMD160, put=__set_DigestRipeMD160))  DigestRipeMD160;

static void __set_DigestRipeMD160(::StringW value) ;

static ::StringW __get_DigestRipeMD160() ;

static ::StringW __declspec(property(get=__get_DigestRipeMD256, put=__set_DigestRipeMD256))  DigestRipeMD256;

static void __set_DigestRipeMD256(::StringW value) ;

static ::StringW __get_DigestRipeMD256() ;

static ::StringW __declspec(property(get=__get_EncryptionRsa, put=__set_EncryptionRsa))  EncryptionRsa;

static void __set_EncryptionRsa(::StringW value) ;

static ::StringW __get_EncryptionRsa() ;

static ::StringW __declspec(property(get=__get_EncryptionDsa, put=__set_EncryptionDsa))  EncryptionDsa;

static void __set_EncryptionDsa(::StringW value) ;

static ::StringW __get_EncryptionDsa() ;

static ::StringW __declspec(property(get=__get_EncryptionECDsa, put=__set_EncryptionECDsa))  EncryptionECDsa;

static void __set_EncryptionECDsa(::StringW value) ;

static ::StringW __get_EncryptionECDsa() ;

static ::StringW __declspec(property(get=__get_EncryptionRsaPss, put=__set_EncryptionRsaPss))  EncryptionRsaPss;

static void __set_EncryptionRsaPss(::StringW value) ;

static ::StringW __get_EncryptionRsaPss() ;

static ::StringW __declspec(property(get=__get_EncryptionGost3410, put=__set_EncryptionGost3410))  EncryptionGost3410;

static void __set_EncryptionGost3410(::StringW value) ;

static ::StringW __get_EncryptionGost3410() ;

static ::StringW __declspec(property(get=__get_EncryptionECGost3410, put=__set_EncryptionECGost3410))  EncryptionECGost3410;

static void __set_EncryptionECGost3410(::StringW value) ;

static ::StringW __get_EncryptionECGost3410() ;

 System::Collections::IList __declspec(property(get=__get__certs, put=__set__certs))  _certs;

constexpr void __set__certs(System::Collections::IList value) ;

constexpr System::Collections::IList __get__certs() const;

 System::Collections::IList __declspec(property(get=__get__crls, put=__set__crls))  _crls;

constexpr void __set__crls(System::Collections::IList value) ;

constexpr System::Collections::IList __get__crls() const;

 System::Collections::IList __declspec(property(get=__get__signers, put=__set__signers))  _signers;

constexpr void __set__signers(System::Collections::IList value) ;

constexpr System::Collections::IList __get__signers() const;

 System::Collections::IDictionary __declspec(property(get=__get__digests, put=__set__digests))  _digests;

constexpr void __set__digests(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get__digests() const;

 bool __declspec(property(get=__get__useDerForCerts, put=__set__useDerForCerts))  _useDerForCerts;

constexpr void __set__useDerForCerts(bool value) ;

constexpr bool __get__useDerForCerts() const;

 bool __declspec(property(get=__get__useDerForCrls, put=__set__useDerForCrls))  _useDerForCrls;

constexpr void __set__useDerForCrls(bool value) ;

constexpr bool __get__useDerForCrls() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_rand, put=__set_rand))  rand;

constexpr void __set_rand(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_rand() const;


// Properties

 bool __declspec(property(get=get_UseDerForCerts, put=set_UseDerForCerts))  UseDerForCerts;

 bool __declspec(property(get=get_UseDerForCrls, put=set_UseDerForCrls))  UseDerForCrls;


// Methods

// Ctor Parameters []
explicit CmsSignedGenerator() ;

/// @brief Method .ctor addr 0x115d660 size 0x64 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "rand", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit CmsSignedGenerator(Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x115d6c4 size 0xa0 virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method GetBaseParameters addr 0x115d764 size 0x23c virtual true final false
 System::Collections::IDictionary GetBaseParameters(Org::BouncyCastle::Asn1::DerObjectIdentifier contentType, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digAlgId, ::ArrayW<uint8_t> hash) ;

/// @brief Method GetAttributeSet addr 0x115d9a0 size 0x7c virtual true final false
 Org::BouncyCastle::Asn1::Asn1Set GetAttributeSet(Org::BouncyCastle::Asn1::Cms::AttributeTable attr) ;

/// @brief Method AddCertificates addr 0x115da1c size 0x24 virtual false final false
 void AddCertificates(Org::BouncyCastle::X509::Store::IX509Store certStore) ;

/// @brief Method AddCrls addr 0x115da40 size 0x24 virtual false final false
 void AddCrls(Org::BouncyCastle::X509::Store::IX509Store crlStore) ;

/// @brief Method AddAttributeCertificates addr 0x115da64 size 0x5cc virtual false final false
 void AddAttributeCertificates(Org::BouncyCastle::X509::Store::IX509Store store) ;

/// @brief Method AddSigners addr 0x115e030 size 0x3e4 virtual false final false
 void AddSigners(Org::BouncyCastle::Cms::SignerInformationStore signerStore) ;

/// @brief Method GetGeneratedDigests addr 0x115e414 size 0x5c virtual false final false
 System::Collections::IDictionary GetGeneratedDigests() ;

/// @brief Method get_UseDerForCerts addr 0x115e470 size 0x8 virtual false final false
 bool get_UseDerForCerts() ;

/// @brief Method set_UseDerForCerts addr 0x115e478 size 0xc virtual false final false
 void set_UseDerForCerts(bool value) ;

/// @brief Method get_UseDerForCrls addr 0x115e484 size 0x8 virtual false final false
 bool get_UseDerForCrls() ;

/// @brief Method set_UseDerForCrls addr 0x115e48c size 0xc virtual false final false
 void set_UseDerForCrls(bool value) ;

/// @brief Method AddSignerCallback addr 0x115e498 size 0x4 virtual true final false
 void AddSignerCallback(Org::BouncyCastle::Cms::SignerInformation si) ;

/// @brief Method GetSignerIdentifier addr 0x115e49c size 0x74 virtual false final false
static Org::BouncyCastle::Asn1::Cms::SignerIdentifier GetSignerIdentifier(Org::BouncyCastle::X509::X509Certificate cert) ;

/// @brief Method GetSignerIdentifier addr 0x115e5a4 size 0x94 virtual false final false
static Org::BouncyCastle::Asn1::Cms::SignerIdentifier GetSignerIdentifier(::ArrayW<uint8_t> subjectKeyIdentifier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsSignedGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsSignedGenerator, "Org.BouncyCastle.Cms", "CmsSignedGenerator");
