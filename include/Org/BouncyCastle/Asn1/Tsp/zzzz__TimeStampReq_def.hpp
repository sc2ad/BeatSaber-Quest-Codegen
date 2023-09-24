#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerBoolean;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1::Tsp {
class MessageImprint;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Tsp {
class TimeStampReq;
}
// Type: Org.BouncyCastle.Asn1.Tsp::TimeStampReq
namespace Org::BouncyCastle::Asn1::Tsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(316))
// CS Name: Org.BouncyCastle.Asn1.Tsp.TimeStampReq
class CORDL_TYPE TimeStampReq : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~TimeStampReq() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampReq", modifiers: " const&", def_value: None }]
constexpr TimeStampReq(TimeStampReq const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimeStampReq", modifiers: "&&", def_value: None }]
constexpr TimeStampReq(TimeStampReq&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimeStampReq(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr TimeStampReq& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimeStampReq& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimeStampReq& operator=(TimeStampReq&& o) noexcept = default;
  constexpr TimeStampReq& operator=(TimeStampReq const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 Org::BouncyCastle::Asn1::Tsp::MessageImprint __declspec(property(get=__get_messageImprint, put=__set_messageImprint))  messageImprint;

constexpr void __set_messageImprint(Org::BouncyCastle::Asn1::Tsp::MessageImprint value) ;

constexpr Org::BouncyCastle::Asn1::Tsp::MessageImprint __get_messageImprint() const;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_tsaPolicy, put=__set_tsaPolicy))  tsaPolicy;

constexpr void __set_tsaPolicy(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_tsaPolicy() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_nonce, put=__set_nonce))  nonce;

constexpr void __set_nonce(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_nonce() const;

 Org::BouncyCastle::Asn1::DerBoolean __declspec(property(get=__get_certReq, put=__set_certReq))  certReq;

constexpr void __set_certReq(Org::BouncyCastle::Asn1::DerBoolean value) ;

constexpr Org::BouncyCastle::Asn1::DerBoolean __get_certReq() const;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=__get_extensions, put=__set_extensions))  extensions;

constexpr void __set_extensions(Org::BouncyCastle::Asn1::X509::X509Extensions value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509Extensions __get_extensions() const;


// Properties

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;

 Org::BouncyCastle::Asn1::Tsp::MessageImprint __declspec(property(get=get_MessageImprint))  MessageImprint;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_ReqPolicy))  ReqPolicy;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Nonce))  Nonce;

 Org::BouncyCastle::Asn1::DerBoolean __declspec(property(get=get_CertReq))  CertReq;

 Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=get_Extensions))  Extensions;


// Methods

/// @brief Method GetInstance addr 0xfec03c size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Tsp::TimeStampReq GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Tsp::TimeStampReq New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xfec0e0 size 0x344 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

static Org::BouncyCastle::Asn1::Tsp::TimeStampReq New_ctor(Org::BouncyCastle::Asn1::Tsp::MessageImprint messageImprint, Org::BouncyCastle::Asn1::DerObjectIdentifier tsaPolicy, Org::BouncyCastle::Asn1::DerInteger nonce, Org::BouncyCastle::Asn1::DerBoolean certReq, Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

/// @brief Method .ctor addr 0xfec424 size 0xa4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Tsp::MessageImprint messageImprint, Org::BouncyCastle::Asn1::DerObjectIdentifier tsaPolicy, Org::BouncyCastle::Asn1::DerInteger nonce, Org::BouncyCastle::Asn1::DerBoolean certReq, Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

/// @brief Method get_Version addr 0xfec4c8 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method get_MessageImprint addr 0xfec4d0 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Tsp::MessageImprint get_MessageImprint() ;

/// @brief Method get_ReqPolicy addr 0xfec4d8 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_ReqPolicy() ;

/// @brief Method get_Nonce addr 0xfec4e0 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_Nonce() ;

/// @brief Method get_CertReq addr 0xfec4e8 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerBoolean get_CertReq() ;

/// @brief Method get_Extensions addr 0xfec4f0 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::X509Extensions get_Extensions() ;

/// @brief Method ToAsn1Object addr 0xfec4f8 size 0x1dc virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Tsp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Tsp::TimeStampReq);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Tsp::TimeStampReq, "Org.BouncyCastle.Asn1.Tsp", "TimeStampReq");
