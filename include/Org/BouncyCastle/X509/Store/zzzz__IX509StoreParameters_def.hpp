#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class IX509StoreParameters;
}
// Type: Org.BouncyCastle.X509.Store::IX509StoreParameters
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1843))
// CS Name: Org.BouncyCastle.X509.Store.IX509StoreParameters
class CORDL_TYPE IX509StoreParameters : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IX509StoreParameters() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IX509StoreParameters(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509::Store
NEED_NO_BOX(Org::BouncyCastle::X509::Store::IX509StoreParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::Store::IX509StoreParameters, "Org.BouncyCastle.X509.Store", "IX509StoreParameters");
