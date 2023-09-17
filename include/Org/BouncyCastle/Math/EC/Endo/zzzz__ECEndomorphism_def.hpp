#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace Org::BouncyCastle::Math::EC {
class ECPointMap;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Endo {
class ECEndomorphism;
}
// Type: Org.BouncyCastle.Math.EC.Endo::ECEndomorphism
namespace Org::BouncyCastle::Math::EC::Endo {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1515))
// CS Name: Org.BouncyCastle.Math.EC.Endo.ECEndomorphism
class CORDL_TYPE ECEndomorphism : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ECEndomorphism() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECEndomorphism(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::Org::BouncyCastle::Math::EC::ECPointMap __declspec(property(get=get_PointMap))  PointMap;

 bool __declspec(property(get=get_HasEfficientPointMap))  HasEfficientPointMap;


// Methods

/// @brief Method get_PointMap addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPointMap get_PointMap() ;

/// @brief Method get_HasEfficientPointMap addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_HasEfficientPointMap() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Endo
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism, "Org.BouncyCastle.Math.EC.Endo", "ECEndomorphism");
