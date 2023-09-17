#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
namespace System::ComponentModel {
class IContainer;
}
namespace System {
class IServiceProvider;
}
// Forward declare root types
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
// Type: System.ComponentModel::ITypeDescriptorContext
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8285))
// CS Name: System.ComponentModel.ITypeDescriptorContext
class CORDL_TYPE ITypeDescriptorContext : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::IServiceProvider
constexpr operator  ::System::IServiceProvider() const noexcept;

~ITypeDescriptorContext() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITypeDescriptorContext(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::System::ComponentModel::IContainer __declspec(property(get=get_Container))  Container;


// Methods

/// @brief Method get_Container addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::ComponentModel::IContainer get_Container() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::ITypeDescriptorContext);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ITypeDescriptorContext, "System.ComponentModel", "ITypeDescriptorContext");
