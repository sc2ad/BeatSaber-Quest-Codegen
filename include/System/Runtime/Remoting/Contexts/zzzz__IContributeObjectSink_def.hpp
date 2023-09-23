#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System {
class MarshalByRefObject;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class IContributeObjectSink;
}
// Type: System.Runtime.Remoting.Contexts::IContributeObjectSink
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3106))
// CS Name: System.Runtime.Remoting.Contexts.IContributeObjectSink
class CORDL_TYPE IContributeObjectSink : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IContributeObjectSink() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IContributeObjectSink(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetObjectSink addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Runtime::Remoting::Messaging::IMessageSink GetObjectSink(System::MarshalByRefObject obj, System::Runtime::Remoting::Messaging::IMessageSink nextSink) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Contexts
NEED_NO_BOX(System::Runtime::Remoting::Contexts::IContributeObjectSink);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::IContributeObjectSink, "System.Runtime.Remoting.Contexts", "IContributeObjectSink");
