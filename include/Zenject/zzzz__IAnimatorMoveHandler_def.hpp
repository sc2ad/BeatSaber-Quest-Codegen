#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace Zenject {
class IAnimatorMoveHandler;
}
// Type: Zenject::IAnimatorMoveHandler
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11246))
// CS Name: Zenject.IAnimatorMoveHandler
class CORDL_TYPE IAnimatorMoveHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IAnimatorMoveHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAnimatorMoveHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method OnAnimatorMove addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnAnimatorMove() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::IAnimatorMoveHandler);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IAnimatorMoveHandler, "Zenject", "IAnimatorMoveHandler");
