#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class IDigestCalculator;
}
// Type: Org.BouncyCastle.Cms::IDigestCalculator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(610))
// CS Name: Org.BouncyCastle.Cms.IDigestCalculator
class CORDL_TYPE IDigestCalculator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDigestCalculator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDigestCalculator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetDigest addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<uint8_t> GetDigest() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::IDigestCalculator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::IDigestCalculator, "Org.BouncyCastle.Cms", "IDigestCalculator");
