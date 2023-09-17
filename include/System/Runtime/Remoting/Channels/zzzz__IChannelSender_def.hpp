#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Remoting::Channels {
class IChannel;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class IChannelSender;
}
// Type: System.Runtime.Remoting.Channels::IChannelSender
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3120))
// CS Name: System.Runtime.Remoting.Channels.IChannelSender
class CORDL_TYPE IChannelSender : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Remoting::Channels::IChannel
constexpr operator  ::System::Runtime::Remoting::Channels::IChannel() const noexcept;

~IChannelSender() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IChannelSender(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method CreateMessageSink addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Runtime::Remoting::Messaging::IMessageSink CreateMessageSink(::StringW url, ::bs_hook::Il2CppWrapperType remoteChannelData, ByRef<::StringW> objectURI) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Channels
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Channels::IChannelSender);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::IChannelSender, "System.Runtime.Remoting.Channels", "IChannelSender");
