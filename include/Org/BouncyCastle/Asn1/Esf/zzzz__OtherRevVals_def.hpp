#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class OtherRevVals;
}
// Type: Org.BouncyCastle.Asn1.Esf::OtherRevVals
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(152))
// CS Name: Org.BouncyCastle.Asn1.Esf.OtherRevVals
class CORDL_TYPE OtherRevVals : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OtherRevVals() = default;

// Ctor Parameters [CppParam { name: "", ty: "OtherRevVals", modifiers: " const&", def_value: None }]
constexpr OtherRevVals(OtherRevVals const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OtherRevVals", modifiers: "&&", def_value: None }]
constexpr OtherRevVals(OtherRevVals&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OtherRevVals(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr OtherRevVals& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OtherRevVals& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OtherRevVals& operator=(OtherRevVals&& o) noexcept = default;
  constexpr OtherRevVals& operator=(OtherRevVals const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_otherRevValType, put=__set_otherRevValType))  otherRevValType;

constexpr void __set_otherRevValType(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_otherRevValType() const;

 Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=__get_otherRevVals, put=__set_otherRevVals))  otherRevVals;

constexpr void __set_otherRevVals(Org::BouncyCastle::Asn1::Asn1Object value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Object __get_otherRevVals() const;


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_OtherRevValType))  OtherRevValType;

 Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=get_OtherRevValsObject))  OtherRevValsObject;


// Methods

/// @brief Method GetInstance addr 0xe07658 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Esf::OtherRevVals GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Esf::OtherRevVals New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe077e0 size 0x208 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

static Org::BouncyCastle::Asn1::Esf::OtherRevVals New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier otherRevValType, Org::BouncyCastle::Asn1::Asn1Encodable otherRevVals) ;

/// @brief Method .ctor addr 0xe079e8 size 0xb8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier otherRevValType, Org::BouncyCastle::Asn1::Asn1Encodable otherRevVals) ;

/// @brief Method get_OtherRevValType addr 0xe07aa0 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_OtherRevValType() ;

/// @brief Method get_OtherRevValsObject addr 0xe07aa8 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Object get_OtherRevValsObject() ;

/// @brief Method ToAsn1Object addr 0xe07ab0 size 0xf0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Esf::OtherRevVals);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Esf::OtherRevVals, "Org.BouncyCastle.Asn1.Esf", "OtherRevVals");
