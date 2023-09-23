#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class CertificatePair;
}
// Type: Org.BouncyCastle.Asn1.X509::CertificatePair
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(348))
// CS Name: Org.BouncyCastle.Asn1.X509.CertificatePair
class CORDL_TYPE CertificatePair : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CertificatePair() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificatePair", modifiers: " const&", def_value: None }]
constexpr CertificatePair(CertificatePair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificatePair", modifiers: "&&", def_value: None }]
constexpr CertificatePair(CertificatePair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificatePair(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CertificatePair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificatePair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificatePair& operator=(CertificatePair&& o) noexcept = default;
  constexpr CertificatePair& operator=(CertificatePair const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::X509CertificateStructure __declspec(property(get=__get_forward, put=__set_forward))  forward;

constexpr void __set_forward(Org::BouncyCastle::Asn1::X509::X509CertificateStructure value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509CertificateStructure __get_forward() const;

 Org::BouncyCastle::Asn1::X509::X509CertificateStructure __declspec(property(get=__get_reverse, put=__set_reverse))  reverse;

constexpr void __set_reverse(Org::BouncyCastle::Asn1::X509::X509CertificateStructure value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509CertificateStructure __get_reverse() const;


// Properties

 Org::BouncyCastle::Asn1::X509::X509CertificateStructure __declspec(property(get=get_Forward))  Forward;

 Org::BouncyCastle::Asn1::X509::X509CertificateStructure __declspec(property(get=get_Reverse))  Reverse;


// Methods

/// @brief Method GetInstance addr 0xff9f38 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::X509::CertificatePair GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CertificatePair(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xffa0c0 size 0x450 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "forward", ty: "Org::BouncyCastle::Asn1::X509::X509CertificateStructure", modifiers: "", def_value: None }, CppParam { name: "reverse", ty: "Org::BouncyCastle::Asn1::X509::X509CertificateStructure", modifiers: "", def_value: None }]
explicit CertificatePair(Org::BouncyCastle::Asn1::X509::X509CertificateStructure forward, Org::BouncyCastle::Asn1::X509::X509CertificateStructure reverse) ;

/// @brief Method .ctor addr 0xffa510 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::X509CertificateStructure forward, Org::BouncyCastle::Asn1::X509::X509CertificateStructure reverse) ;

/// @brief Method ToAsn1Object addr 0xffa53c size 0xc0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method get_Forward addr 0xffa5fc size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::X509CertificateStructure get_Forward() ;

/// @brief Method get_Reverse addr 0xffa604 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::X509CertificateStructure get_Reverse() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::CertificatePair);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::CertificatePair, "Org.BouncyCastle.Asn1.X509", "CertificatePair");
