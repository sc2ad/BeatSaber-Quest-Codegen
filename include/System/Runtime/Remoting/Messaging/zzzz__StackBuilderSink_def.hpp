#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Proxies {
class RealProxy;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System {
class MarshalByRefObject;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class StackBuilderSink;
}
// Type: System.Runtime.Remoting.Messaging::StackBuilderSink
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3186))
// CS Name: System.Runtime.Remoting.Messaging.StackBuilderSink
class CORDL_TYPE StackBuilderSink : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Remoting::Messaging::IMessageSink
constexpr operator  ::System::Runtime::Remoting::Messaging::IMessageSink() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~StackBuilderSink() = default;

// Ctor Parameters [CppParam { name: "", ty: "StackBuilderSink", modifiers: " const&", def_value: None }]
constexpr StackBuilderSink(StackBuilderSink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StackBuilderSink", modifiers: "&&", def_value: None }]
constexpr StackBuilderSink(StackBuilderSink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StackBuilderSink(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StackBuilderSink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StackBuilderSink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StackBuilderSink& operator=(StackBuilderSink&& o) noexcept = default;
  constexpr StackBuilderSink& operator=(StackBuilderSink const& o) noexcept = default;
                


// Fields

 ::System::MarshalByRefObject __declspec(property(get=__get__target, put=__set__target))  _target;

constexpr void __set__target(::System::MarshalByRefObject value) ;

constexpr ::System::MarshalByRefObject __get__target() const;

 ::System::Runtime::Remoting::Proxies::RealProxy __declspec(property(get=__get__rp, put=__set__rp))  _rp;

constexpr void __set__rp(::System::Runtime::Remoting::Proxies::RealProxy value) ;

constexpr ::System::Runtime::Remoting::Proxies::RealProxy __get__rp() const;


// Methods

// Ctor Parameters [CppParam { name: "obj", ty: "::System::MarshalByRefObject", modifiers: "", def_value: None }, CppParam { name: "forceInternalExecute", ty: "bool", modifiers: "", def_value: None }]
explicit StackBuilderSink(::System::MarshalByRefObject obj, bool forceInternalExecute) ;

/// @brief Method .ctor addr 0x23477ec size 0xa4 virtual false final false
 void _ctor(::System::MarshalByRefObject obj, bool forceInternalExecute) ;

/// @brief Method SyncProcessMessage addr 0x2347890 size 0xcc virtual true final true
 ::System::Runtime::Remoting::Messaging::IMessage SyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage msg) ;

/// @brief Method AsyncProcessMessage addr 0x2347dac size 0x120 virtual true final true
 ::System::Runtime::Remoting::Messaging::IMessageCtrl AsyncProcessMessage(::System::Runtime::Remoting::Messaging::IMessage msg, ::System::Runtime::Remoting::Messaging::IMessageSink replySink) ;

/// @brief Method ExecuteAsyncMessage addr 0x2347ecc size 0x200 virtual false final false
 void ExecuteAsyncMessage(::bs_hook::Il2CppWrapperType ob) ;

/// @brief Method CheckParameters addr 0x234795c size 0x450 virtual false final false
 void CheckParameters(::System::Runtime::Remoting::Messaging::IMessage msg) ;

/// @brief Method <AsyncProcessMessage>b__4_0 addr 0x23480cc size 0x80 virtual false final false
 void _AsyncProcessMessage_b__4_0(::bs_hook::Il2CppWrapperType data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::StackBuilderSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::StackBuilderSink, "System.Runtime.Remoting.Messaging", "StackBuilderSink");
