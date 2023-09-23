#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
// Type: System.Runtime.Remoting.Messaging::IMessage
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3164))
// CS Name: System.Runtime.Remoting.Messaging.IMessage
class CORDL_TYPE IMessage : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IMessage() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMessage(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 System::Collections::IDictionary __declspec(property(get=get_Properties))  Properties;


// Methods

/// @brief Method get_Properties addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::IDictionary get_Properties() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::IMessage);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::IMessage, "System.Runtime.Remoting.Messaging", "IMessage");
