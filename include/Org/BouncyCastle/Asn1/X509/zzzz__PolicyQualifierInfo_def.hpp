#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class PolicyQualifierInfo;
}
// Type: Org.BouncyCastle.Asn1.X509::PolicyQualifierInfo
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(377))
// CS Name: Org.BouncyCastle.Asn1.X509.PolicyQualifierInfo
class CORDL_TYPE PolicyQualifierInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PolicyQualifierInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "PolicyQualifierInfo", modifiers: " const&", def_value: None }]
constexpr PolicyQualifierInfo(PolicyQualifierInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PolicyQualifierInfo", modifiers: "&&", def_value: None }]
constexpr PolicyQualifierInfo(PolicyQualifierInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PolicyQualifierInfo(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PolicyQualifierInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PolicyQualifierInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PolicyQualifierInfo& operator=(PolicyQualifierInfo&& o) noexcept = default;
  constexpr PolicyQualifierInfo& operator=(PolicyQualifierInfo const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_policyQualifierId, put=__set_policyQualifierId))  policyQualifierId;

constexpr void __set_policyQualifierId(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_policyQualifierId() const;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=__get_qualifier, put=__set_qualifier))  qualifier;

constexpr void __set_qualifier(Org::BouncyCastle::Asn1::Asn1Encodable value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Encodable __get_qualifier() const;


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_PolicyQualifierId))  PolicyQualifierId;

 Org::BouncyCastle::Asn1::Asn1Encodable __declspec(property(get=get_Qualifier))  Qualifier;


// Methods

static Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo New_ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier policyQualifierId, Org::BouncyCastle::Asn1::Asn1Encodable qualifier) ;

/// @brief Method .ctor addr 0x110ab00 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier policyQualifierId, Org::BouncyCastle::Asn1::Asn1Encodable qualifier) ;

static Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo New_ctor(::StringW cps) ;

/// @brief Method .ctor addr 0x110ab2c size 0xb0 virtual false final false
 void _ctor(::StringW cps) ;

static Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x110abdc size 0x168 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0x110ad44 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_PolicyQualifierId addr 0x110ade8 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_PolicyQualifierId() ;

/// @brief Method get_Qualifier addr 0x110adf0 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Encodable get_Qualifier() ;

/// @brief Method ToAsn1Object addr 0x110adf8 size 0xf0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::PolicyQualifierInfo, "Org.BouncyCastle.Asn1.X509", "PolicyQualifierInfo");
