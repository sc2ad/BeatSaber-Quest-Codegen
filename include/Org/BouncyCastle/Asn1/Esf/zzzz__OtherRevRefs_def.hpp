#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class OtherRevRefs;
}
// Type: Org.BouncyCastle.Asn1.Esf::OtherRevRefs
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(151))
// CS Name: Org.BouncyCastle.Asn1.Esf.OtherRevRefs
class CORDL_TYPE OtherRevRefs : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OtherRevRefs() = default;

// Ctor Parameters [CppParam { name: "", ty: "OtherRevRefs", modifiers: " const&", def_value: None }]
constexpr OtherRevRefs(OtherRevRefs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OtherRevRefs", modifiers: "&&", def_value: None }]
constexpr OtherRevRefs(OtherRevRefs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OtherRevRefs(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr OtherRevRefs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OtherRevRefs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OtherRevRefs& operator=(OtherRevRefs&& o) noexcept = default;
  constexpr OtherRevRefs& operator=(OtherRevRefs const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_otherRevRefType, put=__set_otherRevRefType))  otherRevRefType;

constexpr void __set_otherRevRefType(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_otherRevRefType() const;

 ::Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=__get_otherRevRefs, put=__set_otherRevRefs))  otherRevRefs;

constexpr void __set_otherRevRefs(::Org::BouncyCastle::Asn1::Asn1Object value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Object __get_otherRevRefs() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_OtherRevRefType))  OtherRevRefType;

 ::Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=get_OtherRevRefsObject))  OtherRevRefsObject;


// Methods

/// @brief Method GetInstance addr 0xe049c0 size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::Esf::OtherRevRefs GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit OtherRevRefs(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe07298 size 0x208 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "otherRevRefType", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "otherRevRefs", ty: "::Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit OtherRevRefs(::Org::BouncyCastle::Asn1::DerObjectIdentifier otherRevRefType, ::Org::BouncyCastle::Asn1::Asn1Encodable otherRevRefs) ;

/// @brief Method .ctor addr 0xe074a0 size 0xb8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier otherRevRefType, ::Org::BouncyCastle::Asn1::Asn1Encodable otherRevRefs) ;

/// @brief Method get_OtherRevRefType addr 0xe07558 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier get_OtherRevRefType() ;

/// @brief Method get_OtherRevRefsObject addr 0xe07560 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Object get_OtherRevRefsObject() ;

/// @brief Method ToAsn1Object addr 0xe07568 size 0xf0 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::OtherRevRefs);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::OtherRevRefs, "Org.BouncyCastle.Asn1.Esf", "OtherRevRefs");
