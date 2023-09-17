#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ClientContextReplySink;
}
// Type: System.Runtime.Remoting.Messaging::ClientContextReplySink
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3155))
// CS Name: System.Runtime.Remoting.Messaging.ClientContextReplySink
class CORDL_TYPE ClientContextReplySink : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMessageSink
constexpr operator  ::System::Runtime::Remoting::Messaging::IMessageSink() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ClientContextReplySink() = default;

// Ctor Parameters [CppParam { name: "", ty: "ClientContextReplySink", modifiers: " const&", def_value: None }]
constexpr ClientContextReplySink(ClientContextReplySink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ClientContextReplySink", modifiers: "&&", def_value: None }]
constexpr ClientContextReplySink(ClientContextReplySink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ClientContextReplySink(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ClientContextReplySink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ClientContextReplySink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ClientContextReplySink& operator=(ClientContextReplySink&& o) noexcept = default;
  constexpr ClientContextReplySink& operator=(ClientContextReplySink const& o) noexcept = default;
                


// Fields

 ::System::Runtime::Remoting::Messaging::IMessageSink __declspec(property(get=__get__replySink, put=__set__replySink))  _replySink;

constexpr void __set__replySink(::System::Runtime::Remoting::Messaging::IMessageSink value) ;

constexpr ::System::Runtime::Remoting::Messaging::IMessageSink __get__replySink() const;

 ::System::Runtime::Remoting::Contexts::Context __declspec(property(get=__get__context, put=__set__context))  _context;

constexpr void __set__context(::System::Runtime::Remoting::Contexts::Context value) ;

constexpr ::System::Runtime::Remoting::Contexts::Context __get__context() const;


// Methods

// Ctor Parameters [CppParam { name: "ctx", ty: "::System::Runtime::Remoting::Contexts::Context", modifiers: "", def_value: None }, CppParam { name: "replySink", ty: "::System::Runtime::Remoting::Messaging::IMessageSink", modifiers: "", def_value: None }]
explicit ClientContextReplySink(::System::Runtime::Remoting::Contexts::Context ctx, ::System::Runtime::Remoting::Messaging::IMessageSink replySink) ;

/// @brief Method .ctor addr 0x233ece0 size 0x2c virtual false final false
 void _ctor(::System::Runtime::Remoting::Contexts::Context ctx, ::System::Runtime::Remoting::Messaging::IMessageSink replySink) ;

/// @brief Method SyncProcessMessage addr 0x233ed0c size 0x104 virtual true final true
 ::System::Runtime::Remoting::Messaging::IMessage SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage msg) ;

/// @brief Method AsyncProcessMessage addr 0x233ee10 size 0x40 virtual true final true
 ::System::Runtime::Remoting::Messaging::IMessageCtrl AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage msg, ::System::Runtime::Remoting::Messaging::IMessageSink replySink) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ClientContextReplySink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ClientContextReplySink, "System.Runtime.Remoting.Messaging", "ClientContextReplySink");
