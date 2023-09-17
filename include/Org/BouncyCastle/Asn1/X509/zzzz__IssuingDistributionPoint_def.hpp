#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
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
class DistributionPointName;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class IssuingDistributionPoint;
}
// Type: Org.BouncyCastle.Asn1.X509::IssuingDistributionPoint
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(367))
// CS Name: Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint
class CORDL_TYPE IssuingDistributionPoint : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~IssuingDistributionPoint() = default;

// Ctor Parameters [CppParam { name: "", ty: "IssuingDistributionPoint", modifiers: " const&", def_value: None }]
constexpr IssuingDistributionPoint(IssuingDistributionPoint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IssuingDistributionPoint", modifiers: "&&", def_value: None }]
constexpr IssuingDistributionPoint(IssuingDistributionPoint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IssuingDistributionPoint(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr IssuingDistributionPoint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IssuingDistributionPoint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IssuingDistributionPoint& operator=(IssuingDistributionPoint&& o) noexcept = default;
  constexpr IssuingDistributionPoint& operator=(IssuingDistributionPoint const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::X509::DistributionPointName __declspec(property(get=__get__distributionPoint, put=__set__distributionPoint))  _distributionPoint;

constexpr void __set__distributionPoint(::Org::BouncyCastle::Asn1::X509::DistributionPointName value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::DistributionPointName __get__distributionPoint() const;

 bool __declspec(property(get=__get__onlyContainsUserCerts, put=__set__onlyContainsUserCerts))  _onlyContainsUserCerts;

constexpr void __set__onlyContainsUserCerts(bool value) ;

constexpr bool __get__onlyContainsUserCerts() const;

 bool __declspec(property(get=__get__onlyContainsCACerts, put=__set__onlyContainsCACerts))  _onlyContainsCACerts;

constexpr void __set__onlyContainsCACerts(bool value) ;

constexpr bool __get__onlyContainsCACerts() const;

 ::Org::BouncyCastle::Asn1::X509::ReasonFlags __declspec(property(get=__get__onlySomeReasons, put=__set__onlySomeReasons))  _onlySomeReasons;

constexpr void __set__onlySomeReasons(::Org::BouncyCastle::Asn1::X509::ReasonFlags value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::ReasonFlags __get__onlySomeReasons() const;

 bool __declspec(property(get=__get__indirectCRL, put=__set__indirectCRL))  _indirectCRL;

constexpr void __set__indirectCRL(bool value) ;

constexpr bool __get__indirectCRL() const;

 bool __declspec(property(get=__get__onlyContainsAttributeCerts, put=__set__onlyContainsAttributeCerts))  _onlyContainsAttributeCerts;

constexpr void __set__onlyContainsAttributeCerts(bool value) ;

constexpr bool __get__onlyContainsAttributeCerts() const;

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_seq, put=__set_seq))  seq;

constexpr void __set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_seq() const;


// Properties

 bool __declspec(property(get=get_OnlyContainsUserCerts))  OnlyContainsUserCerts;

 bool __declspec(property(get=get_OnlyContainsCACerts))  OnlyContainsCACerts;

 bool __declspec(property(get=get_IsIndirectCrl))  IsIndirectCrl;

 bool __declspec(property(get=get_OnlyContainsAttributeCerts))  OnlyContainsAttributeCerts;

 ::Org::BouncyCastle::Asn1::X509::DistributionPointName __declspec(property(get=get_DistributionPoint))  DistributionPoint;

 ::Org::BouncyCastle::Asn1::X509::ReasonFlags __declspec(property(get=get_OnlySomeReasons))  OnlySomeReasons;


// Methods

/// @brief Method GetInstance addr 0x1107290 size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0x11072a8 size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "distributionPoint", ty: "::Org::BouncyCastle::Asn1::X509::DistributionPointName", modifiers: "", def_value: None }, CppParam { name: "onlyContainsUserCerts", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "onlyContainsCACerts", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "onlySomeReasons", ty: "::Org::BouncyCastle::Asn1::X509::ReasonFlags", modifiers: "", def_value: None }, CppParam { name: "indirectCRL", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "onlyContainsAttributeCerts", ty: "bool", modifiers: "", def_value: None }]
explicit IssuingDistributionPoint(::Org::BouncyCastle::Asn1::X509::DistributionPointName distributionPoint, bool onlyContainsUserCerts, bool onlyContainsCACerts, ::Org::BouncyCastle::Asn1::X509::ReasonFlags onlySomeReasons, bool indirectCRL, bool onlyContainsAttributeCerts) ;

/// @brief Method .ctor addr 0x11076dc size 0x2f0 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::DistributionPointName distributionPoint, bool onlyContainsUserCerts, bool onlyContainsCACerts, ::Org::BouncyCastle::Asn1::X509::ReasonFlags onlySomeReasons, bool indirectCRL, bool onlyContainsAttributeCerts) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit IssuingDistributionPoint(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x1107430 size 0x2ac virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_OnlyContainsUserCerts addr 0x11079cc size 0x8 virtual false final false
 bool get_OnlyContainsUserCerts() ;

/// @brief Method get_OnlyContainsCACerts addr 0x11079d4 size 0x8 virtual false final false
 bool get_OnlyContainsCACerts() ;

/// @brief Method get_IsIndirectCrl addr 0x11079dc size 0x8 virtual false final false
 bool get_IsIndirectCrl() ;

/// @brief Method get_OnlyContainsAttributeCerts addr 0x11079e4 size 0x8 virtual false final false
 bool get_OnlyContainsAttributeCerts() ;

/// @brief Method get_DistributionPoint addr 0x11079ec size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::DistributionPointName get_DistributionPoint() ;

/// @brief Method get_OnlySomeReasons addr 0x11079f4 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::X509::ReasonFlags get_OnlySomeReasons() ;

/// @brief Method ToAsn1Object addr 0x11079fc size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method ToString addr 0x1107a04 size 0x284 virtual true final false
 ::StringW ToString() ;

/// @brief Method appendObject addr 0x1107c88 size 0xf8 virtual false final false
 void appendObject(::System::Text::StringBuilder buf, ::StringW sep, ::StringW name, ::StringW val) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint, "Org.BouncyCastle.Asn1.X509", "IssuingDistributionPoint");
