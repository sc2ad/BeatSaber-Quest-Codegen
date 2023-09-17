#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace System::Runtime::Remoting::Activation {
class IConstructionReturnMessage;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Activation {
class IActivator;
}
// Type: System.Runtime.Remoting.Activation::IActivator
namespace System::Runtime::Remoting::Activation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3129))
// CS Name: System.Runtime.Remoting.Activation.IActivator
class CORDL_TYPE IActivator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IActivator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IActivator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::System::Runtime::Remoting::Activation::IActivator __declspec(property(get=get_NextActivator))  NextActivator;


// Methods

/// @brief Method get_NextActivator addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Runtime::Remoting::Activation::IActivator get_NextActivator() ;

/// @brief Method Activate addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Runtime::Remoting::Activation::IConstructionReturnMessage Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage msg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Activation
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Activation::IActivator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Activation::IActivator, "System.Runtime.Remoting.Activation", "IActivator");
