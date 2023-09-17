#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class IPreCompCallback;
}
// Type: Org.BouncyCastle.Math.EC.Multiplier::IPreCompCallback
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1373))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.IPreCompCallback
class CORDL_TYPE IPreCompCallback : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPreCompCallback() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPreCompCallback(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Precompute addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo existing) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback, "Org.BouncyCastle.Math.EC.Multiplier", "IPreCompCallback");
