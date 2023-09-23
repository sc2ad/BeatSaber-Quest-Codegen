#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class IProvider;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Zenject::Internal {
class IDecoratorProvider;
}
// Type: Zenject.Internal::IDecoratorProvider
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11311))
// CS Name: Zenject.Internal.IDecoratorProvider
class CORDL_TYPE IDecoratorProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDecoratorProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDecoratorProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetAllInstances addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetAllInstances(Zenject::IProvider provider, Zenject::InjectContext context, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
NEED_NO_BOX(Zenject::Internal::IDecoratorProvider);
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::IDecoratorProvider, "Zenject.Internal", "IDecoratorProvider");
