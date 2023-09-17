#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class IDynamicProperty;
}
// Type: System.Runtime.Remoting.Contexts::IDynamicProperty
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3109))
// CS Name: System.Runtime.Remoting.Contexts.IDynamicProperty
class CORDL_TYPE IDynamicProperty : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDynamicProperty() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDynamicProperty(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;


// Methods

/// @brief Method get_Name addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Name() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Contexts
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::IDynamicProperty);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::IDynamicProperty, "System.Runtime.Remoting.Contexts", "IDynamicProperty");
