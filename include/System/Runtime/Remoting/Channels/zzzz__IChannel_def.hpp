#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class IChannel;
}
// Type: System.Runtime.Remoting.Channels::IChannel
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3117))
// CS Name: System.Runtime.Remoting.Channels.IChannel
class CORDL_TYPE IChannel : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IChannel() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IChannel(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_ChannelName))  ChannelName;

 int32_t __declspec(property(get=get_ChannelPriority))  ChannelPriority;


// Methods

/// @brief Method get_ChannelName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_ChannelName() ;

/// @brief Method get_ChannelPriority addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_ChannelPriority() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Channels
NEED_NO_BOX(System::Runtime::Remoting::Channels::IChannel);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::IChannel, "System.Runtime.Remoting.Channels", "IChannel");
