#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
namespace System {
class IDisposable;
}
namespace System::ComponentModel {
class ComponentCollection;
}
namespace System::ComponentModel {
class IComponent;
}
// Forward declare root types
namespace System::ComponentModel {
class IContainer;
}
// Type: System.ComponentModel::IContainer
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8247))
// CS Name: System.ComponentModel.IContainer
class CORDL_TYPE IContainer : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

~IContainer() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IContainer(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::System::ComponentModel::ComponentCollection __declspec(property(get=get_Components))  Components;


// Methods

/// @brief Method get_Components addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::ComponentModel::ComponentCollection get_Components() ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final false
 void Remove(::System::ComponentModel::IComponent component) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::IContainer);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IContainer, "System.ComponentModel", "IContainer");
