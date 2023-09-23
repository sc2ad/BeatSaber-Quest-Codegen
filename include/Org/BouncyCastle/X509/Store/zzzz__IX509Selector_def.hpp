#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class ICloneable;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class IX509Selector;
}
// Type: Org.BouncyCastle.X509.Store::IX509Selector
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(677))
// CS Name: Org.BouncyCastle.X509.Store.IX509Selector
class CORDL_TYPE IX509Selector : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

~IX509Selector() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IX509Selector(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Match addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Match(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509::Store
NEED_NO_BOX(Org::BouncyCastle::X509::Store::IX509Selector);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::Store::IX509Selector, "Org.BouncyCastle.X509.Store", "IX509Selector");
