#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace Org::BouncyCastle::X509::Store {
class IX509Selector;
}
namespace System::Collections {
class ICollection;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
// Type: Org.BouncyCastle.X509.Store::IX509Store
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1842))
// CS Name: Org.BouncyCastle.X509.Store.IX509Store
class CORDL_TYPE IX509Store : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IX509Store() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IX509Store(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetMatches addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::ICollection GetMatches(::Org::BouncyCastle::X509::Store::IX509Selector selector) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509::Store
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::X509::Store::IX509Store);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Store::IX509Store, "Org.BouncyCastle.X509.Store", "IX509Store");
