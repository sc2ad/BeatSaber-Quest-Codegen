#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace Zenject {
class IInitializable;
}
// Type: Zenject::IInitializable
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15647))
// CS Name: Zenject.IInitializable
class CORDL_TYPE IInitializable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IInitializable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IInitializable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Initialize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::IInitializable);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IInitializable, "Zenject", "IInitializable");
