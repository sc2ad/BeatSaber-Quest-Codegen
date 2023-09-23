#pragma once
#include "../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace Polyglot {
class ILocalize;
}
// Type: Polyglot::ILocalize
namespace Polyglot {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15529))
// CS Name: Polyglot.ILocalize
class CORDL_TYPE ILocalize : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ILocalize() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ILocalize(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnLocalize addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnLocalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Polyglot
NEED_NO_BOX(Polyglot::ILocalize);
DEFINE_IL2CPP_ARG_TYPE(Polyglot::ILocalize, "Polyglot", "ILocalize");
