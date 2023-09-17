#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::X509 {
class ReasonFlags;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System::Text {
class StringBuilder;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
namespace Org::BouncyCastle::Asn1::X509 {
class DistributionPointName;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class DistributionPoint;
}
// Type: Org.BouncyCastle.Asn1.X509::DistributionPoint
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(357))
// CS Name: Org.BouncyCastle.Asn1.X509.DistributionPoint
class CORDL_TYPE DistributionPoint : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DistributionPoint() = default;

// Ctor Parameters [CppParam { name: "", ty: "DistributionPoint", modifiers: " const&", def_value: None }]
constexpr DistributionPoint(DistributionPoint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DistributionPoint", modifiers: "&&", def_value: None }]
constexpr DistributionPoint(DistributionPoint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DistributionPoint(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr DistributionPoint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DistributionPoint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DistributionPoint& operator=(DistributionPoint&& o) noexcept = default;
  constexpr DistributionPoint& operator=(DistributionPoint const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::X509::DistributionPointName __declspec(property(get=__get_distributionPoint, put=__set_distributionPoint))  distributionPoint;

constexpr void __set_distributionPoint(::Org::BouncyCastle::Asn1::X509::DistributionPointName value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::DistributionPointName __get_distributionPoint() const;

 ::Org::BouncyCastle::Asn1::X509::ReasonFlags __declspec(property(get=__get_reasons, put=__set_reasons))  reasons;

constexpr void __set_reasons(::Org::BouncyCastle::Asn1::X509::ReasonFlags value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::ReasonFlags __get_reasons() const;

 ::Org::BouncyCastle::Asn1::X509::GeneralNames __declspec(property(get=__get_cRLIssuer, put=__set_cRLIssuer))  cRLIssuer;

constexpr void __set_cRLIssuer(::Org::BouncyCastle::Asn1::X509::GeneralNames value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::GeneralNames __get_cRLIssuer() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::DistributionPointName __declspec(property(get=get_DistributionPointName))  DistributionPointName;

 ::Org::BouncyCastle::Asn1::X509::ReasonFlags __declspec(property(get=get_Reasons))  Reasons;

 ::Org::BouncyCastle::Asn1::X509::GeneralNames __declspec(property(get=get_CrlIssuer))  CrlIssuer;


// Methods

/// @brief Method GetInstance addr 0x1101c68 size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::DistributionPoint GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0x1100b80 size 0x178 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::DistributionPoint GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit DistributionPoint(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x1101c80 size 0x170 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "distributionPointName", ty: "::Org::BouncyCastle::Asn1::X509::DistributionPointName", modifiers: "", def_value: None }, CppParam { name: "reasons", ty: "::Org::BouncyCastle::Asn1::X509::ReasonFlags", modifiers: "", def_value: None }, CppParam { name: "crlIssuer", ty: "::Org::BouncyCastle::Asn1::X509::GeneralNames", modifiers: "", def_value: None }]
explicit DistributionPoint(::Org::BouncyCastle::Asn1::X509::DistributionPointName distributionPointName, ::Org::BouncyCastle::Asn1::X509::ReasonFlags reasons, ::Org::BouncyCastle::Asn1::X509::GeneralNames crlIssuer) ;

/// @brief Method .ctor addr 0x1101eb4 size 0x3c virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::DistributionPointName distributionPointName, ::Org::BouncyCastle::Asn1::X509::ReasonFlags reasons, ::Org::BouncyCastle::Asn1::X509::GeneralNames crlIssuer) ;

/// @brief Method get_DistributionPointName addr 0x1101ef0 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::DistributionPointName get_DistributionPointName() ;

/// @brief Method get_Reasons addr 0x1101ef8 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::ReasonFlags get_Reasons() ;

/// @brief Method get_CrlIssuer addr 0x1101f00 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::GeneralNames get_CrlIssuer() ;

/// @brief Method ToAsn1Object addr 0x1101f08 size 0xd8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method ToString addr 0x1101fe0 size 0x1b8 virtual true final false
 ::StringW ToString() ;

/// @brief Method appendObject addr 0x1102198 size 0xf8 virtual false final false
 void appendObject(::System::Text::StringBuilder buf, ::StringW sep, ::StringW name, ::StringW val) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::DistributionPoint);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::DistributionPoint, "Org.BouncyCastle.Asn1.X509", "DistributionPoint");
