#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Oiw {
class ElGamalParameter;
}
// Type: Org.BouncyCastle.Asn1.Oiw::ElGamalParameter
namespace Org::BouncyCastle::Asn1::Oiw {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(224))
// CS Name: Org.BouncyCastle.Asn1.Oiw.ElGamalParameter
class CORDL_TYPE ElGamalParameter : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ElGamalParameter() = default;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalParameter", modifiers: " const&", def_value: None }]
constexpr ElGamalParameter(ElGamalParameter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ElGamalParameter", modifiers: "&&", def_value: None }]
constexpr ElGamalParameter(ElGamalParameter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ElGamalParameter(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr ElGamalParameter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ElGamalParameter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ElGamalParameter& operator=(ElGamalParameter&& o) noexcept = default;
  constexpr ElGamalParameter& operator=(ElGamalParameter const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_p() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_g() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_P))  P;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_G))  G;


// Methods

static Org::BouncyCastle::Asn1::Oiw::ElGamalParameter New_ctor(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger g) ;

/// @brief Method .ctor addr 0xef6e9c size 0xa0 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger g) ;

static Org::BouncyCastle::Asn1::Oiw::ElGamalParameter New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xef6f3c size 0xe8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_P addr 0xef7024 size 0x1c virtual false final false
 Org::BouncyCastle::Math::BigInteger get_P() ;

/// @brief Method get_G addr 0xef7040 size 0x1c virtual false final false
 Org::BouncyCastle::Math::BigInteger get_G() ;

/// @brief Method ToAsn1Object addr 0xef705c size 0xf0 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Oiw
NEED_NO_BOX(Org::BouncyCastle::Asn1::Oiw::ElGamalParameter);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Oiw::ElGamalParameter, "Org.BouncyCastle.Asn1.Oiw", "ElGamalParameter");
