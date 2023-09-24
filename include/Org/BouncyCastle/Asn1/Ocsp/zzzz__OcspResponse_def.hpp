#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class OcspResponseStatus;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponseBytes;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class OcspResponse;
}
// Type: Org.BouncyCastle.Asn1.Ocsp::OcspResponse
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(212))
// CS Name: Org.BouncyCastle.Asn1.Ocsp.OcspResponse
class CORDL_TYPE OcspResponse : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OcspResponse() = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspResponse", modifiers: " const&", def_value: None }]
constexpr OcspResponse(OcspResponse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspResponse", modifiers: "&&", def_value: None }]
constexpr OcspResponse(OcspResponse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OcspResponse(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr OcspResponse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OcspResponse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OcspResponse& operator=(OcspResponse&& o) noexcept = default;
  constexpr OcspResponse& operator=(OcspResponse const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus __declspec(property(get=__get_responseStatus, put=__set_responseStatus))  responseStatus;

constexpr void __set_responseStatus(Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus value) ;

constexpr Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus __get_responseStatus() const;

 Org::BouncyCastle::Asn1::Ocsp::ResponseBytes __declspec(property(get=__get_responseBytes, put=__set_responseBytes))  responseBytes;

constexpr void __set_responseBytes(Org::BouncyCastle::Asn1::Ocsp::ResponseBytes value) ;

constexpr Org::BouncyCastle::Asn1::Ocsp::ResponseBytes __get_responseBytes() const;


// Properties

 Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus __declspec(property(get=get_ResponseStatus))  ResponseStatus;

 Org::BouncyCastle::Asn1::Ocsp::ResponseBytes __declspec(property(get=get_ResponseBytes))  ResponseBytes;


// Methods

/// @brief Method GetInstance addr 0xef2f34 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::Ocsp::OcspResponse GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xef2f4c size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Ocsp::OcspResponse GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Ocsp::OcspResponse New_ctor(Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus responseStatus, Org::BouncyCastle::Asn1::Ocsp::ResponseBytes responseBytes) ;

/// @brief Method .ctor addr 0xef322c size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus responseStatus, Org::BouncyCastle::Asn1::Ocsp::ResponseBytes responseBytes) ;

static Org::BouncyCastle::Asn1::Ocsp::OcspResponse New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xef30d4 size 0x158 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_ResponseStatus addr 0xef341c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Ocsp::OcspResponseStatus get_ResponseStatus() ;

/// @brief Method get_ResponseBytes addr 0xef3424 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Ocsp::ResponseBytes get_ResponseBytes() ;

/// @brief Method ToAsn1Object addr 0xef342c size 0x114 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Ocsp::OcspResponse);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Ocsp::OcspResponse, "Org.BouncyCastle.Asn1.Ocsp", "OcspResponse");
