#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1 {
class DerIA5String;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class CrlID;
}
// Type: Org.BouncyCastle.Asn1.Ocsp::CrlID
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(209))
// CS Name: Org.BouncyCastle.Asn1.Ocsp.CrlID
class CORDL_TYPE CrlID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CrlID() = default;

// Ctor Parameters [CppParam { name: "", ty: "CrlID", modifiers: " const&", def_value: None }]
constexpr CrlID(CrlID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CrlID", modifiers: "&&", def_value: None }]
constexpr CrlID(CrlID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CrlID(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CrlID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CrlID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CrlID& operator=(CrlID&& o) noexcept = default;
  constexpr CrlID& operator=(CrlID const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerIA5String __declspec(property(get=__get_crlUrl, put=__set_crlUrl))  crlUrl;

constexpr void __set_crlUrl(::Org::BouncyCastle::Asn1::DerIA5String value) ;

constexpr ::Org::BouncyCastle::Asn1::DerIA5String __get_crlUrl() const;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_crlNum, put=__set_crlNum))  crlNum;

constexpr void __set_crlNum(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_crlNum() const;

 ::Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=__get_crlTime, put=__set_crlTime))  crlTime;

constexpr void __set_crlTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime value) ;

constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime __get_crlTime() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerIA5String __declspec(property(get=get_CrlUrl))  CrlUrl;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_CrlNum))  CrlNum;

 ::Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=get_CrlTime))  CrlTime;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CrlID(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xef21b4 size 0x3c0 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_CrlUrl addr 0xef2574 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerIA5String get_CrlUrl() ;

/// @brief Method get_CrlNum addr 0xef257c size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerInteger get_CrlNum() ;

/// @brief Method get_CrlTime addr 0xef2584 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerGeneralizedTime get_CrlTime() ;

/// @brief Method ToAsn1Object addr 0xef258c size 0xd8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Ocsp
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::CrlID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::CrlID, "Org.BouncyCastle.Asn1.Ocsp", "CrlID");
