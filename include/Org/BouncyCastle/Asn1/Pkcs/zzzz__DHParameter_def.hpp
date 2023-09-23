#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class DHParameter;
}
// Type: Org.BouncyCastle.Asn1.Pkcs::DHParameter
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(232))
// CS Name: Org.BouncyCastle.Asn1.Pkcs.DHParameter
class CORDL_TYPE DHParameter : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DHParameter() = default;

// Ctor Parameters [CppParam { name: "", ty: "DHParameter", modifiers: " const&", def_value: None }]
constexpr DHParameter(DHParameter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DHParameter", modifiers: "&&", def_value: None }]
constexpr DHParameter(DHParameter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DHParameter(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr DHParameter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DHParameter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DHParameter& operator=(DHParameter&& o) noexcept = default;
  constexpr DHParameter& operator=(DHParameter const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_p() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_g() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_l, put=__set_l))  l;

constexpr void __set_l(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_l() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_P))  P;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_G))  G;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_L))  L;


// Methods

// Ctor Parameters [CppParam { name: "p", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "g", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "l", ty: "int32_t", modifiers: "", def_value: None }]
explicit DHParameter(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger g, int32_t l) ;

/// @brief Method .ctor addr 0xef8f24 size 0xd0 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger g, int32_t l) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit DHParameter(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xef8ff4 size 0x3c0 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_P addr 0xef93b4 size 0x1c virtual false final false
 Org::BouncyCastle::Math::BigInteger get_P() ;

/// @brief Method get_G addr 0xef93d0 size 0x1c virtual false final false
 Org::BouncyCastle::Math::BigInteger get_G() ;

/// @brief Method get_L addr 0xef93ec size 0x14 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_L() ;

/// @brief Method ToAsn1Object addr 0xef9400 size 0x174 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Asn1::Pkcs::DHParameter);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::DHParameter, "Org.BouncyCastle.Asn1.Pkcs", "DHParameter");
