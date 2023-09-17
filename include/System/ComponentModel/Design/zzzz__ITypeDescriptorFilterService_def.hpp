#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace System::ComponentModel {
class IComponent;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class ITypeDescriptorFilterService;
}
// Type: System.ComponentModel.Design::ITypeDescriptorFilterService
namespace System::ComponentModel::Design {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8354))
// CS Name: System.ComponentModel.Design.ITypeDescriptorFilterService
class CORDL_TYPE ITypeDescriptorFilterService : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITypeDescriptorFilterService() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITypeDescriptorFilterService(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method FilterAttributes addr 0x0 size 0xffffffffffffffff virtual true final false
 bool FilterAttributes(::System::ComponentModel::IComponent component, ::System::Collections::IDictionary attributes) ;

/// @brief Method FilterEvents addr 0x0 size 0xffffffffffffffff virtual true final false
 bool FilterEvents(::System::ComponentModel::IComponent component, ::System::Collections::IDictionary events) ;

/// @brief Method FilterProperties addr 0x0 size 0xffffffffffffffff virtual true final false
 bool FilterProperties(::System::ComponentModel::IComponent component, ::System::Collections::IDictionary properties) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel::Design
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::Design::ITypeDescriptorFilterService);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::ITypeDescriptorFilterService, "System.ComponentModel.Design", "ITypeDescriptorFilterService");
