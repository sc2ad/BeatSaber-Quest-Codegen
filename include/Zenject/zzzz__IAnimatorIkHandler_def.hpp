#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace Zenject {
class IAnimatorIkHandler;
}
// Type: Zenject::IAnimatorIkHandler
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11245))
// CS Name: Zenject.IAnimatorIkHandler
class CORDL_TYPE IAnimatorIkHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IAnimatorIkHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAnimatorIkHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnAnimatorIk addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnAnimatorIk() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::IAnimatorIkHandler);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IAnimatorIkHandler, "Zenject", "IAnimatorIkHandler");
