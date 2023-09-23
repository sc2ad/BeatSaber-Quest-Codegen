#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Contexts {
class Context;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class CrossContextChannel;
}
namespace System::Runtime::Remoting::Contexts {
class System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink;
}
// Type: ::ContextRestoreSink
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3098))
// CS Name: System.Runtime.Remoting.Contexts.CrossContextChannel::ContextRestoreSink
class CORDL_TYPE System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMessageSink
constexpr operator  System::Runtime::Remoting::Messaging::IMessageSink() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink", modifiers: " const&", def_value: None }]
constexpr System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink(System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink", modifiers: "&&", def_value: None }]
constexpr System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink(System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink& operator=(System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink&& o) noexcept = default;
  constexpr System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink& operator=(System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink const& o) noexcept = default;
                


// Fields

 System::Runtime::Remoting::Messaging::IMessageSink __declspec(property(get=__get__next, put=__set__next))  _next;

constexpr void __set__next(System::Runtime::Remoting::Messaging::IMessageSink value) ;

constexpr System::Runtime::Remoting::Messaging::IMessageSink __get__next() const;

 System::Runtime::Remoting::Contexts::Context __declspec(property(get=__get__context, put=__set__context))  _context;

constexpr void __set__context(System::Runtime::Remoting::Contexts::Context value) ;

constexpr System::Runtime::Remoting::Contexts::Context __get__context() const;

 System::Runtime::Remoting::Messaging::IMessage __declspec(property(get=__get__call, put=__set__call))  _call;

constexpr void __set__call(System::Runtime::Remoting::Messaging::IMessage value) ;

constexpr System::Runtime::Remoting::Messaging::IMessage __get__call() const;


// Methods

// Ctor Parameters [CppParam { name: "next", ty: "System::Runtime::Remoting::Messaging::IMessageSink", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Remoting::Contexts::Context", modifiers: "", def_value: None }, CppParam { name: "call", ty: "System::Runtime::Remoting::Messaging::IMessage", modifiers: "", def_value: None }]
explicit System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink(System::Runtime::Remoting::Messaging::IMessageSink next, System::Runtime::Remoting::Contexts::Context context, System::Runtime::Remoting::Messaging::IMessage call) ;

/// @brief Method .ctor addr 0x2333500 size 0x3c virtual false final false
 void _ctor(System::Runtime::Remoting::Messaging::IMessageSink next, System::Runtime::Remoting::Contexts::Context context, System::Runtime::Remoting::Messaging::IMessage call) ;

/// @brief Method SyncProcessMessage addr 0x2333544 size 0x2c0 virtual true final true
 System::Runtime::Remoting::Messaging::IMessage SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg) ;

/// @brief Method AsyncProcessMessage addr 0x2333804 size 0x40 virtual true final true
 System::Runtime::Remoting::Messaging::IMessageCtrl AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg, System::Runtime::Remoting::Messaging::IMessageSink replySink) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Contexts
// Type: System.Runtime.Remoting.Contexts::CrossContextChannel
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3099))
// CS Name: System.Runtime.Remoting.Contexts.CrossContextChannel
class CORDL_TYPE CrossContextChannel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ContextRestoreSink = System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink;

/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMessageSink
constexpr operator  System::Runtime::Remoting::Messaging::IMessageSink() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CrossContextChannel() = default;

// Ctor Parameters [CppParam { name: "", ty: "CrossContextChannel", modifiers: " const&", def_value: None }]
constexpr CrossContextChannel(CrossContextChannel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CrossContextChannel", modifiers: "&&", def_value: None }]
constexpr CrossContextChannel(CrossContextChannel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CrossContextChannel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CrossContextChannel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CrossContextChannel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CrossContextChannel& operator=(CrossContextChannel&& o) noexcept = default;
  constexpr CrossContextChannel& operator=(CrossContextChannel const& o) noexcept = default;
                


// Methods

/// @brief Method SyncProcessMessage addr 0x2332cc8 size 0x3ec virtual true final true
 System::Runtime::Remoting::Messaging::IMessage SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg) ;

/// @brief Method AsyncProcessMessage addr 0x23330b4 size 0x44c virtual true final true
 System::Runtime::Remoting::Messaging::IMessageCtrl AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg, System::Runtime::Remoting::Messaging::IMessageSink replySink) ;

// Ctor Parameters []
explicit CrossContextChannel() ;

/// @brief Method .ctor addr 0x233353c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Contexts
NEED_NO_BOX(System::Runtime::Remoting::Contexts::CrossContextChannel);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::CrossContextChannel, "System.Runtime.Remoting.Contexts", "CrossContextChannel");
NEED_NO_BOX(System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::System__Runtime__Remoting__Contexts__CrossContextChannel__ContextRestoreSink, "System.Runtime.Remoting.Contexts", "CrossContextChannel/ContextRestoreSink");
