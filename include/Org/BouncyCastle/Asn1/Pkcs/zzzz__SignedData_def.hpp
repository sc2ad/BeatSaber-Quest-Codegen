#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::Pkcs {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class SignedData;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::SignedData
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(252))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.SignedData
class CORDL_TYPE SignedData : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

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

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_digestAlgorithms, put=__set_digestAlgorithms))  digestAlgorithms;

constexpr void __set_digestAlgorithms(Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Set __get_digestAlgorithms() const;

 Org::BouncyCastle::Asn1::Pkcs::ContentInfo __declspec(property(get=__get_contentInfo, put=__set_contentInfo))  contentInfo;

constexpr void __set_contentInfo(Org::BouncyCastle::Asn1::Pkcs::ContentInfo value) ;

constexpr Org::BouncyCastle::Asn1::Pkcs::ContentInfo __get_contentInfo() const;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_certificates, put=__set_certificates))  certificates;

constexpr void __set_certificates(Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Set __get_certificates() const;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_crls, put=__set_crls))  crls;

constexpr void __set_crls(Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Set __get_crls() const;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_signerInfos, put=__set_signerInfos))  signerInfos;

constexpr void __set_signerInfos(Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Set __get_signerInfos() const;


// Properties

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_DigestAlgorithms))  DigestAlgorithms;

 Org::BouncyCastle::Asn1::Pkcs::ContentInfo __declspec(property(get=get_ContentInfo))  ContentInfo;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_Certificates))  Certificates;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_Crls))  Crls;

 Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_SignerInfos))  SignerInfos;


// Methods

/// @brief Method GetInstance addr 0xf016d8 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Pkcs::SignedData GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "_version", ty: "Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }, CppParam { name: "_digestAlgorithms", ty: "Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }, CppParam { name: "_contentInfo", ty: "Org::BouncyCastle::Asn1::Pkcs::ContentInfo", modifiers: "", def_value: None }, CppParam { name: "_certificates", ty: "Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }, CppParam { name: "_crls", ty: "Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }, CppParam { name: "_signerInfos", ty: "Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }]
explicit SignedData(Org::BouncyCastle::Asn1::DerInteger _version, Org::BouncyCastle::Asn1::Asn1Set _digestAlgorithms, Org::BouncyCastle::Asn1::Pkcs::ContentInfo _contentInfo, Org::BouncyCastle::Asn1::Asn1Set _certificates, Org::BouncyCastle::Asn1::Asn1Set _crls, Org::BouncyCastle::Asn1::Asn1Set _signerInfos) ;

/// @brief Method .ctor addr 0xf01d68 size 0x54 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerInteger _version, Org::BouncyCastle::Asn1::Asn1Set _digestAlgorithms, Org::BouncyCastle::Asn1::Pkcs::ContentInfo _contentInfo, Org::BouncyCastle::Asn1::Asn1Set _certificates, Org::BouncyCastle::Asn1::Asn1Set _crls, Org::BouncyCastle::Asn1::Asn1Set _signerInfos) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit SignedData(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xf0177c size 0x5ec virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_Version addr 0xf01dbc size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method get_DigestAlgorithms addr 0xf01dc4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Set get_DigestAlgorithms() ;

/// @brief Method get_ContentInfo addr 0xf01dcc size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Pkcs::ContentInfo get_ContentInfo() ;

/// @brief Method get_Certificates addr 0xf01dd4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Set get_Certificates() ;

/// @brief Method get_Crls addr 0xf01ddc size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Set get_Crls() ;

/// @brief Method get_SignerInfos addr 0xf01de4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Set get_SignerInfos() ;

/// @brief Method ToAsn1Object addr 0xf01dec size 0x194 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Asn1::Pkcs::SignedData);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::SignedData, "Org.BouncyCastle.Asn1.Pkcs", "SignedData");
