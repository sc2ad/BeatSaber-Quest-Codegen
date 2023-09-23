#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class AttCertValidityPeriod;
}
// Type: Org.BouncyCastle.Asn1.X509::AttCertValidityPeriod
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(340))
// CS Name: Org.BouncyCastle.Asn1.X509.AttCertValidityPeriod
class CORDL_TYPE AttCertValidityPeriod : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AttCertValidityPeriod() = default;

// Ctor Parameters [CppParam { name: "", ty: "AttCertValidityPeriod", modifiers: " const&", def_value: None }]
constexpr AttCertValidityPeriod(AttCertValidityPeriod const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AttCertValidityPeriod", modifiers: "&&", def_value: None }]
constexpr AttCertValidityPeriod(AttCertValidityPeriod&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AttCertValidityPeriod(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr AttCertValidityPeriod& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AttCertValidityPeriod& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AttCertValidityPeriod& operator=(AttCertValidityPeriod&& o) noexcept = default;
  constexpr AttCertValidityPeriod& operator=(AttCertValidityPeriod const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=__get_notBeforeTime, put=__set_notBeforeTime))  notBeforeTime;

constexpr void __set_notBeforeTime(Org::BouncyCastle::Asn1::DerGeneralizedTime value) ;

constexpr Org::BouncyCastle::Asn1::DerGeneralizedTime __get_notBeforeTime() const;

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=__get_notAfterTime, put=__set_notAfterTime))  notAfterTime;

constexpr void __set_notAfterTime(Org::BouncyCastle::Asn1::DerGeneralizedTime value) ;

constexpr Org::BouncyCastle::Asn1::DerGeneralizedTime __get_notAfterTime() const;


// Properties

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=get_NotBeforeTime))  NotBeforeTime;

 Org::BouncyCastle::Asn1::DerGeneralizedTime __declspec(property(get=get_NotAfterTime))  NotAfterTime;


// Methods

/// @brief Method GetInstance addr 0xff6dc0 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0xff7058 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit AttCertValidityPeriod(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xff6f48 size 0x110 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "notBeforeTime", ty: "Org::BouncyCastle::Asn1::DerGeneralizedTime", modifiers: "", def_value: None }, CppParam { name: "notAfterTime", ty: "Org::BouncyCastle::Asn1::DerGeneralizedTime", modifiers: "", def_value: None }]
explicit AttCertValidityPeriod(Org::BouncyCastle::Asn1::DerGeneralizedTime notBeforeTime, Org::BouncyCastle::Asn1::DerGeneralizedTime notAfterTime) ;

/// @brief Method .ctor addr 0xff7070 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerGeneralizedTime notBeforeTime, Org::BouncyCastle::Asn1::DerGeneralizedTime notAfterTime) ;

/// @brief Method get_NotBeforeTime addr 0xff709c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerGeneralizedTime get_NotBeforeTime() ;

/// @brief Method get_NotAfterTime addr 0xff70a4 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerGeneralizedTime get_NotAfterTime() ;

/// @brief Method ToAsn1Object addr 0xff70ac size 0xf0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::AttCertValidityPeriod, "Org.BouncyCastle.Asn1.X509", "AttCertValidityPeriod");
