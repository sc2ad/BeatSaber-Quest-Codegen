#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
// Type: System.Runtime.Remoting.Messaging::IMessageSink
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3166))
// CS Name: System.Runtime.Remoting.Messaging.IMessageSink
class CORDL_TYPE IMessageSink : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IMessageSink() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMessageSink(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method SyncProcessMessage addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Runtime::Remoting::Messaging::IMessage SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg) ;

/// @brief Method AsyncProcessMessage addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Runtime::Remoting::Messaging::IMessageCtrl AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg, System::Runtime::Remoting::Messaging::IMessageSink replySink) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::IMessageSink);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::IMessageSink, "System.Runtime.Remoting.Messaging", "IMessageSink");
