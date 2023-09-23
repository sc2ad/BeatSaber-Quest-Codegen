#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
// Forward declare root types
namespace GlobalNamespace {
class IJumpOffsetYProvider;
}
// Type: ::IJumpOffsetYProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4914))
// CS Name: IJumpOffsetYProvider
class CORDL_TYPE IJumpOffsetYProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IJumpOffsetYProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IJumpOffsetYProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 float_t __declspec(property(get=get_jumpOffsetY))  jumpOffsetY;


// Methods

/// @brief Method get_jumpOffsetY addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_jumpOffsetY() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IJumpOffsetYProvider);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IJumpOffsetYProvider, "", "IJumpOffsetYProvider");
