#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class CertID;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class CertStatus;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class SingleResponse;
}
// Type: Org.BouncyCastle.Asn1.Ocsp::SingleResponse
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(222))
// CS Name: Org.BouncyCastle.Asn1.Ocsp.SingleResponse
class CORDL_TYPE SingleResponse : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SingleResponse() = default;

// Ctor Parameters [CppParam { name: "", ty: "SingleResponse", modifiers: " const&", def_value: None }]
constexpr SingleResponse(SingleResponse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SingleResponse", modifiers: "&&", def_value: None }]
constexpr SingleResponse(SingleResponse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SingleResponse(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr SingleResponse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SingleResponse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SingleResponse& operator=(SingleResponse&& o) noexcept = default;
  constexpr SingleResponse& operator=(SingleResponse const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Ocsp::CertID __declspec(property(get=__get_certID, put=__set_certID))  certID;

constexpr void __set_certID(::Org::BouncyCastle::Asn1::Ocsp::CertID value) ;

constexpr ::Org::BouncyCastle::Asn1::Ocsp::CertID __get_certID() const;

 ::Org::BouncyCastle::Asn1::Ocsp::CertStatus __declspec(property(get=__get_certStatus, put=__set_certStatus))  certStatus;

constexpr void __set_certStatus(::Org::BouncyCastle::Asn1::Ocsp::CertStatus value) ;

constexpr ::Org::BouncyCastle::Asn1::Ocsp::CertStatus __get_certStatus() const;

 ::Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=__get_thisUpdate, put=__set_thisUpdate))  thisUpdate;

constexpr void __set_thisUpdate(::Org::BouncyCastle::Asn1::DerGeneralizedTime value) ;

constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime __get_thisUpdate() const;

 ::Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=__get_nextUpdate, put=__set_nextUpdate))  nextUpdate;

constexpr void __set_nextUpdate(::Org::BouncyCastle::Asn1::DerGeneralizedTime value) ;

constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime __get_nextUpdate() const;

 ::Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=__get_singleExtensions, put=__set_singleExtensions))  singleExtensions;

constexpr void __set_singleExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::X509Extensions __get_singleExtensions() const;


// Properties

 ::Org::BouncyCastle::Asn1::Ocsp::CertID __declspec(property(get=get_CertId))  CertId;

 ::Org::BouncyCastle::Asn1::Ocsp::CertStatus __declspec(property(get=get_CertStatus))  CertStatus;

 ::Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=get_ThisUpdate))  ThisUpdate;

 ::Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=get_NextUpdate))  NextUpdate;

 ::Org::BouncyCastle::Asn1::X509::X509Extensions __declspec(property(get=get_SingleExtensions))  SingleExtensions;


// Methods

// Ctor Parameters [CppParam { name: "certID", ty: "::Org::BouncyCastle::Asn1::Ocsp::CertID", modifiers: "", def_value: None }, CppParam { name: "certStatus", ty: "::Org::BouncyCastle::Asn1::Ocsp::CertStatus", modifiers: "", def_value: None }, CppParam { name: "thisUpdate", ty: "::Org::BouncyCastle::Asn1::DerGeneralizedTime", modifiers: "", def_value: None }, CppParam { name: "nextUpdate", ty: "::Org::BouncyCastle::Asn1::DerGeneralizedTime", modifiers: "", def_value: None }, CppParam { name: "singleExtensions", ty: "::Org::BouncyCastle::Asn1::X509::X509Extensions", modifiers: "", def_value: None }]
explicit SingleResponse(::Org::BouncyCastle::Asn1::Ocsp::CertID certID, ::Org::BouncyCastle::Asn1::Ocsp::CertStatus certStatus, ::Org::BouncyCastle::Asn1::DerGeneralizedTime thisUpdate, ::Org::BouncyCastle::Asn1::DerGeneralizedTime nextUpdate, ::Org::BouncyCastle::Asn1::X509::X509Extensions singleExtensions) ;

/// @brief Method .ctor addr 0xef6260 size 0x50 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Ocsp::CertID certID, ::Org::BouncyCastle::Asn1::Ocsp::CertStatus certStatus, ::Org::BouncyCastle::Asn1::DerGeneralizedTime thisUpdate, ::Org::BouncyCastle::Asn1::DerGeneralizedTime nextUpdate, ::Org::BouncyCastle::Asn1::X509::X509Extensions singleExtensions) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit SingleResponse(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xef62b0 size 0x2b8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xef6568 size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xef6580 size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::Ocsp::SingleResponse GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_CertId addr 0xef6708 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Ocsp::CertID get_CertId() ;

/// @brief Method get_CertStatus addr 0xef6710 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Ocsp::CertStatus get_CertStatus() ;

/// @brief Method get_ThisUpdate addr 0xef6718 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerGeneralizedTime get_ThisUpdate() ;

/// @brief Method get_NextUpdate addr 0xef6720 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerGeneralizedTime get_NextUpdate() ;

/// @brief Method get_SingleExtensions addr 0xef6728 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::X509Extensions get_SingleExtensions() ;

/// @brief Method ToAsn1Object addr 0xef6730 size 0x184 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Ocsp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::SingleResponse);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::SingleResponse, "Org.BouncyCastle.Asn1.Ocsp", "SingleResponse");
