#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponderID;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponseData;
}
// Type: Org.BouncyCastle.Asn1.Ocsp::ResponseData
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(218))
// CS Name: Org.BouncyCastle.Asn1.Ocsp.ResponseData
class CORDL_TYPE ResponseData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ResponseData() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResponseData", modifiers: " const&", def_value: None }]
constexpr ResponseData(ResponseData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResponseData", modifiers: "&&", def_value: None }]
constexpr ResponseData(ResponseData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResponseData(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr ResponseData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResponseData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResponseData& operator=(ResponseData&& o) noexcept = default;
  constexpr ResponseData& operator=(ResponseData const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_V1, put=__set_V1))  V1;

static void __set_V1(::Org::BouncyCastle::Asn1::DerInteger value) ;

static ::Org::BouncyCastle::Asn1::DerInteger __get_V1() ;

 bool __declspec(property(get=__get_versionPresent, put=__set_versionPresent))  versionPresent;

constexpr void __set_versionPresent(bool value) ;

constexpr bool __get_versionPresent() const;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 ::Org::BouncyCastle::Asn1::Ocsp::ResponderID __declspec(property(get=__get_responderID, put=__set_responderID))  responderID;

constexpr void __set_responderID(::Org::BouncyCastle::Asn1::Ocsp::ResponderID value) ;

constexpr ::Org::BouncyCastle::Asn1::Ocsp::ResponderID __get_responderID() const;

 ::Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=__get_producedAt, put=__set_producedAt))  producedAt;

constexpr void __set_producedAt(::Org::BouncyCastle::Asn1::DerGeneralizedTime value) ;

constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime __get_producedAt() const;

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_responses, put=__set_responses))  responses;

constexpr void __set_responses(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_responses() const;

 ::Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=__get_responseExtensions, put=__set_responseExtensions))  responseExtensions;

constexpr void __set_responseExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions __get_responseExtensions() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;

 ::Org::BouncyCastle::Asn1::Ocsp::ResponderID __declspec(property(get=get_ResponderID))  ResponderID;

 ::Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=get_ProducedAt))  ProducedAt;

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=get_Responses))  Responses;

 ::Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=get_ResponseExtensions))  ResponseExtensions;


// Methods

/// @brief Method GetInstance addr 0xef4d00 size 0x78 virtual false final false
static ::Org::BouncyCastle::Asn1::Ocsp::ResponseData GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xef15c8 size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::Ocsp::ResponseData GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "version", ty: "::Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }, CppParam { name: "responderID", ty: "::Org::BouncyCastle::Asn1::Ocsp::ResponderID", modifiers: "", def_value: None }, CppParam { name: "producedAt", ty: "::Org::BouncyCastle::Asn1::DerGeneralizedTime", modifiers: "", def_value: None }, CppParam { name: "responses", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }, CppParam { name: "responseExtensions", ty: "::Org::BouncyCastle::Asn1::X509::X509Extensions", modifiers: "", def_value: None }]
explicit ResponseData(::Org::BouncyCastle::Asn1::DerInteger version, ::Org::BouncyCastle::Asn1::Ocsp::ResponderID responderID, ::Org::BouncyCastle::Asn1::DerGeneralizedTime producedAt, ::Org::BouncyCastle::Asn1::Asn1Sequence responses, ::Org::BouncyCastle::Asn1::X509::X509Extensions responseExtensions) ;

/// @brief Method .ctor addr 0xef5058 size 0x50 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerInteger version, ::Org::BouncyCastle::Asn1::Ocsp::ResponderID responderID, ::Org::BouncyCastle::Asn1::DerGeneralizedTime producedAt, ::Org::BouncyCastle::Asn1::Asn1Sequence responses, ::Org::BouncyCastle::Asn1::X509::X509Extensions responseExtensions) ;

// Ctor Parameters [CppParam { name: "responderID", ty: "::Org::BouncyCastle::Asn1::Ocsp::ResponderID", modifiers: "", def_value: None }, CppParam { name: "producedAt", ty: "::Org::BouncyCastle::Asn1::DerGeneralizedTime", modifiers: "", def_value: None }, CppParam { name: "responses", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }, CppParam { name: "responseExtensions", ty: "::Org::BouncyCastle::Asn1::X509::X509Extensions", modifiers: "", def_value: None }]
explicit ResponseData(::Org::BouncyCastle::Asn1::Ocsp::ResponderID responderID, ::Org::BouncyCastle::Asn1::DerGeneralizedTime producedAt, ::Org::BouncyCastle::Asn1::Asn1Sequence responses, ::Org::BouncyCastle::Asn1::X509::X509Extensions responseExtensions) ;

/// @brief Method .ctor addr 0xef50a8 size 0x94 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Ocsp::ResponderID responderID, ::Org::BouncyCastle::Asn1::DerGeneralizedTime producedAt, ::Org::BouncyCastle::Asn1::Asn1Sequence responses, ::Org::BouncyCastle::Asn1::X509::X509Extensions responseExtensions) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit ResponseData(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xef4d78 size 0x2e0 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_Version addr 0xef513c size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method get_ResponderID addr 0xef5144 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Ocsp::ResponderID get_ResponderID() ;

/// @brief Method get_ProducedAt addr 0xef514c size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerGeneralizedTime get_ProducedAt() ;

/// @brief Method get_Responses addr 0xef5154 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Sequence get_Responses() ;

/// @brief Method get_ResponseExtensions addr 0xef515c size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::X509Extensions get_ResponseExtensions() ;

/// @brief Method ToAsn1Object addr 0xef5164 size 0x214 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Ocsp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::ResponseData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::ResponseData, "Org.BouncyCastle.Asn1.Ocsp", "ResponseData");
