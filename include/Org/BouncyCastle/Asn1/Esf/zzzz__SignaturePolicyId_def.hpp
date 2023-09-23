#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Esf {
class SigPolicyQualifierInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::Esf {
class OtherHashAlgAndValue;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class SignaturePolicyId;
}
// Type: Org.BouncyCastle.Asn1.Esf::SignaturePolicyId
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(155))
// CS Name: Org.BouncyCastle.Asn1.Esf.SignaturePolicyId
class CORDL_TYPE SignaturePolicyId : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SignaturePolicyId() = default;

// Ctor Parameters [CppParam { name: "", ty: "SignaturePolicyId", modifiers: " const&", def_value: None }]
constexpr SignaturePolicyId(SignaturePolicyId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SignaturePolicyId", modifiers: "&&", def_value: None }]
constexpr SignaturePolicyId(SignaturePolicyId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SignaturePolicyId(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr SignaturePolicyId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SignaturePolicyId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SignaturePolicyId& operator=(SignaturePolicyId&& o) noexcept = default;
  constexpr SignaturePolicyId& operator=(SignaturePolicyId const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sigPolicyIdentifier, put=__set_sigPolicyIdentifier))  sigPolicyIdentifier;

constexpr void __set_sigPolicyIdentifier(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sigPolicyIdentifier() const;

 Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue __declspec(property(get=__get_sigPolicyHash, put=__set_sigPolicyHash))  sigPolicyHash;

constexpr void __set_sigPolicyHash(Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue value) ;

constexpr Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue __get_sigPolicyHash() const;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_sigPolicyQualifiers, put=__set_sigPolicyQualifiers))  sigPolicyQualifiers;

constexpr void __set_sigPolicyQualifiers(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_sigPolicyQualifiers() const;


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_SigPolicyIdentifier))  SigPolicyIdentifier;

 Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue __declspec(property(get=get_SigPolicyHash))  SigPolicyHash;


// Methods

/// @brief Method GetInstance addr 0xe097a8 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Esf::SignaturePolicyId GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit SignaturePolicyId(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe09930 size 0x2e4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "sigPolicyIdentifier", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "sigPolicyHash", ty: "Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue", modifiers: "", def_value: None }]
explicit SignaturePolicyId(Org::BouncyCastle::Asn1::DerObjectIdentifier sigPolicyIdentifier, Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue sigPolicyHash) ;

/// @brief Method .ctor addr 0xe09c14 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier sigPolicyIdentifier, Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue sigPolicyHash) ;

// Ctor Parameters [CppParam { name: "sigPolicyIdentifier", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "sigPolicyHash", ty: "Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue", modifiers: "", def_value: None }, CppParam { name: "sigPolicyQualifiers", ty: "::ArrayW<Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo>", modifiers: "", def_value: None }]
explicit SignaturePolicyId(Org::BouncyCastle::Asn1::DerObjectIdentifier sigPolicyIdentifier, Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue sigPolicyHash, ::ArrayW<Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo> sigPolicyQualifiers) ;

/// @brief Method .ctor addr 0xe09c1c size 0x104 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier sigPolicyIdentifier, Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue sigPolicyHash, ::ArrayW<Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo> sigPolicyQualifiers) ;

// Ctor Parameters [CppParam { name: "sigPolicyIdentifier", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "sigPolicyHash", ty: "Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue", modifiers: "", def_value: None }, CppParam { name: "sigPolicyQualifiers", ty: "System::Collections::IEnumerable", modifiers: "", def_value: None }]
explicit SignaturePolicyId(Org::BouncyCastle::Asn1::DerObjectIdentifier sigPolicyIdentifier, Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue sigPolicyHash, System::Collections::IEnumerable sigPolicyQualifiers) ;

/// @brief Method .ctor addr 0xe09d20 size 0x1e4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier sigPolicyIdentifier, Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue sigPolicyHash, System::Collections::IEnumerable sigPolicyQualifiers) ;

/// @brief Method get_SigPolicyIdentifier addr 0xe09f04 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_SigPolicyIdentifier() ;

/// @brief Method get_SigPolicyHash addr 0xe09f0c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue get_SigPolicyHash() ;

/// @brief Method GetSigPolicyQualifiers addr 0xe09f14 size 0x114 virtual false final false
 ::ArrayW<Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo> GetSigPolicyQualifiers() ;

/// @brief Method ToAsn1Object addr 0xe0a1b0 size 0x160 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Esf::SignaturePolicyId);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Esf::SignaturePolicyId, "Org.BouncyCastle.Asn1.Esf", "SignaturePolicyId");
