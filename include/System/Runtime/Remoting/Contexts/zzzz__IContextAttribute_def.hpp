#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
namespace System::Runtime::Remoting::Contexts {
class Context;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class IContextAttribute;
}
// Type: System.Runtime.Remoting.Contexts::IContextAttribute
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3101))
// CS Name: System.Runtime.Remoting.Contexts.IContextAttribute
class CORDL_TYPE IContextAttribute : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IContextAttribute() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IContextAttribute(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetPropertiesForNewContext addr 0x0 size 0xffffffffffffffff virtual true final false
 void GetPropertiesForNewContext(System::Runtime::Remoting::Activation::IConstructionCallMessage msg) ;

/// @brief Method IsContextOK addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsContextOK(System::Runtime::Remoting::Contexts::Context ctx, System::Runtime::Remoting::Activation::IConstructionCallMessage msg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Contexts
NEED_NO_BOX(System::Runtime::Remoting::Contexts::IContextAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::IContextAttribute, "System.Runtime.Remoting.Contexts", "IContextAttribute");
