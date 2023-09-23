#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class IServerChannelSinkProvider;
}
// Type: System.Runtime.Remoting.Channels::IServerChannelSinkProvider
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3123))
// CS Name: System.Runtime.Remoting.Channels.IServerChannelSinkProvider
class CORDL_TYPE IServerChannelSinkProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IServerChannelSinkProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IServerChannelSinkProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 System::Runtime::Remoting::Channels::IServerChannelSinkProvider __declspec(property(put=set_Next))  Next;


// Methods

/// @brief Method set_Next addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_Next(System::Runtime::Remoting::Channels::IServerChannelSinkProvider value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Channels
NEED_NO_BOX(System::Runtime::Remoting::Channels::IServerChannelSinkProvider);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::IServerChannelSinkProvider, "System.Runtime.Remoting.Channels", "IServerChannelSinkProvider");
