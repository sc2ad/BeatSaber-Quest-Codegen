#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Remoting::Contexts {
class Context;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class IContextProperty;
}
// Type: System.Runtime.Remoting.Contexts::IContextProperty
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3102))
// CS Name: System.Runtime.Remoting.Contexts.IContextProperty
class CORDL_TYPE IContextProperty : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IContextProperty() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IContextProperty(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;


// Methods

/// @brief Method get_Name addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_Name() ;

/// @brief Method Freeze addr 0x0 size 0xffffffffffffffff virtual true final false
 void Freeze(::System::Runtime::Remoting::Contexts::Context newContext) ;

/// @brief Method IsNewContextOK addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsNewContextOK(::System::Runtime::Remoting::Contexts::Context newCtx) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Contexts
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::IContextProperty);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::IContextProperty, "System.Runtime.Remoting.Contexts", "IContextProperty");
