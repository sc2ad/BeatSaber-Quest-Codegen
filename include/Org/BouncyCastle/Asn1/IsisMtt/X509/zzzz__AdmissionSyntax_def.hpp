#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class Admissions;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class AdmissionSyntax;
}
// Type: Org.BouncyCastle.Asn1.IsisMtt.X509::AdmissionSyntax
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(184))
// CS Name: Org.BouncyCastle.Asn1.IsisMtt.X509.AdmissionSyntax
class CORDL_TYPE AdmissionSyntax : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AdmissionSyntax() = default;

// Ctor Parameters [CppParam { name: "", ty: "AdmissionSyntax", modifiers: " const&", def_value: None }]
constexpr AdmissionSyntax(AdmissionSyntax const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AdmissionSyntax", modifiers: "&&", def_value: None }]
constexpr AdmissionSyntax(AdmissionSyntax&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AdmissionSyntax(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr AdmissionSyntax& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AdmissionSyntax& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AdmissionSyntax& operator=(AdmissionSyntax&& o) noexcept = default;
  constexpr AdmissionSyntax& operator=(AdmissionSyntax const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=__get_admissionAuthority, put=__set_admissionAuthority))  admissionAuthority;

constexpr void __set_admissionAuthority(Org::BouncyCastle::Asn1::X509::GeneralName value) ;

constexpr Org::BouncyCastle::Asn1::X509::GeneralName __get_admissionAuthority() const;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_contentsOfAdmissions, put=__set_contentsOfAdmissions))  contentsOfAdmissions;

constexpr void __set_contentsOfAdmissions(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_contentsOfAdmissions() const;


// Properties

 Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=get_AdmissionAuthority))  AdmissionAuthority;


// Methods

/// @brief Method GetInstance addr 0xee97d0 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::IsisMtt::X509::AdmissionSyntax GetInstance(::bs_hook::Il2CppWrapperType obj) ;

static Org::BouncyCastle::Asn1::IsisMtt::X509::AdmissionSyntax New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xee9958 size 0x154 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

static Org::BouncyCastle::Asn1::IsisMtt::X509::AdmissionSyntax New_ctor(Org::BouncyCastle::Asn1::X509::GeneralName admissionAuthority, Org::BouncyCastle::Asn1::Asn1Sequence contentsOfAdmissions) ;

/// @brief Method .ctor addr 0xee9aac size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::GeneralName admissionAuthority, Org::BouncyCastle::Asn1::Asn1Sequence contentsOfAdmissions) ;

/// @brief Method ToAsn1Object addr 0xee9ad8 size 0x118 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method get_AdmissionAuthority addr 0xee9bf0 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::GeneralName get_AdmissionAuthority() ;

/// @brief Method GetContentsOfAdmissions addr 0xee9bf8 size 0x110 virtual true final false
 ::ArrayW<Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions> GetContentsOfAdmissions() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::IsisMtt::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::IsisMtt::X509::AdmissionSyntax);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::IsisMtt::X509::AdmissionSyntax, "Org.BouncyCastle.Asn1.IsisMtt.X509", "AdmissionSyntax");
