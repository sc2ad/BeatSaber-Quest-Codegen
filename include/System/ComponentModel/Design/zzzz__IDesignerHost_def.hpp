#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace System::ComponentModel {
class IComponent;
}
namespace System::ComponentModel::Design {
class IDesigner;
}
namespace System {
class IServiceProvider;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class IDesignerHost;
}
// Type: System.ComponentModel.Design::IDesignerHost
namespace System::ComponentModel::Design {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8350))
// CS Name: System.ComponentModel.Design.IDesignerHost
class CORDL_TYPE IDesignerHost : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::IServiceProvider
constexpr operator  System::IServiceProvider() const noexcept;

~IDesignerHost() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDesignerHost(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 System::ComponentModel::IComponent __declspec(property(get=get_RootComponent))  RootComponent;


// Methods

/// @brief Method get_RootComponent addr 0x0 size 0xffffffffffffffff virtual true final false
 System::ComponentModel::IComponent get_RootComponent() ;

/// @brief Method GetDesigner addr 0x0 size 0xffffffffffffffff virtual true final false
 System::ComponentModel::Design::IDesigner GetDesigner(System::ComponentModel::IComponent component) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel::Design
NEED_NO_BOX(System::ComponentModel::Design::IDesignerHost);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::Design::IDesignerHost, "System.ComponentModel.Design", "IDesignerHost");
