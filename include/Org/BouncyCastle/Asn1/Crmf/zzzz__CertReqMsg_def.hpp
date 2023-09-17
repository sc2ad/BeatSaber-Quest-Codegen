#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class AttributeTypeAndValue;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class CertRequest;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class ProofOfPossession;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class CertReqMsg;
}
// Type: Org.BouncyCastle.Asn1.Crmf::CertReqMsg
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(105))
// CS Name: Org.BouncyCastle.Asn1.Crmf.CertReqMsg
class CORDL_TYPE CertReqMsg : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CertReqMsg() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertReqMsg", modifiers: " const&", def_value: None }]
constexpr CertReqMsg(CertReqMsg const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertReqMsg", modifiers: "&&", def_value: None }]
constexpr CertReqMsg(CertReqMsg&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertReqMsg(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CertReqMsg& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertReqMsg& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertReqMsg& operator=(CertReqMsg&& o) noexcept = default;
  constexpr CertReqMsg& operator=(CertReqMsg const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Crmf::CertRequest __declspec(property(get=__get_certReq, put=__set_certReq))  certReq;

constexpr void __set_certReq(::Org::BouncyCastle::Asn1::Crmf::CertRequest value) ;

constexpr ::Org::BouncyCastle::Asn1::Crmf::CertRequest __get_certReq() const;

 ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession __declspec(property(get=__get_popo, put=__set_popo))  popo;

constexpr void __set_popo(::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession value) ;

constexpr ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession __get_popo() const;

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_regInfo, put=__set_regInfo))  regInfo;

constexpr void __set_regInfo(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_regInfo() const;


// Properties

 ::Org::BouncyCastle::Asn1::Crmf::CertRequest __declspec(property(get=get_CertReq))  CertReq;

 ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession __declspec(property(get=get_Popo))  Popo;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CertReqMsg(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdf5f6c size 0x150 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdf5ec0 size 0xa4 virtual false final false
static ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0xdf62e8 size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::Crmf::CertReqMsg GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

// Ctor Parameters [CppParam { name: "certReq", ty: "::Org::BouncyCastle::Asn1::Crmf::CertRequest", modifiers: "", def_value: None }, CppParam { name: "popo", ty: "::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession", modifiers: "", def_value: None }, CppParam { name: "regInfo", ty: "::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue>", modifiers: "", def_value: None }]
explicit CertReqMsg(::Org::BouncyCastle::Asn1::Crmf::CertRequest certReq, ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession popo, ::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue> regInfo) ;

/// @brief Method .ctor addr 0xdf6300 size 0xdc virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Crmf::CertRequest certReq, ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession popo, ::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue> regInfo) ;

/// @brief Method get_CertReq addr 0xdf63dc size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Crmf::CertRequest get_CertReq() ;

/// @brief Method get_Popo addr 0xdf63e4 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Crmf::ProofOfPossession get_Popo() ;

/// @brief Method GetRegInfo addr 0xdf63ec size 0xfc virtual true final false
 ::ArrayW<::Org::BouncyCastle::Asn1::Crmf::AttributeTypeAndValue> GetRegInfo() ;

/// @brief Method ToAsn1Object addr 0xdf64e8 size 0x174 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Crmf
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::CertReqMsg);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::CertReqMsg, "Org.BouncyCastle.Asn1.Crmf", "CertReqMsg");
