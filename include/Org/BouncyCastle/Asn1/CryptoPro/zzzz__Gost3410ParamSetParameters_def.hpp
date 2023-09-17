#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::CryptoPro {
class Gost3410ParamSetParameters;
}
// Type: Org.BouncyCastle.Asn1.CryptoPro::Gost3410ParamSetParameters
namespace Org::BouncyCastle::Asn1::CryptoPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(130))
// CS Name: Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters
class CORDL_TYPE Gost3410ParamSetParameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Gost3410ParamSetParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410ParamSetParameters", modifiers: " const&", def_value: None }]
constexpr Gost3410ParamSetParameters(Gost3410ParamSetParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Gost3410ParamSetParameters", modifiers: "&&", def_value: None }]
constexpr Gost3410ParamSetParameters(Gost3410ParamSetParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Gost3410ParamSetParameters(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr Gost3410ParamSetParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Gost3410ParamSetParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Gost3410ParamSetParameters& operator=(Gost3410ParamSetParameters&& o) noexcept = default;
  constexpr Gost3410ParamSetParameters& operator=(Gost3410ParamSetParameters const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_keySize, put=__set_keySize))  keySize;

constexpr void __set_keySize(int32_t value) ;

constexpr int32_t __get_keySize() const;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_p() const;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_q, put=__set_q))  q;

constexpr void __set_q(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_q() const;

 ::Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_a, put=__set_a))  a;

constexpr void __set_a(::Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger __get_a() const;


// Properties

 int32_t __declspec(property(get=get_KeySize))  KeySize;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_P))  P;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Q))  Q;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_A))  A;


// Methods

/// @brief Method GetInstance addr 0xdff870 size 0x18 virtual false final false
static ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xdff888 size 0x178 virtual false final false
static ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "keySize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "p", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "q", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "a", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit Gost3410ParamSetParameters(int32_t keySize, ::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger q, ::Org::BouncyCastle::Math::BigInteger a) ;

/// @brief Method .ctor addr 0xdff278 size 0xc8 virtual false final false
 void _ctor(int32_t keySize, ::Org::BouncyCastle::Math::BigInteger p, ::Org::BouncyCastle::Math::BigInteger q, ::Org::BouncyCastle::Math::BigInteger a) ;

// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit Gost3410ParamSetParameters(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdffa00 size 0x120 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_KeySize addr 0xdffb20 size 0x8 virtual false final false
 int32_t get_KeySize() ;

/// @brief Method get_P addr 0xdffb28 size 0x18 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_P() ;

/// @brief Method get_Q addr 0xdffb40 size 0x18 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_Q() ;

/// @brief Method get_A addr 0xdffb58 size 0x18 virtual false final false
 ::Org::BouncyCastle::Math::BigInteger get_A() ;

/// @brief Method ToAsn1Object addr 0xdffb70 size 0x17c virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::CryptoPro
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters, "Org.BouncyCastle.Asn1.CryptoPro", "Gost3410ParamSetParameters");
