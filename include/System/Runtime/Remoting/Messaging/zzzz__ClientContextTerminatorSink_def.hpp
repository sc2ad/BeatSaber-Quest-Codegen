#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ClientContextTerminatorSink;
}
// Type: System.Runtime.Remoting.Messaging::ClientContextTerminatorSink
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3154))
// CS Name: System.Runtime.Remoting.Messaging.ClientContextTerminatorSink
class CORDL_TYPE ClientContextTerminatorSink : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMessageSink
constexpr operator  System::Runtime::Remoting::Messaging::IMessageSink() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ClientContextTerminatorSink() = default;

// Ctor Parameters [CppParam { name: "", ty: "ClientContextTerminatorSink", modifiers: " const&", def_value: None }]
constexpr ClientContextTerminatorSink(ClientContextTerminatorSink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ClientContextTerminatorSink", modifiers: "&&", def_value: None }]
constexpr ClientContextTerminatorSink(ClientContextTerminatorSink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ClientContextTerminatorSink(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ClientContextTerminatorSink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ClientContextTerminatorSink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ClientContextTerminatorSink& operator=(ClientContextTerminatorSink&& o) noexcept = default;
  constexpr ClientContextTerminatorSink& operator=(ClientContextTerminatorSink const& o) noexcept = default;
                


// Fields

 System::Runtime::Remoting::Contexts::Context __declspec(property(get=__get__context, put=__set__context))  _context;

constexpr void __set__context(System::Runtime::Remoting::Contexts::Context value) ;

constexpr System::Runtime::Remoting::Contexts::Context __get__context() const;


// Methods

static System::Runtime::Remoting::Messaging::ClientContextTerminatorSink New_ctor(System::Runtime::Remoting::Contexts::Context ctx) ;

/// @brief Method .ctor addr 0x2331d64 size 0x28 virtual false final false
 void _ctor(System::Runtime::Remoting::Contexts::Context ctx) ;

/// @brief Method SyncProcessMessage addr 0x233e8e0 size 0x1d8 virtual true final true
 System::Runtime::Remoting::Messaging::IMessage SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg) ;

/// @brief Method AsyncProcessMessage addr 0x233eab8 size 0x228 virtual true final true
 System::Runtime::Remoting::Messaging::IMessageCtrl AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg, System::Runtime::Remoting::Messaging::IMessageSink replySink) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::ClientContextTerminatorSink);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ClientContextTerminatorSink, "System.Runtime.Remoting.Messaging", "ClientContextTerminatorSink");
