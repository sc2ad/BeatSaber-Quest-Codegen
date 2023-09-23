#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Asn1::Esf {
class OtherCertID;
}
namespace Org::BouncyCastle::Asn1::X509 {
class PolicyInformation;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class OtherSigningCertificate;
}
// Type: Org.BouncyCastle.Asn1.Esf::OtherSigningCertificate
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(153))
// CS Name: Org.BouncyCastle.Asn1.Esf.OtherSigningCertificate
class CORDL_TYPE OtherSigningCertificate : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OtherSigningCertificate() = default;

// Ctor Parameters [CppParam { name: "", ty: "OtherSigningCertificate", modifiers: " const&", def_value: None }]
constexpr OtherSigningCertificate(OtherSigningCertificate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OtherSigningCertificate", modifiers: "&&", def_value: None }]
constexpr OtherSigningCertificate(OtherSigningCertificate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OtherSigningCertificate(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr OtherSigningCertificate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OtherSigningCertificate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OtherSigningCertificate& operator=(OtherSigningCertificate&& o) noexcept = default;
  constexpr OtherSigningCertificate& operator=(OtherSigningCertificate const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_certs, put=__set_certs))  certs;

constexpr void __set_certs(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_certs() const;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_policies, put=__set_policies))  policies;

constexpr void __set_policies(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_policies() const;


// Methods

/// @brief Method GetInstance addr 0xe07ba0 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit OtherSigningCertificate(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe07d28 size 0x1d0 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "certs", ty: "::ArrayW<Org::BouncyCastle::Asn1::Esf::OtherCertID>", modifiers: "", def_value: None }]
explicit OtherSigningCertificate(::ArrayW<Org::BouncyCastle::Asn1::Esf::OtherCertID> certs) ;

/// @brief Method .ctor addr 0xe07ef8 size 0x8 virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::Esf::OtherCertID> certs) ;

// Ctor Parameters [CppParam { name: "certs", ty: "::ArrayW<Org::BouncyCastle::Asn1::Esf::OtherCertID>", modifiers: "", def_value: None }, CppParam { name: "policies", ty: "::ArrayW<Org::BouncyCastle::Asn1::X509::PolicyInformation>", modifiers: "", def_value: None }]
explicit OtherSigningCertificate(::ArrayW<Org::BouncyCastle::Asn1::Esf::OtherCertID> certs, ::ArrayW<Org::BouncyCastle::Asn1::X509::PolicyInformation> policies) ;

/// @brief Method .ctor addr 0xe07f00 size 0xf4 virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::Esf::OtherCertID> certs, ::ArrayW<Org::BouncyCastle::Asn1::X509::PolicyInformation> policies) ;

// Ctor Parameters [CppParam { name: "certs", ty: "System::Collections::IEnumerable", modifiers: "", def_value: None }]
explicit OtherSigningCertificate(System::Collections::IEnumerable certs) ;

/// @brief Method .ctor addr 0xe07ff4 size 0x8 virtual false final false
 void _ctor(System::Collections::IEnumerable certs) ;

// Ctor Parameters [CppParam { name: "certs", ty: "System::Collections::IEnumerable", modifiers: "", def_value: None }, CppParam { name: "policies", ty: "System::Collections::IEnumerable", modifiers: "", def_value: None }]
explicit OtherSigningCertificate(System::Collections::IEnumerable certs, System::Collections::IEnumerable policies) ;

/// @brief Method .ctor addr 0xe07ffc size 0x27c virtual false final false
 void _ctor(System::Collections::IEnumerable certs, System::Collections::IEnumerable policies) ;

/// @brief Method GetCerts addr 0xe08278 size 0x120 virtual false final false
 ::ArrayW<Org::BouncyCastle::Asn1::Esf::OtherCertID> GetCerts() ;

/// @brief Method GetPolicies addr 0xe08398 size 0x128 virtual false final false
 ::ArrayW<Org::BouncyCastle::Asn1::X509::PolicyInformation> GetPolicies() ;

/// @brief Method ToAsn1Object addr 0xe084c0 size 0x148 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Esf::OtherSigningCertificate, "Org.BouncyCastle.Asn1.Esf", "OtherSigningCertificate");
