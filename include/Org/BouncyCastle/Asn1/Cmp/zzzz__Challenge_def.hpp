#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class Challenge;
}
// Type: Org.BouncyCastle.Asn1.Cmp::Challenge
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(18))
// CS Name: Org.BouncyCastle.Asn1.Cmp.Challenge
class CORDL_TYPE Challenge : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Challenge() = default;

// Ctor Parameters [CppParam { name: "", ty: "Challenge", modifiers: " const&", def_value: None }]
constexpr Challenge(Challenge const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Challenge", modifiers: "&&", def_value: None }]
constexpr Challenge(Challenge&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Challenge(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr Challenge& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Challenge& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Challenge& operator=(Challenge&& o) noexcept = default;
  constexpr Challenge& operator=(Challenge const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_owf, put=__set_owf))  owf;

constexpr void __set_owf(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_owf() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_witness, put=__set_witness))  witness;

constexpr void __set_witness(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_witness() const;

 Org::BouncyCastle::Asn1::Asn1OctetString __declspec(property(get=__get_challenge, put=__set_challenge))  challenge;

constexpr void __set_challenge(Org::BouncyCastle::Asn1::Asn1OctetString value) ;

constexpr Org::BouncyCastle::Asn1::Asn1OctetString __get_challenge() const;


// Properties

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_Owf))  Owf;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit Challenge(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdd8fa8 size 0xb4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdd905c size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Cmp::Challenge GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_Owf addr 0xdd91e4 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_Owf() ;

/// @brief Method ToAsn1Object addr 0xdd91ec size 0x180 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::Challenge);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::Challenge, "Org.BouncyCastle.Asn1.Cmp", "Challenge");
