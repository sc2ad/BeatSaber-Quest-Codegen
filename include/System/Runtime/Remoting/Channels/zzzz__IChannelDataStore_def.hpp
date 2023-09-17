#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class IChannelDataStore;
}
// Type: System.Runtime.Remoting.Channels::IChannelDataStore
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3118))
// CS Name: System.Runtime.Remoting.Channels.IChannelDataStore
class CORDL_TYPE IChannelDataStore : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IChannelDataStore() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IChannelDataStore(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Channels
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Channels::IChannelDataStore);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::IChannelDataStore, "System.Runtime.Remoting.Channels", "IChannelDataStore");
