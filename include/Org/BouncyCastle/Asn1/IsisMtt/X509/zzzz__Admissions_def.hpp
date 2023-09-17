#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class NamingAuthority;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class ProfessionInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class Admissions;
}
// Type: Org.BouncyCastle.Asn1.IsisMtt.X509::Admissions
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(183))
// CS Name: Org.BouncyCastle.Asn1.IsisMtt.X509.Admissions
class CORDL_TYPE Admissions : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Admissions() = default;

// Ctor Parameters [CppParam { name: "", ty: "Admissions", modifiers: " const&", def_value: None }]
constexpr Admissions(Admissions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Admissions", modifiers: "&&", def_value: None }]
constexpr Admissions(Admissions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Admissions(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr Admissions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Admissions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Admissions& operator=(Admissions&& o) noexcept = default;
  constexpr Admissions& operator=(Admissions const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=__get_admissionAuthority, put=__set_admissionAuthority))  admissionAuthority;

constexpr void __set_admissionAuthority(::Org::BouncyCastle::Asn1::X509::GeneralName value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName __get_admissionAuthority() const;

 ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority __declspec(property(get=__get_namingAuthority, put=__set_namingAuthority))  namingAuthority;

constexpr void __set_namingAuthority(::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority value) ;

constexpr ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority __get_namingAuthority() const;

 ::Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_professionInfos, put=__set_professionInfos))  professionInfos;

constexpr void __set_professionInfos(::Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence __get_professionInfos() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::GeneralName __declspec(property(get=get_AdmissionAuthority))  AdmissionAuthority;

 ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority __declspec(property(get=get_NamingAuthority))  NamingAuthority;


// Methods

/// @brief Method GetInstance addr 0xee885c size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit Admissions(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xee89e4 size 0x6dc virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "admissionAuthority", ty: "::Org::BouncyCastle::Asn1::X509::GeneralName", modifiers: "", def_value: None }, CppParam { name: "namingAuthority", ty: "::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority", modifiers: "", def_value: None }, CppParam { name: "professionInfos", ty: "::ArrayW<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo>", modifiers: "", def_value: None }]
explicit Admissions(::Org::BouncyCastle::Asn1::X509::GeneralName admissionAuthority, ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority namingAuthority, ::ArrayW<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo> professionInfos) ;

/// @brief Method .ctor addr 0xee9138 size 0x90 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralName admissionAuthority, ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority namingAuthority, ::ArrayW<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo> professionInfos) ;

/// @brief Method get_AdmissionAuthority addr 0xee91c8 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::X509::GeneralName get_AdmissionAuthority() ;

/// @brief Method get_NamingAuthority addr 0xee91d0 size 0x8 virtual true final false
 ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority get_NamingAuthority() ;

/// @brief Method GetProfessionInfos addr 0xee91d8 size 0x3a0 virtual false final false
 ::ArrayW<::Org::BouncyCastle::Asn1::IsisMtt::X509::ProfessionInfo> GetProfessionInfos() ;

/// @brief Method ToAsn1Object addr 0xee9700 size 0xd0 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::IsisMtt::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::X509::Admissions, "Org.BouncyCastle.Asn1.IsisMtt.X509", "Admissions");
