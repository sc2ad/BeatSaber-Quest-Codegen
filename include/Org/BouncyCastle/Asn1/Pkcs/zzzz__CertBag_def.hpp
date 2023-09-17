#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class CertBag;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::CertBag
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(228))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.CertBag
class CORDL_TYPE CertBag : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CertBag() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertBag", modifiers: " const&", def_value: None }]
constexpr CertBag(CertBag const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertBag", modifiers: "&&", def_value: None }]
constexpr CertBag(CertBag&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertBag(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CertBag& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertBag& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertBag& operator=(CertBag&& o) noexcept = default;
  constexpr CertBag& operator=(CertBag const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_certID, put=__set_certID))  certID;

constexpr void __set_certID(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_certID() const;

 ::Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=__get_certValue, put=__set_certValue))  certValue;

constexpr void __set_certValue(::Org::BouncyCastle::Asn1::Asn1Object value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Object __get_certValue() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_CertID))  CertID;

 ::Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=get_CertValue))  CertValue;


// Methods

/// @brief Method GetInstance addr 0xef7c24 size 0xa4 virtual false final false
static ::Org::BouncyCastle::Asn1::Pkcs::CertBag GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CertBag(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xef7cc8 size 0x13c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "certID", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "certValue", ty: "::Org::BouncyCastle::Asn1::Asn1Object", modifiers: "", def_value: None }]
explicit CertBag(::Org::BouncyCastle::Asn1::DerObjectIdentifier certID, ::Org::BouncyCastle::Asn1::Asn1Object certValue) ;

/// @brief Method .ctor addr 0xef7e04 size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier certID, ::Org::BouncyCastle::Asn1::Asn1Object certValue) ;

/// @brief Method get_CertID addr 0xef7e30 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier get_CertID() ;

/// @brief Method get_CertValue addr 0xef7e38 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object get_CertValue() ;

/// @brief Method ToAsn1Object addr 0xef7e40 size 0x120 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::CertBag);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::CertBag, "Org.BouncyCastle.Asn1.Pkcs", "CertBag");
