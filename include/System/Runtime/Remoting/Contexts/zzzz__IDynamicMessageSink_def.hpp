#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class IDynamicMessageSink;
}
// Type: System.Runtime.Remoting.Contexts::IDynamicMessageSink
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3108))
// CS Name: System.Runtime.Remoting.Contexts.IDynamicMessageSink
class CORDL_TYPE IDynamicMessageSink : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDynamicMessageSink() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDynamicMessageSink(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ProcessMessageFinish addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessMessageFinish(System::Runtime::Remoting::Messaging::IMessage replyMsg, bool bCliSide, bool bAsync) ;

/// @brief Method ProcessMessageStart addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessMessageStart(System::Runtime::Remoting::Messaging::IMessage reqMsg, bool bCliSide, bool bAsync) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Contexts
NEED_NO_BOX(System::Runtime::Remoting::Contexts::IDynamicMessageSink);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::IDynamicMessageSink, "System.Runtime.Remoting.Contexts", "IDynamicMessageSink");
