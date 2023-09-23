#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::Ocsp {
class TbsRequest;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class Signature;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class OcspRequest;
}
// Type: Org.BouncyCastle.Asn1.Ocsp::OcspRequest
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(211))
// CS Name: Org.BouncyCastle.Asn1.Ocsp.OcspRequest
class CORDL_TYPE OcspRequest : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OcspRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspRequest", modifiers: " const&", def_value: None }]
constexpr OcspRequest(OcspRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspRequest", modifiers: "&&", def_value: None }]
constexpr OcspRequest(OcspRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OcspRequest(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr OcspRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OcspRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OcspRequest& operator=(OcspRequest&& o) noexcept = default;
  constexpr OcspRequest& operator=(OcspRequest const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Ocsp::TbsRequest __declspec(property(get=__get_tbsRequest, put=__set_tbsRequest))  tbsRequest;

constexpr void __set_tbsRequest(Org::BouncyCastle::Asn1::Ocsp::TbsRequest value) ;

constexpr Org::BouncyCastle::Asn1::Ocsp::TbsRequest __get_tbsRequest() const;

 Org::BouncyCastle::Asn1::Ocsp::Signature __declspec(property(get=__get_optionalSignature, put=__set_optionalSignature))  optionalSignature;

constexpr void __set_optionalSignature(Org::BouncyCastle::Asn1::Ocsp::Signature value) ;

constexpr Org::BouncyCastle::Asn1::Ocsp::Signature __get_optionalSignature() const;


// Properties

 Org::BouncyCastle::Asn1::Ocsp::TbsRequest __declspec(property(get=get_TbsRequest))  TbsRequest;

 Org::BouncyCastle::Asn1::Ocsp::Signature __declspec(property(get=get_OptionalSignature))  OptionalSignature;


// Methods

/// @brief Method GetInstance addr 0xef2938 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::Ocsp::OcspRequest GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xef2950 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Ocsp::OcspRequest GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "tbsRequest", ty: "Org::BouncyCastle::Asn1::Ocsp::TbsRequest", modifiers: "", def_value: None }, CppParam { name: "optionalSignature", ty: "Org::BouncyCastle::Asn1::Ocsp::Signature", modifiers: "", def_value: None }]
explicit OcspRequest(Org::BouncyCastle::Asn1::Ocsp::TbsRequest tbsRequest, Org::BouncyCastle::Asn1::Ocsp::Signature optionalSignature) ;

/// @brief Method .ctor addr 0xef2bf4 size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Ocsp::TbsRequest tbsRequest, Org::BouncyCastle::Asn1::Ocsp::Signature optionalSignature) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit OcspRequest(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xef2ad8 size 0x11c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_TbsRequest addr 0xef2e10 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Ocsp::TbsRequest get_TbsRequest() ;

/// @brief Method get_OptionalSignature addr 0xef2e18 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Ocsp::Signature get_OptionalSignature() ;

/// @brief Method ToAsn1Object addr 0xef2e20 size 0x114 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Ocsp::OcspRequest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Ocsp::OcspRequest, "Org.BouncyCastle.Asn1.Ocsp", "OcspRequest");
