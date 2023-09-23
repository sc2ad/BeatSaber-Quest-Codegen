#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class IContributeServerContextSink;
}
// Type: System.Runtime.Remoting.Contexts::IContributeServerContextSink
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3107))
// CS Name: System.Runtime.Remoting.Contexts.IContributeServerContextSink
class CORDL_TYPE IContributeServerContextSink : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IContributeServerContextSink() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IContributeServerContextSink(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetServerContextSink addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Runtime::Remoting::Messaging::IMessageSink GetServerContextSink(System::Runtime::Remoting::Messaging::IMessageSink nextSink) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Contexts
NEED_NO_BOX(System::Runtime::Remoting::Contexts::IContributeServerContextSink);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::IContributeServerContextSink, "System.Runtime.Remoting.Contexts", "IContributeServerContextSink");
