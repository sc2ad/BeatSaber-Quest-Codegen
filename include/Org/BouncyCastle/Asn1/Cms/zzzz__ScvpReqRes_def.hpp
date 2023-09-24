#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class ScvpReqRes;
}
// Type: Org.BouncyCastle.Asn1.Cms::ScvpReqRes
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(92))
// CS Name: Org.BouncyCastle.Asn1.Cms.ScvpReqRes
class CORDL_TYPE ScvpReqRes : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ScvpReqRes() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScvpReqRes", modifiers: " const&", def_value: None }]
constexpr ScvpReqRes(ScvpReqRes const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScvpReqRes", modifiers: "&&", def_value: None }]
constexpr ScvpReqRes(ScvpReqRes&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScvpReqRes(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr ScvpReqRes& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScvpReqRes& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScvpReqRes& operator=(ScvpReqRes&& o) noexcept = default;
  constexpr ScvpReqRes& operator=(ScvpReqRes const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Cms::ContentInfo __declspec(property(get=__get_request, put=__set_request))  request;

constexpr void __set_request(Org::BouncyCastle::Asn1::Cms::ContentInfo value) ;

constexpr Org::BouncyCastle::Asn1::Cms::ContentInfo __get_request() const;

 Org::BouncyCastle::Asn1::Cms::ContentInfo __declspec(property(get=__get_response, put=__set_response))  response;

constexpr void __set_response(Org::BouncyCastle::Asn1::Cms::ContentInfo value) ;

constexpr Org::BouncyCastle::Asn1::Cms::ContentInfo __get_response() const;


// Properties

 Org::BouncyCastle::Asn1::Cms::ContentInfo __declspec(property(get=get_Request))  Request;

 Org::BouncyCastle::Asn1::Cms::ContentInfo __declspec(property(get=get_Response))  Response;


// Methods

/// @brief Method GetInstance addr 0xdf040c size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Cms::ScvpReqRes GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Cms::ScvpReqRes New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdf04b0 size 0xfc virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

static Org::BouncyCastle::Asn1::Cms::ScvpReqRes New_ctor(Org::BouncyCastle::Asn1::Cms::ContentInfo response) ;

/// @brief Method .ctor addr 0xdf05ac size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::ContentInfo response) ;

static Org::BouncyCastle::Asn1::Cms::ScvpReqRes New_ctor(Org::BouncyCastle::Asn1::Cms::ContentInfo request, Org::BouncyCastle::Asn1::Cms::ContentInfo response) ;

/// @brief Method .ctor addr 0xdf05d4 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Cms::ContentInfo request, Org::BouncyCastle::Asn1::Cms::ContentInfo response) ;

/// @brief Method get_Request addr 0xdf0600 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Cms::ContentInfo get_Request() ;

/// @brief Method get_Response addr 0xdf0608 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Cms::ContentInfo get_Response() ;

/// @brief Method ToAsn1Object addr 0xdf0610 size 0xb8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::ScvpReqRes);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::ScvpReqRes, "Org.BouncyCastle.Asn1.Cms", "ScvpReqRes");
