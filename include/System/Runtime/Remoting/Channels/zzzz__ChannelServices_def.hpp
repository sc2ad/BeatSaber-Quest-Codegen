#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Remoting::Channels {
class IChannelSender;
}
namespace System::Runtime::Remoting::Channels {
class IChannel;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Runtime::Remoting::Contexts {
class CrossContextChannel;
}
namespace System::Runtime::Remoting {
class ChannelData;
}
namespace System::Collections {
class IList;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting {
class ProviderData;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class ReturnMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class ChannelServices;
}
// Type: System.Runtime.Remoting.Channels::ChannelServices
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3110))
// CS Name: System.Runtime.Remoting.Channels.ChannelServices
class CORDL_TYPE ChannelServices : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ChannelServices() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChannelServices", modifiers: " const&", def_value: None }]
constexpr ChannelServices(ChannelServices const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChannelServices", modifiers: "&&", def_value: None }]
constexpr ChannelServices(ChannelServices&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChannelServices(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ChannelServices& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChannelServices& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChannelServices& operator=(ChannelServices&& o) noexcept = default;
  constexpr ChannelServices& operator=(ChannelServices const& o) noexcept = default;
                


// Fields

static ::System::Collections::ArrayList __declspec(property(get=__get_registeredChannels, put=__set_registeredChannels))  registeredChannels;

static void __set_registeredChannels(::System::Collections::ArrayList value) ;

static ::System::Collections::ArrayList __get_registeredChannels() ;

static ::System::Collections::ArrayList __declspec(property(get=__get_delayedClientChannels, put=__set_delayedClientChannels))  delayedClientChannels;

static void __set_delayedClientChannels(::System::Collections::ArrayList value) ;

static ::System::Collections::ArrayList __get_delayedClientChannels() ;

static ::System::Runtime::Remoting::Contexts::CrossContextChannel __declspec(property(get=__get__crossContextSink, put=__set__crossContextSink))  _crossContextSink;

static void __set__crossContextSink(::System::Runtime::Remoting::Contexts::CrossContextChannel value) ;

static ::System::Runtime::Remoting::Contexts::CrossContextChannel __get__crossContextSink() ;

static ::StringW __declspec(property(get=__get_CrossContextUrl, put=__set_CrossContextUrl))  CrossContextUrl;

static void __set_CrossContextUrl(::StringW value) ;

static ::StringW __get_CrossContextUrl() ;

static ::System::Collections::IList __declspec(property(get=__get_oldStartModeTypes, put=__set_oldStartModeTypes))  oldStartModeTypes;

static void __set_oldStartModeTypes(::System::Collections::IList value) ;

static ::System::Collections::IList __get_oldStartModeTypes() ;


// Properties

static ::System::Runtime::Remoting::Contexts::CrossContextChannel __declspec(property(get=get_CrossContextChannel))  CrossContextChannel;


// Methods

/// @brief Method get_CrossContextChannel addr 0x2333914 size 0x58 virtual false final false
static ::System::Runtime::Remoting::Contexts::CrossContextChannel get_CrossContextChannel() ;

/// @brief Method CreateClientChannelSinkChain addr 0x233396c size 0x87c virtual false final false
static ::System::Runtime::Remoting::Messaging::IMessageSink CreateClientChannelSinkChain(::StringW url, ::bs_hook::Il2CppWrapperType remoteChannelData, ByRef<::StringW> objectUri) ;

/// @brief Method CreateClientChannelSinkChain addr 0x23341e8 size 0x208 virtual false final false
static ::System::Runtime::Remoting::Messaging::IMessageSink CreateClientChannelSinkChain(::System::Runtime::Remoting::Channels::IChannelSender sender, ::StringW url, ::ArrayW<::bs_hook::Il2CppWrapperType> channelDataArray, ByRef<::StringW> objectUri) ;

/// @brief Method RegisterChannel addr 0x23343f0 size 0x58 virtual false final false
static void RegisterChannel(::System::Runtime::Remoting::Channels::IChannel chnl) ;

/// @brief Method RegisterChannel addr 0x2334448 size 0x87c virtual false final false
static void RegisterChannel(::System::Runtime::Remoting::Channels::IChannel chnl, bool ensureSecurity) ;

/// @brief Method RegisterChannelConfig addr 0x2334cc4 size 0xbe8 virtual false final false
static void RegisterChannelConfig(::System::Runtime::Remoting::ChannelData channel) ;

/// @brief Method CreateProvider addr 0x23358ac size 0x318 virtual false final false
static ::bs_hook::Il2CppWrapperType CreateProvider(::System::Runtime::Remoting::ProviderData prov) ;

/// @brief Method SyncDispatchMessage addr 0x2335bc4 size 0xa8 virtual false final false
static ::System::Runtime::Remoting::Messaging::IMessage SyncDispatchMessage(::System::Runtime::Remoting::Messaging::IMessage msg) ;

/// @brief Method CheckIncomingMessage addr 0x2335c6c size 0x2a8 virtual false final false
static ::System::Runtime::Remoting::Messaging::ReturnMessage CheckIncomingMessage(::System::Runtime::Remoting::Messaging::IMessage msg) ;

/// @brief Method CheckReturnMessage addr 0x2335f14 size 0x1d0 virtual false final false
static ::System::Runtime::Remoting::Messaging::IMessage CheckReturnMessage(::System::Runtime::Remoting::Messaging::IMessage callMsg, ::System::Runtime::Remoting::Messaging::IMessage retMsg) ;

/// @brief Method IsLocalCall addr 0x23360e4 size 0x8 virtual false final false
static bool IsLocalCall(::System::Runtime::Remoting::Messaging::IMessage callMsg) ;

/// @brief Method GetCurrentChannelInfo addr 0x2336200 size 0x500 virtual false final false
static ::ArrayW<::bs_hook::Il2CppWrapperType> GetCurrentChannelInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Channels
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Channels::ChannelServices);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::ChannelServices, "System.Runtime.Remoting.Channels", "ChannelServices");
