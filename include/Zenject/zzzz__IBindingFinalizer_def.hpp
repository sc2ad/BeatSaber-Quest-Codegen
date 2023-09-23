#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace Zenject {
class DiContainer;
}
namespace Zenject {
struct BindingInheritanceMethods;
}
// Forward declare root types
namespace Zenject {
class IBindingFinalizer;
}
// Type: Zenject::IBindingFinalizer
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10895))
// CS Name: Zenject.IBindingFinalizer
class CORDL_TYPE IBindingFinalizer : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IBindingFinalizer() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBindingFinalizer(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 Zenject::BindingInheritanceMethods __declspec(property(get=get_BindingInheritanceMethod))  BindingInheritanceMethod;


// Methods

/// @brief Method get_BindingInheritanceMethod addr 0x0 size 0xffffffffffffffff virtual true final false
 Zenject::BindingInheritanceMethods get_BindingInheritanceMethod() ;

/// @brief Method FinalizeBinding addr 0x0 size 0xffffffffffffffff virtual true final false
 void FinalizeBinding(Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::IBindingFinalizer);
DEFINE_IL2CPP_ARG_TYPE(Zenject::IBindingFinalizer, "Zenject", "IBindingFinalizer");
