#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::CryptoPro {
class ECGost3410ParamSetParameters;
}
// Type: Org.BouncyCastle.Asn1.CryptoPro::ECGost3410ParamSetParameters
namespace Org::BouncyCastle::Asn1::CryptoPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(127))
// CS Name: Org.BouncyCastle.Asn1.CryptoPro.ECGost3410ParamSetParameters
class CORDL_TYPE ECGost3410ParamSetParameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ECGost3410ParamSetParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "ECGost3410ParamSetParameters", modifiers: " const&", def_value: None }]
constexpr ECGost3410ParamSetParameters(ECGost3410ParamSetParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ECGost3410ParamSetParameters", modifiers: "&&", def_value: None }]
constexpr ECGost3410ParamSetParameters(ECGost3410ParamSetParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECGost3410ParamSetParameters(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr ECGost3410ParamSetParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ECGost3410ParamSetParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ECGost3410ParamSetParameters& operator=(ECGost3410ParamSetParameters&& o) noexcept = default;
  constexpr ECGost3410ParamSetParameters& operator=(ECGost3410ParamSetParameters const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_p() const;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_q, put=__set_q))  q;

constexpr void __set_q(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_q() const;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_a, put=__set_a))  a;

constexpr void __set_a(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_a() const;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_b, put=__set_b))  b;

constexpr void __set_b(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_b() const;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_x() const;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_y() const;


// Properties

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_P))  P;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Q))  Q;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_A))  A;


// Methods

/// @brief Method GetInstance addr 0xdfe244 size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xdfe25c size 0x178 virtual false final false
static ::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "a", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "b", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "p", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "q", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit ECGost3410ParamSetParameters(::Org::BouncyCastle::Math::BigInteger a, ::Org::BouncyCastle::Math::BigInteger b, ::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger q, int32_t x, ::Org::BouncyCastle::Math::BigInteger y) ;

/// @brief Method .ctor addr 0xdfe524 size 0x128 virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger a, ::Org::BouncyCastle::Math::BigInteger b, ::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger q, int32_t x, ::Org::BouncyCastle::Math::BigInteger y) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit ECGost3410ParamSetParameters(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdfe3d4 size 0x150 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_P addr 0xdfe64c size 0x18 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_P() ;

/// @brief Method get_Q addr 0xdfe664 size 0x18 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_Q() ;

/// @brief Method get_A addr 0xdfe67c size 0x18 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_A() ;

/// @brief Method ToAsn1Object addr 0xdfe694 size 0x1a0 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::CryptoPro
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::CryptoPro::ECGost3410ParamSetParameters, "Org.BouncyCastle.Asn1.CryptoPro", "ECGost3410ParamSetParameters");
