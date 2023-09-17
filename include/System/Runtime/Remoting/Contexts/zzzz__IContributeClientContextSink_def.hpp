#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class IContributeClientContextSink;
}
// Type: System.Runtime.Remoting.Contexts::IContributeClientContextSink
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3103))
// CS Name: System.Runtime.Remoting.Contexts.IContributeClientContextSink
class CORDL_TYPE IContributeClientContextSink : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IContributeClientContextSink() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IContributeClientContextSink(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetClientContextSink addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Runtime::Remoting::Messaging::IMessageSink GetClientContextSink(::System::Runtime::Remoting::Messaging::IMessageSink nextSink) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Contexts
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::IContributeClientContextSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::IContributeClientContextSink, "System.Runtime.Remoting.Contexts", "IContributeClientContextSink");
