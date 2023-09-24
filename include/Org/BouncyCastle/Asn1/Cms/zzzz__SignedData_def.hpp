#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class SignedData;
}
// Type: Org.BouncyCastle.Asn1.Cms::SignedData
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(93))
// CS Name: Org.BouncyCastle.Asn1.Cms.SignedData
class CORDL_TYPE SignedData : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~SignedData() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignedData", modifiers: " const&", def_value: None }]
constexpr SignedData(SignedData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignedData", modifiers: "&&", def_value: None }]
constexpr SignedData(SignedData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignedData(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr SignedData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignedData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignedData& operator=(SignedData&& o) noexcept = default;
  constexpr SignedData& operator=(SignedData const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_Version1, put=__set_Version1))  Version1;

static void __set_Version1(Org::BouncyCastle::Asn1::DerInteger value) ;

static Org::BouncyCastle::Asn1::DerInteger __get_Version1() ;

static Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_Version3, put=__set_Version3))  Version3;

static void __set_Version3(Org::BouncyCastle::Asn1::DerInteger value) ;

static Org::BouncyCastle::Asn1::DerInteger __get_Version3() ;

static Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_Version4, put=__set_Version4))  Version4;

static void __set_Version4(Org::BouncyCastle::Asn1::DerInteger value) ;

static Org::BouncyCastle::Asn1::DerInteger __get_Version4() ;

static Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_Version5, put=__set_Version5))  Version5;

static void __set_Version5(Org::BouncyCastle::Asn1::DerInteger value) ;

static Org::BouncyCastle::Asn1::DerInteger __get_Version5() ;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_digestAlgorithms, put=__set_digestAlgorithms))  digestAlgorithms;

constexpr void __set_digestAlgorithms(Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Set __get_digestAlgorithms() const;

 Org::BouncyCastle::Asn1::Cms::ContentInfo __declspec(property(get=__get_contentInfo, put=__set_contentInfo))  contentInfo;

constexpr void __set_contentInfo(Org::BouncyCastle::Asn1::Cms::ContentInfo value) ;

constexpr Org::BouncyCastle::Asn1::Cms::ContentInfo __get_contentInfo() const;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_certificates, put=__set_certificates))  certificates;

constexpr void __set_certificates(Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Set __get_certificates() const;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_crls, put=__set_crls))  crls;

constexpr void __set_crls(Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Set __get_crls() const;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_signerInfos, put=__set_signerInfos))  signerInfos;

constexpr void __set_signerInfos(Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Set __get_signerInfos() const;

 bool __declspec(property(get=__get_certsBer, put=__set_certsBer))  certsBer;

constexpr void __set_certsBer(bool value) ;

constexpr bool __get_certsBer() const;

 bool __declspec(property(get=__get_crlsBer, put=__set_crlsBer))  crlsBer;

constexpr void __set_crlsBer(bool value) ;

constexpr bool __get_crlsBer() const;


// Properties

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_DigestAlgorithms))  DigestAlgorithms;

 Org::BouncyCastle::Asn1::Cms::ContentInfo __declspec(property(get=get_EncapContentInfo))  EncapContentInfo;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_Certificates))  Certificates;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_CRLs))  CRLs;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_SignerInfos))  SignerInfos;


// Methods

/// @brief Method GetInstance addr 0xdf06c8 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Cms::SignedData GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Cms::SignedData New_ctor(Org::BouncyCastle::Asn1::Asn1Set digestAlgorithms, Org::BouncyCastle::Asn1::Cms::ContentInfo contentInfo, Org::BouncyCastle::Asn1::Asn1Set certificates, Org::BouncyCastle::Asn1::Asn1Set crls, Org::BouncyCastle::Asn1::Asn1Set signerInfos) ;

/// @brief Method .ctor addr 0xdf0ddc size 0x110 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Set digestAlgorithms, Org::BouncyCastle::Asn1::Cms::ContentInfo contentInfo, Org::BouncyCastle::Asn1::Asn1Set certificates, Org::BouncyCastle::Asn1::Asn1Set crls, Org::BouncyCastle::Asn1::Asn1Set signerInfos) ;

/// @brief Method CalculateVersion addr 0xdf0eec size 0x694 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger CalculateVersion(Org::BouncyCastle::Asn1::DerObjectIdentifier contentOid, Org::BouncyCastle::Asn1::Asn1Set certs, Org::BouncyCastle::Asn1::Asn1Set crls, Org::BouncyCastle::Asn1::Asn1Set signerInfs) ;

/// @brief Method CheckForVersion3 addr 0xdf1580 size 0x2d4 virtual false final false
 bool CheckForVersion3(Org::BouncyCastle::Asn1::Asn1Set signerInfs) ;

static Org::BouncyCastle::Asn1::Cms::SignedData New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdf076c size 0x670 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_Version addr 0xdf1854 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method get_DigestAlgorithms addr 0xdf185c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Set get_DigestAlgorithms() ;

/// @brief Method get_EncapContentInfo addr 0xdf1864 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Cms::ContentInfo get_EncapContentInfo() ;

/// @brief Method get_Certificates addr 0xdf186c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Set get_Certificates() ;

/// @brief Method get_CRLs addr 0xdf1874 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Set get_CRLs() ;

/// @brief Method get_SignerInfos addr 0xdf187c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Set get_SignerInfos() ;

/// @brief Method ToAsn1Object addr 0xdf1884 size 0x26c virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::SignedData);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::SignedData, "Org.BouncyCastle.Asn1.Cms", "SignedData");
