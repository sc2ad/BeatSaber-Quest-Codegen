#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Remoting::Channels {
class IChannel;
}
namespace System::Runtime::Remoting::Channels {
class IChannelSender;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Channels {
class IChannelReceiver;
}
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class CrossAppDomainChannel;
}
// Type: System.Runtime.Remoting.Channels::CrossAppDomainChannel
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3112))
// CS Name: System.Runtime.Remoting.Channels.CrossAppDomainChannel
class CORDL_TYPE CrossAppDomainChannel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Remoting::Channels::IChannel
constexpr operator  System::Runtime::Remoting::Channels::IChannel() const noexcept;

/// @brief Convert operator to System::Runtime::Remoting::Channels::IChannelSender
constexpr operator  System::Runtime::Remoting::Channels::IChannelSender() const noexcept;

/// @brief Convert operator to System::Runtime::Remoting::Channels::IChannelReceiver
constexpr operator  System::Runtime::Remoting::Channels::IChannelReceiver() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CrossAppDomainChannel() = default;

// Ctor Parameters [CppParam { name: "", ty: "CrossAppDomainChannel", modifiers: " const&", def_value: None }]
constexpr CrossAppDomainChannel(CrossAppDomainChannel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CrossAppDomainChannel", modifiers: "&&", def_value: None }]
constexpr CrossAppDomainChannel(CrossAppDomainChannel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CrossAppDomainChannel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CrossAppDomainChannel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CrossAppDomainChannel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CrossAppDomainChannel& operator=(CrossAppDomainChannel&& o) noexcept = default;
  constexpr CrossAppDomainChannel& operator=(CrossAppDomainChannel const& o) noexcept = default;
                


// Fields

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_s_lock, put=__set_s_lock))  s_lock;

static void __set_s_lock(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_s_lock() ;


// Properties

 ::StringW __declspec(property(get=get_ChannelName))  ChannelName;

 int32_t __declspec(property(get=get_ChannelPriority))  ChannelPriority;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_ChannelData))  ChannelData;


// Methods

/// @brief Method RegisterCrossAppDomainChannel addr 0x233696c size 0x144 virtual false final false
static void RegisterCrossAppDomainChannel() ;

/// @brief Method get_ChannelName addr 0x2336ab8 size 0x40 virtual true final false
 ::StringW get_ChannelName() ;

/// @brief Method get_ChannelPriority addr 0x2336af8 size 0x8 virtual true final false
 int32_t get_ChannelPriority() ;

/// @brief Method get_ChannelData addr 0x2336b00 size 0x6c virtual true final false
 ::bs_hook::Il2CppWrapperType get_ChannelData() ;

/// @brief Method StartListening addr 0x2336b6c size 0x4 virtual true final false
 void StartListening(::bs_hook::Il2CppWrapperType data) ;

/// @brief Method CreateMessageSink addr 0x2336b70 size 0x180 virtual true final false
 System::Runtime::Remoting::Messaging::IMessageSink CreateMessageSink(::StringW url, ::bs_hook::Il2CppWrapperType data, ByRef<::StringW> uri) ;

// Ctor Parameters []
explicit CrossAppDomainChannel() ;

/// @brief Method .ctor addr 0x2336ab0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Channels
NEED_NO_BOX(System::Runtime::Remoting::Channels::CrossAppDomainChannel);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::CrossAppDomainChannel, "System.Runtime.Remoting.Channels", "CrossAppDomainChannel");
