#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class TbsRequest;
}
// Type: Org.BouncyCastle.Asn1.Ocsp::TbsRequest
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(223))
// CS Name: Org.BouncyCastle.Asn1.Ocsp.TbsRequest
class CORDL_TYPE TbsRequest : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~TbsRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "TbsRequest", modifiers: " const&", def_value: None }]
constexpr TbsRequest(TbsRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TbsRequest", modifiers: "&&", def_value: None }]
constexpr TbsRequest(TbsRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TbsRequest(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr TbsRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TbsRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TbsRequest& operator=(TbsRequest&& o) noexcept = default;
  constexpr TbsRequest& operator=(TbsRequest const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_V1, put=__set_V1))  V1;

static void __set_V1(::Org::BouncyCastle::Asn1::DerInteger value) ;

static ::Org::BouncyCastle::Asn1::DerInteger __get_V1() ;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 ::Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=__get_requestorName, put=__set_requestorName))  requestorName;

constexpr void __set_requestorName(::Org::BouncyCastle::Asn1::X509::GeneralName value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName __get_requestorName() const;

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_requestList, put=__set_requestList))  requestList;

constexpr void __set_requestList(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_requestList() const;

 ::Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=__get_requestExtensions, put=__set_requestExtensions))  requestExtensions;

constexpr void __set_requestExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions __get_requestExtensions() const;

 bool __declspec(property(get=__get_versionSet, put=__set_versionSet))  versionSet;

constexpr void __set_versionSet(bool value) ;

constexpr bool __get_versionSet() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;

 ::Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=get_RequestorName))  RequestorName;

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=get_RequestList))  RequestList;

 ::Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=get_RequestExtensions))  RequestExtensions;


// Methods

/// @brief Method GetInstance addr 0xef68b4 size 0x78 virtual false final false
static ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xef2c70 size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::Ocsp::TbsRequest GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "requestorName", ty: "::Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }, CppParam { name: "requestList", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }, CppParam { name: "requestExtensions", ty: "::Org::BouncyCastle::Asn1::X509::X509Extensions", modifiers: "", def_value: None }]
explicit TbsRequest(::Org::BouncyCastle::Asn1::X509::GeneralName requestorName, ::Org::BouncyCastle::Asn1::Asn1Sequence requestList, ::Org::BouncyCastle::Asn1::X509::X509Extensions requestExtensions) ;

/// @brief Method .ctor addr 0xef6c00 size 0x8c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralName requestorName, ::Org::BouncyCastle::Asn1::Asn1Sequence requestList, ::Org::BouncyCastle::Asn1::X509::X509Extensions requestExtensions) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit TbsRequest(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xef692c size 0x2d4 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_Version addr 0xef6c8c size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method get_RequestorName addr 0xef6c94 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::GeneralName get_RequestorName() ;

/// @brief Method get_RequestList addr 0xef6c9c size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Sequence get_RequestList() ;

/// @brief Method get_RequestExtensions addr 0xef6ca4 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::X509Extensions get_RequestExtensions() ;

/// @brief Method ToAsn1Object addr 0xef6cac size 0x174 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Ocsp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::TbsRequest, "Org.BouncyCastle.Asn1.Ocsp", "TbsRequest");
