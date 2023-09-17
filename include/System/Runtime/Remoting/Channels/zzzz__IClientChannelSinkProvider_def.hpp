#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class IClientChannelSinkProvider;
}
// Type: System.Runtime.Remoting.Channels::IClientChannelSinkProvider
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3121))
// CS Name: System.Runtime.Remoting.Channels.IClientChannelSinkProvider
class CORDL_TYPE IClientChannelSinkProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IClientChannelSinkProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IClientChannelSinkProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::System::Runtime::Remoting::Channels::IClientChannelSinkProvider __declspec(property(put=set_Next))  Next;


// Methods

/// @brief Method set_Next addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_Next(::System::Runtime::Remoting::Channels::IClientChannelSinkProvider value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Channels
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Channels::IClientChannelSinkProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::IClientChannelSinkProvider, "System.Runtime.Remoting.Channels", "IClientChannelSinkProvider");
