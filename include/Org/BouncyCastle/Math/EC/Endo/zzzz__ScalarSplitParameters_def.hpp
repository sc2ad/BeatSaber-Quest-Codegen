#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Endo {
class ScalarSplitParameters;
}
// Type: Org.BouncyCastle.Math.EC.Endo::ScalarSplitParameters
namespace Org::BouncyCastle::Math::EC::Endo {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1525))
// CS Name: Org.BouncyCastle.Math.EC.Endo.ScalarSplitParameters
class CORDL_TYPE ScalarSplitParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ScalarSplitParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScalarSplitParameters", modifiers: " const&", def_value: None }]
constexpr ScalarSplitParameters(ScalarSplitParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScalarSplitParameters", modifiers: "&&", def_value: None }]
constexpr ScalarSplitParameters(ScalarSplitParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScalarSplitParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ScalarSplitParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScalarSplitParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScalarSplitParameters& operator=(ScalarSplitParameters&& o) noexcept = default;
  constexpr ScalarSplitParameters& operator=(ScalarSplitParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_m_v1A, put=__set_m_v1A))  m_v1A;

constexpr void __set_m_v1A(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_m_v1A() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_m_v1B, put=__set_m_v1B))  m_v1B;

constexpr void __set_m_v1B(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_m_v1B() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_m_v2A, put=__set_m_v2A))  m_v2A;

constexpr void __set_m_v2A(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_m_v2A() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_m_v2B, put=__set_m_v2B))  m_v2B;

constexpr void __set_m_v2B(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_m_v2B() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_m_g1, put=__set_m_g1))  m_g1;

constexpr void __set_m_g1(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_m_g1() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_m_g2, put=__set_m_g2))  m_g2;

constexpr void __set_m_g2(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_m_g2() const;

 int32_t __declspec(property(get=__get_m_bits, put=__set_m_bits))  m_bits;

constexpr void __set_m_bits(int32_t value) ;

constexpr int32_t __get_m_bits() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_V1A))  V1A;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_V1B))  V1B;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_V2A))  V2A;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_V2B))  V2B;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_G1))  G1;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_G2))  G2;

 int32_t __declspec(property(get=get_Bits))  Bits;


// Methods

/// @brief Method CheckVector addr 0xfa8944 size 0x88 virtual false final false
static void CheckVector(::ArrayW<Org::BouncyCastle::Math::BigInteger> v, ::StringW name) ;

// Ctor Parameters [CppParam { name: "v1", ty: "::ArrayW<Org::BouncyCastle::Math::BigInteger>", modifiers: "", def_value: None }, CppParam { name: "v2", ty: "::ArrayW<Org::BouncyCastle::Math::BigInteger>", modifiers: "", def_value: None }, CppParam { name: "g1", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "g2", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "bits", ty: "int32_t", modifiers: "", def_value: None }]
explicit ScalarSplitParameters(::ArrayW<Org::BouncyCastle::Math::BigInteger> v1, ::ArrayW<Org::BouncyCastle::Math::BigInteger> v2, Org::BouncyCastle::Math::BigInteger g1, Org::BouncyCastle::Math::BigInteger g2, int32_t bits) ;

/// @brief Method .ctor addr 0xfa85bc size 0xfc virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Math::BigInteger> v1, ::ArrayW<Org::BouncyCastle::Math::BigInteger> v2, Org::BouncyCastle::Math::BigInteger g1, Org::BouncyCastle::Math::BigInteger g2, int32_t bits) ;

/// @brief Method get_V1A addr 0xfa89cc size 0x8 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_V1A() ;

/// @brief Method get_V1B addr 0xfa89d4 size 0x8 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_V1B() ;

/// @brief Method get_V2A addr 0xfa89dc size 0x8 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_V2A() ;

/// @brief Method get_V2B addr 0xfa89e4 size 0x8 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_V2B() ;

/// @brief Method get_G1 addr 0xfa89ec size 0x8 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_G1() ;

/// @brief Method get_G2 addr 0xfa89f4 size 0x8 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_G2() ;

/// @brief Method get_Bits addr 0xfa89fc size 0x8 virtual true final false
 int32_t get_Bits() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Endo
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters, "Org.BouncyCastle.Math.EC.Endo", "ScalarSplitParameters");
