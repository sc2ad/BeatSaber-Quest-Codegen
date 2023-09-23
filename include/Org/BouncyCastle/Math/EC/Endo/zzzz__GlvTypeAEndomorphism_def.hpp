#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECPointMap;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class ECEndomorphism;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class GlvEndomorphism;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class GlvTypeAParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Endo {
class GlvTypeAEndomorphism;
}
// Type: Org.BouncyCastle.Math.EC.Endo::GlvTypeAEndomorphism
namespace Org::BouncyCastle::Math::EC::Endo {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1521))
// CS Name: Org.BouncyCastle.Math.EC.Endo.GlvTypeAEndomorphism
class CORDL_TYPE GlvTypeAEndomorphism : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism
constexpr operator  Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Math::EC::Endo::ECEndomorphism
constexpr operator  Org::BouncyCastle::Math::EC::Endo::ECEndomorphism() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlvTypeAEndomorphism() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlvTypeAEndomorphism", modifiers: " const&", def_value: None }]
constexpr GlvTypeAEndomorphism(GlvTypeAEndomorphism const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlvTypeAEndomorphism", modifiers: "&&", def_value: None }]
constexpr GlvTypeAEndomorphism(GlvTypeAEndomorphism&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlvTypeAEndomorphism(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlvTypeAEndomorphism& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlvTypeAEndomorphism& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlvTypeAEndomorphism& operator=(GlvTypeAEndomorphism&& o) noexcept = default;
  constexpr GlvTypeAEndomorphism& operator=(GlvTypeAEndomorphism const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters __declspec(property(get=__get_m_parameters, put=__set_m_parameters))  m_parameters;

constexpr void __set_m_parameters(Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters value) ;

constexpr Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters __get_m_parameters() const;

 Org::BouncyCastle::Math::EC::ECPointMap __declspec(property(get=__get_m_pointMap, put=__set_m_pointMap))  m_pointMap;

constexpr void __set_m_pointMap(Org::BouncyCastle::Math::EC::ECPointMap value) ;

constexpr Org::BouncyCastle::Math::EC::ECPointMap __get_m_pointMap() const;


// Properties

 Org::BouncyCastle::Math::EC::ECPointMap __declspec(property(get=get_PointMap))  PointMap;

 bool __declspec(property(get=get_HasEfficientPointMap))  HasEfficientPointMap;


// Methods

// Ctor Parameters [CppParam { name: "curve", ty: "Org::BouncyCastle::Math::EC::ECCurve", modifiers: "", def_value: None }, CppParam { name: "parameters", ty: "Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters", modifiers: "", def_value: None }]
explicit GlvTypeAEndomorphism(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters parameters) ;

/// @brief Method .ctor addr 0xfa8224 size 0xb8 virtual false final false
 void _ctor(Org::BouncyCastle::Math::EC::ECCurve curve, Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters parameters) ;

/// @brief Method DecomposeScalar addr 0xfa82dc size 0x7c virtual true final false
 ::ArrayW<Org::BouncyCastle::Math::BigInteger> DecomposeScalar(Org::BouncyCastle::Math::BigInteger k) ;

/// @brief Method get_PointMap addr 0xfa8358 size 0x8 virtual true final false
 Org::BouncyCastle::Math::EC::ECPointMap get_PointMap() ;

/// @brief Method get_HasEfficientPointMap addr 0xfa8360 size 0x8 virtual true final false
 bool get_HasEfficientPointMap() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Endo
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism, "Org.BouncyCastle.Math.EC.Endo", "GlvTypeAEndomorphism");
