#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1::Cms {
class Attributes;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Cms {
class SignerIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class SignerInfo;
}
// Type: Org.BouncyCastle.Asn1.Cms::SignerInfo
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(96))
// CS Name: Org.BouncyCastle.Asn1.Cms.SignerInfo
class CORDL_TYPE SignerInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~SignerInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerInfo", modifiers: " const&", def_value: None }]
constexpr SignerInfo(SignerInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignerInfo", modifiers: "&&", def_value: None }]
constexpr SignerInfo(SignerInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignerInfo(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr SignerInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignerInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignerInfo& operator=(SignerInfo&& o) noexcept = default;
  constexpr SignerInfo& operator=(SignerInfo const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier __declspec(property(get=__get_sid, put=__set_sid))  sid;

constexpr void __set_sid(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier __get_sid() const;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_digAlgorithm, put=__set_digAlgorithm))  digAlgorithm;

constexpr void __set_digAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_digAlgorithm() const;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_authenticatedAttributes, put=__set_authenticatedAttributes))  authenticatedAttributes;

constexpr void __set_authenticatedAttributes(::Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set __get_authenticatedAttributes() const;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_digEncryptionAlgorithm, put=__set_digEncryptionAlgorithm))  digEncryptionAlgorithm;

constexpr void __set_digEncryptionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_digEncryptionAlgorithm() const;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_encryptedDigest, put=__set_encryptedDigest))  encryptedDigest;

constexpr void __set_encryptedDigest(::Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString __get_encryptedDigest() const;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=__get_unauthenticatedAttributes, put=__set_unauthenticatedAttributes))  unauthenticatedAttributes;

constexpr void __set_unauthenticatedAttributes(::Org::BouncyCastle::Asn1::Asn1Set value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Set __get_unauthenticatedAttributes() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;

 ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier __declspec(property(get=get_SignerID))  SignerID;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_AuthenticatedAttributes))  AuthenticatedAttributes;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_DigestAlgorithm))  DigestAlgorithm;

 ::Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_EncryptedDigest))  EncryptedDigest;

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_DigestEncryptionAlgorithm))  DigestEncryptionAlgorithm;

 ::Org::BouncyCastle::Asn1::Asn1Set __declspec(property(get=get_UnauthenticatedAttributes))  UnauthenticatedAttributes;


// Methods

/// @brief Method GetInstance addr 0xdf2b10 size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::Cms::SignerInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "sid", ty: "::Org::BouncyCastle::Asn1::Cms::SignerIdentifier", modifiers: "", def_value: None }, CppParam { name: "digAlgorithm", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "authenticatedAttributes", ty: "::Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }, CppParam { name: "digEncryptionAlgorithm", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "encryptedDigest", ty: "::Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }, CppParam { name: "unauthenticatedAttributes", ty: "::Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }]
explicit SignerInfo(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier sid, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digAlgorithm, ::Org::BouncyCastle::Asn1::Asn1Set authenticatedAttributes, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString encryptedDigest, ::Org::BouncyCastle::Asn1::Asn1Set unauthenticatedAttributes) ;

/// @brief Method .ctor addr 0xdf3344 size 0xc8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier sid, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digAlgorithm, ::Org::BouncyCastle::Asn1::Asn1Set authenticatedAttributes, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString encryptedDigest, ::Org::BouncyCastle::Asn1::Asn1Set unauthenticatedAttributes) ;

// Ctor Parameters [CppParam { name: "sid", ty: "::Org::BouncyCastle::Asn1::Cms::SignerIdentifier", modifiers: "", def_value: None }, CppParam { name: "digAlgorithm", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "authenticatedAttributes", ty: "::Org::BouncyCastle::Asn1::Cms::Attributes", modifiers: "", def_value: None }, CppParam { name: "digEncryptionAlgorithm", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "encryptedDigest", ty: "::Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }, CppParam { name: "unauthenticatedAttributes", ty: "::Org::BouncyCastle::Asn1::Cms::Attributes", modifiers: "", def_value: None }]
explicit SignerInfo(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier sid, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digAlgorithm, ::Org::BouncyCastle::Asn1::Cms::Attributes authenticatedAttributes, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString encryptedDigest, ::Org::BouncyCastle::Asn1::Cms::Attributes unauthenticatedAttributes) ;

/// @brief Method .ctor addr 0xdf3498 size 0xe4 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Cms::SignerIdentifier sid, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digAlgorithm, ::Org::BouncyCastle::Asn1::Cms::Attributes authenticatedAttributes, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier digEncryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1OctetString encryptedDigest, ::Org::BouncyCastle::Asn1::Cms::Attributes unauthenticatedAttributes) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit SignerInfo(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdf2c98 size 0x6ac virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_Version addr 0xdf357c size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method get_SignerID addr 0xdf3584 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Cms::SignerIdentifier get_SignerID() ;

/// @brief Method get_AuthenticatedAttributes addr 0xdf358c size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Set get_AuthenticatedAttributes() ;

/// @brief Method get_DigestAlgorithm addr 0xdf3594 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_DigestAlgorithm() ;

/// @brief Method get_EncryptedDigest addr 0xdf359c size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1OctetString get_EncryptedDigest() ;

/// @brief Method get_DigestEncryptionAlgorithm addr 0xdf35a4 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_DigestEncryptionAlgorithm() ;

/// @brief Method get_UnauthenticatedAttributes addr 0xdf35ac size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Set get_UnauthenticatedAttributes() ;

/// @brief Method ToAsn1Object addr 0xdf35b4 size 0x1fc virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::SignerInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::SignerInfo, "Org.BouncyCastle.Asn1.Cms", "SignerInfo");
