#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class ECPointMap;
}
// Type: Org.BouncyCastle.Math.EC::ECPointMap
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1573))
// CS Name: Org.BouncyCastle.Math.EC.ECPointMap
class CORDL_TYPE ECPointMap : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ECPointMap() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ECPointMap(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Map addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Math::EC::ECPoint Map(::Org::BouncyCastle::Math::EC::ECPoint p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::ECPointMap);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::ECPointMap, "Org.BouncyCastle.Math.EC", "ECPointMap");
