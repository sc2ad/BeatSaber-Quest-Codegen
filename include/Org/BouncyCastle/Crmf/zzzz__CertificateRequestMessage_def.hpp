#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crmf {
class IControl;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertTemplate;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertReqMsg;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class Controls;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoSigningKey;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactoryProvider;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class AttributeTypeAndValue;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class CertificateRequestMessage;
}
// Type: Org.BouncyCastle.Crmf::CertificateRequestMessage
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(696))
// CS Name: Org.BouncyCastle.Crmf.CertificateRequestMessage
class CORDL_TYPE CertificateRequestMessage : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CertificateRequestMessage() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateRequestMessage", modifiers: " const&", def_value: None }]
constexpr CertificateRequestMessage(CertificateRequestMessage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateRequestMessage", modifiers: "&&", def_value: None }]
constexpr CertificateRequestMessage(CertificateRequestMessage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificateRequestMessage(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CertificateRequestMessage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificateRequestMessage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificateRequestMessage& operator=(CertificateRequestMessage&& o) noexcept = default;
  constexpr CertificateRequestMessage& operator=(CertificateRequestMessage const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_popRaVerified, put=__set_popRaVerified))  popRaVerified;

static void __set_popRaVerified(int32_t value) ;

static int32_t __get_popRaVerified() ;

static int32_t __declspec(property(get=__get_popSigningKey, put=__set_popSigningKey))  popSigningKey;

static void __set_popSigningKey(int32_t value) ;

static int32_t __get_popSigningKey() ;

static int32_t __declspec(property(get=__get_popKeyEncipherment, put=__set_popKeyEncipherment))  popKeyEncipherment;

static void __set_popKeyEncipherment(int32_t value) ;

static int32_t __get_popKeyEncipherment() ;

static int32_t __declspec(property(get=__get_popKeyAgreement, put=__set_popKeyAgreement))  popKeyAgreement;

static void __set_popKeyAgreement(int32_t value) ;

static int32_t __get_popKeyAgreement() ;

 Org::BouncyCastle::Asn1::Crmf::CertReqMsg __declspec(property(get=__get_certReqMsg, put=__set_certReqMsg))  certReqMsg;

constexpr void __set_certReqMsg(Org::BouncyCastle::Asn1::Crmf::CertReqMsg value) ;

constexpr Org::BouncyCastle::Asn1::Crmf::CertReqMsg __get_certReqMsg() const;

 Org::BouncyCastle::Asn1::Crmf::Controls __declspec(property(get=__get_controls, put=__set_controls))  controls;

constexpr void __set_controls(Org::BouncyCastle::Asn1::Crmf::Controls value) ;

constexpr Org::BouncyCastle::Asn1::Crmf::Controls __get_controls() const;


// Properties

 bool __declspec(property(get=get_HasControls))  HasControls;

 bool __declspec(property(get=get_HasProofOfPossession))  HasProofOfPossession;

 int32_t __declspec(property(get=get_ProofOfPossession))  ProofOfPossession;

 bool __declspec(property(get=get_HasSigningKeyProofOfPossessionWithPkMac))  HasSigningKeyProofOfPossessionWithPkMac;


// Methods

/// @brief Method ParseBytes addr 0x1182d4c size 0x8 virtual false final false
static Org::BouncyCastle::Asn1::Crmf::CertReqMsg ParseBytes(::ArrayW<uint8_t> encoding) ;

// Ctor Parameters [CppParam { name: "encoded", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit CertificateRequestMessage(::ArrayW<uint8_t> encoded) ;

/// @brief Method .ctor addr 0x1182d54 size 0x24 virtual false final false
 void _ctor(::ArrayW<uint8_t> encoded) ;

// Ctor Parameters [CppParam { name: "certReqMsg", ty: "Org::BouncyCastle::Asn1::Crmf::CertReqMsg", modifiers: "", def_value: None }]
explicit CertificateRequestMessage(Org::BouncyCastle::Asn1::Crmf::CertReqMsg certReqMsg) ;

/// @brief Method .ctor addr 0x1182d78 size 0x54 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Crmf::CertReqMsg certReqMsg) ;

/// @brief Method ToAsn1Structure addr 0x1182dcc size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Crmf::CertReqMsg ToAsn1Structure() ;

/// @brief Method GetCertTemplate addr 0x1182dd4 size 0x30 virtual false final false
 Org::BouncyCastle::Asn1::Crmf::CertTemplate GetCertTemplate() ;

/// @brief Method get_HasControls addr 0x1182e04 size 0x10 virtual false final false
 bool get_HasControls() ;

/// @brief Method HasControl addr 0x1182e14 size 0x18 virtual false final false
 bool HasControl(Org::BouncyCastle::Asn1::DerObjectIdentifier objectIdentifier) ;

/// @brief Method GetControl addr 0x1182edc size 0x1d8 virtual false final false
 Org::BouncyCastle::Crmf::IControl GetControl(Org::BouncyCastle::Asn1::DerObjectIdentifier type) ;

/// @brief Method FindControl addr 0x1182e2c size 0xb0 virtual false final false
 Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue FindControl(Org::BouncyCastle::Asn1::DerObjectIdentifier type) ;

/// @brief Method get_HasProofOfPossession addr 0x1183104 size 0x2c virtual false final false
 bool get_HasProofOfPossession() ;

/// @brief Method get_ProofOfPossession addr 0x1183130 size 0x30 virtual false final false
 int32_t get_ProofOfPossession() ;

/// @brief Method get_HasSigningKeyProofOfPossessionWithPkMac addr 0x1183160 size 0xe0 virtual false final false
 bool get_HasSigningKeyProofOfPossessionWithPkMac() ;

/// @brief Method IsValidSigningKeyPop addr 0x1183240 size 0x174 virtual false final false
 bool IsValidSigningKeyPop(Org::BouncyCastle::Crypto::IVerifierFactoryProvider verifierProvider) ;

/// @brief Method verifySignature addr 0x11833b4 size 0x440 virtual false final false
 bool verifySignature(Org::BouncyCastle::Crypto::IVerifierFactoryProvider verifierFactoryProvider, Org::BouncyCastle::Asn1::Crmf::PopoSigningKey signKey) ;

/// @brief Method GetEncoded addr 0x1183864 size 0x1c virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crmf
NEED_NO_BOX(Org::BouncyCastle::Crmf::CertificateRequestMessage);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crmf::CertificateRequestMessage, "Org.BouncyCastle.Crmf", "CertificateRequestMessage");
