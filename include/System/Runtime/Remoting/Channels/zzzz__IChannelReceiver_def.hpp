#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::Remoting::Channels {
class IChannel;
}
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class IChannelReceiver;
}
// Type: System.Runtime.Remoting.Channels::IChannelReceiver
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3119))
// CS Name: System.Runtime.Remoting.Channels.IChannelReceiver
class CORDL_TYPE IChannelReceiver : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Remoting::Channels::IChannel
constexpr operator  System::Runtime::Remoting::Channels::IChannel() const noexcept;

~IChannelReceiver() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IChannelReceiver(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_ChannelData))  ChannelData;


// Methods

/// @brief Method get_ChannelData addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_ChannelData() ;

/// @brief Method StartListening addr 0x0 size 0xffffffffffffffff virtual true final false
 void StartListening(::bs_hook::Il2CppWrapperType data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Channels
NEED_NO_BOX(System::Runtime::Remoting::Channels::IChannelReceiver);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::IChannelReceiver, "System.Runtime.Remoting.Channels", "IChannelReceiver");
