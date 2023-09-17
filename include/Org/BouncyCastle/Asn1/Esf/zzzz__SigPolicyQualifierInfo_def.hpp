#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
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
namespace Org::BouncyCastle::Asn1::Esf {
class SigPolicyQualifierInfo;
}
// Type: Org.BouncyCastle.Asn1.Esf::SigPolicyQualifierInfo
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(159))
// CS Name: Org.BouncyCastle.Asn1.Esf.SigPolicyQualifierInfo
class CORDL_TYPE SigPolicyQualifierInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SigPolicyQualifierInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "SigPolicyQualifierInfo", modifiers: " const&", def_value: None }]
constexpr SigPolicyQualifierInfo(SigPolicyQualifierInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SigPolicyQualifierInfo", modifiers: "&&", def_value: None }]
constexpr SigPolicyQualifierInfo(SigPolicyQualifierInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SigPolicyQualifierInfo(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr SigPolicyQualifierInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SigPolicyQualifierInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SigPolicyQualifierInfo& operator=(SigPolicyQualifierInfo&& o) noexcept = default;
  constexpr SigPolicyQualifierInfo& operator=(SigPolicyQualifierInfo const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sigPolicyQualifierId, put=__set_sigPolicyQualifierId))  sigPolicyQualifierId;

constexpr void __set_sigPolicyQualifierId(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sigPolicyQualifierId() const;

 ::Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=__get_sigQualifier, put=__set_sigQualifier))  sigQualifier;

constexpr void __set_sigQualifier(::Org::BouncyCastle::Asn1::Asn1Object value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Object __get_sigQualifier() const;


// Properties

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_SigPolicyQualifierId))  SigPolicyQualifierId;

 ::Org::BouncyCastle::Asn1::Asn1Object __declspec(property(get=get_SigQualifier))  SigQualifier;


// Methods

/// @brief Method GetInstance addr 0xe0a028 size 0x188 virtual false final false
static ::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit SigPolicyQualifierInfo(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe0b348 size 0x208 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "sigPolicyQualifierId", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "sigQualifier", ty: "::Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit SigPolicyQualifierInfo(::Org::BouncyCastle::Asn1::DerObjectIdentifier sigPolicyQualifierId, ::Org::BouncyCastle::Asn1::Asn1Encodable sigQualifier) ;

/// @brief Method .ctor addr 0xe0b550 size 0x48 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier sigPolicyQualifierId, ::Org::BouncyCastle::Asn1::Asn1Encodable sigQualifier) ;

/// @brief Method get_SigPolicyQualifierId addr 0xe0b598 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier get_SigPolicyQualifierId() ;

/// @brief Method get_SigQualifier addr 0xe0b5a0 size 0x8 virtual false final false
 ::Org::BouncyCastle::Asn1::Asn1Object get_SigQualifier() ;

/// @brief Method ToAsn1Object addr 0xe0b5a8 size 0xf0 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo, "Org.BouncyCastle.Asn1.Esf", "SigPolicyQualifierInfo");
