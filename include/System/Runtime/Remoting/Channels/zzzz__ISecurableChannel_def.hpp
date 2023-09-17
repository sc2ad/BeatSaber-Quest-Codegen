#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class ISecurableChannel;
}
// Type: System.Runtime.Remoting.Channels::ISecurableChannel
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3122))
// CS Name: System.Runtime.Remoting.Channels.ISecurableChannel
class CORDL_TYPE ISecurableChannel : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISecurableChannel() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISecurableChannel(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(put=set_IsSecured))  IsSecured;


// Methods

/// @brief Method set_IsSecured addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_IsSecured(bool value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Channels
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Channels::ISecurableChannel);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::ISecurableChannel, "System.Runtime.Remoting.Channels", "ISecurableChannel");
