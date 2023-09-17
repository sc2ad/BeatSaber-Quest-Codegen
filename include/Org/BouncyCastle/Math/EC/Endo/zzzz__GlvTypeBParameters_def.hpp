#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Math::EC::Endo {
class ScalarSplitParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Endo {
class GlvTypeBParameters;
}
// Type: Org.BouncyCastle.Math.EC.Endo::GlvTypeBParameters
namespace Org::BouncyCastle::Math::EC::Endo {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1524))
// CS Name: Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters
class CORDL_TYPE GlvTypeBParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlvTypeBParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlvTypeBParameters", modifiers: " const&", def_value: None }]
constexpr GlvTypeBParameters(GlvTypeBParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlvTypeBParameters", modifiers: "&&", def_value: None }]
constexpr GlvTypeBParameters(GlvTypeBParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlvTypeBParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlvTypeBParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlvTypeBParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlvTypeBParameters& operator=(GlvTypeBParameters&& o) noexcept = default;
  constexpr GlvTypeBParameters& operator=(GlvTypeBParameters const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_m_beta, put=__set_m_beta))  m_beta;

constexpr void __set_m_beta(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_m_beta() const;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_m_lambda, put=__set_m_lambda))  m_lambda;

constexpr void __set_m_lambda(::Org::BouncyCastle::Math::BigInteger value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger __get_m_lambda() const;

 ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters __declspec(property(get=__get_m_splitParams, put=__set_m_splitParams))  m_splitParams;

constexpr void __set_m_splitParams(::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters value) ;

constexpr ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters __get_m_splitParams() const;


// Properties

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Beta))  Beta;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Lambda))  Lambda;

 ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters __declspec(property(get=get_SplitParams))  SplitParams;

 ::ArrayW<::Org::BouncyCastle::Math::BigInteger> __declspec(property(get=get_V1))  V1;

 ::ArrayW<::Org::BouncyCastle::Math::BigInteger> __declspec(property(get=get_V2))  V2;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_G1))  G1;

 ::Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_G2))  G2;

 int32_t __declspec(property(get=get_Bits))  Bits;


// Methods

// Ctor Parameters [CppParam { name: "beta", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "lambda", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "v1", ty: "::ArrayW<::Org::BouncyCastle::Math::BigInteger>", modifiers: "", def_value: None }, CppParam { name: "v2", ty: "::ArrayW<::Org::BouncyCastle::Math::BigInteger>", modifiers: "", def_value: None }, CppParam { name: "g1", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "g2", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "bits", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlvTypeBParameters(::Org::BouncyCastle::Math::BigInteger beta, ::Org::BouncyCastle::Math::BigInteger lambda, ::ArrayW<::Org::BouncyCastle::Math::BigInteger> v1, ::ArrayW<::Org::BouncyCastle::Math::BigInteger> v2, ::Org::BouncyCastle::Math::BigInteger g1, ::Org::BouncyCastle::Math::BigInteger g2, int32_t bits) ;

/// @brief Method .ctor addr 0xfa8500 size 0xbc virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger beta, ::Org::BouncyCastle::Math::BigInteger lambda, ::ArrayW<::Org::BouncyCastle::Math::BigInteger> v1, ::ArrayW<::Org::BouncyCastle::Math::BigInteger> v2, ::Org::BouncyCastle::Math::BigInteger g1, ::Org::BouncyCastle::Math::BigInteger g2, int32_t bits) ;

// Ctor Parameters [CppParam { name: "beta", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "lambda", ty: "::Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "splitParams", ty: "::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters", modifiers: "", def_value: None }]
explicit GlvTypeBParameters(::Org::BouncyCastle::Math::BigInteger beta, ::Org::BouncyCastle::Math::BigInteger lambda, ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters splitParams) ;

/// @brief Method .ctor addr 0xfa86b8 size 0x3c virtual false final false
 void _ctor(::Org::BouncyCastle::Math::BigInteger beta, ::Org::BouncyCastle::Math::BigInteger lambda, ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters splitParams) ;

/// @brief Method get_Beta addr 0xfa86f4 size 0x8 virtual true final false
 ::Org::BouncyCastle::Math::BigInteger get_Beta() ;

/// @brief Method get_Lambda addr 0xfa86fc size 0x8 virtual true final false
 ::Org::BouncyCastle::Math::BigInteger get_Lambda() ;

/// @brief Method get_SplitParams addr 0xfa8704 size 0x8 virtual true final false
 ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters get_SplitParams() ;

/// @brief Method get_V1 addr 0xfa870c size 0xec virtual true final false
 ::ArrayW<::Org::BouncyCastle::Math::BigInteger> get_V1() ;

/// @brief Method get_V2 addr 0xfa87f8 size 0xec virtual true final false
 ::ArrayW<::Org::BouncyCastle::Math::BigInteger> get_V2() ;

/// @brief Method get_G1 addr 0xfa88e4 size 0x20 virtual true final false
 ::Org::BouncyCastle::Math::BigInteger get_G1() ;

/// @brief Method get_G2 addr 0xfa8904 size 0x20 virtual true final false
 ::Org::BouncyCastle::Math::BigInteger get_G2() ;

/// @brief Method get_Bits addr 0xfa8924 size 0x20 virtual true final false
 int32_t get_Bits() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Endo
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters, "Org.BouncyCastle.Math.EC.Endo", "GlvTypeBParameters");
