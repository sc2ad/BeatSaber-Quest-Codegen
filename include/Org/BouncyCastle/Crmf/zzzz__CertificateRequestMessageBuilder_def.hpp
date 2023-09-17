#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::Crmf {
class CertificateRequestMessage;
}
namespace Org::BouncyCastle::Crmf {
class PKMacBuilder;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Null;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class SubsequentMessage;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertTemplateBuilder;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class PKMacValue;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509ExtensionsGenerator;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoPrivKey;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Time;
}
namespace Org::BouncyCastle::Crmf {
class IControl;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class CertificateRequestMessageBuilder;
}
// Type: Org.BouncyCastle.Crmf::CertificateRequestMessageBuilder
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(697))
// CS Name: Org.BouncyCastle.Crmf.CertificateRequestMessageBuilder
class CORDL_TYPE CertificateRequestMessageBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~CertificateRequestMessageBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateRequestMessageBuilder", modifiers: " const&", def_value: None }]
constexpr CertificateRequestMessageBuilder(CertificateRequestMessageBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateRequestMessageBuilder", modifiers: "&&", def_value: None }]
constexpr CertificateRequestMessageBuilder(CertificateRequestMessageBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificateRequestMessageBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CertificateRequestMessageBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificateRequestMessageBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificateRequestMessageBuilder& operator=(CertificateRequestMessageBuilder&& o) noexcept = default;
  constexpr CertificateRequestMessageBuilder& operator=(CertificateRequestMessageBuilder const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get__certReqId, put=__set__certReqId))  _certReqId;

constexpr void __set__certReqId(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get__certReqId() const;

 ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator __declspec(property(get=__get__extGenerator, put=__set__extGenerator))  _extGenerator;

constexpr void __set__extGenerator(::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator __get__extGenerator() const;

 ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder __declspec(property(get=__get__templateBuilder, put=__set__templateBuilder))  _templateBuilder;

constexpr void __set__templateBuilder(::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder value) ;

constexpr ::Org::BouncyCastle::Asn1::Crmf::CertTemplateBuilder __get__templateBuilder() const;

 ::System::Collections::IList __declspec(property(get=__get__controls, put=__set__controls))  _controls;

constexpr void __set__controls(::System::Collections::IList value) ;

constexpr ::System::Collections::IList __get__controls() const;

 ::Org::BouncyCastle::Crypto::ISignatureFactory __declspec(property(get=__get__popSigner, put=__set__popSigner))  _popSigner;

constexpr void __set__popSigner(::Org::BouncyCastle::Crypto::ISignatureFactory value) ;

constexpr ::Org::BouncyCastle::Crypto::ISignatureFactory __get__popSigner() const;

 ::Org::BouncyCastle::Crmf::PKMacBuilder __declspec(property(get=__get__pkMacBuilder, put=__set__pkMacBuilder))  _pkMacBuilder;

constexpr void __set__pkMacBuilder(::Org::BouncyCastle::Crmf::PKMacBuilder value) ;

constexpr ::Org::BouncyCastle::Crmf::PKMacBuilder __get__pkMacBuilder() const;

 ::ArrayW<char16_t> __declspec(property(get=__get__password, put=__set__password))  _password;

constexpr void __set__password(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get__password() const;

 ::Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=__get__sender, put=__set__sender))  _sender;

constexpr void __set__sender(::Org::BouncyCastle::Asn1::X509::GeneralName value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName __get__sender() const;

 int32_t __declspec(property(get=__get__popoType, put=__set__popoType))  _popoType;

constexpr void __set__popoType(int32_t value) ;

constexpr int32_t __get__popoType() const;

 ::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey __declspec(property(get=__get__popoPrivKey, put=__set__popoPrivKey))  _popoPrivKey;

constexpr void __set__popoPrivKey(::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey value) ;

constexpr ::Org::BouncyCastle::Asn1::Crmf::PopoPrivKey __get__popoPrivKey() const;

 ::Org::BouncyCastle::Asn1::Asn1Null __declspec(property(get=__get__popRaVerified, put=__set__popRaVerified))  _popRaVerified;

constexpr void __set__popRaVerified(::Org::BouncyCastle::Asn1::Asn1Null value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Null __get__popRaVerified() const;

 ::Org::BouncyCastle::Asn1::Crmf::PKMacValue __declspec(property(get=__get__agreeMac, put=__set__agreeMac))  _agreeMac;

constexpr void __set__agreeMac(::Org::BouncyCastle::Asn1::Crmf::PKMacValue value) ;

constexpr ::Org::BouncyCastle::Asn1::Crmf::PKMacValue __get__agreeMac() const;


// Methods

// Ctor Parameters [CppParam { name: "certReqId", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit CertificateRequestMessageBuilder(::Org::BouncyCastle::Math::BigInteger certReqId) ;

/// @brief Method .ctor addr 0x11838d0 size 0xe4 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger certReqId) ;

/// @brief Method SetPublicKey addr 0x11839b4 size 0x30 virtual false final false
 ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder SetPublicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo publicKeyInfo) ;

/// @brief Method SetIssuer addr 0x11839e4 size 0x30 virtual false final false
 ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder SetIssuer(::Org::BouncyCastle::Asn1::X509::X509Name issuer) ;

/// @brief Method SetSubject addr 0x1183a14 size 0x30 virtual false final false
 ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder SetSubject(::Org::BouncyCastle::Asn1::X509::X509Name subject) ;

/// @brief Method SetSerialNumber addr 0x1183a44 size 0x90 virtual false final false
 ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder SetSerialNumber(::Org::BouncyCastle::Math::BigInteger serialNumber) ;

/// @brief Method SetValidity addr 0x1183ad4 size 0x94 virtual false final false
 ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder SetValidity(::Org::BouncyCastle::Asn1::X509::Time notBefore, ::Org::BouncyCastle::Asn1::X509::Time notAfter) ;

/// @brief Method AddExtension addr 0x1183b68 size 0x2c virtual false final false
 ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, bool critical, ::Org::BouncyCastle::Asn1::Asn1Encodable value) ;

/// @brief Method AddExtension addr 0x1183b94 size 0x2c virtual false final false
 ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder AddExtension(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid, bool critical, ::ArrayW<uint8_t> value) ;

/// @brief Method AddControl addr 0x1183bc0 size 0xb4 virtual false final false
 ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder AddControl(::Org::BouncyCastle::Crmf::IControl control) ;

/// @brief Method SetProofOfPossessionSignKeySigner addr 0x1183c74 size 0x74 virtual false final false
 ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder SetProofOfPossessionSignKeySigner(::Org::BouncyCastle::Crypto::ISignatureFactory popoSignatureFactory) ;

/// @brief Method SetProofOfPossessionSubsequentMessage addr 0x1183ce8 size 0xd8 virtual false final false
 ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder SetProofOfPossessionSubsequentMessage(::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage msg) ;

/// @brief Method SetProofOfPossessionSubsequentMessage addr 0x1183dc0 size 0x124 virtual false final false
 ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder SetProofOfPossessionSubsequentMessage(int32_t type, ::Org::BouncyCastle::Asn1::Crmf::SubsequentMessage msg) ;

/// @brief Method SetProofOfPossessionAgreeMac addr 0x1183ee4 size 0x74 virtual false final false
 ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder SetProofOfPossessionAgreeMac(::Org::BouncyCastle::Asn1::Crmf::PKMacValue macValue) ;

/// @brief Method SetProofOfPossessionRaVerified addr 0x1183f58 size 0xc0 virtual false final false
 ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder SetProofOfPossessionRaVerified() ;

/// @brief Method SetAuthInfoPKMAC addr 0x1184018 size 0x8 virtual false final false
 ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder SetAuthInfoPKMAC(::Org::BouncyCastle::Crmf::PKMacBuilder pkmacFactory, ::ArrayW<char16_t> password) ;

/// @brief Method SetAuthInfoSender addr 0x1184020 size 0x74 virtual false final false
 ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder SetAuthInfoSender(::Org::BouncyCastle::Asn1::X509::X509Name sender) ;

/// @brief Method SetAuthInfoSender addr 0x1184094 size 0x8 virtual false final false
 ::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder SetAuthInfoSender(::Org::BouncyCastle::Asn1::X509::GeneralName sender) ;

/// @brief Method Build addr 0x118409c size 0x95c virtual false final false
 ::Org::BouncyCastle::Crmf::CertificateRequestMessage Build() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crmf
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::CertificateRequestMessageBuilder, "Org.BouncyCastle.Crmf", "CertificateRequestMessageBuilder");
