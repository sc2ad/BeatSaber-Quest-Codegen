#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObjectParser;
}
// Type: Org.BouncyCastle.Utilities.IO.Pem::PemObjectParser
namespace Org::BouncyCastle::Utilities::IO::Pem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1807))
// CS Name: Org.BouncyCastle.Utilities.IO.Pem.PemObjectParser
class CORDL_TYPE PemObjectParser : public ::cordl_internals::InterfaceW {
public:
// Declarations
~PemObjectParser() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PemObjectParser(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ParseObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ParseObject(Org::BouncyCastle::Utilities::IO::Pem::PemObject obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::IO::Pem
NEED_NO_BOX(Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::IO::Pem::PemObjectParser, "Org.BouncyCastle.Utilities.IO.Pem", "PemObjectParser");
