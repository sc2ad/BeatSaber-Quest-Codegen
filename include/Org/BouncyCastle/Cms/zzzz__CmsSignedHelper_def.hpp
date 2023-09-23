#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsSignedHelper;
}
// Type: Org.BouncyCastle.Cms::CmsSignedHelper
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(660))
// CS Name: Org.BouncyCastle.Cms.CmsSignedHelper
class CORDL_TYPE CmsSignedHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CmsSignedHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsSignedHelper", modifiers: " const&", def_value: None }]
constexpr CmsSignedHelper(CmsSignedHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsSignedHelper", modifiers: "&&", def_value: None }]
constexpr CmsSignedHelper(CmsSignedHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsSignedHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CmsSignedHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsSignedHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsSignedHelper& operator=(CmsSignedHelper&& o) noexcept = default;
  constexpr CmsSignedHelper& operator=(CmsSignedHelper const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Cms::CmsSignedHelper __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(Org::BouncyCastle::Cms::CmsSignedHelper value) ;

static Org::BouncyCastle::Cms::CmsSignedHelper __get_Instance() ;

static ::StringW __declspec(property(get=__get_EncryptionECDsaWithSha1, put=__set_EncryptionECDsaWithSha1))  EncryptionECDsaWithSha1;

static void __set_EncryptionECDsaWithSha1(::StringW value) ;

static ::StringW __get_EncryptionECDsaWithSha1() ;

static ::StringW __declspec(property(get=__get_EncryptionECDsaWithSha224, put=__set_EncryptionECDsaWithSha224))  EncryptionECDsaWithSha224;

static void __set_EncryptionECDsaWithSha224(::StringW value) ;

static ::StringW __get_EncryptionECDsaWithSha224() ;

static ::StringW __declspec(property(get=__get_EncryptionECDsaWithSha256, put=__set_EncryptionECDsaWithSha256))  EncryptionECDsaWithSha256;

static void __set_EncryptionECDsaWithSha256(::StringW value) ;

static ::StringW __get_EncryptionECDsaWithSha256() ;

static ::StringW __declspec(property(get=__get_EncryptionECDsaWithSha384, put=__set_EncryptionECDsaWithSha384))  EncryptionECDsaWithSha384;

static void __set_EncryptionECDsaWithSha384(::StringW value) ;

static ::StringW __get_EncryptionECDsaWithSha384() ;

static ::StringW __declspec(property(get=__get_EncryptionECDsaWithSha512, put=__set_EncryptionECDsaWithSha512))  EncryptionECDsaWithSha512;

static void __set_EncryptionECDsaWithSha512(::StringW value) ;

static ::StringW __get_EncryptionECDsaWithSha512() ;

static System::Collections::IDictionary __declspec(property(get=__get_encryptionAlgs, put=__set_encryptionAlgs))  encryptionAlgs;

static void __set_encryptionAlgs(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_encryptionAlgs() ;

static System::Collections::IDictionary __declspec(property(get=__get_digestAlgs, put=__set_digestAlgs))  digestAlgs;

static void __set_digestAlgs(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_digestAlgs() ;

static System::Collections::IDictionary __declspec(property(get=__get_digestAliases, put=__set_digestAliases))  digestAliases;

static void __set_digestAliases(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_digestAliases() ;

static Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_noParams, put=__set_noParams))  noParams;

static void __set_noParams(Org::BouncyCastle::Utilities::Collections::ISet value) ;

static Org::BouncyCastle::Utilities::Collections::ISet __get_noParams() ;

static System::Collections::IDictionary __declspec(property(get=__get_ecAlgorithms, put=__set_ecAlgorithms))  ecAlgorithms;

static void __set_ecAlgorithms(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_ecAlgorithms() ;


// Methods

/// @brief Method AddEntries addr 0x1172348 size 0x16c virtual false final false
static void AddEntries(Org::BouncyCastle::Asn1::DerObjectIdentifier oid, ::StringW digest, ::StringW encryption) ;

/// @brief Method GetDigestAlgName addr 0x1161f5c size 0x108 virtual false final false
 ::StringW GetDigestAlgName(::StringW digestAlgOid) ;

/// @brief Method GetEncAlgorithmIdentifier addr 0x11625d8 size 0x13c virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier GetEncAlgorithmIdentifier(Org::BouncyCastle::Asn1::DerObjectIdentifier encOid, Org::BouncyCastle::Asn1::Asn1Encodable sigX509Parameters) ;

/// @brief Method GetDigestAliases addr 0x1174264 size 0x14c virtual false final false
 ::ArrayW<::StringW> GetDigestAliases(::StringW algName) ;

/// @brief Method GetEncryptionAlgName addr 0x1162064 size 0x108 virtual false final false
 ::StringW GetEncryptionAlgName(::StringW encryptionAlgOid) ;

/// @brief Method GetDigestInstance addr 0x11623e8 size 0x1f0 virtual false final false
 Org::BouncyCastle::Crypto::IDigest GetDigestInstance(::StringW algorithm) ;

/// @brief Method GetSignatureInstance addr 0x1167768 size 0x58 virtual false final false
 Org::BouncyCastle::Crypto::ISigner GetSignatureInstance(::StringW algorithm) ;

/// @brief Method CreateAttributeStore addr 0x115b0f8 size 0x654 virtual false final false
 Org::BouncyCastle::X509::Store::IX509Store CreateAttributeStore(::StringW type, Org::BouncyCastle::Asn1::Asn1Set certSet) ;

/// @brief Method CreateCertificateStore addr 0x115b7d4 size 0x1b0 virtual false final false
 Org::BouncyCastle::X509::Store::IX509Store CreateCertificateStore(::StringW type, Org::BouncyCastle::Asn1::Asn1Set certSet) ;

/// @brief Method CreateCrlStore addr 0x115ba0c size 0x1b0 virtual false final false
 Org::BouncyCastle::X509::Store::IX509Store CreateCrlStore(::StringW type, Org::BouncyCastle::Asn1::Asn1Set crlSet) ;

/// @brief Method AddCertsFromSet addr 0x11743b0 size 0x4c8 virtual false final false
 void AddCertsFromSet(System::Collections::IList certs, Org::BouncyCastle::Asn1::Asn1Set certSet) ;

/// @brief Method AddCrlsFromSet addr 0x1174878 size 0x478 virtual false final false
 void AddCrlsFromSet(System::Collections::IList crls, Org::BouncyCastle::Asn1::Asn1Set crlSet) ;

/// @brief Method FixAlgID addr 0x115c31c size 0xd0 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier FixAlgID(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algId) ;

/// @brief Method GetEncOid addr 0x115eacc size 0x4e0 virtual false final false
 ::StringW GetEncOid(Org::BouncyCastle::Crypto::AsymmetricKeyParameter key, ::StringW digestOID) ;

// Ctor Parameters []
explicit CmsSignedHelper() ;

/// @brief Method .ctor addr 0x117425c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(Org::BouncyCastle::Cms::CmsSignedHelper);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Cms::CmsSignedHelper, "Org.BouncyCastle.Cms", "CmsSignedHelper");
