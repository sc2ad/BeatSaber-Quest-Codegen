#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Runtime::Remoting {
class ServerIdentity;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ServerObjectReplySink;
}
// Type: System.Runtime.Remoting.Messaging::ServerObjectReplySink
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3185))
// CS Name: System.Runtime.Remoting.Messaging.ServerObjectReplySink
class CORDL_TYPE ServerObjectReplySink : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMessageSink
constexpr operator  ::System::Runtime::Remoting::Messaging::IMessageSink() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ServerObjectReplySink() = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerObjectReplySink", modifiers: " const&", def_value: None }]
constexpr ServerObjectReplySink(ServerObjectReplySink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerObjectReplySink", modifiers: "&&", def_value: None }]
constexpr ServerObjectReplySink(ServerObjectReplySink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ServerObjectReplySink(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ServerObjectReplySink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ServerObjectReplySink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ServerObjectReplySink& operator=(ServerObjectReplySink&& o) noexcept = default;
  constexpr ServerObjectReplySink& operator=(ServerObjectReplySink const& o) noexcept = default;
                


// Fields

 ::System::Runtime::Remoting::Messaging::IMessageSink __declspec(property(get=__get__replySink, put=__set__replySink))  _replySink;

constexpr void __set__replySink(::System::Runtime::Remoting::Messaging::IMessageSink value) ;

constexpr ::System::Runtime::Remoting::Messaging::IMessageSink __get__replySink() const;

 ::System::Runtime::Remoting::ServerIdentity __declspec(property(get=__get__identity, put=__set__identity))  _identity;

constexpr void __set__identity(::System::Runtime::Remoting::ServerIdentity value) ;

constexpr ::System::Runtime::Remoting::ServerIdentity __get__identity() const;


// Methods

// Ctor Parameters [CppParam { name: "identity", ty: "::System::Runtime::Remoting::ServerIdentity", modifiers: "", def_value: None }, CppParam { name: "replySink", ty: "::System::Runtime::Remoting::Messaging::IMessageSink", modifiers: "", def_value: None }]
explicit ServerObjectReplySink(::System::Runtime::Remoting::ServerIdentity identity, ::System::Runtime::Remoting::Messaging::IMessageSink replySink) ;

/// @brief Method .ctor addr 0x23476b8 size 0x2c virtual false final false
 void _ctor(::System::Runtime::Remoting::ServerIdentity identity, ::System::Runtime::Remoting::Messaging::IMessageSink replySink) ;

/// @brief Method SyncProcessMessage addr 0x23476e4 size 0xc8 virtual true final true
 ::System::Runtime::Remoting::Messaging::IMessage SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage msg) ;

/// @brief Method AsyncProcessMessage addr 0x23477ac size 0x40 virtual true final true
 ::System::Runtime::Remoting::Messaging::IMessageCtrl AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage msg, ::System::Runtime::Remoting::Messaging::IMessageSink replySink) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ServerObjectReplySink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ServerObjectReplySink, "System.Runtime.Remoting.Messaging", "ServerObjectReplySink");
