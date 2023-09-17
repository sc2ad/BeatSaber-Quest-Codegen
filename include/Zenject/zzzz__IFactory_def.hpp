#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace Zenject {
class IFactory;
}
// Type: Zenject::IFactory
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10924))
// CS Name: Zenject.IFactory
class CORDL_TYPE IFactory : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IFactory() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IFactory(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::IFactory);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IFactory, "Zenject", "IFactory");