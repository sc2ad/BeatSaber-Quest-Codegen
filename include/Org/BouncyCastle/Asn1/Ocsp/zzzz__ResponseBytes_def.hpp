#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponseBytes;
}
// Type: Org.BouncyCastle.Asn1.Ocsp::ResponseBytes
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(217))
// CS Name: Org.BouncyCastle.Asn1.Ocsp.ResponseBytes
class CORDL_TYPE ResponseBytes : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ResponseBytes() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResponseBytes", modifiers: " const&", def_value: None }]
constexpr ResponseBytes(ResponseBytes const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResponseBytes", modifiers: "&&", def_value: None }]
constexpr ResponseBytes(ResponseBytes&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResponseBytes(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr ResponseBytes& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResponseBytes& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResponseBytes& operator=(ResponseBytes&& o) noexcept = default;
  constexpr ResponseBytes& operator=(ResponseBytes const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_responseType, put=__set_responseType))  responseType;

constexpr void __set_responseType(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_responseType() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_response, put=__set_response))  response;

constexpr void __set_response(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_response() const;


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_ResponseType))  ResponseType;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=get_Response))  Response;


// Methods

/// @brief Method GetInstance addr 0xef3404 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::Ocsp::ResponseBytes GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xef48a4 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Ocsp::ResponseBytes GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Ocsp::ResponseBytes New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier responseType, Org::BouncyCastle::Asn1::Asn1OctetString response) ;

/// @brief Method .ctor addr 0xef4b5c size 0xa4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier responseType, Org::BouncyCastle::Asn1::Asn1OctetString response) ;

static Org::BouncyCastle::Asn1::Ocsp::ResponseBytes New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xef4a2c size 0x130 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_ResponseType addr 0xef4c00 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_ResponseType() ;

/// @brief Method get_Response addr 0xef4c08 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1OctetString get_Response() ;

/// @brief Method ToAsn1Object addr 0xef4c10 size 0xf0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Ocsp::ResponseBytes);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Ocsp::ResponseBytes, "Org.BouncyCastle.Asn1.Ocsp", "ResponseBytes");
