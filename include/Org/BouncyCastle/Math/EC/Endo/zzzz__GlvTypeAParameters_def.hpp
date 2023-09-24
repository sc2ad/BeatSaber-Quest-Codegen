#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Math::EC::Endo {
class ScalarSplitParameters;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Endo {
class GlvTypeAParameters;
}
// Type: Org.BouncyCastle.Math.EC.Endo::GlvTypeAParameters
namespace Org::BouncyCastle::Math::EC::Endo {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1522))
// CS Name: Org.BouncyCastle.Math.EC.Endo.GlvTypeAParameters
class CORDL_TYPE GlvTypeAParameters : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlvTypeAParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlvTypeAParameters", modifiers: " const&", def_value: None }]
constexpr GlvTypeAParameters(GlvTypeAParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlvTypeAParameters", modifiers: "&&", def_value: None }]
constexpr GlvTypeAParameters(GlvTypeAParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlvTypeAParameters(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlvTypeAParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlvTypeAParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlvTypeAParameters& operator=(GlvTypeAParameters&& o) noexcept = default;
  constexpr GlvTypeAParameters& operator=(GlvTypeAParameters const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_m_i, put=__set_m_i))  m_i;

constexpr void __set_m_i(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_m_i() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_m_lambda, put=__set_m_lambda))  m_lambda;

constexpr void __set_m_lambda(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_m_lambda() const;

 Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters __declspec(property(get=__get_m_splitParams, put=__set_m_splitParams))  m_splitParams;

constexpr void __set_m_splitParams(Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters value) ;

constexpr Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters __get_m_splitParams() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_I))  I;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Lambda))  Lambda;

 Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters __declspec(property(get=get_SplitParams))  SplitParams;


// Methods

static Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters New_ctor(Org::BouncyCastle::Math::BigInteger i, Org::BouncyCastle::Math::BigInteger lambda, Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters splitParams) ;

/// @brief Method .ctor addr 0xfa8368 size 0x3c virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger i, Org::BouncyCastle::Math::BigInteger lambda, Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters splitParams) ;

/// @brief Method get_I addr 0xfa83a4 size 0x8 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_I() ;

/// @brief Method get_Lambda addr 0xfa83ac size 0x8 virtual true final false
 Org::BouncyCastle::Math::BigInteger get_Lambda() ;

/// @brief Method get_SplitParams addr 0xfa83b4 size 0x8 virtual true final false
 Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters get_SplitParams() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Endo
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters, "Org.BouncyCastle.Math.EC.Endo", "GlvTypeAParameters");
