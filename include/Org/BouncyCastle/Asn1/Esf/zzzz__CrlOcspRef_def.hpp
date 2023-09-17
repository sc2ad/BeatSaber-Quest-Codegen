#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Org::BouncyCastle::Asn1::Esf {
class OcspListID;
}
namespace Org::BouncyCastle::Asn1::Esf {
class CrlListID;
}
namespace Org::BouncyCastle::Asn1::Esf {
class OtherRevRefs;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class CrlOcspRef;
}
// Type: Org.BouncyCastle.Asn1.Esf::CrlOcspRef
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(142))
// CS Name: Org.BouncyCastle.Asn1.Esf.CrlOcspRef
class CORDL_TYPE CrlOcspRef : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CrlOcspRef() = default;

// Ctor Parameters [CppParam { name: "", ty: "CrlOcspRef", modifiers: " const&", def_value: None }]
constexpr CrlOcspRef(CrlOcspRef const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CrlOcspRef", modifiers: "&&", def_value: None }]
constexpr CrlOcspRef(CrlOcspRef&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CrlOcspRef(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CrlOcspRef& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CrlOcspRef& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CrlOcspRef& operator=(CrlOcspRef&& o) noexcept = default;
  constexpr CrlOcspRef& operator=(CrlOcspRef const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::Esf::CrlListID __declspec(property(get=__get_crlids, put=__set_crlids))  crlids;

constexpr void __set_crlids(::Org::BouncyCastle::Asn1::Esf::CrlListID value) ;

constexpr ::Org::BouncyCastle::Asn1::Esf::CrlListID __get_crlids() const;

 ::Org::BouncyCastle::Asn1::Esf::OcspListID __declspec(property(get=__get_ocspids, put=__set_ocspids))  ocspids;

constexpr void __set_ocspids(::Org::BouncyCastle::Asn1::Esf::OcspListID value) ;

constexpr ::Org::BouncyCastle::Asn1::Esf::OcspListID __get_ocspids() const;

 ::Org::BouncyCastle::Asn1::Esf::OtherRevRefs __declspec(property(get=__get_otherRev, put=__set_otherRev))  otherRev;

constexpr void __set_otherRev(::Org::BouncyCastle::Asn1::Esf::OtherRevRefs value) ;

constexpr ::Org::BouncyCastle::Asn1::Esf::OtherRevRefs __get_otherRev() const;


// Properties

 ::Org::BouncyCastle::Asn1::Esf::CrlListID __declspec(property(get=get_CrlIDs))  CrlIDs;

 ::Org::BouncyCastle::Asn1::Esf::OcspListID __declspec(property(get=get_OcspIDs))  OcspIDs;

 ::Org::BouncyCastle::Asn1::Esf::OtherRevRefs __declspec(property(get=get_OtherRev))  OtherRev;


// Methods

/// @brief Method GetInstance addr 0xe02d48 size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::Esf::CrlOcspRef GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CrlOcspRef(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe04454 size 0x3e4 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "crlids", ty: "::Org::BouncyCastle::Asn1::Esf::CrlListID", modifiers: "", def_value: None }, CppParam { name: "ocspids", ty: "::Org::BouncyCastle::Asn1::Esf::OcspListID", modifiers: "", def_value: None }, CppParam { name: "otherRev", ty: "::Org::BouncyCastle::Asn1::Esf::OtherRevRefs", modifiers: "", def_value: None }]
explicit CrlOcspRef(::Org::BouncyCastle::Asn1::Esf::CrlListID crlids, ::Org::BouncyCastle::Asn1::Esf::OcspListID ocspids, ::Org::BouncyCastle::Asn1::Esf::OtherRevRefs otherRev) ;

/// @brief Method .ctor addr 0xe04b48 size 0x3c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Esf::CrlListID crlids, ::Org::BouncyCastle::Asn1::Esf::OcspListID ocspids, ::Org::BouncyCastle::Asn1::Esf::OtherRevRefs otherRev) ;

/// @brief Method get_CrlIDs addr 0xe04b84 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Esf::CrlListID get_CrlIDs() ;

/// @brief Method get_OcspIDs addr 0xe04b8c size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Esf::OcspListID get_OcspIDs() ;

/// @brief Method get_OtherRev addr 0xe04b94 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Esf::OtherRevRefs get_OtherRev() ;

/// @brief Method ToAsn1Object addr 0xe04b9c size 0x19c virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::CrlOcspRef);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::CrlOcspRef, "Org.BouncyCastle.Asn1.Esf", "CrlOcspRef");
