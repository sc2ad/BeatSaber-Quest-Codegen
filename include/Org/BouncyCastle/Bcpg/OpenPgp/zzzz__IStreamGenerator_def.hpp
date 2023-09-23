#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class IStreamGenerator;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::IStreamGenerator
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1627))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.IStreamGenerator
class CORDL_TYPE IStreamGenerator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IStreamGenerator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IStreamGenerator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Close addr 0x0 size 0xffffffffffffffff virtual true final false
 void Close() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::IStreamGenerator, "Org.BouncyCastle.Bcpg.OpenPgp", "IStreamGenerator");
