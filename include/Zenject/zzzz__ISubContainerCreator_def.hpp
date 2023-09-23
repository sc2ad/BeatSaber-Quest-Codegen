#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Zenject {
class ISubContainerCreator;
}
// Type: Zenject::ISubContainerCreator
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11183))
// CS Name: Zenject.ISubContainerCreator
class CORDL_TYPE ISubContainerCreator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISubContainerCreator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISubContainerCreator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method CreateSubContainer addr 0x0 size 0xffffffffffffffff virtual true final false
 Zenject::DiContainer CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair> args, Zenject::InjectContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ISubContainerCreator);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ISubContainerCreator, "Zenject", "ISubContainerCreator");
