#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertRequest;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class PKMacValue;
}
namespace Org::BouncyCastle::Crmf {
class PKMacBuilder;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoSigningKey;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class ProofOfPossessionSigningKeyBuilder;
}
// Type: Org.BouncyCastle.Crmf::ProofOfPossessionSigningKeyBuilder
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(712))
// CS Name: Org.BouncyCastle.Crmf.ProofOfPossessionSigningKeyBuilder
class CORDL_TYPE ProofOfPossessionSigningKeyBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ProofOfPossessionSigningKeyBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProofOfPossessionSigningKeyBuilder", modifiers: " const&", def_value: None }]
constexpr ProofOfPossessionSigningKeyBuilder(ProofOfPossessionSigningKeyBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProofOfPossessionSigningKeyBuilder", modifiers: "&&", def_value: None }]
constexpr ProofOfPossessionSigningKeyBuilder(ProofOfPossessionSigningKeyBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProofOfPossessionSigningKeyBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ProofOfPossessionSigningKeyBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProofOfPossessionSigningKeyBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProofOfPossessionSigningKeyBuilder& operator=(ProofOfPossessionSigningKeyBuilder&& o) noexcept = default;
  constexpr ProofOfPossessionSigningKeyBuilder& operator=(ProofOfPossessionSigningKeyBuilder const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Crmf::CertRequest __declspec(property(get=__get__certRequest, put=__set__certRequest))  _certRequest;

constexpr void __set__certRequest(Org::BouncyCastle::Asn1::Crmf::CertRequest value) ;

constexpr Org::BouncyCastle::Asn1::Crmf::CertRequest __get__certRequest() const;

 Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo __declspec(property(get=__get__pubKeyInfo, put=__set__pubKeyInfo))  _pubKeyInfo;

constexpr void __set__pubKeyInfo(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo value) ;

constexpr Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo __get__pubKeyInfo() const;

 Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=__get__name, put=__set__name))  _name;

constexpr void __set__name(Org::BouncyCastle::Asn1::X509::GeneralName value) ;

constexpr Org::BouncyCastle::Asn1::X509::GeneralName __get__name() const;

 Org::BouncyCastle::Asn1::Crmf::PKMacValue __declspec(property(get=__get__publicKeyMAC, put=__set__publicKeyMAC))  _publicKeyMAC;

constexpr void __set__publicKeyMAC(Org::BouncyCastle::Asn1::Crmf::PKMacValue value) ;

constexpr Org::BouncyCastle::Asn1::Crmf::PKMacValue __get__publicKeyMAC() const;


// Methods

// Ctor Parameters [CppParam { name: "certRequest", ty: "Org::BouncyCastle::Asn1::Crmf::CertRequest", modifiers: "", def_value: None }]
explicit ProofOfPossessionSigningKeyBuilder(Org::BouncyCastle::Asn1::Crmf::CertRequest certRequest) ;

/// @brief Method .ctor addr 0x11854c0 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Crmf::CertRequest certRequest) ;

// Ctor Parameters [CppParam { name: "pubKeyInfo", ty: "Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo", modifiers: "", def_value: None }]
explicit ProofOfPossessionSigningKeyBuilder(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo pubKeyInfo) ;

/// @brief Method .ctor addr 0x11849f8 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo pubKeyInfo) ;

/// @brief Method SetSender addr 0x1184a20 size 0x8 virtual false final false
 Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder SetSender(Org::BouncyCastle::Asn1::X509::GeneralName name) ;

/// @brief Method SetPublicKeyMac addr 0x1184a28 size 0x4ac virtual false final false
 Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder SetPublicKeyMac(Org::BouncyCastle::Crmf::PKMacBuilder generator, ::ArrayW<char16_t> password) ;

/// @brief Method Build addr 0x1184ed4 size 0x5ec virtual false final false
 Org::BouncyCastle::Asn1::Crmf::PopoSigningKey Build(Org::BouncyCastle::Crypto::ISignatureFactory signer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crmf
NEED_NO_BOX(Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crmf::ProofOfPossessionSigningKeyBuilder, "Org.BouncyCastle.Crmf", "ProofOfPossessionSigningKeyBuilder");
