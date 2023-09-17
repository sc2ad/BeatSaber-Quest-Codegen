#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObjectGenerator;
}
// Type: Org.BouncyCastle.Utilities.IO.Pem::PemObjectGenerator
namespace Org::BouncyCastle::Utilities::IO::Pem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1681))
// CS Name: Org.BouncyCastle.Utilities.IO.Pem.PemObjectGenerator
class CORDL_TYPE PemObjectGenerator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~PemObjectGenerator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PemObjectGenerator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Generate addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Org::BouncyCastle::Utilities::IO::Pem::PemObject Generate() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::IO::Pem
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator, "Org.BouncyCastle.Utilities.IO.Pem", "PemObjectGenerator");
