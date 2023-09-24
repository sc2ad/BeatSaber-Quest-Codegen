#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting {
class ObjRef;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Contexts {
class DynamicPropertyCollection;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class Identity;
}
// Type: System.Runtime.Remoting::Identity
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3056))
// CS Name: System.Runtime.Remoting.Identity
class CORDL_TYPE Identity : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~Identity() = default;

// Ctor Parameters [CppParam { name: "", ty: "Identity", modifiers: " const&", def_value: None }]
constexpr Identity(Identity const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Identity", modifiers: "&&", def_value: None }]
constexpr Identity(Identity&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Identity(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Identity& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Identity& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Identity& operator=(Identity&& o) noexcept = default;
  constexpr Identity& operator=(Identity const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__objectUri, put=__set__objectUri))  _objectUri;

constexpr void __set__objectUri(::StringW value) ;

constexpr ::StringW __get__objectUri() const;

 System::Runtime::Remoting::Messaging::IMessageSink __declspec(property(get=__get__channelSink, put=__set__channelSink))  _channelSink;

constexpr void __set__channelSink(System::Runtime::Remoting::Messaging::IMessageSink value) ;

constexpr System::Runtime::Remoting::Messaging::IMessageSink __get__channelSink() const;

 System::Runtime::Remoting::Messaging::IMessageSink __declspec(property(get=__get__envoySink, put=__set__envoySink))  _envoySink;

constexpr void __set__envoySink(System::Runtime::Remoting::Messaging::IMessageSink value) ;

constexpr System::Runtime::Remoting::Messaging::IMessageSink __get__envoySink() const;

 System::Runtime::Remoting::Contexts::DynamicPropertyCollection __declspec(property(get=__get__clientDynamicProperties, put=__set__clientDynamicProperties))  _clientDynamicProperties;

constexpr void __set__clientDynamicProperties(System::Runtime::Remoting::Contexts::DynamicPropertyCollection value) ;

constexpr System::Runtime::Remoting::Contexts::DynamicPropertyCollection __get__clientDynamicProperties() const;

 System::Runtime::Remoting::Contexts::DynamicPropertyCollection __declspec(property(get=__get__serverDynamicProperties, put=__set__serverDynamicProperties))  _serverDynamicProperties;

constexpr void __set__serverDynamicProperties(System::Runtime::Remoting::Contexts::DynamicPropertyCollection value) ;

constexpr System::Runtime::Remoting::Contexts::DynamicPropertyCollection __get__serverDynamicProperties() const;

 System::Runtime::Remoting::ObjRef __declspec(property(get=__get__objRef, put=__set__objRef))  _objRef;

constexpr void __set__objRef(System::Runtime::Remoting::ObjRef value) ;

constexpr System::Runtime::Remoting::ObjRef __get__objRef() const;

 bool __declspec(property(get=__get__disposed, put=__set__disposed))  _disposed;

constexpr void __set__disposed(bool value) ;

constexpr bool __get__disposed() const;


// Properties

 System::Runtime::Remoting::Messaging::IMessageSink __declspec(property(get=get_ChannelSink, put=set_ChannelSink))  ChannelSink;

 System::Runtime::Remoting::Messaging::IMessageSink __declspec(property(get=get_EnvoySink))  EnvoySink;

 ::StringW __declspec(property(get=get_ObjectUri, put=set_ObjectUri))  ObjectUri;

 bool __declspec(property(get=get_IsConnected))  IsConnected;

 bool __declspec(property(get=get_Disposed, put=set_Disposed))  Disposed;

 System::Runtime::Remoting::Contexts::DynamicPropertyCollection __declspec(property(get=get_ClientDynamicProperties))  ClientDynamicProperties;

 bool __declspec(property(get=get_HasServerDynamicSinks))  HasServerDynamicSinks;


// Methods

static System::Runtime::Remoting::Identity New_ctor(::StringW objectUri) ;

/// @brief Method .ctor addr 0x2319e2c size 0x28 virtual false final false
 void _ctor(::StringW objectUri) ;

/// @brief Method CreateObjRef addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Runtime::Remoting::ObjRef CreateObjRef(System::Type requestedType) ;

/// @brief Method get_ChannelSink addr 0x2319e54 size 0x8 virtual false final false
 System::Runtime::Remoting::Messaging::IMessageSink get_ChannelSink() ;

/// @brief Method set_ChannelSink addr 0x2319e5c size 0x8 virtual false final false
 void set_ChannelSink(System::Runtime::Remoting::Messaging::IMessageSink value) ;

/// @brief Method get_EnvoySink addr 0x2319e64 size 0x8 virtual false final false
 System::Runtime::Remoting::Messaging::IMessageSink get_EnvoySink() ;

/// @brief Method get_ObjectUri addr 0x2319e6c size 0x8 virtual false final false
 ::StringW get_ObjectUri() ;

/// @brief Method set_ObjectUri addr 0x2319e74 size 0x8 virtual false final false
 void set_ObjectUri(::StringW value) ;

/// @brief Method get_IsConnected addr 0x2319e7c size 0x10 virtual false final false
 bool get_IsConnected() ;

/// @brief Method get_Disposed addr 0x2319e8c size 0x8 virtual false final false
 bool get_Disposed() ;

/// @brief Method set_Disposed addr 0x2319e94 size 0xc virtual false final false
 void set_Disposed(bool value) ;

/// @brief Method get_ClientDynamicProperties addr 0x2319ea0 size 0x6c virtual false final false
 System::Runtime::Remoting::Contexts::DynamicPropertyCollection get_ClientDynamicProperties() ;

/// @brief Method get_HasServerDynamicSinks addr 0x2319f0c size 0x14 virtual false final false
 bool get_HasServerDynamicSinks() ;

/// @brief Method NotifyClientDynamicSinks addr 0x2319f20 size 0x74 virtual false final false
 void NotifyClientDynamicSinks(bool start, System::Runtime::Remoting::Messaging::IMessage req_msg, bool client_site, bool async) ;

/// @brief Method NotifyServerDynamicSinks addr 0x2319f94 size 0x74 virtual false final false
 void NotifyServerDynamicSinks(bool start, System::Runtime::Remoting::Messaging::IMessage req_msg, bool client_site, bool async) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
NEED_NO_BOX(System::Runtime::Remoting::Identity);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Identity, "System.Runtime.Remoting", "Identity");
