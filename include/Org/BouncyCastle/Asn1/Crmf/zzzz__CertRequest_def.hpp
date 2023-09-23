#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::Crmf {
class Controls;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertTemplate;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class CertRequest;
}
// Type: Org.BouncyCastle.Asn1.Crmf::CertRequest
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(106))
// CS Name: Org.BouncyCastle.Asn1.Crmf.CertRequest
class CORDL_TYPE CertRequest : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CertRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertRequest", modifiers: " const&", def_value: None }]
constexpr CertRequest(CertRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertRequest", modifiers: "&&", def_value: None }]
constexpr CertRequest(CertRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertRequest(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CertRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertRequest& operator=(CertRequest&& o) noexcept = default;
  constexpr CertRequest& operator=(CertRequest const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_certReqId, put=__set_certReqId))  certReqId;

constexpr void __set_certReqId(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_certReqId() const;

 Org::BouncyCastle::Asn1::Crmf::CertTemplate __declspec(property(get=__get_certTemplate, put=__set_certTemplate))  certTemplate;

constexpr void __set_certTemplate(Org::BouncyCastle::Asn1::Crmf::CertTemplate value) ;

constexpr Org::BouncyCastle::Asn1::Crmf::CertTemplate __get_certTemplate() const;

 Org::BouncyCastle::Asn1::Crmf::Controls __declspec(property(get=__get_controls, put=__set_controls))  controls;

constexpr void __set_controls(Org::BouncyCastle::Asn1::Crmf::Controls value) ;

constexpr Org::BouncyCastle::Asn1::Crmf::Controls __get_controls() const;


// Properties

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_CertReqID))  CertReqID;

 Org::BouncyCastle::Asn1::Crmf::CertTemplate __declspec(property(get=get_CertTemplate))  CertTemplate;

 Org::BouncyCastle::Asn1::Crmf::Controls __declspec(property(get=get_Controls))  Controls;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CertRequest(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdf665c size 0x9c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdf60bc size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Crmf::CertRequest GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "certReqId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "certTemplate", ty: "Org::BouncyCastle::Asn1::Crmf::CertTemplate", modifiers: "", def_value: None }, CppParam { name: "controls", ty: "Org::BouncyCastle::Asn1::Crmf::Controls", modifiers: "", def_value: None }]
explicit CertRequest(int32_t certReqId, Org::BouncyCastle::Asn1::Crmf::CertTemplate certTemplate, Org::BouncyCastle::Asn1::Crmf::Controls controls) ;

/// @brief Method .ctor addr 0xdf6928 size 0x8c virtual false final false
 void _ctor(int32_t certReqId, Org::BouncyCastle::Asn1::Crmf::CertTemplate certTemplate, Org::BouncyCastle::Asn1::Crmf::Controls controls) ;

// Ctor Parameters [CppParam { name: "certReqId", ty: "Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }, CppParam { name: "certTemplate", ty: "Org::BouncyCastle::Asn1::Crmf::CertTemplate", modifiers: "", def_value: None }, CppParam { name: "controls", ty: "Org::BouncyCastle::Asn1::Crmf::Controls", modifiers: "", def_value: None }]
explicit CertRequest(Org::BouncyCastle::Asn1::DerInteger certReqId, Org::BouncyCastle::Asn1::Crmf::CertTemplate certTemplate, Org::BouncyCastle::Asn1::Crmf::Controls controls) ;

/// @brief Method .ctor addr 0xdf69b4 size 0x3c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerInteger certReqId, Org::BouncyCastle::Asn1::Crmf::CertTemplate certTemplate, Org::BouncyCastle::Asn1::Crmf::Controls controls) ;

/// @brief Method get_CertReqID addr 0xdf69f0 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerInteger get_CertReqID() ;

/// @brief Method get_CertTemplate addr 0xdf69f8 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Crmf::CertTemplate get_CertTemplate() ;

/// @brief Method get_Controls addr 0xdf6a00 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Crmf::Controls get_Controls() ;

/// @brief Method ToAsn1Object addr 0xdf6a08 size 0x174 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Crmf::CertRequest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Crmf::CertRequest, "Org.BouncyCastle.Asn1.Crmf", "CertRequest");
