#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace System::Runtime::Remoting::Contexts {
class IDynamicMessageSink;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class IContributeDynamicSink;
}
// Type: System.Runtime.Remoting.Contexts::IContributeDynamicSink
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3104))
// CS Name: System.Runtime.Remoting.Contexts.IContributeDynamicSink
class CORDL_TYPE IContributeDynamicSink : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IContributeDynamicSink() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IContributeDynamicSink(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetDynamicSink addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Runtime::Remoting::Contexts::IDynamicMessageSink GetDynamicSink() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Contexts
NEED_NO_BOX(System::Runtime::Remoting::Contexts::IContributeDynamicSink);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::IContributeDynamicSink, "System.Runtime.Remoting.Contexts", "IContributeDynamicSink");
