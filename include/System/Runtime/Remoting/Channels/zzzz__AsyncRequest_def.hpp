#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class AsyncRequest;
}
// Type: System.Runtime.Remoting.Channels::AsyncRequest
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3116))
// CS Name: System.Runtime.Remoting.Channels.AsyncRequest
class CORDL_TYPE AsyncRequest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AsyncRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncRequest", modifiers: " const&", def_value: None }]
constexpr AsyncRequest(AsyncRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncRequest", modifiers: "&&", def_value: None }]
constexpr AsyncRequest(AsyncRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncRequest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AsyncRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncRequest& operator=(AsyncRequest&& o) noexcept = default;
  constexpr AsyncRequest& operator=(AsyncRequest const& o) noexcept = default;
                


// Fields

 System::Runtime::Remoting::Messaging::IMessageSink __declspec(property(get=__get_ReplySink, put=__set_ReplySink))  ReplySink;

constexpr void __set_ReplySink(System::Runtime::Remoting::Messaging::IMessageSink value) ;

constexpr System::Runtime::Remoting::Messaging::IMessageSink __get_ReplySink() const;

 System::Runtime::Remoting::Messaging::IMessage __declspec(property(get=__get_MsgRequest, put=__set_MsgRequest))  MsgRequest;

constexpr void __set_MsgRequest(System::Runtime::Remoting::Messaging::IMessage value) ;

constexpr System::Runtime::Remoting::Messaging::IMessage __get_MsgRequest() const;


// Methods

// Ctor Parameters [CppParam { name: "msgRequest", ty: "System::Runtime::Remoting::Messaging::IMessage", modifiers: "", def_value: None }, CppParam { name: "replySink", ty: "System::Runtime::Remoting::Messaging::IMessageSink", modifiers: "", def_value: None }]
explicit AsyncRequest(System::Runtime::Remoting::Messaging::IMessage msgRequest, System::Runtime::Remoting::Messaging::IMessageSink replySink) ;

/// @brief Method .ctor addr 0x2337ac4 size 0x2c virtual false final false
 void _ctor(System::Runtime::Remoting::Messaging::IMessage msgRequest, System::Runtime::Remoting::Messaging::IMessageSink replySink) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Channels
NEED_NO_BOX(System::Runtime::Remoting::Channels::AsyncRequest);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::AsyncRequest, "System.Runtime.Remoting.Channels", "AsyncRequest");
