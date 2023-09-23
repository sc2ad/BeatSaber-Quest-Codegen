#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class DistributionPoint;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class CrlDistPoint;
}
// Type: Org.BouncyCastle.Asn1.X509::CrlDistPoint
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(352))
// CS Name: Org.BouncyCastle.Asn1.X509.CrlDistPoint
class CORDL_TYPE CrlDistPoint : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CrlDistPoint() = default;

// Ctor Parameters [CppParam { name: "", ty: "CrlDistPoint", modifiers: " const&", def_value: None }]
constexpr CrlDistPoint(CrlDistPoint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CrlDistPoint", modifiers: "&&", def_value: None }]
constexpr CrlDistPoint(CrlDistPoint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CrlDistPoint(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CrlDistPoint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CrlDistPoint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CrlDistPoint& operator=(CrlDistPoint&& o) noexcept = default;
  constexpr CrlDistPoint& operator=(CrlDistPoint const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_seq, put=__set_seq))  seq;

constexpr void __set_seq(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_seq() const;


// Methods

/// @brief Method GetInstance addr 0x110088c size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::X509::CrlDistPoint GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0x11008a4 size 0xa8 virtual false final false
static Org::BouncyCastle::Asn1::X509::CrlDistPoint GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method FromExtensions addr 0x1100974 size 0x74 virtual false final false
static Org::BouncyCastle::Asn1::X509::CrlDistPoint FromExtensions(Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CrlDistPoint(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x110094c size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "points", ty: "::ArrayW<Org::BouncyCastle::Asn1::X509::DistributionPoint>", modifiers: "", def_value: None }]
explicit CrlDistPoint(::ArrayW<Org::BouncyCastle::Asn1::X509::DistributionPoint> points) ;

/// @brief Method .ctor addr 0x11009f4 size 0x7c virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::X509::DistributionPoint> points) ;

/// @brief Method GetDistributionPoints addr 0x1100a70 size 0x110 virtual false final false
 ::ArrayW<Org::BouncyCastle::Asn1::X509::DistributionPoint> GetDistributionPoints() ;

/// @brief Method ToAsn1Object addr 0x1100cf8 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method ToString addr 0x1100d00 size 0x154 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::CrlDistPoint);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::CrlDistPoint, "Org.BouncyCastle.Asn1.X509", "CrlDistPoint");
