#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
// Type: Org.BouncyCastle.Math.EC.Multiplier::PreCompInfo
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1516))
// CS Name: Org.BouncyCastle.Math.EC.Multiplier.PreCompInfo
class CORDL_TYPE PreCompInfo : public ::cordl_internals::InterfaceW {
public:
// Declarations
~PreCompInfo() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PreCompInfo(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo, "Org.BouncyCastle.Math.EC.Multiplier", "PreCompInfo");
