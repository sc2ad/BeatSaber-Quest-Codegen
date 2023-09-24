#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::X509 {
class Time;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class OptionalValidity;
}
// Type: Org.BouncyCastle.Asn1.Crmf::OptionalValidity
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(114))
// CS Name: Org.BouncyCastle.Asn1.Crmf.OptionalValidity
class CORDL_TYPE OptionalValidity : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OptionalValidity() = default;

// Ctor Parameters [CppParam { name: "", ty: "OptionalValidity", modifiers: " const&", def_value: None }]
constexpr OptionalValidity(OptionalValidity const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OptionalValidity", modifiers: "&&", def_value: None }]
constexpr OptionalValidity(OptionalValidity&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OptionalValidity(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr OptionalValidity& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OptionalValidity& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OptionalValidity& operator=(OptionalValidity&& o) noexcept = default;
  constexpr OptionalValidity& operator=(OptionalValidity const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::Time __declspec(property(get=__get_notBefore, put=__set_notBefore))  notBefore;

constexpr void __set_notBefore(Org::BouncyCastle::Asn1::X509::Time value) ;

constexpr Org::BouncyCastle::Asn1::X509::Time __get_notBefore() const;

 Org::BouncyCastle::Asn1::X509::Time __declspec(property(get=__get_notAfter, put=__set_notAfter))  notAfter;

constexpr void __set_notAfter(Org::BouncyCastle::Asn1::X509::Time value) ;

constexpr Org::BouncyCastle::Asn1::X509::Time __get_notAfter() const;


// Properties

 Org::BouncyCastle::Asn1::X509::Time __declspec(property(get=get_NotBefore))  NotBefore;

 Org::BouncyCastle::Asn1::X509::Time __declspec(property(get=get_NotAfter))  NotAfter;


// Methods

static Org::BouncyCastle::Asn1::Crmf::OptionalValidity New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdf8550 size 0x30c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdf720c size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::Crmf::OptionalValidity GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::Crmf::OptionalValidity New_ctor(Org::BouncyCastle::Asn1::X509::Time notBefore, Org::BouncyCastle::Asn1::X509::Time notAfter) ;

/// @brief Method .ctor addr 0xdf885c size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::Time notBefore, Org::BouncyCastle::Asn1::X509::Time notAfter) ;

/// @brief Method get_NotBefore addr 0xdf8888 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::Time get_NotBefore() ;

/// @brief Method get_NotAfter addr 0xdf8890 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::Time get_NotAfter() ;

/// @brief Method ToAsn1Object addr 0xdf8898 size 0xc0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Crmf::OptionalValidity);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Crmf::OptionalValidity, "Org.BouncyCastle.Asn1.Crmf", "OptionalValidity");
