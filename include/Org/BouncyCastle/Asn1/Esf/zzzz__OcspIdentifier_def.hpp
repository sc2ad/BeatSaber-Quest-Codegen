#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponderID;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class OcspIdentifier;
}
// Type: Org.BouncyCastle.Asn1.Esf::OcspIdentifier
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(145))
// CS Name: Org.BouncyCastle.Asn1.Esf.OcspIdentifier
class CORDL_TYPE OcspIdentifier : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OcspIdentifier() = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspIdentifier", modifiers: " const&", def_value: None }]
constexpr OcspIdentifier(OcspIdentifier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OcspIdentifier", modifiers: "&&", def_value: None }]
constexpr OcspIdentifier(OcspIdentifier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OcspIdentifier(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr OcspIdentifier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OcspIdentifier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OcspIdentifier& operator=(OcspIdentifier&& o) noexcept = default;
  constexpr OcspIdentifier& operator=(OcspIdentifier const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Ocsp::ResponderID __declspec(property(get=__get_ocspResponderID, put=__set_ocspResponderID))  ocspResponderID;

constexpr void __set_ocspResponderID(Org::BouncyCastle::Asn1::Ocsp::ResponderID value) ;

constexpr Org::BouncyCastle::Asn1::Ocsp::ResponderID __get_ocspResponderID() const;

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=__get_producedAt, put=__set_producedAt))  producedAt;

constexpr void __set_producedAt(Org::BouncyCastle::Asn1::DerGeneralizedTime value) ;

constexpr Org::BouncyCastle::Asn1::DerGeneralizedTime __get_producedAt() const;


// Properties

 Org::BouncyCastle::Asn1::Ocsp::ResponderID __declspec(property(get=get_OcspResponderID))  OcspResponderID;

 System::DateTime __declspec(property(get=get_ProducedAt))  ProducedAt;


// Methods

/// @brief Method GetInstance addr 0xe0530c size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Esf::OcspIdentifier GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit OcspIdentifier(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe05494 size 0x210 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "ocspResponderID", ty: "Org::BouncyCastle::Asn1::Ocsp::ResponderID", modifiers: "", def_value: None }, CppParam { name: "producedAt", ty: "System::DateTime", modifiers: "", def_value: None }]
explicit OcspIdentifier(Org::BouncyCastle::Asn1::Ocsp::ResponderID ocspResponderID, System::DateTime producedAt) ;

/// @brief Method .ctor addr 0xe056a4 size 0xc4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Ocsp::ResponderID ocspResponderID, System::DateTime producedAt) ;

/// @brief Method get_OcspResponderID addr 0xe05768 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Ocsp::ResponderID get_OcspResponderID() ;

/// @brief Method get_ProducedAt addr 0xe05770 size 0x1c virtual false final false
 System::DateTime get_ProducedAt() ;

/// @brief Method ToAsn1Object addr 0xe0578c size 0xf0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Esf::OcspIdentifier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Esf::OcspIdentifier, "Org.BouncyCastle.Asn1.Esf", "OcspIdentifier");
