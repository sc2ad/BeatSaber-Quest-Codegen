#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System {
class MarshalByRefObject;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class IContributeEnvoySink;
}
// Type: System.Runtime.Remoting.Contexts::IContributeEnvoySink
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3105))
// CS Name: System.Runtime.Remoting.Contexts.IContributeEnvoySink
class CORDL_TYPE IContributeEnvoySink : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IContributeEnvoySink() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IContributeEnvoySink(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetEnvoySink addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Runtime::Remoting::Messaging::IMessageSink GetEnvoySink(::System::MarshalByRefObject obj, ::System::Runtime::Remoting::Messaging::IMessageSink nextSink) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Contexts
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::IContributeEnvoySink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::IContributeEnvoySink, "System.Runtime.Remoting.Contexts", "IContributeEnvoySink");
